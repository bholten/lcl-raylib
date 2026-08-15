#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <lcl.h>
#include <raylib.h>

#include "lcl-raylib-internal.h"
#include "lcl-raylib.h"

#define RAYLIB_NS "raylib"

/* Ints accept Lcl ints and (truncated) floats so `draw_text ... [* 2.5 $x]`
 * just works without an explicit `int` conversion. */
int rl_get_int(lcl_interp *interp, lcl_value *v, long *out) {
  double f;
  (void)interp;

  if (lcl_value_to_int(v, out) == LCL_OK) {
    return LCL_RC_OK;
  }

  if (lcl_value_to_float(v, &f) == LCL_OK) {
    *out = (long)f;
    return LCL_RC_OK;
  }

  return LCL_RC_ERR;
}

int rl_get_float(lcl_interp *interp, lcl_value *v, double *out) {
  long i;
  (void)interp;

  if (lcl_value_to_float(v, out) == LCL_OK) {
    return LCL_RC_OK;
  }

  if (lcl_value_to_int(v, &i) == LCL_OK) {
    *out = (double)i;
    return LCL_RC_OK;
  }

  return LCL_RC_ERR;
}

int rl_get_string(lcl_interp *interp, lcl_value *v, const char **out) {
  if (lcl_value_to_cstring(interp, v, out) != LCL_OK) {
    return LCL_RC_ERR;
  }

  return LCL_RC_OK;
}

/* lcl_set_error() borrows its message (it must outlive the call), so the
 * formatted message lives in a static buffer. Errors are consumed by the
 * interpreter immediately, and Lcl interpreters are single-threaded, so a
 * single process-wide buffer is sufficient. */
static char rl_err_buf[256];

int rl_arg_error(lcl_interp *interp, const char *fn, int idx,
                 const char *pname, const char *expected) {
  snprintf(rl_err_buf, sizeof(rl_err_buf),
           "%s: argument %d (%s): expected %s", fn, idx, pname, expected);
  lcl_set_error(interp, rl_err_buf);

  return LCL_RC_ERR;
}

int rl_arity_error(lcl_interp *interp, const char *fn, int expected,
                   int got) {
  snprintf(rl_err_buf, sizeof(rl_err_buf),
           "%s: expected %d argument%s, got %d", fn, expected,
           expected == 1 ? "" : "s", got);
  lcl_set_error(interp, rl_err_buf);

  return LCL_RC_ERR;
}

/* Parse exactly `n` whitespace-separated numbers out of `s`. Used so flat
 * structs also accept a plain string: "10 20" -> Vector2. */
int rl_parse_numbers(const char *s, double *out, int n) {
  int i;
  char *end;

  for (i = 0; i < n; i++) {
    while (*s == ' ' || *s == '\t' || *s == '\n' || *s == '\r') {
      s++;
    }

    if (!*s) {
      return LCL_RC_ERR;
    }

    out[i] = strtod(s, &end);

    if (end == s) {
      return LCL_RC_ERR;
    }

    s = end;
  }

  while (*s == ' ' || *s == '\t' || *s == '\n' || *s == '\r') {
    s++;
  }

  return *s ? LCL_RC_ERR : LCL_RC_OK;
}

/* Build an Lcl list of strings from a C string array. */
static lcl_value *rl_string_list(char **items, size_t count) {
  lcl_value *lst = lcl_list_new();
  size_t i;

  if (!lst) {
    return NULL;
  }

  for (i = 0; i < count; i++) {
    lcl_value *s = lcl_string_new(items[i]);

    if (!s) {
      lcl_ref_dec(lst);
      return NULL;
    }

    lcl_list_push(&lst, s);
    lcl_ref_dec(s);
  }

  return lst;
}

