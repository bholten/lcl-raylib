#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <lcl-math.h>
#include <lcl-raylib.h>
#include <lcl.h>

#include "raylib-lib-data.h"

static const lcl_embedded_lib raylib_lib = {
    "lib/raylib/src/Raylib.lcl", lib_raylib_src_Raylib_lcl,
    sizeof(lib_raylib_src_Raylib_lcl)};

static void usage(const char *prog) {
  fprintf(stderr, "usage: %s <script.lcl> [args...]\n       %s -c <code>\n",
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

int main(int argc, char **argv) {
  lcl_interp *interp;
  lcl_value *result = NULL;
  int rc;

  if (argc < 2) {
    usage(argv[0]);
    return 2;
  }

  interp = lcl_interp_new();

  if (!interp) {
    fprintf(stderr, "failed to create interpreter\n");
    return 1;
  }

  lcl_register_core(interp);
  lcl_register_math(interp);
  lcl_register_raylib(interp);

  if (lcl_register_embedded_lib(interp, &raylib_lib) != 0) {
    lcl_interp_free(interp);
    return 1;
  }

  if (strcmp(argv[1], "-c") == 0) {
    if (argc < 3) {
      usage(argv[0]);
      lcl_interp_free(interp);
      return 2;
    }

    define_argv(interp, argc, argv, 3);
    rc = lcl_eval_string(interp, argv[2], &result);
  } else {
    define_argv(interp, argc, argv, 2);
    rc = lcl_eval_file(interp, argv[1], &result);
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

  lcl_interp_free(interp);

  return rc == LCL_RC_OK ? 0 : 1;
}
