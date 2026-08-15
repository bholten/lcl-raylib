#!/usr/bin/env python3
import json
import re
import sys

INT_TYPES = {"int", "unsigned int", "long", "unsigned long", "char",
             "unsigned char", "short", "unsigned short", "bool"}
FLOAT_TYPES = {"float", "double"}


def snake(name):
    """CamelCase raylib identifier -> snake_case."""
    s = name
    # 2D/3D suffixes/infixes: BeginMode2D -> begin_mode_2d, Camera3D -> camera_3d
    s = re.sub(r"([a-z])([23])D(?![a-z])", r"\1_\2d", s)
    # boundary: lower/digit followed by Upper: DrawText -> Draw_Text, Vector2Add -> Vector2_Add
    s = re.sub(r"([a-z0-9])([A-Z])", r"\1_\2", s)
    # boundary: Upper run followed by Upper+lower: HSVColor -> HSV_Color, NPatch -> N_Patch
    s = re.sub(r"([A-Z]+)([A-Z][a-z])", r"\1_\2", s)
    return s.lower()


SNAKE_OVERRIDES = {
    "NPatchInfo": "npatch_info",
    "DrawTextureNPatch": "draw_texture_npatch",
}


def lcl_name(name):
    return SNAKE_OVERRIDES.get(name, snake(name))