/* raylib::load_file_text path -> string (LoadFileText + UnloadFileText) */
static int c_load_file_text(lcl_interp *interp, int argc, lcl_value **argv,
                            lcl_value **out) {
  const char *path;
  char *text;

  if (argc != 1) {
    return rl_arity_error(interp, "raylib::load_file_text", 1, argc);
  }

  if (rl_get_string(interp, argv[0], &path) != LCL_RC_OK) {
    return rl_arg_error(interp, "raylib::load_file_text", 1, "fileName",
                        "string");
  }

  text = LoadFileText(path);

  if (!text) {
    lcl_set_error(interp, "raylib::load_file_text: could not read file");
    return LCL_RC_ERR;
  }

  *out = lcl_string_new(text);
  UnloadFileText(text);

  return *out ? LCL_RC_OK : LCL_RC_ERR;
}

/* raylib::file_path_list_paths list -> {path ...} */
static int c_file_path_list_paths(lcl_interp *interp, int argc,
                                  lcl_value **argv, lcl_value **out) {
  FilePathList *fpl;

  if (argc != 1) {
    return rl_arity_error(interp, "raylib::file_path_list_paths", 1, argc);
  }

  if (rl_ptr_FilePathList(interp, argv[0], &fpl) != LCL_RC_OK) {
    return rl_arg_error(interp, "raylib::file_path_list_paths", 1,
                        "files", "FilePathList");
  }

  *out = rl_string_list(fpl->paths, fpl->count);

  return *out ? LCL_RC_OK : LCL_RC_ERR;
}

/* raylib::text_split text delimiter -> {part ...} */
static int c_text_split(lcl_interp *interp, int argc, lcl_value **argv,
                        lcl_value **out) {
  const char *text;
  const char *delim;
  char **parts;
  int count = 0;

  if (argc != 2) {
    return rl_arity_error(interp, "raylib::text_split", 2, argc);
  }

  if (rl_get_string(interp, argv[0], &text) != LCL_RC_OK) {
    return rl_arg_error(interp, "raylib::text_split", 1, "text", "string");
  }

  if (rl_get_string(interp, argv[1], &delim) != LCL_RC_OK ||
      strlen(delim) != 1) {
    return rl_arg_error(interp, "raylib::text_split", 2, "delimiter",
                        "single character string");
  }

  parts = TextSplit(text, delim[0], &count);
  *out = rl_string_list(parts, (size_t)count);

  return *out ? LCL_RC_OK : LCL_RC_ERR;
}

/* raylib::text_join {str ...} delimiter -> string */
static int c_text_join(lcl_interp *interp, int argc, lcl_value **argv,
                       lcl_value **out) {
  const char *delim;
  size_t n;
  size_t i;
  char **items;
  const char *joined;
  int rc = LCL_RC_ERR;

  if (argc != 2) {
    return rl_arity_error(interp, "raylib::text_join", 2, argc);
  }

  if (lcl_value_type_of(argv[0]) != LCL_LIST) {
    return rl_arg_error(interp, "raylib::text_join", 1, "textList",
                        "list of string");
  }

  if (rl_get_string(interp, argv[1], &delim) != LCL_RC_OK) {
    return rl_arg_error(interp, "raylib::text_join", 2, "delimiter",
                        "string");
  }

  n = lcl_list_len(argv[0]);
  items = (char **)calloc(n > 0 ? n : 1, sizeof(*items));

  if (!items) {
    return LCL_RC_ERR;
  }

  for (i = 0; i < n; i++) {
    lcl_value *item;
    const char *s;

    if (lcl_list_get(argv[0], i, &item) != LCL_OK) {
      goto done;
    }

    /* string storage is owned by the list, which outlives this call */
    if (rl_get_string(interp, item, &s) != LCL_RC_OK) {
      lcl_ref_dec(item);
      rl_arg_error(interp, "raylib::text_join", 1, "textList",
                   "list of string");
      goto done;
    }

    lcl_ref_dec(item);
    items[i] = (char *)s;
  }

  joined = TextJoin(items, (int)n, delim);
  *out = lcl_string_new(joined ? joined : "");
  rc = *out ? LCL_RC_OK : LCL_RC_ERR;
  
done:
  free(items);
  return rc;
}

