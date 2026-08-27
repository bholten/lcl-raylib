#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <lcl-math.h>
#include <lcl-raylib.h>
#include <lcl-time.h>
#include <lcl.h>

#include "raylib-lib-data.h"

static const lcl_embedded_lib raylib_lib = {
    "lib/raylib/src/Raylib.lcl", lib_raylib_src_Raylib_lcl,
    sizeof(lib_raylib_src_Raylib_lcl)};

static void usage(const char *prog) {
  fprintf(stderr,
          "usage: %s [--profile] <script.lcl> [args...]\n"
          "       %s [--profile] -c <code>\n"
          "\n"
          "  --profile   print a per-proc time::profile table and the\n"
          "              Interp::stats counters to stderr at exit\n"
          "  LCL_TRACE=1 (or a comma-separated list of proc names) traces\n"
          "              user-proc entry/exit to stderr\n",
          prog, prog);
}

static void define_argv(lcl_interp *interp, int argc, char **argv, int from) {
  lcl_value *list = lcl_list_new();
  int i;

  if (!list) {
    return;
  }

  for (i = from; i < argc; i++) {
    lcl_value *s = lcl_string_new(argv[i]);

    if (s) {
      lcl_list_push(&list, s);
      lcl_ref_dec(s);
    }
  }

  lcl_define_take(interp, "argv", list);
}

static const char *trace_filter;
static int trace_depth;

static int trace_wants(const char *name) {
  const char *p = trace_filter;
  size_t n = strlen(name);

  if (!p || strcmp(p, "1") == 0 || strcmp(p, "*") == 0) {
    return 1;
  }

  while (*p) {
    const char *end = strchr(p, ',');
    size_t seg = end ? (size_t)(end - p) : strlen(p);

    if (seg == n && strncmp(p, name, n) == 0) {
      return 1;
    }

    if (!end) {
      break;
    }

    p = end + 1;
  }

  return 0;
}

static void trace_hook(lcl_interp *interp, lcl_value *proc, const char *name,
                       int argc, lcl_value **argv, int entering,
                       void *userdata) {
  int i;
  (void)interp;
  (void)proc;
  (void)userdata;

  if (!trace_wants(name)) {
    return;
  }

  if (entering) {
    fprintf(stderr, "%*s> %s", trace_depth * 2, "", name);

    for (i = 0; i < argc; i++) {
      const char *a = lcl_value_to_string(argv[i]);

      if (a && strlen(a) > 60) {
        fprintf(stderr, " %.57s...", a);
      } else {
        fprintf(stderr, " %s", a ? a : "?");
      }
    }

    fputc('\n', stderr);
    trace_depth++;
  } else {
    if (trace_depth > 0) {
      trace_depth--;
    }

    fprintf(stderr, "%*s< %s\n", trace_depth * 2, "", name);
  }
}

static void install_trace(lcl_interp *interp) {
  trace_filter = getenv("LCL_TRACE");

  if (trace_filter && trace_filter[0] != '\0' &&
      strcmp(trace_filter, "0") != 0) {
    lcl_set_call_hook(interp, trace_hook, NULL);
  }
}

static int profile_start(lcl_interp *interp) {
  lcl_value *r = NULL;
  int rc = lcl_eval_string(interp, "time::profile_start!", &r);

  if (r) {
    lcl_ref_dec(r);
  }

  if (rc != LCL_RC_OK) {
    const char *msg = lcl_interp_error_msg(interp);
    fprintf(stderr, "--profile: %s\n", msg ? msg : "could not start profiler");
  }

  return rc;
}

static void profile_report(lcl_interp *interp) {
  lcl_value *r = NULL;
  lcl_stats st;
  int rc = lcl_eval_string(
      interp, "time::profile_format [time::profile_stop!]", &r);

  if (rc == LCL_RC_OK && r) {
    const char *table = NULL;
    lcl_value_to_cstring(interp, r, &table);
    fprintf(stderr, "\n%s\n", table ? table : "");
  } else {
    const char *msg = lcl_interp_error_msg(interp);
    fprintf(stderr, "\n--profile: %s\n", msg ? msg : "no profile");
  }

  if (r) {
    lcl_ref_dec(r);
  }

  lcl_get_stats(&st);
  fprintf(stderr,
          "values live: %lu (allocated %lu, freed %lu)  "
          "list clones: %lu  dict clones: %lu\n",
          st.values_allocated - st.values_freed, st.values_allocated,
          st.values_freed, st.list_clones, st.dict_clones);
}

int main(int argc, char **argv) {
  lcl_interp *interp;
  lcl_value *result = NULL;
  int profile = 0;
  int first = 1;
  int rc;

  if (argc > first && strcmp(argv[first], "--profile") == 0) {
    profile = 1;
    first++;
  }

  if (argc <= first) {
    usage(argv[0]);
    return 2;
  }

  interp = lcl_interp_new();

  if (!interp) {
    fprintf(stderr, "failed to create interpreter\n");
    return 1;
  }

  lcl_register_core(interp);
  install_trace(interp);
  lcl_register_math(interp);
  lcl_register_time(interp);
  lcl_register_raylib(interp);

  if (lcl_register_embedded_lib(interp, &raylib_lib) != 0) {
    lcl_interp_free(interp);
    return 1;
  }

  if (profile && profile_start(interp) != LCL_RC_OK) {
    lcl_interp_free(interp);
    return 1;
  }

  if (strcmp(argv[first], "-c") == 0) {
    if (argc < first + 2) {
      usage(argv[0]);
      lcl_interp_free(interp);
      return 2;
    }

    define_argv(interp, argc, argv, first + 2);
    rc = lcl_eval_string(interp, argv[first + 1], &result);
  } else {
    define_argv(interp, argc, argv, first + 1);
    rc = lcl_eval_file(interp, argv[first], &result);
  }

  if (rc != LCL_RC_OK) {
    const char *file = lcl_interp_error_file(interp);
    const char *msg = lcl_interp_error_msg(interp);
    fprintf(stderr, "Error at %s:%d", file ? file : "<unknown>",
            lcl_interp_error_line(interp));

    if (msg) {
      fprintf(stderr, ": %s", msg);
    }

    fprintf(stderr, "\n");
  }

  if (result) {
    lcl_ref_dec(result);
  }

  if (profile) {
    profile_report(interp);
  }

  lcl_interp_free(interp);

  return rc == LCL_RC_OK ? 0 : 1;
}