class Gen:
    def __init__(self, api):
        self.api = api
        self.aliases = {}
        
        for a in api["aliases"]:
            if a["name"].startswith("*"):
                continue  # ModelAnimPose = Transform*, unsupported
            self.aliases[a["name"]] = a["type"]
        
        self.structs = {s["name"]: s for s in api["structs"]}
        self.callbacks = {c["name"] for c in api.get("callbacks", [])}
        self.out = []
        self.skipped = []
        self.registrations = []  # (lcl_name, c_fn)
        self.constants = []      # (lcl_name, c_expr)

    def canon(self, t):
        """Resolve typedef aliases (Texture2D -> Texture)."""
        t = t.strip()
        while t in self.aliases:
            t = self.aliases[t]
        return t

    def is_struct(self, t):
        return self.canon(t) in self.structs

    def is_constructible(self, sname, _seen=None):
        """All fields scalar or (constructible) struct -> can build from list."""
        _seen = _seen or set()
        if sname in _seen:
            return False
        _seen.add(sname)
        ok = True
        for f in self.structs[sname]["fields"]:
            ft = self.canon(f["type"])
            if ft in INT_TYPES or ft in FLOAT_TYPES:
                continue
            if ft in self.structs and self.is_constructible(ft, _seen):
                continue
            ok = False
            break
        _seen.discard(sname)
        return ok

    def w(self, s=""):
        self.out.append(s)

    def emit_prelude(self):
        self.w("/* GENERATED FILE - DO NOT EDIT.")
        self.w(" * Produced by tools/gen_bindings.py from tools/raylib_api.json")
        self.w(" * (raylib %s). Hand-written bindings live in src/lcl-raylib.c." % self.version())
        self.w(" */")
        self.w("#include <stdio.h>")
        self.w("#include <stdlib.h>")
        self.w("#include <string.h>")
        self.w("#include <lcl.h>")
        self.w("#include <raylib.h>")
        self.w('#include "lcl-raylib-internal.h"')
        self.w()
        self.w("#define RL_ARG_ERR(interp, fn, idx, pname, expected) \\")
        self.w("  rl_arg_error((interp), (fn), (idx), (pname), (expected))")
        self.w()

    def version(self):
        v = {d["name"]: d["value"] for d in self.api["defines"]}
        return v.get("RAYLIB_VERSION", "?")

    def emit_struct_support(self):
        for sname, s in self.structs.items():
            tag = 'RL_TAG_%s' % sname
            self.w("/* ---- %s ---- */" % sname)
            self.w("lcl_value *rl_new_%s(%s v) {" % (sname, sname))
            self.w("  %s *p = (%s *)malloc(sizeof(*p));" % (sname, sname))
            self.w("  if (!p) return NULL;")
            self.w("  *p = v;")
            self.w("  return lcl_opaque_new(p, %s, free);" % tag)
            self.w("}")
            self.w()
            # pointer accessor
            self.w("int rl_ptr_%s(lcl_interp *interp, lcl_value *v, %s **out) {" % (sname, sname))
            self.w("  (void)interp;")
            self.w("  if (lcl_opaque_get(v, %s, (void **)out) != LCL_OK) return LCL_RC_ERR;" % tag)
            self.w("  return LCL_RC_OK;")
            self.w("}")
            self.w()
            # by-value coercion
            self.w("int rl_get_%s(lcl_interp *interp, lcl_value *v, %s *out) {" % (sname, sname))
            self.w("  %s *p;" % sname)
            self.w("  (void)interp;")
            self.w("  if (lcl_opaque_get(v, %s, (void **)&p) == LCL_OK) {" % tag)
            self.w("    *out = *p;")
            self.w("    return LCL_RC_OK;")
            self.w("  }")

            if self.is_constructible(sname):
                fields = s["fields"]
                self.w("  if (lcl_value_type_of(v) == LCL_LIST && lcl_list_len(v) == %d) {" % len(fields))
                self.w("    lcl_value *item;")
                self.w("    %s tmp;" % sname)
                self.w("    memset(&tmp, 0, sizeof(tmp));")
                for i, f in enumerate(fields):
                    ft = self.canon(f["type"])
                    self.w("    if (lcl_list_get(v, %d, &item) != LCL_OK) return LCL_RC_ERR;" % i)
                    if ft in INT_TYPES:
                        self.w("    { long x; if (rl_get_int(interp, item, &x) != LCL_RC_OK) { lcl_ref_dec(item); return LCL_RC_ERR; } tmp.%s = (%s)x; }" % (f["name"], ft))
                    elif ft in FLOAT_TYPES:
                        self.w("    { double x; if (rl_get_float(interp, item, &x) != LCL_RC_OK) { lcl_ref_dec(item); return LCL_RC_ERR; } tmp.%s = (%s)x; }" % (f["name"], ft))
                    else:
                        self.w("    if (rl_get_%s(interp, item, &tmp.%s) != LCL_RC_OK) { lcl_ref_dec(item); return LCL_RC_ERR; }" % (ft, f["name"]))
                    self.w("    lcl_ref_dec(item);")
                self.w("    *out = tmp;")
                self.w("    return LCL_RC_OK;")
                self.w("  }")

                if all(self.canon(f["type"]) in INT_TYPES or self.canon(f["type"]) in FLOAT_TYPES for f in fields):
                    # flat struct: also accept a string of numbers, e.g. "10 20"
                    self.w("  if (lcl_value_type_of(v) == LCL_STRING) {")
                    self.w("    const char *s;")
                    self.w("    double nums[%d];" % len(fields))
                    self.w("    %s tmp;" % sname)
                    self.w("    if (lcl_value_to_cstring(interp, v, &s) != LCL_OK) return LCL_RC_ERR;")
                    self.w("    if (rl_parse_numbers(s, nums, %d) != LCL_RC_OK) return LCL_RC_ERR;" % len(fields))
                    for i, f in enumerate(fields):
                        self.w("    tmp.%s = (%s)nums[%d];" % (f["name"], self.canon(f["type"]), i))
                    self.w("    *out = tmp;")
                    self.w("    return LCL_RC_OK;")
                    self.w("  }")
            self.w("  return LCL_RC_ERR;")
            self.w("}")
            self.w()

    def emit_struct_procs(self):
        for sname, s in self.structs.items():
            sn = lcl_name(sname)
            fields = s["fields"]

            if self.is_constructible(sname):
                cfn = "rl_ctor_%s" % sname
                self.w("static int %s(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {" % cfn)
                self.w("  %s v;" % sname)
                self.w("  memset(&v, 0, sizeof(v));")
                self.w("  if (argc != %d) return rl_arity_error(interp, \"raylib::%s\", %d, argc);" % (len(fields), sn, len(fields)))

                for i, f in enumerate(fields):
                    ft = self.canon(f["type"])

                    if ft in INT_TYPES:
                        self.w("  { long x; if (rl_get_int(interp, argv[%d], &x) != LCL_RC_OK) return RL_ARG_ERR(interp, \"raylib::%s\", %d, \"%s\", \"int\"); v.%s = (%s)x; }" % (i, sn, i + 1, f["name"], f["name"], ft))
                    elif ft in FLOAT_TYPES:
                        self.w("  { double x; if (rl_get_float(interp, argv[%d], &x) != LCL_RC_OK) return RL_ARG_ERR(interp, \"raylib::%s\", %d, \"%s\", \"float\"); v.%s = (%s)x; }" % (i, sn, i + 1, f["name"], f["name"], ft))
                    else:
                        self.w("  if (rl_get_%s(interp, argv[%d], &v.%s) != LCL_RC_OK) return RL_ARG_ERR(interp, \"raylib::%s\", %d, \"%s\", \"%s\");" % (ft, i, f["name"], sn, i + 1, f["name"], ft))
                self.w("  *out = rl_new_%s(v);" % sname)
                self.w("  return *out ? LCL_RC_OK : LCL_RC_ERR;")
                self.w("}")
                self.w()
                self.registrations.append((sn, cfn))

            for f in fields:
                ftype = f["type"]
                fname = f["name"]
                ft = self.canon(ftype)
                arr = re.match(r"^(\w[\w ]*?)\[(\d+)\]$", ftype)
                getter = "%s_%s" % (sn, snake(fname))
                setter = "%s_set_%s" % (sn, snake(fname))
                gfn = "rl_get_%s_%s" % (sname, fname)
                sfn = "rl_set_%s_%s" % (sname, fname)

                if ft in INT_TYPES or ft in FLOAT_TYPES or ft in self.structs:
                    # getter
                    # getters coerce (rl_get_) so `vector2_x (1 2)` works too;
                    # setters need real storage (rl_ptr_).
                    self.w("static int %s(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {" % gfn)
                    self.w("  %s s;" % sname)
                    self.w("  if (argc != 1) return rl_arity_error(interp, \"raylib::%s\", 1, argc);" % getter)
                    self.w("  if (rl_get_%s(interp, argv[0], &s) != LCL_RC_OK) return RL_ARG_ERR(interp, \"raylib::%s\", 1, \"%s\", \"%s\");" % (sname, getter, sn, sname))
                    if ft in INT_TYPES:
                        self.w("  *out = lcl_int_new((long)s.%s);" % fname)
                    elif ft in FLOAT_TYPES:
                        self.w("  *out = lcl_float_new((double)s.%s);" % fname)
                    else:
                        self.w("  *out = rl_new_%s(s.%s);" % (ft, fname))
                    self.w("  return *out ? LCL_RC_OK : LCL_RC_ERR;")
                    self.w("}")
                    self.w()
                    self.registrations.append((getter, gfn))
                    # setter
                    self.w("static int %s(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {" % sfn)
                    self.w("  %s *p;" % sname)
                    self.w("  (void)out;")
                    self.w("  if (argc != 2) return rl_arity_error(interp, \"raylib::%s\", 2, argc);" % setter)
                    self.w("  if (rl_ptr_%s(interp, argv[0], &p) != LCL_RC_OK) return RL_ARG_ERR(interp, \"raylib::%s\", 1, \"%s\", \"%s\");" % (sname, setter, sn, sname))

                    if ft in INT_TYPES:
                        self.w("  { long x; if (rl_get_int(interp, argv[1], &x) != LCL_RC_OK) return RL_ARG_ERR(interp, \"raylib::%s\", 2, \"%s\", \"int\"); p->%s = (%s)x; }" % (setter, fname, fname, ft))
                    elif ft in FLOAT_TYPES:
                        self.w("  { double x; if (rl_get_float(interp, argv[1], &x) != LCL_RC_OK) return RL_ARG_ERR(interp, \"raylib::%s\", 2, \"%s\", \"float\"); p->%s = (%s)x; }" % (setter, fname, fname, ft))
                    else:
                        self.w("  if (rl_get_%s(interp, argv[1], &p->%s) != LCL_RC_OK) return RL_ARG_ERR(interp, \"raylib::%s\", 2, \"%s\", \"%s\");" % (ft, fname, setter, fname, ft))
                    self.w("  return LCL_RC_OK;")
                    self.w("}")
                    self.w()
                    self.registrations.append((setter, sfn))
                elif arr:
                    et, n = arr.group(1).strip(), int(arr.group(2))
                    et = self.canon(et)

                    if et == "char":
                        # fixed string
                        self.w("static int %s(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {" % gfn)
                        self.w("  %s *p;" % sname)
                        self.w("  char buf[%d];" % (n + 1))
                        self.w("  if (argc != 1) return rl_arity_error(interp, \"raylib::%s\", 1, argc);" % getter)
                        self.w("  if (rl_ptr_%s(interp, argv[0], &p) != LCL_RC_OK) return RL_ARG_ERR(interp, \"raylib::%s\", 1, \"%s\", \"%s\");" % (sname, getter, sn, sname))
                        self.w("  memcpy(buf, p->%s, %d);" % (fname, n))
                        self.w("  buf[%d] = '\\0';" % n)
                        self.w("  *out = lcl_string_new(buf);")
                        self.w("  return *out ? LCL_RC_OK : LCL_RC_ERR;")
                        self.w("}")
                        self.w()
                        self.registrations.append((getter, gfn))
                    elif et in INT_TYPES or et in FLOAT_TYPES:
                        newf = "lcl_int_new((long)" if et in INT_TYPES else "lcl_float_new((double)"
                        self.w("static int %s(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {" % gfn)
                        self.w("  %s *p;" % sname)
                        self.w("  lcl_value *lst;")
                        self.w("  int i;")
                        self.w("  if (argc != 1) return rl_arity_error(interp, \"raylib::%s\", 1, argc);" % getter)
                        self.w("  if (rl_ptr_%s(interp, argv[0], &p) != LCL_RC_OK) return RL_ARG_ERR(interp, \"raylib::%s\", 1, \"%s\", \"%s\");" % (sname, getter, sn, sname))
                        self.w("  lst = lcl_list_new();")
                        self.w("  if (!lst) return LCL_RC_ERR;")
                        self.w("  for (i = 0; i < %d; i++) {" % n)
                        self.w("    lcl_value *item = %sp->%s[i]);" % (newf, fname))
                        self.w("    if (!item) { lcl_ref_dec(lst); return LCL_RC_ERR; }")
                        self.w("    lcl_list_push(&lst, item);")
                        self.w("    lcl_ref_dec(item);")
                        self.w("  }")
                        self.w("  *out = lst;")
                        self.w("  return LCL_RC_OK;")
                        self.w("}")
                        self.w()
                        self.registrations.append((getter, gfn))
                        # setter from list
                        getx = "rl_get_int" if et in INT_TYPES else "rl_get_float"
                        ctype = "long" if et in INT_TYPES else "double"
                        self.w("static int %s(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {" % sfn)
                        self.w("  %s *p;" % sname)
                        self.w("  int i;")
                        self.w("  (void)out;")
                        self.w("  if (argc != 2) return rl_arity_error(interp, \"raylib::%s\", 2, argc);" % setter)
                        self.w("  if (rl_ptr_%s(interp, argv[0], &p) != LCL_RC_OK) return RL_ARG_ERR(interp, \"raylib::%s\", 1, \"%s\", \"%s\");" % (sname, setter, sn, sname))
                        self.w("  if (lcl_value_type_of(argv[1]) != LCL_LIST || lcl_list_len(argv[1]) != %d) return RL_ARG_ERR(interp, \"raylib::%s\", 2, \"%s\", \"list of %d %s\");" % (n, setter, fname, n, et))
                        self.w("  for (i = 0; i < %d; i++) {" % n)
                        self.w("    lcl_value *item; %s x;" % ctype)
                        self.w("    if (lcl_list_get(argv[1], (size_t)i, &item) != LCL_OK) return LCL_RC_ERR;")
                        self.w("    if (%s(interp, item, &x) != LCL_RC_OK) { lcl_ref_dec(item); return RL_ARG_ERR(interp, \"raylib::%s\", 2, \"%s\", \"list of %d %s\"); }" % (getx, setter, fname, n, et))
                        self.w("    lcl_ref_dec(item);")
                        self.w("    p->%s[i] = (%s)x;" % (fname, et))
                        self.w("  }")
                        self.w("  return LCL_RC_OK;")
                        self.w("}")
                        self.w()
                        self.registrations.append((setter, sfn))
                # pointer fields etc: no accessor

    def classify_params(self, fn):
        """Return list of param plans or None (unsupported)."""
        params = fn.get("params", [])
        plans = []
        i = 0

        while i < len(params):
            p = params[i]
            t = p["type"].strip()
            name = p["name"]
            ct = self.canon(t)
            nxt = params[i + 1] if i + 1 < len(params) else None
            is_count = (nxt is not None and self.canon(nxt["type"]) == "int"
                        and re.search(r"count|instances|numpoints", nxt["name"], re.I))

            if t == "...":
                return None, "varargs"

            if ct in INT_TYPES:
                plans.append(("int", ct, name))
            elif ct in FLOAT_TYPES:
                plans.append(("float", ct, name))
            elif t == "const char *":
                plans.append(("string", t, name))
            elif ct in self.structs:
                plans.append(("struct", ct, name))
            elif re.match(r"^(const )?[\w ]+\*$", t) and is_count:
                # array + count pair
                base = self.canon(re.sub(r"^const ", "", t)[:-1].strip())
                if base in self.structs:
                    plans.append(("array", base, name, "struct", nxt["name"]))
                elif base in INT_TYPES:
                    plans.append(("array", base, name, "int", nxt["name"]))
                elif base in FLOAT_TYPES:
                    plans.append(("array", base, name, "float", nxt["name"]))
                elif base in ("char *", "const char *"):
                    plans.append(("array", "const char *", name, "string", nxt["name"]))
                else:
                    return None, "array of %s" % t
                i += 2
                continue
            elif re.match(r"^[\w ]+\*$", t) and self.canon(t[:-1].strip()) in self.structs and not t.startswith("const"):
                plans.append(("ptr", self.canon(t[:-1].strip()), name))
            elif t in self.callbacks:
                return None, "callback %s" % t
            else:
                return None, "param %s %s" % (t, name)
            i += 1
        return plans, None

    def classify_return(self, fn):
        rt = fn["returnType"].strip()
        ct = self.canon(rt)

        if rt == "void":
            return ("void",)

        if ct in INT_TYPES:
            return ("int", ct)

        if ct in FLOAT_TYPES:
            return ("float", ct)

        if rt == "const char *":
            return ("string",)

        if ct in self.structs:
            return ("struct", ct)

        return None

    def emit_functions(self):
        for fn in self.api["functions"]:
            name = fn["name"]
            ln = lcl_name(name)
            plans, why = self.classify_params(fn)
            ret = self.classify_return(fn)

            if plans is None:
                self.skipped.append((name, why))
                continue

            if ret is None:
                self.skipped.append((name, "returns %s" % fn["returnType"]))
                continue
            cfn = "rl_fn_%s" % name
            qn = "raylib::%s" % ln
            self.w("/* %s: %s */" % (name, fn.get("description", "").replace("*/", "* /")))
            self.w("static int %s(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {" % cfn)

            for i, pl in enumerate(plans):
                kind = pl[0]
                if kind == "int":
                    self.w("  long a%d;" % i)
                elif kind == "float":
                    self.w("  double a%d;" % i)
                elif kind == "string":
                    self.w("  const char *a%d;" % i)
                elif kind == "struct":
                    self.w("  %s a%d;" % (pl[1], i))
                elif kind == "ptr":
                    self.w("  %s *a%d;" % (pl[1], i))
                elif kind == "array":
                    self.w("  %s *a%d = NULL;" % (pl[1], i))
                    self.w("  int n%d = 0;" % i)
            if ret[0] != "void":
                self.w("  %s r;" % (ret[1] if ret[0] in ("int", "float", "struct") else "const char *"))
            else:
                self.w("  (void)out;")

            if not plans:
                self.w("  (void)argv;")
            has_array = any(pl[0] == "array" for pl in plans)

            if has_array:
                self.w("  int rc = LCL_RC_ERR;")
            self.w("  if (argc != %d) return rl_arity_error(interp, \"%s\", %d, argc);" % (len(plans), qn, len(plans)))

            for i, pl in enumerate(plans):
                kind = pl[0]
                pname = pl[2]
                if kind == "int":
                    self.w("  if (rl_get_int(interp, argv[%d], &a%d) != LCL_RC_OK) return RL_ARG_ERR(interp, \"%s\", %d, \"%s\", \"int\");" % (i, i, qn, i + 1, pname))
                elif kind == "float":
                    self.w("  if (rl_get_float(interp, argv[%d], &a%d) != LCL_RC_OK) return RL_ARG_ERR(interp, \"%s\", %d, \"%s\", \"float\");" % (i, i, qn, i + 1, pname))
                elif kind == "string":
                    self.w("  if (rl_get_string(interp, argv[%d], &a%d) != LCL_RC_OK) return RL_ARG_ERR(interp, \"%s\", %d, \"%s\", \"string\");" % (i, i, qn, i + 1, pname))
                elif kind == "struct":
                    self.w("  if (rl_get_%s(interp, argv[%d], &a%d) != LCL_RC_OK) return RL_ARG_ERR(interp, \"%s\", %d, \"%s\", \"%s\");" % (pl[1], i, i, qn, i + 1, pname, pl[1]))
                elif kind == "ptr":
                    self.w("  if (rl_ptr_%s(interp, argv[%d], &a%d) != LCL_RC_OK) return RL_ARG_ERR(interp, \"%s\", %d, \"%s\", \"%s\");" % (pl[1], i, i, qn, i + 1, pname, pl[1]))
            # arrays: allocate after simple checks so early returns don't leak

            for i, pl in enumerate(plans):
                if pl[0] != "array":
                    continue
                base, elem_kind = pl[1], pl[3]
                self.w("  if (lcl_value_type_of(argv[%d]) != LCL_LIST) return RL_ARG_ERR(interp, \"%s\", %d, \"%s\", \"list of %s\");" % (i, qn, i + 1, pl[2], base))
                self.w("  n%d = (int)lcl_list_len(argv[%d]);" % (i, i))
                self.w("  a%d = (%s *)calloc(n%d > 0 ? (size_t)n%d : 1, sizeof(*a%d));" % (i, base, i, i, i))
                self.w("  if (!a%d) goto cleanup;" % i)
                self.w("  {")
                self.w("    int k;")
                self.w("    for (k = 0; k < n%d; k++) {" % i)
                self.w("      lcl_value *item;")
                self.w("      if (lcl_list_get(argv[%d], (size_t)k, &item) != LCL_OK) goto cleanup;" % i)

                if elem_kind == "struct":
                    self.w("      if (rl_get_%s(interp, item, &a%d[k]) != LCL_RC_OK) { lcl_ref_dec(item); RL_ARG_ERR(interp, \"%s\", %d, \"%s\", \"list of %s\"); goto cleanup; }" % (base, i, qn, i + 1, pl[2], base))
                elif elem_kind == "int":
                    self.w("      { long x; if (rl_get_int(interp, item, &x) != LCL_RC_OK) { lcl_ref_dec(item); RL_ARG_ERR(interp, \"%s\", %d, \"%s\", \"list of int\"); goto cleanup; } a%d[k] = (%s)x; }" % (qn, i + 1, pl[2], i, base))
                elif elem_kind == "float":
                    self.w("      { double x; if (rl_get_float(interp, item, &x) != LCL_RC_OK) { lcl_ref_dec(item); RL_ARG_ERR(interp, \"%s\", %d, \"%s\", \"list of float\"); goto cleanup; } a%d[k] = (%s)x; }" % (qn, i + 1, pl[2], i, base))
                elif elem_kind == "string":
                    # borrowed strings: keep the item alive by holding the
                    # list itself (argv) - list_get gives +1 which we drop,
                    # but the list still owns the value.
                    self.w("      if (rl_get_string(interp, item, &a%d[k]) != LCL_RC_OK) { lcl_ref_dec(item); RL_ARG_ERR(interp, \"%s\", %d, \"%s\", \"list of string\"); goto cleanup; }" % (i, qn, i + 1, pl[2]))
                self.w("      lcl_ref_dec(item);")
                self.w("    }")
                self.w("  }")
            # call
            args = []

            for i, pl in enumerate(plans):
                kind = pl[0]

                if kind == "int" or kind == "float":
                    args.append("(%s)a%d" % (pl[1], i))
                elif kind == "array":
                    args.append("a%d" % i)
                    args.append("n%d" % i)
                else:
                    args.append("a%d" % i)
            call = "%s(%s)" % (name, ", ".join(args))
            if ret[0] == "void":
                self.w("  %s;" % call)
            else:
                self.w("  r = %s;" % call)

            if ret[0] == "int":
                self.w("  *out = lcl_int_new((long)r);")
            elif ret[0] == "float":
                self.w("  *out = lcl_float_new((double)r);")
            elif ret[0] == "string":
                self.w("  *out = lcl_string_new(r ? r : \"\");")
            elif ret[0] == "struct":
                self.w("  *out = rl_new_%s(r);" % ret[1])

            if has_array:
                self.w("  rc = LCL_RC_OK;")
                self.w("cleanup:")

                for i, pl in enumerate(plans):
                    if pl[0] == "array":
                        self.w("  free(a%d);" % i)
                self.w("  return rc;")
            else:
                self.w("  return LCL_RC_OK;")
            self.w("}")
            self.w()
            self.registrations.append((ln, cfn))

    def emit_constants(self):
        for e in self.api["enums"]:
            for v in e["values"]:
                self.constants.append((v["name"], "lcl_int_new(%dL)" % v["value"], "int"))
        for d in self.api["defines"]:
            t = d["type"]
            n = d["name"]

            if t == "INT":
                self.constants.append((n, "lcl_int_new((long)(%s))" % n, "int"))
            elif t in ("FLOAT", "FLOAT_MATH"):
                self.constants.append((n, "lcl_float_new((double)(%s))" % n, "float"))
            elif t == "STRING":
                self.constants.append((n, "lcl_string_new(%s)" % n, "string"))
            elif t == "COLOR":
                self.constants.append((n, "rl_new_Color(%s)" % n, "color"))

    def emit_register(self):
        self.w("void lcl_raylib_register_generated(lcl_interp *interp, lcl_value *ns) {")
        self.w("  (void)interp;")

        for ln, cfn in self.registrations:
            self.w("  lcl_ns_def(ns, \"%s\", lcl_c_proc_new(\"raylib::%s\", %s));" % (ln, ln, cfn))
        for n, expr, _ in self.constants:
            self.w("  lcl_ns_def(ns, \"%s\", %s);" % (n, expr))

        self.w("}")
        self.w()
        self.w("/* Functions NOT bound by the generator (bind by hand if needed):")
        for n, why in self.skipped:
            self.w(" *   %-32s %s" % (n, why))
        self.w(" */")

    def run(self):
        self.emit_prelude()
        self.emit_struct_support()
        self.emit_struct_procs()
        self.emit_functions()
        self.emit_constants()
        self.emit_register()
        return "\n".join(self.out) + "\n"

    def internal_header(self):
        h = []
        h.append("/* GENERATED FILE - DO NOT EDIT. See tools/gen_bindings.py. */")
        h.append("#ifndef LCL_RAYLIB_INTERNAL_H")
        h.append("#define LCL_RAYLIB_INTERNAL_H")
        h.append("#include <lcl.h>")
        h.append("#include <raylib.h>")
        h.append("")
        h.append("/* Shared helpers implemented in lcl-raylib.c */")
        h.append("int rl_get_int(lcl_interp *interp, lcl_value *v, long *out);")
        h.append("int rl_get_float(lcl_interp *interp, lcl_value *v, double *out);")
        h.append("int rl_get_string(lcl_interp *interp, lcl_value *v, const char **out);")
        h.append("int rl_arg_error(lcl_interp *interp, const char *fn, int idx, const char *pname, const char *expected);")
        h.append("int rl_arity_error(lcl_interp *interp, const char *fn, int expected, int got);")
        h.append("int rl_parse_numbers(const char *s, double *out, int n);")
        h.append("void lcl_raylib_register_generated(lcl_interp *interp, lcl_value *ns);")
        h.append("")
        h.append("/* Opaque type tags and per-struct helpers (generated) */")
        for sname in self.structs:
            h.append("#define RL_TAG_%s \"raylib::%s\"" % (sname, sname))
        h.append("")
        for sname in self.structs:
            h.append("lcl_value *rl_new_%s(%s v);" % (sname, sname))
            h.append("int rl_get_%s(lcl_interp *interp, lcl_value *v, %s *out);" % (sname, sname))
            h.append("int rl_ptr_%s(lcl_interp *interp, lcl_value *v, %s **out);" % (sname, sname))
        h.append("")
        h.append("#endif")
        return "\n".join(h) + "\n"