/* Text helpers returning raylib-internal static buffers: copy into a
 * fresh Lcl string. */
#define RL_TEXT1(cname, rayfn, lclname)                                        \
  static int cname(lcl_interp *interp, int argc, lcl_value **argv,             \
                   lcl_value **out) {                                          \
    const char *text;                                                          \
    const char *r;                                                             \
    if (argc != 1)                                                             \
      return rl_arity_error(interp, "raylib::" lclname, 1, argc);              \
    if (rl_get_string(interp, argv[0], &text) != LCL_RC_OK)                    \
      return rl_arg_error(interp, "raylib::" lclname, 1, "text", "string");    \
    r = rayfn(text);                                                           \
    *out = lcl_string_new(r ? r : "");                                         \
    return *out ? LCL_RC_OK : LCL_RC_ERR;                                      \
  }

RL_TEXT1(c_text_to_upper, TextToUpper, "text_to_upper")
RL_TEXT1(c_text_to_lower, TextToLower, "text_to_lower")
RL_TEXT1(c_text_to_pascal, TextToPascal, "text_to_pascal")
RL_TEXT1(c_text_to_snake, TextToSnake, "text_to_snake")
RL_TEXT1(c_text_to_camel, TextToCamel, "text_to_camel")

/* raylib::get_codepoint text -> {codepoint byteLength} */
static int c_get_codepoint(lcl_interp *interp, int argc, lcl_value **argv,
                           lcl_value **out) {
  const char *text;
  int size = 0;
  int cp;
  lcl_value *lst;
  lcl_value *v;

  if (argc != 1) {
    return rl_arity_error(interp, "raylib::get_codepoint", 1, argc);
  }

  if (rl_get_string(interp, argv[0], &text) != LCL_RC_OK) {
    return rl_arg_error(interp, "raylib::get_codepoint", 1, "text",
                        "string");
  }

  cp = GetCodepoint(text, &size);
  lst = lcl_list_new();

  if (!lst) {
    return LCL_RC_ERR;
  }

  v = lcl_int_new((long)cp);
  lcl_list_push(&lst, v);
  lcl_ref_dec(v);
  v = lcl_int_new((long)size);
  lcl_list_push(&lst, v);
  lcl_ref_dec(v);
  *out = lst;

  return LCL_RC_OK;
}

/* raylib::load_codepoints text -> {int ...} */
static int c_load_codepoints(lcl_interp *interp, int argc, lcl_value **argv,
                             lcl_value **out) {
  const char *text;
  int count = 0;
  int *cps;
  int i;
  lcl_value *lst;

  if (argc != 1) {
    return rl_arity_error(interp, "raylib::load_codepoints", 1, argc);
  }

  if (rl_get_string(interp, argv[0], &text) != LCL_RC_OK) {
    return rl_arg_error(interp, "raylib::load_codepoints", 1, "text",
                        "string");
  }

  cps = LoadCodepoints(text, &count);
  lst = lcl_list_new();

  if (!lst) {
    UnloadCodepoints(cps);
    return LCL_RC_ERR;
  }

  for (i = 0; i < count; i++) {
    lcl_value *v = lcl_int_new((long)cps[i]);
    lcl_list_push(&lst, v);
    lcl_ref_dec(v);
  }

  UnloadCodepoints(cps);
  *out = lst;
  return LCL_RC_OK;
}

/* raylib::load_utf8 {codepoint ...} -> string */
static int c_load_utf8(lcl_interp *interp, int argc, lcl_value **argv,
                       lcl_value **out) {
  size_t n;
  size_t i;
  int *cps;
  char *text;

  if (argc != 1) {
    return rl_arity_error(interp, "raylib::load_utf8", 1, argc);
  }

  if (lcl_value_type_of(argv[0]) != LCL_LIST) {
    return rl_arg_error(interp, "raylib::load_utf8", 1, "codepoints",
                        "list of int");
  }

  n = lcl_list_len(argv[0]);
  cps = (int *)calloc(n > 0 ? n : 1, sizeof(*cps));

  if (!cps) {
    return LCL_RC_ERR;
  }

  for (i = 0; i < n; i++) {
    lcl_value *item;
    long x;

    if (lcl_list_get(argv[0], i, &item) != LCL_OK) {
      free(cps);
      return LCL_RC_ERR;
    }

    if (rl_get_int(interp, item, &x) != LCL_RC_OK) {
      lcl_ref_dec(item);
      free(cps);
      return rl_arg_error(interp, "raylib::load_utf8", 1, "codepoints",
                          "list of int");
    }

    lcl_ref_dec(item);
    cps[i] = (int)x;
  }

  text = LoadUTF8(cps, (int)n);
  free(cps);
  *out = lcl_string_new(text ? text : "");
  UnloadUTF8(text);

  return *out ? LCL_RC_OK : LCL_RC_ERR;
}

/* raylib::trace_log level text */
static int c_trace_log(lcl_interp *interp, int argc, lcl_value **argv,
                       lcl_value **out) {
  long level;
  const char *text;
  (void)out;

  if (argc != 2) {
    return rl_arity_error(interp, "raylib::trace_log", 2, argc);
  }

  if (rl_get_int(interp, argv[0], &level) != LCL_RC_OK) {
    return rl_arg_error(interp, "raylib::trace_log", 1, "logLevel", "int");
  }

  if (rl_get_string(interp, argv[1], &text) != LCL_RC_OK) {
    return rl_arg_error(interp, "raylib::trace_log", 2, "text", "string");
  }

  TraceLog((int)level, "%s", text);

  return LCL_RC_OK;
}

/* raylib::load_image_colors image -> {Color ...} */
static int c_load_image_colors(lcl_interp *interp, int argc,
                               lcl_value **argv, lcl_value **out) {
  Image img;
  Color *colors;
  int n;
  int i;
  lcl_value *lst;

  if (argc != 1) {
    return rl_arity_error(interp, "raylib::load_image_colors", 1, argc);
  }

  if (rl_get_Image(interp, argv[0], &img) != LCL_RC_OK) {
    return rl_arg_error(interp, "raylib::load_image_colors", 1, "image",
                        "Image");
  }

  colors = LoadImageColors(img);
  n = img.width * img.height;
  lst = lcl_list_new();

  if (!lst) {
    UnloadImageColors(colors);
    return LCL_RC_ERR;
  }

  for (i = 0; colors && i < n; i++) {
    lcl_value *c = rl_new_Color(colors[i]);

    if (!c) {
      lcl_ref_dec(lst);
      UnloadImageColors(colors);
      return LCL_RC_ERR;
    }

    lcl_list_push(&lst, c);
    lcl_ref_dec(c);
  }

  UnloadImageColors(colors);
  *out = lst;

  return LCL_RC_OK;
}

/* raylib::load_image_palette image maxSize -> {Color ...} */
static int c_load_image_palette(lcl_interp *interp, int argc,
                                lcl_value **argv, lcl_value **out) {
  Image img;
  long max_size;
  Color *colors;
  int n = 0;
  int i;
  lcl_value *lst;

  if (argc != 2) {
    return rl_arity_error(interp, "raylib::load_image_palette", 2, argc);
  }

  if (rl_get_Image(interp, argv[0], &img) != LCL_RC_OK) {
    return rl_arg_error(interp, "raylib::load_image_palette", 1, "image",
                        "Image");
  }

  if (rl_get_int(interp, argv[1], &max_size) != LCL_RC_OK) {
    return rl_arg_error(interp, "raylib::load_image_palette", 2,
                        "maxPaletteSize", "int");
  }

  colors = LoadImagePalette(img, (int)max_size, &n);
  lst = lcl_list_new();

  if (!lst) {
    UnloadImagePalette(colors);
    return LCL_RC_ERR;
  }

  for (i = 0; colors && i < n; i++) {
    lcl_value *c = rl_new_Color(colors[i]);

    if (!c) {
      lcl_ref_dec(lst);
      UnloadImagePalette(colors);
      return LCL_RC_ERR;
    }

    lcl_list_push(&lst, c);
    lcl_ref_dec(c);
  }

  UnloadImagePalette(colors);
  *out = lst;

  return LCL_RC_OK;
}