def load_api(path):
    """rlparser emits descriptions with unescaped double quotes; repair them."""
    text = open(path).read()
    try:
        return json.loads(text)
    except json.JSONDecodeError:
        pass

    def fix(m):
        inner = m.group(2).replace("\\", "\\\\").replace('"', '\\"')
        return m.group(1) + inner + m.group(3)

    text = re.sub(r'("description": ")(.*)(",?\s*$)', fix, text, flags=re.M)
    return json.loads(text)


def main():
    src = sys.argv[1] if len(sys.argv) > 1 else "tools/raylib_api.json"
    dst = sys.argv[2] if len(sys.argv) > 2 else "src/lcl-raylib-gen.c"
    hdr = sys.argv[3] if len(sys.argv) > 3 else "src/lcl-raylib-internal.h"
    api = load_api(src)
    g = Gen(api)
    code = g.run()
    open(dst, "w").write(code)
    open(hdr, "w").write(g.internal_header())
    bound = len([r for r in g.registrations if r[1].startswith("rl_fn_")])
    print("functions bound: %d, skipped: %d, procs total: %d, constants: %d" %
          (bound, len(g.skipped), len(g.registrations), len(g.constants)))
    for n, why in g.skipped:
        print("  skip %-32s %s" % (n, why))


if __name__ == "__main__":
    main()