/* raylib::load_random_sequence count min max -> {int ...} */
static int c_load_random_sequence(lcl_interp *interp, int argc,
                                  lcl_value **argv, lcl_value **out) {
  long count;
  long min;
  long max;
  int *seq;
  long i;
  lcl_value *lst;

  if (argc != 3) {
    return rl_arity_error(interp, "raylib::load_random_sequence", 3, argc);
  }

  if (rl_get_int(interp, argv[0], &count) != LCL_RC_OK) {
    return rl_arg_error(interp, "raylib::load_random_sequence", 1, "count",
                        "int");
  }

  if (rl_get_int(interp, argv[1], &min) != LCL_RC_OK) {
    return rl_arg_error(interp, "raylib::load_random_sequence", 2, "min",
                        "int");
  }

  if (rl_get_int(interp, argv[2], &max) != LCL_RC_OK) {
    return rl_arg_error(interp, "raylib::load_random_sequence", 3, "max",
                        "int");
  }

  seq = LoadRandomSequence((unsigned int)count, (int)min, (int)max);
  lst = lcl_list_new();

  if (!lst) {
    UnloadRandomSequence(seq);
    return LCL_RC_ERR;
  }

  for (i = 0; seq && i < count; i++) {
    lcl_value *v = lcl_int_new((long)seq[i]);
    lcl_list_push(&lst, v);
    lcl_ref_dec(v);
  }

  UnloadRandomSequence(seq);
  *out = lst;

  return LCL_RC_OK;
}

/* raylib::set_shader_value shader loc value uniformType
 *
 * `value` is a number for FLOAT/INT/SAMPLER2D uniforms and a list of numbers
 * for VEC2/3/4 and IVEC2/3/4. */
static int c_set_shader_value(lcl_interp *interp, int argc, lcl_value **argv,
                              lcl_value **out) {
  Shader shader;
  long loc;
  long type;
  float fv[4];
  int iv[4];
  int n = 0;
  int is_int = 0;
  int i;
  (void)out;

  if (argc != 4) {
    return rl_arity_error(interp, "raylib::set_shader_value", 4, argc);
  }

  if (rl_get_Shader(interp, argv[0], &shader) != LCL_RC_OK) {
    return rl_arg_error(interp, "raylib::set_shader_value", 1, "shader",
                        "Shader");
  }

  if (rl_get_int(interp, argv[1], &loc) != LCL_RC_OK) {
    return rl_arg_error(interp, "raylib::set_shader_value", 2, "locIndex",
                        "int");
  }

  if (rl_get_int(interp, argv[3], &type) != LCL_RC_OK) {
    return rl_arg_error(interp, "raylib::set_shader_value", 4,
                        "uniformType", "int");
  }

  switch (type) {
  case SHADER_UNIFORM_FLOAT: n = 1; break;
  case SHADER_UNIFORM_VEC2: n = 2; break;
  case SHADER_UNIFORM_VEC3: n = 3; break;
  case SHADER_UNIFORM_VEC4: n = 4; break;
  case SHADER_UNIFORM_INT: n = 1; is_int = 1; break;
  case SHADER_UNIFORM_IVEC2: n = 2; is_int = 1; break;
  case SHADER_UNIFORM_IVEC3: n = 3; is_int = 1; break;
  case SHADER_UNIFORM_IVEC4: n = 4; is_int = 1; break;
  case SHADER_UNIFORM_SAMPLER2D: n = 1; is_int = 1; break;
  default:
    return rl_arg_error(interp, "raylib::set_shader_value", 4,
                        "uniformType", "SHADER_UNIFORM_* constant");
  }

  for (i = 0; i < n; i++) {
    lcl_value *item;
    int rc;

    if (n == 1 && lcl_value_type_of(argv[2]) != LCL_LIST) {
      item = lcl_ref_inc(argv[2]);
    } else if (lcl_value_type_of(argv[2]) != LCL_LIST ||
               lcl_list_len(argv[2]) != (size_t)n ||
               lcl_list_get(argv[2], (size_t)i, &item) != LCL_OK) {
      return rl_arg_error(interp, "raylib::set_shader_value", 3, "value",
                          "list of numbers matching uniformType");
    }

    if (is_int) {
      long x;
      rc = rl_get_int(interp, item, &x);
      iv[i] = (int)x;
    } else {
      double x;
      rc = rl_get_float(interp, item, &x);
      fv[i] = (float)x;
    }

    lcl_ref_dec(item);

    if (rc != LCL_RC_OK) {
      return rl_arg_error(interp, "raylib::set_shader_value", 3, "value",
                          "number or list of numbers");
    }
  }

  SetShaderValue(shader, (int)loc, is_int ? (const void *)iv : (const void *)fv,
                 (int)type);

  return LCL_RC_OK;
}

/* raylib::opaque_type value -> "raylib::Vector2" etc, "" if not opaque */
static int c_opaque_type(lcl_interp *interp, int argc, lcl_value **argv,
                         lcl_value **out) {
  const char *t;

  if (argc != 1) {
    return rl_arity_error(interp, "raylib::opaque_type", 1, argc);
  }

  t = lcl_opaque_type(argv[0]);
  *out = lcl_string_new(t ? t : "");

  return *out ? LCL_RC_OK : LCL_RC_ERR;
}

#define RL_DEF(ns, name, fn) \
  lcl_ns_def((ns), name, lcl_c_proc_new("raylib::" name, fn))

void lcl_register_raylib(lcl_interp *interp) {
  lcl_value *ns = lcl_ns_new(RAYLIB_NS);

  if (!ns) {
    return;
  }

  lcl_raylib_register_generated(interp, ns);

  RL_DEF(ns, "load_file_text", c_load_file_text);
  RL_DEF(ns, "file_path_list_paths", c_file_path_list_paths);
  RL_DEF(ns, "text_split", c_text_split);
  RL_DEF(ns, "text_join", c_text_join);
  RL_DEF(ns, "text_to_upper", c_text_to_upper);
  RL_DEF(ns, "text_to_lower", c_text_to_lower);
  RL_DEF(ns, "text_to_pascal", c_text_to_pascal);
  RL_DEF(ns, "text_to_snake", c_text_to_snake);
  RL_DEF(ns, "text_to_camel", c_text_to_camel);
  RL_DEF(ns, "get_codepoint", c_get_codepoint);
  RL_DEF(ns, "load_codepoints", c_load_codepoints);
  RL_DEF(ns, "load_utf8", c_load_utf8);
  RL_DEF(ns, "trace_log", c_trace_log);
  RL_DEF(ns, "load_image_colors", c_load_image_colors);
  RL_DEF(ns, "load_image_palette", c_load_image_palette);
  RL_DEF(ns, "load_random_sequence", c_load_random_sequence);
  RL_DEF(ns, "set_shader_value", c_set_shader_value);
  RL_DEF(ns, "opaque_type", c_opaque_type);

  lcl_define_take(interp, RAYLIB_NS, ns);
}
