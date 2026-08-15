/* GENERATED FILE - DO NOT EDIT.
 * Produced by tools/gen_bindings.py from tools/raylib_api.json
 * (raylib 6.0). Hand-written bindings live in src/lcl-raylib.c.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <lcl.h>
#include <raylib.h>
#include "lcl-raylib-internal.h"

#define RL_ARG_ERR(interp, fn, idx, pname, expected) \
  rl_arg_error((interp), (fn), (idx), (pname), (expected))

/* ---- Vector2 ---- */
lcl_value *rl_new_Vector2(Vector2 v) {
  Vector2 *p = (Vector2 *)malloc(sizeof(*p));
  if (!p) return NULL;
  *p = v;
  return lcl_opaque_new(p, RL_TAG_Vector2, free);
}

int rl_ptr_Vector2(lcl_interp *interp, lcl_value *v, Vector2 **out) {
  (void)interp;
  if (lcl_opaque_get(v, RL_TAG_Vector2, (void **)out) != LCL_OK) return LCL_RC_ERR;
  return LCL_RC_OK;
}

int rl_get_Vector2(lcl_interp *interp, lcl_value *v, Vector2 *out) {
  Vector2 *p;
  (void)interp;
  if (lcl_opaque_get(v, RL_TAG_Vector2, (void **)&p) == LCL_OK) {
    *out = *p;
    return LCL_RC_OK;
  }
  if (lcl_value_type_of(v) == LCL_LIST && lcl_list_len(v) == 2) {
    lcl_value *item;
    Vector2 tmp;
    memset(&tmp, 0, sizeof(tmp));
    if (lcl_list_get(v, 0, &item) != LCL_OK) return LCL_RC_ERR;
    { double x; if (rl_get_float(interp, item, &x) != LCL_RC_OK) { lcl_ref_dec(item); return LCL_RC_ERR; } tmp.x = (float)x; }
    lcl_ref_dec(item);
    if (lcl_list_get(v, 1, &item) != LCL_OK) return LCL_RC_ERR;
    { double x; if (rl_get_float(interp, item, &x) != LCL_RC_OK) { lcl_ref_dec(item); return LCL_RC_ERR; } tmp.y = (float)x; }
    lcl_ref_dec(item);
    *out = tmp;
    return LCL_RC_OK;
  }
  if (lcl_value_type_of(v) == LCL_STRING) {
    const char *s;
    double nums[2];
    Vector2 tmp;
    if (lcl_value_to_cstring(interp, v, &s) != LCL_OK) return LCL_RC_ERR;
    if (rl_parse_numbers(s, nums, 2) != LCL_RC_OK) return LCL_RC_ERR;
    tmp.x = (float)nums[0];
    tmp.y = (float)nums[1];
    *out = tmp;
    return LCL_RC_OK;
  }
  return LCL_RC_ERR;
}

/* ---- Vector3 ---- */
lcl_value *rl_new_Vector3(Vector3 v) {
  Vector3 *p = (Vector3 *)malloc(sizeof(*p));
  if (!p) return NULL;
  *p = v;
  return lcl_opaque_new(p, RL_TAG_Vector3, free);
}

int rl_ptr_Vector3(lcl_interp *interp, lcl_value *v, Vector3 **out) {
  (void)interp;
  if (lcl_opaque_get(v, RL_TAG_Vector3, (void **)out) != LCL_OK) return LCL_RC_ERR;
  return LCL_RC_OK;
}

int rl_get_Vector3(lcl_interp *interp, lcl_value *v, Vector3 *out) {
  Vector3 *p;
  (void)interp;
  if (lcl_opaque_get(v, RL_TAG_Vector3, (void **)&p) == LCL_OK) {
    *out = *p;
    return LCL_RC_OK;
  }
  if (lcl_value_type_of(v) == LCL_LIST && lcl_list_len(v) == 3) {
    lcl_value *item;
    Vector3 tmp;
    memset(&tmp, 0, sizeof(tmp));
    if (lcl_list_get(v, 0, &item) != LCL_OK) return LCL_RC_ERR;
    { double x; if (rl_get_float(interp, item, &x) != LCL_RC_OK) { lcl_ref_dec(item); return LCL_RC_ERR; } tmp.x = (float)x; }
    lcl_ref_dec(item);
    if (lcl_list_get(v, 1, &item) != LCL_OK) return LCL_RC_ERR;
    { double x; if (rl_get_float(interp, item, &x) != LCL_RC_OK) { lcl_ref_dec(item); return LCL_RC_ERR; } tmp.y = (float)x; }
    lcl_ref_dec(item);
    if (lcl_list_get(v, 2, &item) != LCL_OK) return LCL_RC_ERR;
    { double x; if (rl_get_float(interp, item, &x) != LCL_RC_OK) { lcl_ref_dec(item); return LCL_RC_ERR; } tmp.z = (float)x; }
    lcl_ref_dec(item);
    *out = tmp;
    return LCL_RC_OK;
  }
  if (lcl_value_type_of(v) == LCL_STRING) {
    const char *s;
    double nums[3];
    Vector3 tmp;
    if (lcl_value_to_cstring(interp, v, &s) != LCL_OK) return LCL_RC_ERR;
    if (rl_parse_numbers(s, nums, 3) != LCL_RC_OK) return LCL_RC_ERR;
    tmp.x = (float)nums[0];
    tmp.y = (float)nums[1];
    tmp.z = (float)nums[2];
    *out = tmp;
    return LCL_RC_OK;
  }
  return LCL_RC_ERR;
}

/* ---- Vector4 ---- */
lcl_value *rl_new_Vector4(Vector4 v) {
  Vector4 *p = (Vector4 *)malloc(sizeof(*p));
  if (!p) return NULL;
  *p = v;
  return lcl_opaque_new(p, RL_TAG_Vector4, free);
}

int rl_ptr_Vector4(lcl_interp *interp, lcl_value *v, Vector4 **out) {
  (void)interp;
  if (lcl_opaque_get(v, RL_TAG_Vector4, (void **)out) != LCL_OK) return LCL_RC_ERR;
  return LCL_RC_OK;
}

int rl_get_Vector4(lcl_interp *interp, lcl_value *v, Vector4 *out) {
  Vector4 *p;
  (void)interp;
  if (lcl_opaque_get(v, RL_TAG_Vector4, (void **)&p) == LCL_OK) {
    *out = *p;
    return LCL_RC_OK;
  }
  if (lcl_value_type_of(v) == LCL_LIST && lcl_list_len(v) == 4) {
    lcl_value *item;
    Vector4 tmp;
    memset(&tmp, 0, sizeof(tmp));
    if (lcl_list_get(v, 0, &item) != LCL_OK) return LCL_RC_ERR;
    { double x; if (rl_get_float(interp, item, &x) != LCL_RC_OK) { lcl_ref_dec(item); return LCL_RC_ERR; } tmp.x = (float)x; }
    lcl_ref_dec(item);
    if (lcl_list_get(v, 1, &item) != LCL_OK) return LCL_RC_ERR;
    { double x; if (rl_get_float(interp, item, &x) != LCL_RC_OK) { lcl_ref_dec(item); return LCL_RC_ERR; } tmp.y = (float)x; }
    lcl_ref_dec(item);
    if (lcl_list_get(v, 2, &item) != LCL_OK) return LCL_RC_ERR;
    { double x; if (rl_get_float(interp, item, &x) != LCL_RC_OK) { lcl_ref_dec(item); return LCL_RC_ERR; } tmp.z = (float)x; }
    lcl_ref_dec(item);
    if (lcl_list_get(v, 3, &item) != LCL_OK) return LCL_RC_ERR;
    { double x; if (rl_get_float(interp, item, &x) != LCL_RC_OK) { lcl_ref_dec(item); return LCL_RC_ERR; } tmp.w = (float)x; }
    lcl_ref_dec(item);
    *out = tmp;
    return LCL_RC_OK;
  }
  if (lcl_value_type_of(v) == LCL_STRING) {
    const char *s;
    double nums[4];
    Vector4 tmp;
    if (lcl_value_to_cstring(interp, v, &s) != LCL_OK) return LCL_RC_ERR;
    if (rl_parse_numbers(s, nums, 4) != LCL_RC_OK) return LCL_RC_ERR;
    tmp.x = (float)nums[0];
    tmp.y = (float)nums[1];
    tmp.z = (float)nums[2];
    tmp.w = (float)nums[3];
    *out = tmp;
    return LCL_RC_OK;
  }
  return LCL_RC_ERR;
}

/* ---- Matrix ---- */
lcl_value *rl_new_Matrix(Matrix v) {
  Matrix *p = (Matrix *)malloc(sizeof(*p));
  if (!p) return NULL;
  *p = v;
  return lcl_opaque_new(p, RL_TAG_Matrix, free);
}

int rl_ptr_Matrix(lcl_interp *interp, lcl_value *v, Matrix **out) {
  (void)interp;
  if (lcl_opaque_get(v, RL_TAG_Matrix, (void **)out) != LCL_OK) return LCL_RC_ERR;
  return LCL_RC_OK;
}

int rl_get_Matrix(lcl_interp *interp, lcl_value *v, Matrix *out) {
  Matrix *p;
  (void)interp;
  if (lcl_opaque_get(v, RL_TAG_Matrix, (void **)&p) == LCL_OK) {
    *out = *p;
    return LCL_RC_OK;
  }
  if (lcl_value_type_of(v) == LCL_LIST && lcl_list_len(v) == 16) {
    lcl_value *item;
    Matrix tmp;
    memset(&tmp, 0, sizeof(tmp));
    if (lcl_list_get(v, 0, &item) != LCL_OK) return LCL_RC_ERR;
    { double x; if (rl_get_float(interp, item, &x) != LCL_RC_OK) { lcl_ref_dec(item); return LCL_RC_ERR; } tmp.m0 = (float)x; }
    lcl_ref_dec(item);
    if (lcl_list_get(v, 1, &item) != LCL_OK) return LCL_RC_ERR;
    { double x; if (rl_get_float(interp, item, &x) != LCL_RC_OK) { lcl_ref_dec(item); return LCL_RC_ERR; } tmp.m4 = (float)x; }
    lcl_ref_dec(item);
    if (lcl_list_get(v, 2, &item) != LCL_OK) return LCL_RC_ERR;
    { double x; if (rl_get_float(interp, item, &x) != LCL_RC_OK) { lcl_ref_dec(item); return LCL_RC_ERR; } tmp.m8 = (float)x; }
    lcl_ref_dec(item);
    if (lcl_list_get(v, 3, &item) != LCL_OK) return LCL_RC_ERR;
    { double x; if (rl_get_float(interp, item, &x) != LCL_RC_OK) { lcl_ref_dec(item); return LCL_RC_ERR; } tmp.m12 = (float)x; }
    lcl_ref_dec(item);
    if (lcl_list_get(v, 4, &item) != LCL_OK) return LCL_RC_ERR;
    { double x; if (rl_get_float(interp, item, &x) != LCL_RC_OK) { lcl_ref_dec(item); return LCL_RC_ERR; } tmp.m1 = (float)x; }
    lcl_ref_dec(item);
    if (lcl_list_get(v, 5, &item) != LCL_OK) return LCL_RC_ERR;
    { double x; if (rl_get_float(interp, item, &x) != LCL_RC_OK) { lcl_ref_dec(item); return LCL_RC_ERR; } tmp.m5 = (float)x; }
    lcl_ref_dec(item);
    if (lcl_list_get(v, 6, &item) != LCL_OK) return LCL_RC_ERR;
    { double x; if (rl_get_float(interp, item, &x) != LCL_RC_OK) { lcl_ref_dec(item); return LCL_RC_ERR; } tmp.m9 = (float)x; }
    lcl_ref_dec(item);
    if (lcl_list_get(v, 7, &item) != LCL_OK) return LCL_RC_ERR;
    { double x; if (rl_get_float(interp, item, &x) != LCL_RC_OK) { lcl_ref_dec(item); return LCL_RC_ERR; } tmp.m13 = (float)x; }
    lcl_ref_dec(item);
    if (lcl_list_get(v, 8, &item) != LCL_OK) return LCL_RC_ERR;
    { double x; if (rl_get_float(interp, item, &x) != LCL_RC_OK) { lcl_ref_dec(item); return LCL_RC_ERR; } tmp.m2 = (float)x; }
    lcl_ref_dec(item);
    if (lcl_list_get(v, 9, &item) != LCL_OK) return LCL_RC_ERR;
    { double x; if (rl_get_float(interp, item, &x) != LCL_RC_OK) { lcl_ref_dec(item); return LCL_RC_ERR; } tmp.m6 = (float)x; }
    lcl_ref_dec(item);
    if (lcl_list_get(v, 10, &item) != LCL_OK) return LCL_RC_ERR;
    { double x; if (rl_get_float(interp, item, &x) != LCL_RC_OK) { lcl_ref_dec(item); return LCL_RC_ERR; } tmp.m10 = (float)x; }
    lcl_ref_dec(item);
    if (lcl_list_get(v, 11, &item) != LCL_OK) return LCL_RC_ERR;
    { double x; if (rl_get_float(interp, item, &x) != LCL_RC_OK) { lcl_ref_dec(item); return LCL_RC_ERR; } tmp.m14 = (float)x; }
    lcl_ref_dec(item);
    if (lcl_list_get(v, 12, &item) != LCL_OK) return LCL_RC_ERR;
    { double x; if (rl_get_float(interp, item, &x) != LCL_RC_OK) { lcl_ref_dec(item); return LCL_RC_ERR; } tmp.m3 = (float)x; }
    lcl_ref_dec(item);
    if (lcl_list_get(v, 13, &item) != LCL_OK) return LCL_RC_ERR;
    { double x; if (rl_get_float(interp, item, &x) != LCL_RC_OK) { lcl_ref_dec(item); return LCL_RC_ERR; } tmp.m7 = (float)x; }
    lcl_ref_dec(item);
    if (lcl_list_get(v, 14, &item) != LCL_OK) return LCL_RC_ERR;
    { double x; if (rl_get_float(interp, item, &x) != LCL_RC_OK) { lcl_ref_dec(item); return LCL_RC_ERR; } tmp.m11 = (float)x; }
    lcl_ref_dec(item);
    if (lcl_list_get(v, 15, &item) != LCL_OK) return LCL_RC_ERR;
    { double x; if (rl_get_float(interp, item, &x) != LCL_RC_OK) { lcl_ref_dec(item); return LCL_RC_ERR; } tmp.m15 = (float)x; }
    lcl_ref_dec(item);
    *out = tmp;
    return LCL_RC_OK;
  }
  if (lcl_value_type_of(v) == LCL_STRING) {
    const char *s;
    double nums[16];
    Matrix tmp;
    if (lcl_value_to_cstring(interp, v, &s) != LCL_OK) return LCL_RC_ERR;
    if (rl_parse_numbers(s, nums, 16) != LCL_RC_OK) return LCL_RC_ERR;
    tmp.m0 = (float)nums[0];
    tmp.m4 = (float)nums[1];
    tmp.m8 = (float)nums[2];
    tmp.m12 = (float)nums[3];
    tmp.m1 = (float)nums[4];
    tmp.m5 = (float)nums[5];
    tmp.m9 = (float)nums[6];
    tmp.m13 = (float)nums[7];
    tmp.m2 = (float)nums[8];
    tmp.m6 = (float)nums[9];
    tmp.m10 = (float)nums[10];
    tmp.m14 = (float)nums[11];
    tmp.m3 = (float)nums[12];
    tmp.m7 = (float)nums[13];
    tmp.m11 = (float)nums[14];
    tmp.m15 = (float)nums[15];
    *out = tmp;
    return LCL_RC_OK;
  }
  return LCL_RC_ERR;
}

/* ---- Color ---- */
lcl_value *rl_new_Color(Color v) {
  Color *p = (Color *)malloc(sizeof(*p));
  if (!p) return NULL;
  *p = v;
  return lcl_opaque_new(p, RL_TAG_Color, free);
}

int rl_ptr_Color(lcl_interp *interp, lcl_value *v, Color **out) {
  (void)interp;
  if (lcl_opaque_get(v, RL_TAG_Color, (void **)out) != LCL_OK) return LCL_RC_ERR;
  return LCL_RC_OK;
}

int rl_get_Color(lcl_interp *interp, lcl_value *v, Color *out) {
  Color *p;
  (void)interp;
  if (lcl_opaque_get(v, RL_TAG_Color, (void **)&p) == LCL_OK) {
    *out = *p;
    return LCL_RC_OK;
  }
  if (lcl_value_type_of(v) == LCL_LIST && lcl_list_len(v) == 4) {
    lcl_value *item;
    Color tmp;
    memset(&tmp, 0, sizeof(tmp));
    if (lcl_list_get(v, 0, &item) != LCL_OK) return LCL_RC_ERR;
    { long x; if (rl_get_int(interp, item, &x) != LCL_RC_OK) { lcl_ref_dec(item); return LCL_RC_ERR; } tmp.r = (unsigned char)x; }
    lcl_ref_dec(item);
    if (lcl_list_get(v, 1, &item) != LCL_OK) return LCL_RC_ERR;
    { long x; if (rl_get_int(interp, item, &x) != LCL_RC_OK) { lcl_ref_dec(item); return LCL_RC_ERR; } tmp.g = (unsigned char)x; }
    lcl_ref_dec(item);
    if (lcl_list_get(v, 2, &item) != LCL_OK) return LCL_RC_ERR;
    { long x; if (rl_get_int(interp, item, &x) != LCL_RC_OK) { lcl_ref_dec(item); return LCL_RC_ERR; } tmp.b = (unsigned char)x; }
    lcl_ref_dec(item);
    if (lcl_list_get(v, 3, &item) != LCL_OK) return LCL_RC_ERR;
    { long x; if (rl_get_int(interp, item, &x) != LCL_RC_OK) { lcl_ref_dec(item); return LCL_RC_ERR; } tmp.a = (unsigned char)x; }
    lcl_ref_dec(item);
    *out = tmp;
    return LCL_RC_OK;
  }
  if (lcl_value_type_of(v) == LCL_STRING) {
    const char *s;
    double nums[4];
    Color tmp;
    if (lcl_value_to_cstring(interp, v, &s) != LCL_OK) return LCL_RC_ERR;
    if (rl_parse_numbers(s, nums, 4) != LCL_RC_OK) return LCL_RC_ERR;
    tmp.r = (unsigned char)nums[0];
    tmp.g = (unsigned char)nums[1];
    tmp.b = (unsigned char)nums[2];
    tmp.a = (unsigned char)nums[3];
    *out = tmp;
    return LCL_RC_OK;
  }
  return LCL_RC_ERR;
}

/* ---- Rectangle ---- */
lcl_value *rl_new_Rectangle(Rectangle v) {
  Rectangle *p = (Rectangle *)malloc(sizeof(*p));
  if (!p) return NULL;
  *p = v;
  return lcl_opaque_new(p, RL_TAG_Rectangle, free);
}

int rl_ptr_Rectangle(lcl_interp *interp, lcl_value *v, Rectangle **out) {
  (void)interp;
  if (lcl_opaque_get(v, RL_TAG_Rectangle, (void **)out) != LCL_OK) return LCL_RC_ERR;
  return LCL_RC_OK;
}

int rl_get_Rectangle(lcl_interp *interp, lcl_value *v, Rectangle *out) {
  Rectangle *p;
  (void)interp;
  if (lcl_opaque_get(v, RL_TAG_Rectangle, (void **)&p) == LCL_OK) {
    *out = *p;
    return LCL_RC_OK;
  }
  if (lcl_value_type_of(v) == LCL_LIST && lcl_list_len(v) == 4) {
    lcl_value *item;
    Rectangle tmp;
    memset(&tmp, 0, sizeof(tmp));
    if (lcl_list_get(v, 0, &item) != LCL_OK) return LCL_RC_ERR;
    { double x; if (rl_get_float(interp, item, &x) != LCL_RC_OK) { lcl_ref_dec(item); return LCL_RC_ERR; } tmp.x = (float)x; }
    lcl_ref_dec(item);
    if (lcl_list_get(v, 1, &item) != LCL_OK) return LCL_RC_ERR;
    { double x; if (rl_get_float(interp, item, &x) != LCL_RC_OK) { lcl_ref_dec(item); return LCL_RC_ERR; } tmp.y = (float)x; }
    lcl_ref_dec(item);
    if (lcl_list_get(v, 2, &item) != LCL_OK) return LCL_RC_ERR;
    { double x; if (rl_get_float(interp, item, &x) != LCL_RC_OK) { lcl_ref_dec(item); return LCL_RC_ERR; } tmp.width = (float)x; }
    lcl_ref_dec(item);
    if (lcl_list_get(v, 3, &item) != LCL_OK) return LCL_RC_ERR;
    { double x; if (rl_get_float(interp, item, &x) != LCL_RC_OK) { lcl_ref_dec(item); return LCL_RC_ERR; } tmp.height = (float)x; }
    lcl_ref_dec(item);
    *out = tmp;
    return LCL_RC_OK;
  }
  if (lcl_value_type_of(v) == LCL_STRING) {
    const char *s;
    double nums[4];
    Rectangle tmp;
    if (lcl_value_to_cstring(interp, v, &s) != LCL_OK) return LCL_RC_ERR;
    if (rl_parse_numbers(s, nums, 4) != LCL_RC_OK) return LCL_RC_ERR;
    tmp.x = (float)nums[0];
    tmp.y = (float)nums[1];
    tmp.width = (float)nums[2];
    tmp.height = (float)nums[3];
    *out = tmp;
    return LCL_RC_OK;
  }
  return LCL_RC_ERR;
}

/* ---- Image ---- */
lcl_value *rl_new_Image(Image v) {
  Image *p = (Image *)malloc(sizeof(*p));
  if (!p) return NULL;
  *p = v;
  return lcl_opaque_new(p, RL_TAG_Image, free);
}

int rl_ptr_Image(lcl_interp *interp, lcl_value *v, Image **out) {
  (void)interp;
  if (lcl_opaque_get(v, RL_TAG_Image, (void **)out) != LCL_OK) return LCL_RC_ERR;
  return LCL_RC_OK;
}

int rl_get_Image(lcl_interp *interp, lcl_value *v, Image *out) {
  Image *p;
  (void)interp;
  if (lcl_opaque_get(v, RL_TAG_Image, (void **)&p) == LCL_OK) {
    *out = *p;
    return LCL_RC_OK;
  }
  return LCL_RC_ERR;
}

/* ---- Texture ---- */
lcl_value *rl_new_Texture(Texture v) {
  Texture *p = (Texture *)malloc(sizeof(*p));
  if (!p) return NULL;
  *p = v;
  return lcl_opaque_new(p, RL_TAG_Texture, free);
}

int rl_ptr_Texture(lcl_interp *interp, lcl_value *v, Texture **out) {
  (void)interp;
  if (lcl_opaque_get(v, RL_TAG_Texture, (void **)out) != LCL_OK) return LCL_RC_ERR;
  return LCL_RC_OK;
}

int rl_get_Texture(lcl_interp *interp, lcl_value *v, Texture *out) {
  Texture *p;
  (void)interp;
  if (lcl_opaque_get(v, RL_TAG_Texture, (void **)&p) == LCL_OK) {
    *out = *p;
    return LCL_RC_OK;
  }
  if (lcl_value_type_of(v) == LCL_LIST && lcl_list_len(v) == 5) {
    lcl_value *item;
    Texture tmp;
    memset(&tmp, 0, sizeof(tmp));
    if (lcl_list_get(v, 0, &item) != LCL_OK) return LCL_RC_ERR;
    { long x; if (rl_get_int(interp, item, &x) != LCL_RC_OK) { lcl_ref_dec(item); return LCL_RC_ERR; } tmp.id = (unsigned int)x; }
    lcl_ref_dec(item);
    if (lcl_list_get(v, 1, &item) != LCL_OK) return LCL_RC_ERR;
    { long x; if (rl_get_int(interp, item, &x) != LCL_RC_OK) { lcl_ref_dec(item); return LCL_RC_ERR; } tmp.width = (int)x; }
    lcl_ref_dec(item);
    if (lcl_list_get(v, 2, &item) != LCL_OK) return LCL_RC_ERR;
    { long x; if (rl_get_int(interp, item, &x) != LCL_RC_OK) { lcl_ref_dec(item); return LCL_RC_ERR; } tmp.height = (int)x; }
    lcl_ref_dec(item);
    if (lcl_list_get(v, 3, &item) != LCL_OK) return LCL_RC_ERR;
    { long x; if (rl_get_int(interp, item, &x) != LCL_RC_OK) { lcl_ref_dec(item); return LCL_RC_ERR; } tmp.mipmaps = (int)x; }
    lcl_ref_dec(item);
    if (lcl_list_get(v, 4, &item) != LCL_OK) return LCL_RC_ERR;
    { long x; if (rl_get_int(interp, item, &x) != LCL_RC_OK) { lcl_ref_dec(item); return LCL_RC_ERR; } tmp.format = (int)x; }
    lcl_ref_dec(item);
    *out = tmp;
    return LCL_RC_OK;
  }
  if (lcl_value_type_of(v) == LCL_STRING) {
    const char *s;
    double nums[5];
    Texture tmp;
    if (lcl_value_to_cstring(interp, v, &s) != LCL_OK) return LCL_RC_ERR;
    if (rl_parse_numbers(s, nums, 5) != LCL_RC_OK) return LCL_RC_ERR;
    tmp.id = (unsigned int)nums[0];
    tmp.width = (int)nums[1];
    tmp.height = (int)nums[2];
    tmp.mipmaps = (int)nums[3];
    tmp.format = (int)nums[4];
    *out = tmp;
    return LCL_RC_OK;
  }
  return LCL_RC_ERR;
}

/* ---- RenderTexture ---- */
lcl_value *rl_new_RenderTexture(RenderTexture v) {
  RenderTexture *p = (RenderTexture *)malloc(sizeof(*p));
  if (!p) return NULL;
  *p = v;
  return lcl_opaque_new(p, RL_TAG_RenderTexture, free);
}

int rl_ptr_RenderTexture(lcl_interp *interp, lcl_value *v, RenderTexture **out) {
  (void)interp;
  if (lcl_opaque_get(v, RL_TAG_RenderTexture, (void **)out) != LCL_OK) return LCL_RC_ERR;
  return LCL_RC_OK;
}

int rl_get_RenderTexture(lcl_interp *interp, lcl_value *v, RenderTexture *out) {
  RenderTexture *p;
  (void)interp;
  if (lcl_opaque_get(v, RL_TAG_RenderTexture, (void **)&p) == LCL_OK) {
    *out = *p;
    return LCL_RC_OK;
  }
  if (lcl_value_type_of(v) == LCL_LIST && lcl_list_len(v) == 3) {
    lcl_value *item;
    RenderTexture tmp;
    memset(&tmp, 0, sizeof(tmp));
    if (lcl_list_get(v, 0, &item) != LCL_OK) return LCL_RC_ERR;
    { long x; if (rl_get_int(interp, item, &x) != LCL_RC_OK) { lcl_ref_dec(item); return LCL_RC_ERR; } tmp.id = (unsigned int)x; }
    lcl_ref_dec(item);
    if (lcl_list_get(v, 1, &item) != LCL_OK) return LCL_RC_ERR;
    if (rl_get_Texture(interp, item, &tmp.texture) != LCL_RC_OK) { lcl_ref_dec(item); return LCL_RC_ERR; }
    lcl_ref_dec(item);
    if (lcl_list_get(v, 2, &item) != LCL_OK) return LCL_RC_ERR;
    if (rl_get_Texture(interp, item, &tmp.depth) != LCL_RC_OK) { lcl_ref_dec(item); return LCL_RC_ERR; }
    lcl_ref_dec(item);
    *out = tmp;
    return LCL_RC_OK;
  }
  return LCL_RC_ERR;
}

/* ---- NPatchInfo ---- */
lcl_value *rl_new_NPatchInfo(NPatchInfo v) {
  NPatchInfo *p = (NPatchInfo *)malloc(sizeof(*p));
  if (!p) return NULL;
  *p = v;
  return lcl_opaque_new(p, RL_TAG_NPatchInfo, free);
}

int rl_ptr_NPatchInfo(lcl_interp *interp, lcl_value *v, NPatchInfo **out) {
  (void)interp;
  if (lcl_opaque_get(v, RL_TAG_NPatchInfo, (void **)out) != LCL_OK) return LCL_RC_ERR;
  return LCL_RC_OK;
}

int rl_get_NPatchInfo(lcl_interp *interp, lcl_value *v, NPatchInfo *out) {
  NPatchInfo *p;
  (void)interp;
  if (lcl_opaque_get(v, RL_TAG_NPatchInfo, (void **)&p) == LCL_OK) {
    *out = *p;
    return LCL_RC_OK;
  }
  if (lcl_value_type_of(v) == LCL_LIST && lcl_list_len(v) == 6) {
    lcl_value *item;
    NPatchInfo tmp;
    memset(&tmp, 0, sizeof(tmp));
    if (lcl_list_get(v, 0, &item) != LCL_OK) return LCL_RC_ERR;
    if (rl_get_Rectangle(interp, item, &tmp.source) != LCL_RC_OK) { lcl_ref_dec(item); return LCL_RC_ERR; }
    lcl_ref_dec(item);
    if (lcl_list_get(v, 1, &item) != LCL_OK) return LCL_RC_ERR;
    { long x; if (rl_get_int(interp, item, &x) != LCL_RC_OK) { lcl_ref_dec(item); return LCL_RC_ERR; } tmp.left = (int)x; }
    lcl_ref_dec(item);
    if (lcl_list_get(v, 2, &item) != LCL_OK) return LCL_RC_ERR;
    { long x; if (rl_get_int(interp, item, &x) != LCL_RC_OK) { lcl_ref_dec(item); return LCL_RC_ERR; } tmp.top = (int)x; }
    lcl_ref_dec(item);
    if (lcl_list_get(v, 3, &item) != LCL_OK) return LCL_RC_ERR;
    { long x; if (rl_get_int(interp, item, &x) != LCL_RC_OK) { lcl_ref_dec(item); return LCL_RC_ERR; } tmp.right = (int)x; }
    lcl_ref_dec(item);
    if (lcl_list_get(v, 4, &item) != LCL_OK) return LCL_RC_ERR;
    { long x; if (rl_get_int(interp, item, &x) != LCL_RC_OK) { lcl_ref_dec(item); return LCL_RC_ERR; } tmp.bottom = (int)x; }
    lcl_ref_dec(item);
    if (lcl_list_get(v, 5, &item) != LCL_OK) return LCL_RC_ERR;
    { long x; if (rl_get_int(interp, item, &x) != LCL_RC_OK) { lcl_ref_dec(item); return LCL_RC_ERR; } tmp.layout = (int)x; }
    lcl_ref_dec(item);
    *out = tmp;
    return LCL_RC_OK;
  }
  return LCL_RC_ERR;
}

/* ---- GlyphInfo ---- */
lcl_value *rl_new_GlyphInfo(GlyphInfo v) {
  GlyphInfo *p = (GlyphInfo *)malloc(sizeof(*p));
  if (!p) return NULL;
  *p = v;
  return lcl_opaque_new(p, RL_TAG_GlyphInfo, free);
}

int rl_ptr_GlyphInfo(lcl_interp *interp, lcl_value *v, GlyphInfo **out) {
  (void)interp;
  if (lcl_opaque_get(v, RL_TAG_GlyphInfo, (void **)out) != LCL_OK) return LCL_RC_ERR;
  return LCL_RC_OK;
}

int rl_get_GlyphInfo(lcl_interp *interp, lcl_value *v, GlyphInfo *out) {
  GlyphInfo *p;
  (void)interp;
  if (lcl_opaque_get(v, RL_TAG_GlyphInfo, (void **)&p) == LCL_OK) {
    *out = *p;
    return LCL_RC_OK;
  }
  return LCL_RC_ERR;
}

/* ---- Font ---- */
lcl_value *rl_new_Font(Font v) {
  Font *p = (Font *)malloc(sizeof(*p));
  if (!p) return NULL;
  *p = v;
  return lcl_opaque_new(p, RL_TAG_Font, free);
}

int rl_ptr_Font(lcl_interp *interp, lcl_value *v, Font **out) {
  (void)interp;
  if (lcl_opaque_get(v, RL_TAG_Font, (void **)out) != LCL_OK) return LCL_RC_ERR;
  return LCL_RC_OK;
}

int rl_get_Font(lcl_interp *interp, lcl_value *v, Font *out) {
  Font *p;
  (void)interp;
  if (lcl_opaque_get(v, RL_TAG_Font, (void **)&p) == LCL_OK) {
    *out = *p;
    return LCL_RC_OK;
  }
  return LCL_RC_ERR;
}

/* ---- Camera3D ---- */
lcl_value *rl_new_Camera3D(Camera3D v) {
  Camera3D *p = (Camera3D *)malloc(sizeof(*p));
  if (!p) return NULL;
  *p = v;
  return lcl_opaque_new(p, RL_TAG_Camera3D, free);
}

int rl_ptr_Camera3D(lcl_interp *interp, lcl_value *v, Camera3D **out) {
  (void)interp;
  if (lcl_opaque_get(v, RL_TAG_Camera3D, (void **)out) != LCL_OK) return LCL_RC_ERR;
  return LCL_RC_OK;
}

int rl_get_Camera3D(lcl_interp *interp, lcl_value *v, Camera3D *out) {
  Camera3D *p;
  (void)interp;
  if (lcl_opaque_get(v, RL_TAG_Camera3D, (void **)&p) == LCL_OK) {
    *out = *p;
    return LCL_RC_OK;
  }
  if (lcl_value_type_of(v) == LCL_LIST && lcl_list_len(v) == 5) {
    lcl_value *item;
    Camera3D tmp;
    memset(&tmp, 0, sizeof(tmp));
    if (lcl_list_get(v, 0, &item) != LCL_OK) return LCL_RC_ERR;
    if (rl_get_Vector3(interp, item, &tmp.position) != LCL_RC_OK) { lcl_ref_dec(item); return LCL_RC_ERR; }
    lcl_ref_dec(item);
    if (lcl_list_get(v, 1, &item) != LCL_OK) return LCL_RC_ERR;
    if (rl_get_Vector3(interp, item, &tmp.target) != LCL_RC_OK) { lcl_ref_dec(item); return LCL_RC_ERR; }
    lcl_ref_dec(item);
    if (lcl_list_get(v, 2, &item) != LCL_OK) return LCL_RC_ERR;
    if (rl_get_Vector3(interp, item, &tmp.up) != LCL_RC_OK) { lcl_ref_dec(item); return LCL_RC_ERR; }
    lcl_ref_dec(item);
    if (lcl_list_get(v, 3, &item) != LCL_OK) return LCL_RC_ERR;
    { double x; if (rl_get_float(interp, item, &x) != LCL_RC_OK) { lcl_ref_dec(item); return LCL_RC_ERR; } tmp.fovy = (float)x; }
    lcl_ref_dec(item);
    if (lcl_list_get(v, 4, &item) != LCL_OK) return LCL_RC_ERR;
    { long x; if (rl_get_int(interp, item, &x) != LCL_RC_OK) { lcl_ref_dec(item); return LCL_RC_ERR; } tmp.projection = (int)x; }
    lcl_ref_dec(item);
    *out = tmp;
    return LCL_RC_OK;
  }
  return LCL_RC_ERR;
}

/* ---- Camera2D ---- */
lcl_value *rl_new_Camera2D(Camera2D v) {
  Camera2D *p = (Camera2D *)malloc(sizeof(*p));
  if (!p) return NULL;
  *p = v;
  return lcl_opaque_new(p, RL_TAG_Camera2D, free);
}

int rl_ptr_Camera2D(lcl_interp *interp, lcl_value *v, Camera2D **out) {
  (void)interp;
  if (lcl_opaque_get(v, RL_TAG_Camera2D, (void **)out) != LCL_OK) return LCL_RC_ERR;
  return LCL_RC_OK;
}

int rl_get_Camera2D(lcl_interp *interp, lcl_value *v, Camera2D *out) {
  Camera2D *p;
  (void)interp;
  if (lcl_opaque_get(v, RL_TAG_Camera2D, (void **)&p) == LCL_OK) {
    *out = *p;
    return LCL_RC_OK;
  }
  if (lcl_value_type_of(v) == LCL_LIST && lcl_list_len(v) == 4) {
    lcl_value *item;
    Camera2D tmp;
    memset(&tmp, 0, sizeof(tmp));
    if (lcl_list_get(v, 0, &item) != LCL_OK) return LCL_RC_ERR;
    if (rl_get_Vector2(interp, item, &tmp.offset) != LCL_RC_OK) { lcl_ref_dec(item); return LCL_RC_ERR; }
    lcl_ref_dec(item);
    if (lcl_list_get(v, 1, &item) != LCL_OK) return LCL_RC_ERR;
    if (rl_get_Vector2(interp, item, &tmp.target) != LCL_RC_OK) { lcl_ref_dec(item); return LCL_RC_ERR; }
    lcl_ref_dec(item);
    if (lcl_list_get(v, 2, &item) != LCL_OK) return LCL_RC_ERR;
    { double x; if (rl_get_float(interp, item, &x) != LCL_RC_OK) { lcl_ref_dec(item); return LCL_RC_ERR; } tmp.rotation = (float)x; }
    lcl_ref_dec(item);
    if (lcl_list_get(v, 3, &item) != LCL_OK) return LCL_RC_ERR;
    { double x; if (rl_get_float(interp, item, &x) != LCL_RC_OK) { lcl_ref_dec(item); return LCL_RC_ERR; } tmp.zoom = (float)x; }
    lcl_ref_dec(item);
    *out = tmp;
    return LCL_RC_OK;
  }
  return LCL_RC_ERR;
}

/* ---- Mesh ---- */
lcl_value *rl_new_Mesh(Mesh v) {
  Mesh *p = (Mesh *)malloc(sizeof(*p));
  if (!p) return NULL;
  *p = v;
  return lcl_opaque_new(p, RL_TAG_Mesh, free);
}

int rl_ptr_Mesh(lcl_interp *interp, lcl_value *v, Mesh **out) {
  (void)interp;
  if (lcl_opaque_get(v, RL_TAG_Mesh, (void **)out) != LCL_OK) return LCL_RC_ERR;
  return LCL_RC_OK;
}

int rl_get_Mesh(lcl_interp *interp, lcl_value *v, Mesh *out) {
  Mesh *p;
  (void)interp;
  if (lcl_opaque_get(v, RL_TAG_Mesh, (void **)&p) == LCL_OK) {
    *out = *p;
    return LCL_RC_OK;
  }
  return LCL_RC_ERR;
}

/* ---- Shader ---- */
lcl_value *rl_new_Shader(Shader v) {
  Shader *p = (Shader *)malloc(sizeof(*p));
  if (!p) return NULL;
  *p = v;
  return lcl_opaque_new(p, RL_TAG_Shader, free);
}

int rl_ptr_Shader(lcl_interp *interp, lcl_value *v, Shader **out) {
  (void)interp;
  if (lcl_opaque_get(v, RL_TAG_Shader, (void **)out) != LCL_OK) return LCL_RC_ERR;
  return LCL_RC_OK;
}

int rl_get_Shader(lcl_interp *interp, lcl_value *v, Shader *out) {
  Shader *p;
  (void)interp;
  if (lcl_opaque_get(v, RL_TAG_Shader, (void **)&p) == LCL_OK) {
    *out = *p;
    return LCL_RC_OK;
  }
  return LCL_RC_ERR;
}

/* ---- MaterialMap ---- */
lcl_value *rl_new_MaterialMap(MaterialMap v) {
  MaterialMap *p = (MaterialMap *)malloc(sizeof(*p));
  if (!p) return NULL;
  *p = v;
  return lcl_opaque_new(p, RL_TAG_MaterialMap, free);
}

int rl_ptr_MaterialMap(lcl_interp *interp, lcl_value *v, MaterialMap **out) {
  (void)interp;
  if (lcl_opaque_get(v, RL_TAG_MaterialMap, (void **)out) != LCL_OK) return LCL_RC_ERR;
  return LCL_RC_OK;
}

int rl_get_MaterialMap(lcl_interp *interp, lcl_value *v, MaterialMap *out) {
  MaterialMap *p;
  (void)interp;
  if (lcl_opaque_get(v, RL_TAG_MaterialMap, (void **)&p) == LCL_OK) {
    *out = *p;
    return LCL_RC_OK;
  }
  if (lcl_value_type_of(v) == LCL_LIST && lcl_list_len(v) == 3) {
    lcl_value *item;
    MaterialMap tmp;
    memset(&tmp, 0, sizeof(tmp));
    if (lcl_list_get(v, 0, &item) != LCL_OK) return LCL_RC_ERR;
    if (rl_get_Texture(interp, item, &tmp.texture) != LCL_RC_OK) { lcl_ref_dec(item); return LCL_RC_ERR; }
    lcl_ref_dec(item);
    if (lcl_list_get(v, 1, &item) != LCL_OK) return LCL_RC_ERR;
    if (rl_get_Color(interp, item, &tmp.color) != LCL_RC_OK) { lcl_ref_dec(item); return LCL_RC_ERR; }
    lcl_ref_dec(item);
    if (lcl_list_get(v, 2, &item) != LCL_OK) return LCL_RC_ERR;
    { double x; if (rl_get_float(interp, item, &x) != LCL_RC_OK) { lcl_ref_dec(item); return LCL_RC_ERR; } tmp.value = (float)x; }
    lcl_ref_dec(item);
    *out = tmp;
    return LCL_RC_OK;
  }
  return LCL_RC_ERR;
}

/* ---- Material ---- */
lcl_value *rl_new_Material(Material v) {
  Material *p = (Material *)malloc(sizeof(*p));
  if (!p) return NULL;
  *p = v;
  return lcl_opaque_new(p, RL_TAG_Material, free);
}

int rl_ptr_Material(lcl_interp *interp, lcl_value *v, Material **out) {
  (void)interp;
  if (lcl_opaque_get(v, RL_TAG_Material, (void **)out) != LCL_OK) return LCL_RC_ERR;
  return LCL_RC_OK;
}

int rl_get_Material(lcl_interp *interp, lcl_value *v, Material *out) {
  Material *p;
  (void)interp;
  if (lcl_opaque_get(v, RL_TAG_Material, (void **)&p) == LCL_OK) {
    *out = *p;
    return LCL_RC_OK;
  }
  return LCL_RC_ERR;
}

/* ---- Transform ---- */
lcl_value *rl_new_Transform(Transform v) {
  Transform *p = (Transform *)malloc(sizeof(*p));
  if (!p) return NULL;
  *p = v;
  return lcl_opaque_new(p, RL_TAG_Transform, free);
}

int rl_ptr_Transform(lcl_interp *interp, lcl_value *v, Transform **out) {
  (void)interp;
  if (lcl_opaque_get(v, RL_TAG_Transform, (void **)out) != LCL_OK) return LCL_RC_ERR;
  return LCL_RC_OK;
}

int rl_get_Transform(lcl_interp *interp, lcl_value *v, Transform *out) {
  Transform *p;
  (void)interp;
  if (lcl_opaque_get(v, RL_TAG_Transform, (void **)&p) == LCL_OK) {
    *out = *p;
    return LCL_RC_OK;
  }
  if (lcl_value_type_of(v) == LCL_LIST && lcl_list_len(v) == 3) {
    lcl_value *item;
    Transform tmp;
    memset(&tmp, 0, sizeof(tmp));
    if (lcl_list_get(v, 0, &item) != LCL_OK) return LCL_RC_ERR;
    if (rl_get_Vector3(interp, item, &tmp.translation) != LCL_RC_OK) { lcl_ref_dec(item); return LCL_RC_ERR; }
    lcl_ref_dec(item);
    if (lcl_list_get(v, 1, &item) != LCL_OK) return LCL_RC_ERR;
    if (rl_get_Vector4(interp, item, &tmp.rotation) != LCL_RC_OK) { lcl_ref_dec(item); return LCL_RC_ERR; }
    lcl_ref_dec(item);
    if (lcl_list_get(v, 2, &item) != LCL_OK) return LCL_RC_ERR;
    if (rl_get_Vector3(interp, item, &tmp.scale) != LCL_RC_OK) { lcl_ref_dec(item); return LCL_RC_ERR; }
    lcl_ref_dec(item);
    *out = tmp;
    return LCL_RC_OK;
  }
  return LCL_RC_ERR;
}

/* ---- BoneInfo ---- */
lcl_value *rl_new_BoneInfo(BoneInfo v) {
  BoneInfo *p = (BoneInfo *)malloc(sizeof(*p));
  if (!p) return NULL;
  *p = v;
  return lcl_opaque_new(p, RL_TAG_BoneInfo, free);
}

int rl_ptr_BoneInfo(lcl_interp *interp, lcl_value *v, BoneInfo **out) {
  (void)interp;
  if (lcl_opaque_get(v, RL_TAG_BoneInfo, (void **)out) != LCL_OK) return LCL_RC_ERR;
  return LCL_RC_OK;
}

int rl_get_BoneInfo(lcl_interp *interp, lcl_value *v, BoneInfo *out) {
  BoneInfo *p;
  (void)interp;
  if (lcl_opaque_get(v, RL_TAG_BoneInfo, (void **)&p) == LCL_OK) {
    *out = *p;
    return LCL_RC_OK;
  }
  return LCL_RC_ERR;
}

/* ---- ModelSkeleton ---- */
lcl_value *rl_new_ModelSkeleton(ModelSkeleton v) {
  ModelSkeleton *p = (ModelSkeleton *)malloc(sizeof(*p));
  if (!p) return NULL;
  *p = v;
  return lcl_opaque_new(p, RL_TAG_ModelSkeleton, free);
}

int rl_ptr_ModelSkeleton(lcl_interp *interp, lcl_value *v, ModelSkeleton **out) {
  (void)interp;
  if (lcl_opaque_get(v, RL_TAG_ModelSkeleton, (void **)out) != LCL_OK) return LCL_RC_ERR;
  return LCL_RC_OK;
}

int rl_get_ModelSkeleton(lcl_interp *interp, lcl_value *v, ModelSkeleton *out) {
  ModelSkeleton *p;
  (void)interp;
  if (lcl_opaque_get(v, RL_TAG_ModelSkeleton, (void **)&p) == LCL_OK) {
    *out = *p;
    return LCL_RC_OK;
  }
  return LCL_RC_ERR;
}

/* ---- Model ---- */
lcl_value *rl_new_Model(Model v) {
  Model *p = (Model *)malloc(sizeof(*p));
  if (!p) return NULL;
  *p = v;
  return lcl_opaque_new(p, RL_TAG_Model, free);
}

int rl_ptr_Model(lcl_interp *interp, lcl_value *v, Model **out) {
  (void)interp;
  if (lcl_opaque_get(v, RL_TAG_Model, (void **)out) != LCL_OK) return LCL_RC_ERR;
  return LCL_RC_OK;
}

int rl_get_Model(lcl_interp *interp, lcl_value *v, Model *out) {
  Model *p;
  (void)interp;
  if (lcl_opaque_get(v, RL_TAG_Model, (void **)&p) == LCL_OK) {
    *out = *p;
    return LCL_RC_OK;
  }
  return LCL_RC_ERR;
}

/* ---- ModelAnimation ---- */
lcl_value *rl_new_ModelAnimation(ModelAnimation v) {
  ModelAnimation *p = (ModelAnimation *)malloc(sizeof(*p));
  if (!p) return NULL;
  *p = v;
  return lcl_opaque_new(p, RL_TAG_ModelAnimation, free);
}

int rl_ptr_ModelAnimation(lcl_interp *interp, lcl_value *v, ModelAnimation **out) {
  (void)interp;
  if (lcl_opaque_get(v, RL_TAG_ModelAnimation, (void **)out) != LCL_OK) return LCL_RC_ERR;
  return LCL_RC_OK;
}

int rl_get_ModelAnimation(lcl_interp *interp, lcl_value *v, ModelAnimation *out) {
  ModelAnimation *p;
  (void)interp;
  if (lcl_opaque_get(v, RL_TAG_ModelAnimation, (void **)&p) == LCL_OK) {
    *out = *p;
    return LCL_RC_OK;
  }
  return LCL_RC_ERR;
}

/* ---- Ray ---- */
lcl_value *rl_new_Ray(Ray v) {
  Ray *p = (Ray *)malloc(sizeof(*p));
  if (!p) return NULL;
  *p = v;
  return lcl_opaque_new(p, RL_TAG_Ray, free);
}

int rl_ptr_Ray(lcl_interp *interp, lcl_value *v, Ray **out) {
  (void)interp;
  if (lcl_opaque_get(v, RL_TAG_Ray, (void **)out) != LCL_OK) return LCL_RC_ERR;
  return LCL_RC_OK;
}

int rl_get_Ray(lcl_interp *interp, lcl_value *v, Ray *out) {
  Ray *p;
  (void)interp;
  if (lcl_opaque_get(v, RL_TAG_Ray, (void **)&p) == LCL_OK) {
    *out = *p;
    return LCL_RC_OK;
  }
  if (lcl_value_type_of(v) == LCL_LIST && lcl_list_len(v) == 2) {
    lcl_value *item;
    Ray tmp;
    memset(&tmp, 0, sizeof(tmp));
    if (lcl_list_get(v, 0, &item) != LCL_OK) return LCL_RC_ERR;
    if (rl_get_Vector3(interp, item, &tmp.position) != LCL_RC_OK) { lcl_ref_dec(item); return LCL_RC_ERR; }
    lcl_ref_dec(item);
    if (lcl_list_get(v, 1, &item) != LCL_OK) return LCL_RC_ERR;
    if (rl_get_Vector3(interp, item, &tmp.direction) != LCL_RC_OK) { lcl_ref_dec(item); return LCL_RC_ERR; }
    lcl_ref_dec(item);
    *out = tmp;
    return LCL_RC_OK;
  }
  return LCL_RC_ERR;
}

/* ---- RayCollision ---- */
lcl_value *rl_new_RayCollision(RayCollision v) {
  RayCollision *p = (RayCollision *)malloc(sizeof(*p));
  if (!p) return NULL;
  *p = v;
  return lcl_opaque_new(p, RL_TAG_RayCollision, free);
}

int rl_ptr_RayCollision(lcl_interp *interp, lcl_value *v, RayCollision **out) {
  (void)interp;
  if (lcl_opaque_get(v, RL_TAG_RayCollision, (void **)out) != LCL_OK) return LCL_RC_ERR;
  return LCL_RC_OK;
}

int rl_get_RayCollision(lcl_interp *interp, lcl_value *v, RayCollision *out) {
  RayCollision *p;
  (void)interp;
  if (lcl_opaque_get(v, RL_TAG_RayCollision, (void **)&p) == LCL_OK) {
    *out = *p;
    return LCL_RC_OK;
  }
  if (lcl_value_type_of(v) == LCL_LIST && lcl_list_len(v) == 4) {
    lcl_value *item;
    RayCollision tmp;
    memset(&tmp, 0, sizeof(tmp));
    if (lcl_list_get(v, 0, &item) != LCL_OK) return LCL_RC_ERR;
    { long x; if (rl_get_int(interp, item, &x) != LCL_RC_OK) { lcl_ref_dec(item); return LCL_RC_ERR; } tmp.hit = (bool)x; }
    lcl_ref_dec(item);
    if (lcl_list_get(v, 1, &item) != LCL_OK) return LCL_RC_ERR;
    { double x; if (rl_get_float(interp, item, &x) != LCL_RC_OK) { lcl_ref_dec(item); return LCL_RC_ERR; } tmp.distance = (float)x; }
    lcl_ref_dec(item);
    if (lcl_list_get(v, 2, &item) != LCL_OK) return LCL_RC_ERR;
    if (rl_get_Vector3(interp, item, &tmp.point) != LCL_RC_OK) { lcl_ref_dec(item); return LCL_RC_ERR; }
    lcl_ref_dec(item);
    if (lcl_list_get(v, 3, &item) != LCL_OK) return LCL_RC_ERR;
    if (rl_get_Vector3(interp, item, &tmp.normal) != LCL_RC_OK) { lcl_ref_dec(item); return LCL_RC_ERR; }
    lcl_ref_dec(item);
    *out = tmp;
    return LCL_RC_OK;
  }
  return LCL_RC_ERR;
}

/* ---- BoundingBox ---- */
lcl_value *rl_new_BoundingBox(BoundingBox v) {
  BoundingBox *p = (BoundingBox *)malloc(sizeof(*p));
  if (!p) return NULL;
  *p = v;
  return lcl_opaque_new(p, RL_TAG_BoundingBox, free);
}

int rl_ptr_BoundingBox(lcl_interp *interp, lcl_value *v, BoundingBox **out) {
  (void)interp;
  if (lcl_opaque_get(v, RL_TAG_BoundingBox, (void **)out) != LCL_OK) return LCL_RC_ERR;
  return LCL_RC_OK;
}

int rl_get_BoundingBox(lcl_interp *interp, lcl_value *v, BoundingBox *out) {
  BoundingBox *p;
  (void)interp;
  if (lcl_opaque_get(v, RL_TAG_BoundingBox, (void **)&p) == LCL_OK) {
    *out = *p;
    return LCL_RC_OK;
  }
  if (lcl_value_type_of(v) == LCL_LIST && lcl_list_len(v) == 2) {
    lcl_value *item;
    BoundingBox tmp;
    memset(&tmp, 0, sizeof(tmp));
    if (lcl_list_get(v, 0, &item) != LCL_OK) return LCL_RC_ERR;
    if (rl_get_Vector3(interp, item, &tmp.min) != LCL_RC_OK) { lcl_ref_dec(item); return LCL_RC_ERR; }
    lcl_ref_dec(item);
    if (lcl_list_get(v, 1, &item) != LCL_OK) return LCL_RC_ERR;
    if (rl_get_Vector3(interp, item, &tmp.max) != LCL_RC_OK) { lcl_ref_dec(item); return LCL_RC_ERR; }
    lcl_ref_dec(item);
    *out = tmp;
    return LCL_RC_OK;
  }
  return LCL_RC_ERR;
}

/* ---- Wave ---- */
lcl_value *rl_new_Wave(Wave v) {
  Wave *p = (Wave *)malloc(sizeof(*p));
  if (!p) return NULL;
  *p = v;
  return lcl_opaque_new(p, RL_TAG_Wave, free);
}

int rl_ptr_Wave(lcl_interp *interp, lcl_value *v, Wave **out) {
  (void)interp;
  if (lcl_opaque_get(v, RL_TAG_Wave, (void **)out) != LCL_OK) return LCL_RC_ERR;
  return LCL_RC_OK;
}

int rl_get_Wave(lcl_interp *interp, lcl_value *v, Wave *out) {
  Wave *p;
  (void)interp;
  if (lcl_opaque_get(v, RL_TAG_Wave, (void **)&p) == LCL_OK) {
    *out = *p;
    return LCL_RC_OK;
  }
  return LCL_RC_ERR;
}

/* ---- AudioStream ---- */
lcl_value *rl_new_AudioStream(AudioStream v) {
  AudioStream *p = (AudioStream *)malloc(sizeof(*p));
  if (!p) return NULL;
  *p = v;
  return lcl_opaque_new(p, RL_TAG_AudioStream, free);
}

int rl_ptr_AudioStream(lcl_interp *interp, lcl_value *v, AudioStream **out) {
  (void)interp;
  if (lcl_opaque_get(v, RL_TAG_AudioStream, (void **)out) != LCL_OK) return LCL_RC_ERR;
  return LCL_RC_OK;
}

int rl_get_AudioStream(lcl_interp *interp, lcl_value *v, AudioStream *out) {
  AudioStream *p;
  (void)interp;
  if (lcl_opaque_get(v, RL_TAG_AudioStream, (void **)&p) == LCL_OK) {
    *out = *p;
    return LCL_RC_OK;
  }
  return LCL_RC_ERR;
}

/* ---- Sound ---- */
lcl_value *rl_new_Sound(Sound v) {
  Sound *p = (Sound *)malloc(sizeof(*p));
  if (!p) return NULL;
  *p = v;
  return lcl_opaque_new(p, RL_TAG_Sound, free);
}

int rl_ptr_Sound(lcl_interp *interp, lcl_value *v, Sound **out) {
  (void)interp;
  if (lcl_opaque_get(v, RL_TAG_Sound, (void **)out) != LCL_OK) return LCL_RC_ERR;
  return LCL_RC_OK;
}

int rl_get_Sound(lcl_interp *interp, lcl_value *v, Sound *out) {
  Sound *p;
  (void)interp;
  if (lcl_opaque_get(v, RL_TAG_Sound, (void **)&p) == LCL_OK) {
    *out = *p;
    return LCL_RC_OK;
  }
  return LCL_RC_ERR;
}

/* ---- Music ---- */
lcl_value *rl_new_Music(Music v) {
  Music *p = (Music *)malloc(sizeof(*p));
  if (!p) return NULL;
  *p = v;
  return lcl_opaque_new(p, RL_TAG_Music, free);
}

int rl_ptr_Music(lcl_interp *interp, lcl_value *v, Music **out) {
  (void)interp;
  if (lcl_opaque_get(v, RL_TAG_Music, (void **)out) != LCL_OK) return LCL_RC_ERR;
  return LCL_RC_OK;
}

int rl_get_Music(lcl_interp *interp, lcl_value *v, Music *out) {
  Music *p;
  (void)interp;
  if (lcl_opaque_get(v, RL_TAG_Music, (void **)&p) == LCL_OK) {
    *out = *p;
    return LCL_RC_OK;
  }
  return LCL_RC_ERR;
}

/* ---- VrDeviceInfo ---- */
lcl_value *rl_new_VrDeviceInfo(VrDeviceInfo v) {
  VrDeviceInfo *p = (VrDeviceInfo *)malloc(sizeof(*p));
  if (!p) return NULL;
  *p = v;
  return lcl_opaque_new(p, RL_TAG_VrDeviceInfo, free);
}

int rl_ptr_VrDeviceInfo(lcl_interp *interp, lcl_value *v, VrDeviceInfo **out) {
  (void)interp;
  if (lcl_opaque_get(v, RL_TAG_VrDeviceInfo, (void **)out) != LCL_OK) return LCL_RC_ERR;
  return LCL_RC_OK;
}

int rl_get_VrDeviceInfo(lcl_interp *interp, lcl_value *v, VrDeviceInfo *out) {
  VrDeviceInfo *p;
  (void)interp;
  if (lcl_opaque_get(v, RL_TAG_VrDeviceInfo, (void **)&p) == LCL_OK) {
    *out = *p;
    return LCL_RC_OK;
  }
  return LCL_RC_ERR;
}

/* ---- VrStereoConfig ---- */
lcl_value *rl_new_VrStereoConfig(VrStereoConfig v) {
  VrStereoConfig *p = (VrStereoConfig *)malloc(sizeof(*p));
  if (!p) return NULL;
  *p = v;
  return lcl_opaque_new(p, RL_TAG_VrStereoConfig, free);
}

int rl_ptr_VrStereoConfig(lcl_interp *interp, lcl_value *v, VrStereoConfig **out) {
  (void)interp;
  if (lcl_opaque_get(v, RL_TAG_VrStereoConfig, (void **)out) != LCL_OK) return LCL_RC_ERR;
  return LCL_RC_OK;
}

int rl_get_VrStereoConfig(lcl_interp *interp, lcl_value *v, VrStereoConfig *out) {
  VrStereoConfig *p;
  (void)interp;
  if (lcl_opaque_get(v, RL_TAG_VrStereoConfig, (void **)&p) == LCL_OK) {
    *out = *p;
    return LCL_RC_OK;
  }
  return LCL_RC_ERR;
}

/* ---- FilePathList ---- */
lcl_value *rl_new_FilePathList(FilePathList v) {
  FilePathList *p = (FilePathList *)malloc(sizeof(*p));
  if (!p) return NULL;
  *p = v;
  return lcl_opaque_new(p, RL_TAG_FilePathList, free);
}

int rl_ptr_FilePathList(lcl_interp *interp, lcl_value *v, FilePathList **out) {
  (void)interp;
  if (lcl_opaque_get(v, RL_TAG_FilePathList, (void **)out) != LCL_OK) return LCL_RC_ERR;
  return LCL_RC_OK;
}

int rl_get_FilePathList(lcl_interp *interp, lcl_value *v, FilePathList *out) {
  FilePathList *p;
  (void)interp;
  if (lcl_opaque_get(v, RL_TAG_FilePathList, (void **)&p) == LCL_OK) {
    *out = *p;
    return LCL_RC_OK;
  }
  return LCL_RC_ERR;
}

/* ---- AutomationEvent ---- */
lcl_value *rl_new_AutomationEvent(AutomationEvent v) {
  AutomationEvent *p = (AutomationEvent *)malloc(sizeof(*p));
  if (!p) return NULL;
  *p = v;
  return lcl_opaque_new(p, RL_TAG_AutomationEvent, free);
}

int rl_ptr_AutomationEvent(lcl_interp *interp, lcl_value *v, AutomationEvent **out) {
  (void)interp;
  if (lcl_opaque_get(v, RL_TAG_AutomationEvent, (void **)out) != LCL_OK) return LCL_RC_ERR;
  return LCL_RC_OK;
}

int rl_get_AutomationEvent(lcl_interp *interp, lcl_value *v, AutomationEvent *out) {
  AutomationEvent *p;
  (void)interp;
  if (lcl_opaque_get(v, RL_TAG_AutomationEvent, (void **)&p) == LCL_OK) {
    *out = *p;
    return LCL_RC_OK;
  }
  return LCL_RC_ERR;
}

/* ---- AutomationEventList ---- */
lcl_value *rl_new_AutomationEventList(AutomationEventList v) {
  AutomationEventList *p = (AutomationEventList *)malloc(sizeof(*p));
  if (!p) return NULL;
  *p = v;
  return lcl_opaque_new(p, RL_TAG_AutomationEventList, free);
}

int rl_ptr_AutomationEventList(lcl_interp *interp, lcl_value *v, AutomationEventList **out) {
  (void)interp;
  if (lcl_opaque_get(v, RL_TAG_AutomationEventList, (void **)out) != LCL_OK) return LCL_RC_ERR;
  return LCL_RC_OK;
}

int rl_get_AutomationEventList(lcl_interp *interp, lcl_value *v, AutomationEventList *out) {
  AutomationEventList *p;
  (void)interp;
  if (lcl_opaque_get(v, RL_TAG_AutomationEventList, (void **)&p) == LCL_OK) {
    *out = *p;
    return LCL_RC_OK;
  }
  return LCL_RC_ERR;
}

static int rl_ctor_Vector2(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Vector2 v;
  memset(&v, 0, sizeof(v));
  if (argc != 2) return rl_arity_error(interp, "raylib::vector2", 2, argc);
  { double x; if (rl_get_float(interp, argv[0], &x) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::vector2", 1, "x", "float"); v.x = (float)x; }
  { double x; if (rl_get_float(interp, argv[1], &x) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::vector2", 2, "y", "float"); v.y = (float)x; }
  *out = rl_new_Vector2(v);
  return *out ? LCL_RC_OK : LCL_RC_ERR;
}

static int rl_get_Vector2_x(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Vector2 s;
  if (argc != 1) return rl_arity_error(interp, "raylib::vector2_x", 1, argc);
  if (rl_get_Vector2(interp, argv[0], &s) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::vector2_x", 1, "vector2", "Vector2");
  *out = lcl_float_new((double)s.x);
  return *out ? LCL_RC_OK : LCL_RC_ERR;
}

static int rl_set_Vector2_x(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Vector2 *p;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::vector2_set_x", 2, argc);
  if (rl_ptr_Vector2(interp, argv[0], &p) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::vector2_set_x", 1, "vector2", "Vector2");
  { double x; if (rl_get_float(interp, argv[1], &x) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::vector2_set_x", 2, "x", "float"); p->x = (float)x; }
  return LCL_RC_OK;
}

static int rl_get_Vector2_y(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Vector2 s;
  if (argc != 1) return rl_arity_error(interp, "raylib::vector2_y", 1, argc);
  if (rl_get_Vector2(interp, argv[0], &s) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::vector2_y", 1, "vector2", "Vector2");
  *out = lcl_float_new((double)s.y);
  return *out ? LCL_RC_OK : LCL_RC_ERR;
}

static int rl_set_Vector2_y(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Vector2 *p;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::vector2_set_y", 2, argc);
  if (rl_ptr_Vector2(interp, argv[0], &p) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::vector2_set_y", 1, "vector2", "Vector2");
  { double x; if (rl_get_float(interp, argv[1], &x) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::vector2_set_y", 2, "y", "float"); p->y = (float)x; }
  return LCL_RC_OK;
}

static int rl_ctor_Vector3(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Vector3 v;
  memset(&v, 0, sizeof(v));
  if (argc != 3) return rl_arity_error(interp, "raylib::vector3", 3, argc);
  { double x; if (rl_get_float(interp, argv[0], &x) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::vector3", 1, "x", "float"); v.x = (float)x; }
  { double x; if (rl_get_float(interp, argv[1], &x) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::vector3", 2, "y", "float"); v.y = (float)x; }
  { double x; if (rl_get_float(interp, argv[2], &x) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::vector3", 3, "z", "float"); v.z = (float)x; }
  *out = rl_new_Vector3(v);
  return *out ? LCL_RC_OK : LCL_RC_ERR;
}

static int rl_get_Vector3_x(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Vector3 s;
  if (argc != 1) return rl_arity_error(interp, "raylib::vector3_x", 1, argc);
  if (rl_get_Vector3(interp, argv[0], &s) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::vector3_x", 1, "vector3", "Vector3");
  *out = lcl_float_new((double)s.x);
  return *out ? LCL_RC_OK : LCL_RC_ERR;
}

static int rl_set_Vector3_x(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Vector3 *p;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::vector3_set_x", 2, argc);
  if (rl_ptr_Vector3(interp, argv[0], &p) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::vector3_set_x", 1, "vector3", "Vector3");
  { double x; if (rl_get_float(interp, argv[1], &x) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::vector3_set_x", 2, "x", "float"); p->x = (float)x; }
  return LCL_RC_OK;
}

static int rl_get_Vector3_y(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Vector3 s;
  if (argc != 1) return rl_arity_error(interp, "raylib::vector3_y", 1, argc);
  if (rl_get_Vector3(interp, argv[0], &s) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::vector3_y", 1, "vector3", "Vector3");
  *out = lcl_float_new((double)s.y);
  return *out ? LCL_RC_OK : LCL_RC_ERR;
}

static int rl_set_Vector3_y(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Vector3 *p;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::vector3_set_y", 2, argc);
  if (rl_ptr_Vector3(interp, argv[0], &p) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::vector3_set_y", 1, "vector3", "Vector3");
  { double x; if (rl_get_float(interp, argv[1], &x) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::vector3_set_y", 2, "y", "float"); p->y = (float)x; }
  return LCL_RC_OK;
}

static int rl_get_Vector3_z(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Vector3 s;
  if (argc != 1) return rl_arity_error(interp, "raylib::vector3_z", 1, argc);
  if (rl_get_Vector3(interp, argv[0], &s) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::vector3_z", 1, "vector3", "Vector3");
  *out = lcl_float_new((double)s.z);
  return *out ? LCL_RC_OK : LCL_RC_ERR;
}

static int rl_set_Vector3_z(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Vector3 *p;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::vector3_set_z", 2, argc);
  if (rl_ptr_Vector3(interp, argv[0], &p) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::vector3_set_z", 1, "vector3", "Vector3");
  { double x; if (rl_get_float(interp, argv[1], &x) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::vector3_set_z", 2, "z", "float"); p->z = (float)x; }
  return LCL_RC_OK;
}

static int rl_ctor_Vector4(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Vector4 v;
  memset(&v, 0, sizeof(v));
  if (argc != 4) return rl_arity_error(interp, "raylib::vector4", 4, argc);
  { double x; if (rl_get_float(interp, argv[0], &x) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::vector4", 1, "x", "float"); v.x = (float)x; }
  { double x; if (rl_get_float(interp, argv[1], &x) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::vector4", 2, "y", "float"); v.y = (float)x; }
  { double x; if (rl_get_float(interp, argv[2], &x) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::vector4", 3, "z", "float"); v.z = (float)x; }
  { double x; if (rl_get_float(interp, argv[3], &x) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::vector4", 4, "w", "float"); v.w = (float)x; }
  *out = rl_new_Vector4(v);
  return *out ? LCL_RC_OK : LCL_RC_ERR;
}

static int rl_get_Vector4_x(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Vector4 s;
  if (argc != 1) return rl_arity_error(interp, "raylib::vector4_x", 1, argc);
  if (rl_get_Vector4(interp, argv[0], &s) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::vector4_x", 1, "vector4", "Vector4");
  *out = lcl_float_new((double)s.x);
  return *out ? LCL_RC_OK : LCL_RC_ERR;
}

static int rl_set_Vector4_x(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Vector4 *p;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::vector4_set_x", 2, argc);
  if (rl_ptr_Vector4(interp, argv[0], &p) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::vector4_set_x", 1, "vector4", "Vector4");
  { double x; if (rl_get_float(interp, argv[1], &x) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::vector4_set_x", 2, "x", "float"); p->x = (float)x; }
  return LCL_RC_OK;
}

static int rl_get_Vector4_y(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Vector4 s;
  if (argc != 1) return rl_arity_error(interp, "raylib::vector4_y", 1, argc);
  if (rl_get_Vector4(interp, argv[0], &s) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::vector4_y", 1, "vector4", "Vector4");
  *out = lcl_float_new((double)s.y);
  return *out ? LCL_RC_OK : LCL_RC_ERR;
}

static int rl_set_Vector4_y(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Vector4 *p;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::vector4_set_y", 2, argc);
  if (rl_ptr_Vector4(interp, argv[0], &p) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::vector4_set_y", 1, "vector4", "Vector4");
  { double x; if (rl_get_float(interp, argv[1], &x) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::vector4_set_y", 2, "y", "float"); p->y = (float)x; }
  return LCL_RC_OK;
}

static int rl_get_Vector4_z(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Vector4 s;
  if (argc != 1) return rl_arity_error(interp, "raylib::vector4_z", 1, argc);
  if (rl_get_Vector4(interp, argv[0], &s) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::vector4_z", 1, "vector4", "Vector4");
  *out = lcl_float_new((double)s.z);
  return *out ? LCL_RC_OK : LCL_RC_ERR;
}

static int rl_set_Vector4_z(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Vector4 *p;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::vector4_set_z", 2, argc);
  if (rl_ptr_Vector4(interp, argv[0], &p) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::vector4_set_z", 1, "vector4", "Vector4");
  { double x; if (rl_get_float(interp, argv[1], &x) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::vector4_set_z", 2, "z", "float"); p->z = (float)x; }
  return LCL_RC_OK;
}

static int rl_get_Vector4_w(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Vector4 s;
  if (argc != 1) return rl_arity_error(interp, "raylib::vector4_w", 1, argc);
  if (rl_get_Vector4(interp, argv[0], &s) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::vector4_w", 1, "vector4", "Vector4");
  *out = lcl_float_new((double)s.w);
  return *out ? LCL_RC_OK : LCL_RC_ERR;
}

static int rl_set_Vector4_w(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Vector4 *p;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::vector4_set_w", 2, argc);
  if (rl_ptr_Vector4(interp, argv[0], &p) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::vector4_set_w", 1, "vector4", "Vector4");
  { double x; if (rl_get_float(interp, argv[1], &x) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::vector4_set_w", 2, "w", "float"); p->w = (float)x; }
  return LCL_RC_OK;
}

static int rl_ctor_Matrix(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Matrix v;
  memset(&v, 0, sizeof(v));
  if (argc != 16) return rl_arity_error(interp, "raylib::matrix", 16, argc);
  { double x; if (rl_get_float(interp, argv[0], &x) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::matrix", 1, "m0", "float"); v.m0 = (float)x; }
  { double x; if (rl_get_float(interp, argv[1], &x) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::matrix", 2, "m4", "float"); v.m4 = (float)x; }
  { double x; if (rl_get_float(interp, argv[2], &x) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::matrix", 3, "m8", "float"); v.m8 = (float)x; }
  { double x; if (rl_get_float(interp, argv[3], &x) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::matrix", 4, "m12", "float"); v.m12 = (float)x; }
  { double x; if (rl_get_float(interp, argv[4], &x) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::matrix", 5, "m1", "float"); v.m1 = (float)x; }
  { double x; if (rl_get_float(interp, argv[5], &x) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::matrix", 6, "m5", "float"); v.m5 = (float)x; }
  { double x; if (rl_get_float(interp, argv[6], &x) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::matrix", 7, "m9", "float"); v.m9 = (float)x; }
  { double x; if (rl_get_float(interp, argv[7], &x) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::matrix", 8, "m13", "float"); v.m13 = (float)x; }
  { double x; if (rl_get_float(interp, argv[8], &x) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::matrix", 9, "m2", "float"); v.m2 = (float)x; }
  { double x; if (rl_get_float(interp, argv[9], &x) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::matrix", 10, "m6", "float"); v.m6 = (float)x; }
  { double x; if (rl_get_float(interp, argv[10], &x) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::matrix", 11, "m10", "float"); v.m10 = (float)x; }
  { double x; if (rl_get_float(interp, argv[11], &x) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::matrix", 12, "m14", "float"); v.m14 = (float)x; }
  { double x; if (rl_get_float(interp, argv[12], &x) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::matrix", 13, "m3", "float"); v.m3 = (float)x; }
  { double x; if (rl_get_float(interp, argv[13], &x) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::matrix", 14, "m7", "float"); v.m7 = (float)x; }
  { double x; if (rl_get_float(interp, argv[14], &x) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::matrix", 15, "m11", "float"); v.m11 = (float)x; }
  { double x; if (rl_get_float(interp, argv[15], &x) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::matrix", 16, "m15", "float"); v.m15 = (float)x; }
  *out = rl_new_Matrix(v);
  return *out ? LCL_RC_OK : LCL_RC_ERR;
}

static int rl_get_Matrix_m0(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Matrix s;
  if (argc != 1) return rl_arity_error(interp, "raylib::matrix_m0", 1, argc);
  if (rl_get_Matrix(interp, argv[0], &s) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::matrix_m0", 1, "matrix", "Matrix");
  *out = lcl_float_new((double)s.m0);
  return *out ? LCL_RC_OK : LCL_RC_ERR;
}

static int rl_set_Matrix_m0(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Matrix *p;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::matrix_set_m0", 2, argc);
  if (rl_ptr_Matrix(interp, argv[0], &p) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::matrix_set_m0", 1, "matrix", "Matrix");
  { double x; if (rl_get_float(interp, argv[1], &x) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::matrix_set_m0", 2, "m0", "float"); p->m0 = (float)x; }
  return LCL_RC_OK;
}

static int rl_get_Matrix_m4(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Matrix s;
  if (argc != 1) return rl_arity_error(interp, "raylib::matrix_m4", 1, argc);
  if (rl_get_Matrix(interp, argv[0], &s) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::matrix_m4", 1, "matrix", "Matrix");
  *out = lcl_float_new((double)s.m4);
  return *out ? LCL_RC_OK : LCL_RC_ERR;
}

static int rl_set_Matrix_m4(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Matrix *p;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::matrix_set_m4", 2, argc);
  if (rl_ptr_Matrix(interp, argv[0], &p) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::matrix_set_m4", 1, "matrix", "Matrix");
  { double x; if (rl_get_float(interp, argv[1], &x) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::matrix_set_m4", 2, "m4", "float"); p->m4 = (float)x; }
  return LCL_RC_OK;
}

static int rl_get_Matrix_m8(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Matrix s;
  if (argc != 1) return rl_arity_error(interp, "raylib::matrix_m8", 1, argc);
  if (rl_get_Matrix(interp, argv[0], &s) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::matrix_m8", 1, "matrix", "Matrix");
  *out = lcl_float_new((double)s.m8);
  return *out ? LCL_RC_OK : LCL_RC_ERR;
}

static int rl_set_Matrix_m8(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Matrix *p;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::matrix_set_m8", 2, argc);
  if (rl_ptr_Matrix(interp, argv[0], &p) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::matrix_set_m8", 1, "matrix", "Matrix");
  { double x; if (rl_get_float(interp, argv[1], &x) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::matrix_set_m8", 2, "m8", "float"); p->m8 = (float)x; }
  return LCL_RC_OK;
}

static int rl_get_Matrix_m12(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Matrix s;
  if (argc != 1) return rl_arity_error(interp, "raylib::matrix_m12", 1, argc);
  if (rl_get_Matrix(interp, argv[0], &s) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::matrix_m12", 1, "matrix", "Matrix");
  *out = lcl_float_new((double)s.m12);
  return *out ? LCL_RC_OK : LCL_RC_ERR;
}

static int rl_set_Matrix_m12(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Matrix *p;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::matrix_set_m12", 2, argc);
  if (rl_ptr_Matrix(interp, argv[0], &p) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::matrix_set_m12", 1, "matrix", "Matrix");
  { double x; if (rl_get_float(interp, argv[1], &x) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::matrix_set_m12", 2, "m12", "float"); p->m12 = (float)x; }
  return LCL_RC_OK;
}

static int rl_get_Matrix_m1(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Matrix s;
  if (argc != 1) return rl_arity_error(interp, "raylib::matrix_m1", 1, argc);
  if (rl_get_Matrix(interp, argv[0], &s) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::matrix_m1", 1, "matrix", "Matrix");
  *out = lcl_float_new((double)s.m1);
  return *out ? LCL_RC_OK : LCL_RC_ERR;
}

static int rl_set_Matrix_m1(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Matrix *p;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::matrix_set_m1", 2, argc);
  if (rl_ptr_Matrix(interp, argv[0], &p) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::matrix_set_m1", 1, "matrix", "Matrix");
  { double x; if (rl_get_float(interp, argv[1], &x) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::matrix_set_m1", 2, "m1", "float"); p->m1 = (float)x; }
  return LCL_RC_OK;
}

static int rl_get_Matrix_m5(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Matrix s;
  if (argc != 1) return rl_arity_error(interp, "raylib::matrix_m5", 1, argc);
  if (rl_get_Matrix(interp, argv[0], &s) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::matrix_m5", 1, "matrix", "Matrix");
  *out = lcl_float_new((double)s.m5);
  return *out ? LCL_RC_OK : LCL_RC_ERR;
}

static int rl_set_Matrix_m5(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Matrix *p;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::matrix_set_m5", 2, argc);
  if (rl_ptr_Matrix(interp, argv[0], &p) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::matrix_set_m5", 1, "matrix", "Matrix");
  { double x; if (rl_get_float(interp, argv[1], &x) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::matrix_set_m5", 2, "m5", "float"); p->m5 = (float)x; }
  return LCL_RC_OK;
}

static int rl_get_Matrix_m9(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Matrix s;
  if (argc != 1) return rl_arity_error(interp, "raylib::matrix_m9", 1, argc);
  if (rl_get_Matrix(interp, argv[0], &s) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::matrix_m9", 1, "matrix", "Matrix");
  *out = lcl_float_new((double)s.m9);
  return *out ? LCL_RC_OK : LCL_RC_ERR;
}

static int rl_set_Matrix_m9(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Matrix *p;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::matrix_set_m9", 2, argc);
  if (rl_ptr_Matrix(interp, argv[0], &p) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::matrix_set_m9", 1, "matrix", "Matrix");
  { double x; if (rl_get_float(interp, argv[1], &x) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::matrix_set_m9", 2, "m9", "float"); p->m9 = (float)x; }
  return LCL_RC_OK;
}

static int rl_get_Matrix_m13(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Matrix s;
  if (argc != 1) return rl_arity_error(interp, "raylib::matrix_m13", 1, argc);
  if (rl_get_Matrix(interp, argv[0], &s) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::matrix_m13", 1, "matrix", "Matrix");
  *out = lcl_float_new((double)s.m13);
  return *out ? LCL_RC_OK : LCL_RC_ERR;
}

static int rl_set_Matrix_m13(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Matrix *p;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::matrix_set_m13", 2, argc);
  if (rl_ptr_Matrix(interp, argv[0], &p) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::matrix_set_m13", 1, "matrix", "Matrix");
  { double x; if (rl_get_float(interp, argv[1], &x) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::matrix_set_m13", 2, "m13", "float"); p->m13 = (float)x; }
  return LCL_RC_OK;
}

static int rl_get_Matrix_m2(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Matrix s;
  if (argc != 1) return rl_arity_error(interp, "raylib::matrix_m2", 1, argc);
  if (rl_get_Matrix(interp, argv[0], &s) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::matrix_m2", 1, "matrix", "Matrix");
  *out = lcl_float_new((double)s.m2);
  return *out ? LCL_RC_OK : LCL_RC_ERR;
}

static int rl_set_Matrix_m2(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Matrix *p;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::matrix_set_m2", 2, argc);
  if (rl_ptr_Matrix(interp, argv[0], &p) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::matrix_set_m2", 1, "matrix", "Matrix");
  { double x; if (rl_get_float(interp, argv[1], &x) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::matrix_set_m2", 2, "m2", "float"); p->m2 = (float)x; }
  return LCL_RC_OK;
}

static int rl_get_Matrix_m6(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Matrix s;
  if (argc != 1) return rl_arity_error(interp, "raylib::matrix_m6", 1, argc);
  if (rl_get_Matrix(interp, argv[0], &s) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::matrix_m6", 1, "matrix", "Matrix");
  *out = lcl_float_new((double)s.m6);
  return *out ? LCL_RC_OK : LCL_RC_ERR;
}

static int rl_set_Matrix_m6(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Matrix *p;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::matrix_set_m6", 2, argc);
  if (rl_ptr_Matrix(interp, argv[0], &p) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::matrix_set_m6", 1, "matrix", "Matrix");
  { double x; if (rl_get_float(interp, argv[1], &x) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::matrix_set_m6", 2, "m6", "float"); p->m6 = (float)x; }
  return LCL_RC_OK;
}

static int rl_get_Matrix_m10(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Matrix s;
  if (argc != 1) return rl_arity_error(interp, "raylib::matrix_m10", 1, argc);
  if (rl_get_Matrix(interp, argv[0], &s) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::matrix_m10", 1, "matrix", "Matrix");
  *out = lcl_float_new((double)s.m10);
  return *out ? LCL_RC_OK : LCL_RC_ERR;
}

static int rl_set_Matrix_m10(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Matrix *p;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::matrix_set_m10", 2, argc);
  if (rl_ptr_Matrix(interp, argv[0], &p) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::matrix_set_m10", 1, "matrix", "Matrix");
  { double x; if (rl_get_float(interp, argv[1], &x) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::matrix_set_m10", 2, "m10", "float"); p->m10 = (float)x; }
  return LCL_RC_OK;
}

static int rl_get_Matrix_m14(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Matrix s;
  if (argc != 1) return rl_arity_error(interp, "raylib::matrix_m14", 1, argc);
  if (rl_get_Matrix(interp, argv[0], &s) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::matrix_m14", 1, "matrix", "Matrix");
  *out = lcl_float_new((double)s.m14);
  return *out ? LCL_RC_OK : LCL_RC_ERR;
}

static int rl_set_Matrix_m14(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Matrix *p;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::matrix_set_m14", 2, argc);
  if (rl_ptr_Matrix(interp, argv[0], &p) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::matrix_set_m14", 1, "matrix", "Matrix");
  { double x; if (rl_get_float(interp, argv[1], &x) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::matrix_set_m14", 2, "m14", "float"); p->m14 = (float)x; }
  return LCL_RC_OK;
}

static int rl_get_Matrix_m3(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Matrix s;
  if (argc != 1) return rl_arity_error(interp, "raylib::matrix_m3", 1, argc);
  if (rl_get_Matrix(interp, argv[0], &s) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::matrix_m3", 1, "matrix", "Matrix");
  *out = lcl_float_new((double)s.m3);
  return *out ? LCL_RC_OK : LCL_RC_ERR;
}

static int rl_set_Matrix_m3(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Matrix *p;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::matrix_set_m3", 2, argc);
  if (rl_ptr_Matrix(interp, argv[0], &p) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::matrix_set_m3", 1, "matrix", "Matrix");
  { double x; if (rl_get_float(interp, argv[1], &x) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::matrix_set_m3", 2, "m3", "float"); p->m3 = (float)x; }
  return LCL_RC_OK;
}

static int rl_get_Matrix_m7(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Matrix s;
  if (argc != 1) return rl_arity_error(interp, "raylib::matrix_m7", 1, argc);
  if (rl_get_Matrix(interp, argv[0], &s) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::matrix_m7", 1, "matrix", "Matrix");
  *out = lcl_float_new((double)s.m7);
  return *out ? LCL_RC_OK : LCL_RC_ERR;
}

static int rl_set_Matrix_m7(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Matrix *p;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::matrix_set_m7", 2, argc);
  if (rl_ptr_Matrix(interp, argv[0], &p) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::matrix_set_m7", 1, "matrix", "Matrix");
  { double x; if (rl_get_float(interp, argv[1], &x) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::matrix_set_m7", 2, "m7", "float"); p->m7 = (float)x; }
  return LCL_RC_OK;
}

static int rl_get_Matrix_m11(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Matrix s;
  if (argc != 1) return rl_arity_error(interp, "raylib::matrix_m11", 1, argc);
  if (rl_get_Matrix(interp, argv[0], &s) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::matrix_m11", 1, "matrix", "Matrix");
  *out = lcl_float_new((double)s.m11);
  return *out ? LCL_RC_OK : LCL_RC_ERR;
}

static int rl_set_Matrix_m11(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Matrix *p;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::matrix_set_m11", 2, argc);
  if (rl_ptr_Matrix(interp, argv[0], &p) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::matrix_set_m11", 1, "matrix", "Matrix");
  { double x; if (rl_get_float(interp, argv[1], &x) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::matrix_set_m11", 2, "m11", "float"); p->m11 = (float)x; }
  return LCL_RC_OK;
}

static int rl_get_Matrix_m15(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Matrix s;
  if (argc != 1) return rl_arity_error(interp, "raylib::matrix_m15", 1, argc);
  if (rl_get_Matrix(interp, argv[0], &s) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::matrix_m15", 1, "matrix", "Matrix");
  *out = lcl_float_new((double)s.m15);
  return *out ? LCL_RC_OK : LCL_RC_ERR;
}

static int rl_set_Matrix_m15(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Matrix *p;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::matrix_set_m15", 2, argc);
  if (rl_ptr_Matrix(interp, argv[0], &p) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::matrix_set_m15", 1, "matrix", "Matrix");
  { double x; if (rl_get_float(interp, argv[1], &x) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::matrix_set_m15", 2, "m15", "float"); p->m15 = (float)x; }
  return LCL_RC_OK;
}

static int rl_ctor_Color(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Color v;
  memset(&v, 0, sizeof(v));
  if (argc != 4) return rl_arity_error(interp, "raylib::color", 4, argc);
  { long x; if (rl_get_int(interp, argv[0], &x) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::color", 1, "r", "int"); v.r = (unsigned char)x; }
  { long x; if (rl_get_int(interp, argv[1], &x) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::color", 2, "g", "int"); v.g = (unsigned char)x; }
  { long x; if (rl_get_int(interp, argv[2], &x) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::color", 3, "b", "int"); v.b = (unsigned char)x; }
  { long x; if (rl_get_int(interp, argv[3], &x) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::color", 4, "a", "int"); v.a = (unsigned char)x; }
  *out = rl_new_Color(v);
  return *out ? LCL_RC_OK : LCL_RC_ERR;
}

static int rl_get_Color_r(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Color s;
  if (argc != 1) return rl_arity_error(interp, "raylib::color_r", 1, argc);
  if (rl_get_Color(interp, argv[0], &s) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::color_r", 1, "color", "Color");
  *out = lcl_int_new((long)s.r);
  return *out ? LCL_RC_OK : LCL_RC_ERR;
}

static int rl_set_Color_r(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Color *p;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::color_set_r", 2, argc);
  if (rl_ptr_Color(interp, argv[0], &p) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::color_set_r", 1, "color", "Color");
  { long x; if (rl_get_int(interp, argv[1], &x) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::color_set_r", 2, "r", "int"); p->r = (unsigned char)x; }
  return LCL_RC_OK;
}

static int rl_get_Color_g(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Color s;
  if (argc != 1) return rl_arity_error(interp, "raylib::color_g", 1, argc);
  if (rl_get_Color(interp, argv[0], &s) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::color_g", 1, "color", "Color");
  *out = lcl_int_new((long)s.g);
  return *out ? LCL_RC_OK : LCL_RC_ERR;
}

static int rl_set_Color_g(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Color *p;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::color_set_g", 2, argc);
  if (rl_ptr_Color(interp, argv[0], &p) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::color_set_g", 1, "color", "Color");
  { long x; if (rl_get_int(interp, argv[1], &x) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::color_set_g", 2, "g", "int"); p->g = (unsigned char)x; }
  return LCL_RC_OK;
}

static int rl_get_Color_b(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Color s;
  if (argc != 1) return rl_arity_error(interp, "raylib::color_b", 1, argc);
  if (rl_get_Color(interp, argv[0], &s) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::color_b", 1, "color", "Color");
  *out = lcl_int_new((long)s.b);
  return *out ? LCL_RC_OK : LCL_RC_ERR;
}

static int rl_set_Color_b(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Color *p;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::color_set_b", 2, argc);
  if (rl_ptr_Color(interp, argv[0], &p) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::color_set_b", 1, "color", "Color");
  { long x; if (rl_get_int(interp, argv[1], &x) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::color_set_b", 2, "b", "int"); p->b = (unsigned char)x; }
  return LCL_RC_OK;
}

static int rl_get_Color_a(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Color s;
  if (argc != 1) return rl_arity_error(interp, "raylib::color_a", 1, argc);
  if (rl_get_Color(interp, argv[0], &s) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::color_a", 1, "color", "Color");
  *out = lcl_int_new((long)s.a);
  return *out ? LCL_RC_OK : LCL_RC_ERR;
}

static int rl_set_Color_a(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Color *p;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::color_set_a", 2, argc);
  if (rl_ptr_Color(interp, argv[0], &p) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::color_set_a", 1, "color", "Color");
  { long x; if (rl_get_int(interp, argv[1], &x) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::color_set_a", 2, "a", "int"); p->a = (unsigned char)x; }
  return LCL_RC_OK;
}

static int rl_ctor_Rectangle(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Rectangle v;
  memset(&v, 0, sizeof(v));
  if (argc != 4) return rl_arity_error(interp, "raylib::rectangle", 4, argc);
  { double x; if (rl_get_float(interp, argv[0], &x) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::rectangle", 1, "x", "float"); v.x = (float)x; }
  { double x; if (rl_get_float(interp, argv[1], &x) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::rectangle", 2, "y", "float"); v.y = (float)x; }
  { double x; if (rl_get_float(interp, argv[2], &x) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::rectangle", 3, "width", "float"); v.width = (float)x; }
  { double x; if (rl_get_float(interp, argv[3], &x) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::rectangle", 4, "height", "float"); v.height = (float)x; }
  *out = rl_new_Rectangle(v);
  return *out ? LCL_RC_OK : LCL_RC_ERR;
}

static int rl_get_Rectangle_x(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Rectangle s;
  if (argc != 1) return rl_arity_error(interp, "raylib::rectangle_x", 1, argc);
  if (rl_get_Rectangle(interp, argv[0], &s) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::rectangle_x", 1, "rectangle", "Rectangle");
  *out = lcl_float_new((double)s.x);
  return *out ? LCL_RC_OK : LCL_RC_ERR;
}

static int rl_set_Rectangle_x(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Rectangle *p;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::rectangle_set_x", 2, argc);
  if (rl_ptr_Rectangle(interp, argv[0], &p) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::rectangle_set_x", 1, "rectangle", "Rectangle");
  { double x; if (rl_get_float(interp, argv[1], &x) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::rectangle_set_x", 2, "x", "float"); p->x = (float)x; }
  return LCL_RC_OK;
}

static int rl_get_Rectangle_y(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Rectangle s;
  if (argc != 1) return rl_arity_error(interp, "raylib::rectangle_y", 1, argc);
  if (rl_get_Rectangle(interp, argv[0], &s) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::rectangle_y", 1, "rectangle", "Rectangle");
  *out = lcl_float_new((double)s.y);
  return *out ? LCL_RC_OK : LCL_RC_ERR;
}

static int rl_set_Rectangle_y(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Rectangle *p;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::rectangle_set_y", 2, argc);
  if (rl_ptr_Rectangle(interp, argv[0], &p) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::rectangle_set_y", 1, "rectangle", "Rectangle");
  { double x; if (rl_get_float(interp, argv[1], &x) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::rectangle_set_y", 2, "y", "float"); p->y = (float)x; }
  return LCL_RC_OK;
}

static int rl_get_Rectangle_width(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Rectangle s;
  if (argc != 1) return rl_arity_error(interp, "raylib::rectangle_width", 1, argc);
  if (rl_get_Rectangle(interp, argv[0], &s) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::rectangle_width", 1, "rectangle", "Rectangle");
  *out = lcl_float_new((double)s.width);
  return *out ? LCL_RC_OK : LCL_RC_ERR;
}

static int rl_set_Rectangle_width(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Rectangle *p;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::rectangle_set_width", 2, argc);
  if (rl_ptr_Rectangle(interp, argv[0], &p) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::rectangle_set_width", 1, "rectangle", "Rectangle");
  { double x; if (rl_get_float(interp, argv[1], &x) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::rectangle_set_width", 2, "width", "float"); p->width = (float)x; }
  return LCL_RC_OK;
}

static int rl_get_Rectangle_height(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Rectangle s;
  if (argc != 1) return rl_arity_error(interp, "raylib::rectangle_height", 1, argc);
  if (rl_get_Rectangle(interp, argv[0], &s) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::rectangle_height", 1, "rectangle", "Rectangle");
  *out = lcl_float_new((double)s.height);
  return *out ? LCL_RC_OK : LCL_RC_ERR;
}

static int rl_set_Rectangle_height(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Rectangle *p;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::rectangle_set_height", 2, argc);
  if (rl_ptr_Rectangle(interp, argv[0], &p) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::rectangle_set_height", 1, "rectangle", "Rectangle");
  { double x; if (rl_get_float(interp, argv[1], &x) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::rectangle_set_height", 2, "height", "float"); p->height = (float)x; }
  return LCL_RC_OK;
}

static int rl_get_Image_width(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Image s;
  if (argc != 1) return rl_arity_error(interp, "raylib::image_width", 1, argc);
  if (rl_get_Image(interp, argv[0], &s) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_width", 1, "image", "Image");
  *out = lcl_int_new((long)s.width);
  return *out ? LCL_RC_OK : LCL_RC_ERR;
}

static int rl_set_Image_width(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Image *p;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::image_set_width", 2, argc);
  if (rl_ptr_Image(interp, argv[0], &p) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_set_width", 1, "image", "Image");
  { long x; if (rl_get_int(interp, argv[1], &x) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_set_width", 2, "width", "int"); p->width = (int)x; }
  return LCL_RC_OK;
}

static int rl_get_Image_height(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Image s;
  if (argc != 1) return rl_arity_error(interp, "raylib::image_height", 1, argc);
  if (rl_get_Image(interp, argv[0], &s) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_height", 1, "image", "Image");
  *out = lcl_int_new((long)s.height);
  return *out ? LCL_RC_OK : LCL_RC_ERR;
}

static int rl_set_Image_height(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Image *p;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::image_set_height", 2, argc);
  if (rl_ptr_Image(interp, argv[0], &p) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_set_height", 1, "image", "Image");
  { long x; if (rl_get_int(interp, argv[1], &x) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_set_height", 2, "height", "int"); p->height = (int)x; }
  return LCL_RC_OK;
}

static int rl_get_Image_mipmaps(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Image s;
  if (argc != 1) return rl_arity_error(interp, "raylib::image_mipmaps", 1, argc);
  if (rl_get_Image(interp, argv[0], &s) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_mipmaps", 1, "image", "Image");
  *out = lcl_int_new((long)s.mipmaps);
  return *out ? LCL_RC_OK : LCL_RC_ERR;
}

static int rl_set_Image_mipmaps(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Image *p;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::image_set_mipmaps", 2, argc);
  if (rl_ptr_Image(interp, argv[0], &p) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_set_mipmaps", 1, "image", "Image");
  { long x; if (rl_get_int(interp, argv[1], &x) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_set_mipmaps", 2, "mipmaps", "int"); p->mipmaps = (int)x; }
  return LCL_RC_OK;
}

static int rl_get_Image_format(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Image s;
  if (argc != 1) return rl_arity_error(interp, "raylib::image_format", 1, argc);
  if (rl_get_Image(interp, argv[0], &s) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_format", 1, "image", "Image");
  *out = lcl_int_new((long)s.format);
  return *out ? LCL_RC_OK : LCL_RC_ERR;
}

static int rl_set_Image_format(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Image *p;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::image_set_format", 2, argc);
  if (rl_ptr_Image(interp, argv[0], &p) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_set_format", 1, "image", "Image");
  { long x; if (rl_get_int(interp, argv[1], &x) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_set_format", 2, "format", "int"); p->format = (int)x; }
  return LCL_RC_OK;
}

static int rl_ctor_Texture(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Texture v;
  memset(&v, 0, sizeof(v));
  if (argc != 5) return rl_arity_error(interp, "raylib::texture", 5, argc);
  { long x; if (rl_get_int(interp, argv[0], &x) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::texture", 1, "id", "int"); v.id = (unsigned int)x; }
  { long x; if (rl_get_int(interp, argv[1], &x) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::texture", 2, "width", "int"); v.width = (int)x; }
  { long x; if (rl_get_int(interp, argv[2], &x) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::texture", 3, "height", "int"); v.height = (int)x; }
  { long x; if (rl_get_int(interp, argv[3], &x) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::texture", 4, "mipmaps", "int"); v.mipmaps = (int)x; }
  { long x; if (rl_get_int(interp, argv[4], &x) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::texture", 5, "format", "int"); v.format = (int)x; }
  *out = rl_new_Texture(v);
  return *out ? LCL_RC_OK : LCL_RC_ERR;
}

static int rl_get_Texture_id(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Texture s;
  if (argc != 1) return rl_arity_error(interp, "raylib::texture_id", 1, argc);
  if (rl_get_Texture(interp, argv[0], &s) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::texture_id", 1, "texture", "Texture");
  *out = lcl_int_new((long)s.id);
  return *out ? LCL_RC_OK : LCL_RC_ERR;
}

static int rl_set_Texture_id(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Texture *p;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::texture_set_id", 2, argc);
  if (rl_ptr_Texture(interp, argv[0], &p) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::texture_set_id", 1, "texture", "Texture");
  { long x; if (rl_get_int(interp, argv[1], &x) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::texture_set_id", 2, "id", "int"); p->id = (unsigned int)x; }
  return LCL_RC_OK;
}

static int rl_get_Texture_width(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Texture s;
  if (argc != 1) return rl_arity_error(interp, "raylib::texture_width", 1, argc);
  if (rl_get_Texture(interp, argv[0], &s) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::texture_width", 1, "texture", "Texture");
  *out = lcl_int_new((long)s.width);
  return *out ? LCL_RC_OK : LCL_RC_ERR;
}

static int rl_set_Texture_width(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Texture *p;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::texture_set_width", 2, argc);
  if (rl_ptr_Texture(interp, argv[0], &p) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::texture_set_width", 1, "texture", "Texture");
  { long x; if (rl_get_int(interp, argv[1], &x) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::texture_set_width", 2, "width", "int"); p->width = (int)x; }
  return LCL_RC_OK;
}

static int rl_get_Texture_height(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Texture s;
  if (argc != 1) return rl_arity_error(interp, "raylib::texture_height", 1, argc);
  if (rl_get_Texture(interp, argv[0], &s) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::texture_height", 1, "texture", "Texture");
  *out = lcl_int_new((long)s.height);
  return *out ? LCL_RC_OK : LCL_RC_ERR;
}

static int rl_set_Texture_height(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Texture *p;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::texture_set_height", 2, argc);
  if (rl_ptr_Texture(interp, argv[0], &p) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::texture_set_height", 1, "texture", "Texture");
  { long x; if (rl_get_int(interp, argv[1], &x) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::texture_set_height", 2, "height", "int"); p->height = (int)x; }
  return LCL_RC_OK;
}

static int rl_get_Texture_mipmaps(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Texture s;
  if (argc != 1) return rl_arity_error(interp, "raylib::texture_mipmaps", 1, argc);
  if (rl_get_Texture(interp, argv[0], &s) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::texture_mipmaps", 1, "texture", "Texture");
  *out = lcl_int_new((long)s.mipmaps);
  return *out ? LCL_RC_OK : LCL_RC_ERR;
}

static int rl_set_Texture_mipmaps(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Texture *p;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::texture_set_mipmaps", 2, argc);
  if (rl_ptr_Texture(interp, argv[0], &p) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::texture_set_mipmaps", 1, "texture", "Texture");
  { long x; if (rl_get_int(interp, argv[1], &x) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::texture_set_mipmaps", 2, "mipmaps", "int"); p->mipmaps = (int)x; }
  return LCL_RC_OK;
}

static int rl_get_Texture_format(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Texture s;
  if (argc != 1) return rl_arity_error(interp, "raylib::texture_format", 1, argc);
  if (rl_get_Texture(interp, argv[0], &s) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::texture_format", 1, "texture", "Texture");
  *out = lcl_int_new((long)s.format);
  return *out ? LCL_RC_OK : LCL_RC_ERR;
}

static int rl_set_Texture_format(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Texture *p;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::texture_set_format", 2, argc);
  if (rl_ptr_Texture(interp, argv[0], &p) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::texture_set_format", 1, "texture", "Texture");
  { long x; if (rl_get_int(interp, argv[1], &x) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::texture_set_format", 2, "format", "int"); p->format = (int)x; }
  return LCL_RC_OK;
}

static int rl_ctor_RenderTexture(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  RenderTexture v;
  memset(&v, 0, sizeof(v));
  if (argc != 3) return rl_arity_error(interp, "raylib::render_texture", 3, argc);
  { long x; if (rl_get_int(interp, argv[0], &x) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::render_texture", 1, "id", "int"); v.id = (unsigned int)x; }
  if (rl_get_Texture(interp, argv[1], &v.texture) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::render_texture", 2, "texture", "Texture");
  if (rl_get_Texture(interp, argv[2], &v.depth) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::render_texture", 3, "depth", "Texture");
  *out = rl_new_RenderTexture(v);
  return *out ? LCL_RC_OK : LCL_RC_ERR;
}

static int rl_get_RenderTexture_id(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  RenderTexture s;
  if (argc != 1) return rl_arity_error(interp, "raylib::render_texture_id", 1, argc);
  if (rl_get_RenderTexture(interp, argv[0], &s) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::render_texture_id", 1, "render_texture", "RenderTexture");
  *out = lcl_int_new((long)s.id);
  return *out ? LCL_RC_OK : LCL_RC_ERR;
}

static int rl_set_RenderTexture_id(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  RenderTexture *p;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::render_texture_set_id", 2, argc);
  if (rl_ptr_RenderTexture(interp, argv[0], &p) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::render_texture_set_id", 1, "render_texture", "RenderTexture");
  { long x; if (rl_get_int(interp, argv[1], &x) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::render_texture_set_id", 2, "id", "int"); p->id = (unsigned int)x; }
  return LCL_RC_OK;
}

static int rl_get_RenderTexture_texture(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  RenderTexture s;
  if (argc != 1) return rl_arity_error(interp, "raylib::render_texture_texture", 1, argc);
  if (rl_get_RenderTexture(interp, argv[0], &s) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::render_texture_texture", 1, "render_texture", "RenderTexture");
  *out = rl_new_Texture(s.texture);
  return *out ? LCL_RC_OK : LCL_RC_ERR;
}

static int rl_set_RenderTexture_texture(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  RenderTexture *p;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::render_texture_set_texture", 2, argc);
  if (rl_ptr_RenderTexture(interp, argv[0], &p) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::render_texture_set_texture", 1, "render_texture", "RenderTexture");
  if (rl_get_Texture(interp, argv[1], &p->texture) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::render_texture_set_texture", 2, "texture", "Texture");
  return LCL_RC_OK;
}

static int rl_get_RenderTexture_depth(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  RenderTexture s;
  if (argc != 1) return rl_arity_error(interp, "raylib::render_texture_depth", 1, argc);
  if (rl_get_RenderTexture(interp, argv[0], &s) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::render_texture_depth", 1, "render_texture", "RenderTexture");
  *out = rl_new_Texture(s.depth);
  return *out ? LCL_RC_OK : LCL_RC_ERR;
}

static int rl_set_RenderTexture_depth(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  RenderTexture *p;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::render_texture_set_depth", 2, argc);
  if (rl_ptr_RenderTexture(interp, argv[0], &p) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::render_texture_set_depth", 1, "render_texture", "RenderTexture");
  if (rl_get_Texture(interp, argv[1], &p->depth) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::render_texture_set_depth", 2, "depth", "Texture");
  return LCL_RC_OK;
}

static int rl_ctor_NPatchInfo(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  NPatchInfo v;
  memset(&v, 0, sizeof(v));
  if (argc != 6) return rl_arity_error(interp, "raylib::npatch_info", 6, argc);
  if (rl_get_Rectangle(interp, argv[0], &v.source) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::npatch_info", 1, "source", "Rectangle");
  { long x; if (rl_get_int(interp, argv[1], &x) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::npatch_info", 2, "left", "int"); v.left = (int)x; }
  { long x; if (rl_get_int(interp, argv[2], &x) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::npatch_info", 3, "top", "int"); v.top = (int)x; }
  { long x; if (rl_get_int(interp, argv[3], &x) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::npatch_info", 4, "right", "int"); v.right = (int)x; }
  { long x; if (rl_get_int(interp, argv[4], &x) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::npatch_info", 5, "bottom", "int"); v.bottom = (int)x; }
  { long x; if (rl_get_int(interp, argv[5], &x) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::npatch_info", 6, "layout", "int"); v.layout = (int)x; }
  *out = rl_new_NPatchInfo(v);
  return *out ? LCL_RC_OK : LCL_RC_ERR;
}

static int rl_get_NPatchInfo_source(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  NPatchInfo s;
  if (argc != 1) return rl_arity_error(interp, "raylib::npatch_info_source", 1, argc);
  if (rl_get_NPatchInfo(interp, argv[0], &s) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::npatch_info_source", 1, "npatch_info", "NPatchInfo");
  *out = rl_new_Rectangle(s.source);
  return *out ? LCL_RC_OK : LCL_RC_ERR;
}

static int rl_set_NPatchInfo_source(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  NPatchInfo *p;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::npatch_info_set_source", 2, argc);
  if (rl_ptr_NPatchInfo(interp, argv[0], &p) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::npatch_info_set_source", 1, "npatch_info", "NPatchInfo");
  if (rl_get_Rectangle(interp, argv[1], &p->source) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::npatch_info_set_source", 2, "source", "Rectangle");
  return LCL_RC_OK;
}

static int rl_get_NPatchInfo_left(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  NPatchInfo s;
  if (argc != 1) return rl_arity_error(interp, "raylib::npatch_info_left", 1, argc);
  if (rl_get_NPatchInfo(interp, argv[0], &s) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::npatch_info_left", 1, "npatch_info", "NPatchInfo");
  *out = lcl_int_new((long)s.left);
  return *out ? LCL_RC_OK : LCL_RC_ERR;
}

static int rl_set_NPatchInfo_left(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  NPatchInfo *p;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::npatch_info_set_left", 2, argc);
  if (rl_ptr_NPatchInfo(interp, argv[0], &p) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::npatch_info_set_left", 1, "npatch_info", "NPatchInfo");
  { long x; if (rl_get_int(interp, argv[1], &x) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::npatch_info_set_left", 2, "left", "int"); p->left = (int)x; }
  return LCL_RC_OK;
}

static int rl_get_NPatchInfo_top(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  NPatchInfo s;
  if (argc != 1) return rl_arity_error(interp, "raylib::npatch_info_top", 1, argc);
  if (rl_get_NPatchInfo(interp, argv[0], &s) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::npatch_info_top", 1, "npatch_info", "NPatchInfo");
  *out = lcl_int_new((long)s.top);
  return *out ? LCL_RC_OK : LCL_RC_ERR;
}

static int rl_set_NPatchInfo_top(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  NPatchInfo *p;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::npatch_info_set_top", 2, argc);
  if (rl_ptr_NPatchInfo(interp, argv[0], &p) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::npatch_info_set_top", 1, "npatch_info", "NPatchInfo");
  { long x; if (rl_get_int(interp, argv[1], &x) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::npatch_info_set_top", 2, "top", "int"); p->top = (int)x; }
  return LCL_RC_OK;
}

static int rl_get_NPatchInfo_right(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  NPatchInfo s;
  if (argc != 1) return rl_arity_error(interp, "raylib::npatch_info_right", 1, argc);
  if (rl_get_NPatchInfo(interp, argv[0], &s) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::npatch_info_right", 1, "npatch_info", "NPatchInfo");
  *out = lcl_int_new((long)s.right);
  return *out ? LCL_RC_OK : LCL_RC_ERR;
}

static int rl_set_NPatchInfo_right(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  NPatchInfo *p;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::npatch_info_set_right", 2, argc);
  if (rl_ptr_NPatchInfo(interp, argv[0], &p) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::npatch_info_set_right", 1, "npatch_info", "NPatchInfo");
  { long x; if (rl_get_int(interp, argv[1], &x) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::npatch_info_set_right", 2, "right", "int"); p->right = (int)x; }
  return LCL_RC_OK;
}

static int rl_get_NPatchInfo_bottom(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  NPatchInfo s;
  if (argc != 1) return rl_arity_error(interp, "raylib::npatch_info_bottom", 1, argc);
  if (rl_get_NPatchInfo(interp, argv[0], &s) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::npatch_info_bottom", 1, "npatch_info", "NPatchInfo");
  *out = lcl_int_new((long)s.bottom);
  return *out ? LCL_RC_OK : LCL_RC_ERR;
}

static int rl_set_NPatchInfo_bottom(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  NPatchInfo *p;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::npatch_info_set_bottom", 2, argc);
  if (rl_ptr_NPatchInfo(interp, argv[0], &p) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::npatch_info_set_bottom", 1, "npatch_info", "NPatchInfo");
  { long x; if (rl_get_int(interp, argv[1], &x) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::npatch_info_set_bottom", 2, "bottom", "int"); p->bottom = (int)x; }
  return LCL_RC_OK;
}

static int rl_get_NPatchInfo_layout(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  NPatchInfo s;
  if (argc != 1) return rl_arity_error(interp, "raylib::npatch_info_layout", 1, argc);
  if (rl_get_NPatchInfo(interp, argv[0], &s) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::npatch_info_layout", 1, "npatch_info", "NPatchInfo");
  *out = lcl_int_new((long)s.layout);
  return *out ? LCL_RC_OK : LCL_RC_ERR;
}

static int rl_set_NPatchInfo_layout(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  NPatchInfo *p;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::npatch_info_set_layout", 2, argc);
  if (rl_ptr_NPatchInfo(interp, argv[0], &p) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::npatch_info_set_layout", 1, "npatch_info", "NPatchInfo");
  { long x; if (rl_get_int(interp, argv[1], &x) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::npatch_info_set_layout", 2, "layout", "int"); p->layout = (int)x; }
  return LCL_RC_OK;
}

static int rl_get_GlyphInfo_value(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  GlyphInfo s;
  if (argc != 1) return rl_arity_error(interp, "raylib::glyph_info_value", 1, argc);
  if (rl_get_GlyphInfo(interp, argv[0], &s) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::glyph_info_value", 1, "glyph_info", "GlyphInfo");
  *out = lcl_int_new((long)s.value);
  return *out ? LCL_RC_OK : LCL_RC_ERR;
}

static int rl_set_GlyphInfo_value(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  GlyphInfo *p;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::glyph_info_set_value", 2, argc);
  if (rl_ptr_GlyphInfo(interp, argv[0], &p) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::glyph_info_set_value", 1, "glyph_info", "GlyphInfo");
  { long x; if (rl_get_int(interp, argv[1], &x) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::glyph_info_set_value", 2, "value", "int"); p->value = (int)x; }
  return LCL_RC_OK;
}

static int rl_get_GlyphInfo_offsetX(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  GlyphInfo s;
  if (argc != 1) return rl_arity_error(interp, "raylib::glyph_info_offset_x", 1, argc);
  if (rl_get_GlyphInfo(interp, argv[0], &s) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::glyph_info_offset_x", 1, "glyph_info", "GlyphInfo");
  *out = lcl_int_new((long)s.offsetX);
  return *out ? LCL_RC_OK : LCL_RC_ERR;
}

static int rl_set_GlyphInfo_offsetX(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  GlyphInfo *p;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::glyph_info_set_offset_x", 2, argc);
  if (rl_ptr_GlyphInfo(interp, argv[0], &p) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::glyph_info_set_offset_x", 1, "glyph_info", "GlyphInfo");
  { long x; if (rl_get_int(interp, argv[1], &x) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::glyph_info_set_offset_x", 2, "offsetX", "int"); p->offsetX = (int)x; }
  return LCL_RC_OK;
}

static int rl_get_GlyphInfo_offsetY(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  GlyphInfo s;
  if (argc != 1) return rl_arity_error(interp, "raylib::glyph_info_offset_y", 1, argc);
  if (rl_get_GlyphInfo(interp, argv[0], &s) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::glyph_info_offset_y", 1, "glyph_info", "GlyphInfo");
  *out = lcl_int_new((long)s.offsetY);
  return *out ? LCL_RC_OK : LCL_RC_ERR;
}

static int rl_set_GlyphInfo_offsetY(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  GlyphInfo *p;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::glyph_info_set_offset_y", 2, argc);
  if (rl_ptr_GlyphInfo(interp, argv[0], &p) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::glyph_info_set_offset_y", 1, "glyph_info", "GlyphInfo");
  { long x; if (rl_get_int(interp, argv[1], &x) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::glyph_info_set_offset_y", 2, "offsetY", "int"); p->offsetY = (int)x; }
  return LCL_RC_OK;
}

static int rl_get_GlyphInfo_advanceX(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  GlyphInfo s;
  if (argc != 1) return rl_arity_error(interp, "raylib::glyph_info_advance_x", 1, argc);
  if (rl_get_GlyphInfo(interp, argv[0], &s) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::glyph_info_advance_x", 1, "glyph_info", "GlyphInfo");
  *out = lcl_int_new((long)s.advanceX);
  return *out ? LCL_RC_OK : LCL_RC_ERR;
}

static int rl_set_GlyphInfo_advanceX(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  GlyphInfo *p;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::glyph_info_set_advance_x", 2, argc);
  if (rl_ptr_GlyphInfo(interp, argv[0], &p) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::glyph_info_set_advance_x", 1, "glyph_info", "GlyphInfo");
  { long x; if (rl_get_int(interp, argv[1], &x) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::glyph_info_set_advance_x", 2, "advanceX", "int"); p->advanceX = (int)x; }
  return LCL_RC_OK;
}

static int rl_get_GlyphInfo_image(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  GlyphInfo s;
  if (argc != 1) return rl_arity_error(interp, "raylib::glyph_info_image", 1, argc);
  if (rl_get_GlyphInfo(interp, argv[0], &s) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::glyph_info_image", 1, "glyph_info", "GlyphInfo");
  *out = rl_new_Image(s.image);
  return *out ? LCL_RC_OK : LCL_RC_ERR;
}

static int rl_set_GlyphInfo_image(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  GlyphInfo *p;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::glyph_info_set_image", 2, argc);
  if (rl_ptr_GlyphInfo(interp, argv[0], &p) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::glyph_info_set_image", 1, "glyph_info", "GlyphInfo");
  if (rl_get_Image(interp, argv[1], &p->image) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::glyph_info_set_image", 2, "image", "Image");
  return LCL_RC_OK;
}

static int rl_get_Font_baseSize(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Font s;
  if (argc != 1) return rl_arity_error(interp, "raylib::font_base_size", 1, argc);
  if (rl_get_Font(interp, argv[0], &s) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::font_base_size", 1, "font", "Font");
  *out = lcl_int_new((long)s.baseSize);
  return *out ? LCL_RC_OK : LCL_RC_ERR;
}

static int rl_set_Font_baseSize(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Font *p;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::font_set_base_size", 2, argc);
  if (rl_ptr_Font(interp, argv[0], &p) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::font_set_base_size", 1, "font", "Font");
  { long x; if (rl_get_int(interp, argv[1], &x) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::font_set_base_size", 2, "baseSize", "int"); p->baseSize = (int)x; }
  return LCL_RC_OK;
}

static int rl_get_Font_glyphCount(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Font s;
  if (argc != 1) return rl_arity_error(interp, "raylib::font_glyph_count", 1, argc);
  if (rl_get_Font(interp, argv[0], &s) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::font_glyph_count", 1, "font", "Font");
  *out = lcl_int_new((long)s.glyphCount);
  return *out ? LCL_RC_OK : LCL_RC_ERR;
}

static int rl_set_Font_glyphCount(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Font *p;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::font_set_glyph_count", 2, argc);
  if (rl_ptr_Font(interp, argv[0], &p) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::font_set_glyph_count", 1, "font", "Font");
  { long x; if (rl_get_int(interp, argv[1], &x) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::font_set_glyph_count", 2, "glyphCount", "int"); p->glyphCount = (int)x; }
  return LCL_RC_OK;
}

static int rl_get_Font_glyphPadding(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Font s;
  if (argc != 1) return rl_arity_error(interp, "raylib::font_glyph_padding", 1, argc);
  if (rl_get_Font(interp, argv[0], &s) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::font_glyph_padding", 1, "font", "Font");
  *out = lcl_int_new((long)s.glyphPadding);
  return *out ? LCL_RC_OK : LCL_RC_ERR;
}

static int rl_set_Font_glyphPadding(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Font *p;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::font_set_glyph_padding", 2, argc);
  if (rl_ptr_Font(interp, argv[0], &p) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::font_set_glyph_padding", 1, "font", "Font");
  { long x; if (rl_get_int(interp, argv[1], &x) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::font_set_glyph_padding", 2, "glyphPadding", "int"); p->glyphPadding = (int)x; }
  return LCL_RC_OK;
}

static int rl_get_Font_texture(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Font s;
  if (argc != 1) return rl_arity_error(interp, "raylib::font_texture", 1, argc);
  if (rl_get_Font(interp, argv[0], &s) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::font_texture", 1, "font", "Font");
  *out = rl_new_Texture(s.texture);
  return *out ? LCL_RC_OK : LCL_RC_ERR;
}

static int rl_set_Font_texture(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Font *p;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::font_set_texture", 2, argc);
  if (rl_ptr_Font(interp, argv[0], &p) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::font_set_texture", 1, "font", "Font");
  if (rl_get_Texture(interp, argv[1], &p->texture) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::font_set_texture", 2, "texture", "Texture");
  return LCL_RC_OK;
}

static int rl_ctor_Camera3D(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Camera3D v;
  memset(&v, 0, sizeof(v));
  if (argc != 5) return rl_arity_error(interp, "raylib::camera_3d", 5, argc);
  if (rl_get_Vector3(interp, argv[0], &v.position) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::camera_3d", 1, "position", "Vector3");
  if (rl_get_Vector3(interp, argv[1], &v.target) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::camera_3d", 2, "target", "Vector3");
  if (rl_get_Vector3(interp, argv[2], &v.up) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::camera_3d", 3, "up", "Vector3");
  { double x; if (rl_get_float(interp, argv[3], &x) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::camera_3d", 4, "fovy", "float"); v.fovy = (float)x; }
  { long x; if (rl_get_int(interp, argv[4], &x) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::camera_3d", 5, "projection", "int"); v.projection = (int)x; }
  *out = rl_new_Camera3D(v);
  return *out ? LCL_RC_OK : LCL_RC_ERR;
}

static int rl_get_Camera3D_position(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Camera3D s;
  if (argc != 1) return rl_arity_error(interp, "raylib::camera_3d_position", 1, argc);
  if (rl_get_Camera3D(interp, argv[0], &s) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::camera_3d_position", 1, "camera_3d", "Camera3D");
  *out = rl_new_Vector3(s.position);
  return *out ? LCL_RC_OK : LCL_RC_ERR;
}

static int rl_set_Camera3D_position(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Camera3D *p;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::camera_3d_set_position", 2, argc);
  if (rl_ptr_Camera3D(interp, argv[0], &p) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::camera_3d_set_position", 1, "camera_3d", "Camera3D");
  if (rl_get_Vector3(interp, argv[1], &p->position) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::camera_3d_set_position", 2, "position", "Vector3");
  return LCL_RC_OK;
}

static int rl_get_Camera3D_target(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Camera3D s;
  if (argc != 1) return rl_arity_error(interp, "raylib::camera_3d_target", 1, argc);
  if (rl_get_Camera3D(interp, argv[0], &s) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::camera_3d_target", 1, "camera_3d", "Camera3D");
  *out = rl_new_Vector3(s.target);
  return *out ? LCL_RC_OK : LCL_RC_ERR;
}

static int rl_set_Camera3D_target(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Camera3D *p;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::camera_3d_set_target", 2, argc);
  if (rl_ptr_Camera3D(interp, argv[0], &p) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::camera_3d_set_target", 1, "camera_3d", "Camera3D");
  if (rl_get_Vector3(interp, argv[1], &p->target) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::camera_3d_set_target", 2, "target", "Vector3");
  return LCL_RC_OK;
}

static int rl_get_Camera3D_up(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Camera3D s;
  if (argc != 1) return rl_arity_error(interp, "raylib::camera_3d_up", 1, argc);
  if (rl_get_Camera3D(interp, argv[0], &s) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::camera_3d_up", 1, "camera_3d", "Camera3D");
  *out = rl_new_Vector3(s.up);
  return *out ? LCL_RC_OK : LCL_RC_ERR;
}

static int rl_set_Camera3D_up(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Camera3D *p;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::camera_3d_set_up", 2, argc);
  if (rl_ptr_Camera3D(interp, argv[0], &p) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::camera_3d_set_up", 1, "camera_3d", "Camera3D");
  if (rl_get_Vector3(interp, argv[1], &p->up) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::camera_3d_set_up", 2, "up", "Vector3");
  return LCL_RC_OK;
}

static int rl_get_Camera3D_fovy(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Camera3D s;
  if (argc != 1) return rl_arity_error(interp, "raylib::camera_3d_fovy", 1, argc);
  if (rl_get_Camera3D(interp, argv[0], &s) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::camera_3d_fovy", 1, "camera_3d", "Camera3D");
  *out = lcl_float_new((double)s.fovy);
  return *out ? LCL_RC_OK : LCL_RC_ERR;
}

static int rl_set_Camera3D_fovy(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Camera3D *p;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::camera_3d_set_fovy", 2, argc);
  if (rl_ptr_Camera3D(interp, argv[0], &p) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::camera_3d_set_fovy", 1, "camera_3d", "Camera3D");
  { double x; if (rl_get_float(interp, argv[1], &x) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::camera_3d_set_fovy", 2, "fovy", "float"); p->fovy = (float)x; }
  return LCL_RC_OK;
}

static int rl_get_Camera3D_projection(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Camera3D s;
  if (argc != 1) return rl_arity_error(interp, "raylib::camera_3d_projection", 1, argc);
  if (rl_get_Camera3D(interp, argv[0], &s) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::camera_3d_projection", 1, "camera_3d", "Camera3D");
  *out = lcl_int_new((long)s.projection);
  return *out ? LCL_RC_OK : LCL_RC_ERR;
}

static int rl_set_Camera3D_projection(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Camera3D *p;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::camera_3d_set_projection", 2, argc);
  if (rl_ptr_Camera3D(interp, argv[0], &p) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::camera_3d_set_projection", 1, "camera_3d", "Camera3D");
  { long x; if (rl_get_int(interp, argv[1], &x) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::camera_3d_set_projection", 2, "projection", "int"); p->projection = (int)x; }
  return LCL_RC_OK;
}

static int rl_ctor_Camera2D(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Camera2D v;
  memset(&v, 0, sizeof(v));
  if (argc != 4) return rl_arity_error(interp, "raylib::camera_2d", 4, argc);
  if (rl_get_Vector2(interp, argv[0], &v.offset) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::camera_2d", 1, "offset", "Vector2");
  if (rl_get_Vector2(interp, argv[1], &v.target) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::camera_2d", 2, "target", "Vector2");
  { double x; if (rl_get_float(interp, argv[2], &x) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::camera_2d", 3, "rotation", "float"); v.rotation = (float)x; }
  { double x; if (rl_get_float(interp, argv[3], &x) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::camera_2d", 4, "zoom", "float"); v.zoom = (float)x; }
  *out = rl_new_Camera2D(v);
  return *out ? LCL_RC_OK : LCL_RC_ERR;
}

static int rl_get_Camera2D_offset(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Camera2D s;
  if (argc != 1) return rl_arity_error(interp, "raylib::camera_2d_offset", 1, argc);
  if (rl_get_Camera2D(interp, argv[0], &s) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::camera_2d_offset", 1, "camera_2d", "Camera2D");
  *out = rl_new_Vector2(s.offset);
  return *out ? LCL_RC_OK : LCL_RC_ERR;
}

static int rl_set_Camera2D_offset(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Camera2D *p;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::camera_2d_set_offset", 2, argc);
  if (rl_ptr_Camera2D(interp, argv[0], &p) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::camera_2d_set_offset", 1, "camera_2d", "Camera2D");
  if (rl_get_Vector2(interp, argv[1], &p->offset) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::camera_2d_set_offset", 2, "offset", "Vector2");
  return LCL_RC_OK;
}

static int rl_get_Camera2D_target(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Camera2D s;
  if (argc != 1) return rl_arity_error(interp, "raylib::camera_2d_target", 1, argc);
  if (rl_get_Camera2D(interp, argv[0], &s) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::camera_2d_target", 1, "camera_2d", "Camera2D");
  *out = rl_new_Vector2(s.target);
  return *out ? LCL_RC_OK : LCL_RC_ERR;
}

static int rl_set_Camera2D_target(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Camera2D *p;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::camera_2d_set_target", 2, argc);
  if (rl_ptr_Camera2D(interp, argv[0], &p) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::camera_2d_set_target", 1, "camera_2d", "Camera2D");
  if (rl_get_Vector2(interp, argv[1], &p->target) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::camera_2d_set_target", 2, "target", "Vector2");
  return LCL_RC_OK;
}

static int rl_get_Camera2D_rotation(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Camera2D s;
  if (argc != 1) return rl_arity_error(interp, "raylib::camera_2d_rotation", 1, argc);
  if (rl_get_Camera2D(interp, argv[0], &s) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::camera_2d_rotation", 1, "camera_2d", "Camera2D");
  *out = lcl_float_new((double)s.rotation);
  return *out ? LCL_RC_OK : LCL_RC_ERR;
}

static int rl_set_Camera2D_rotation(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Camera2D *p;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::camera_2d_set_rotation", 2, argc);
  if (rl_ptr_Camera2D(interp, argv[0], &p) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::camera_2d_set_rotation", 1, "camera_2d", "Camera2D");
  { double x; if (rl_get_float(interp, argv[1], &x) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::camera_2d_set_rotation", 2, "rotation", "float"); p->rotation = (float)x; }
  return LCL_RC_OK;
}

static int rl_get_Camera2D_zoom(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Camera2D s;
  if (argc != 1) return rl_arity_error(interp, "raylib::camera_2d_zoom", 1, argc);
  if (rl_get_Camera2D(interp, argv[0], &s) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::camera_2d_zoom", 1, "camera_2d", "Camera2D");
  *out = lcl_float_new((double)s.zoom);
  return *out ? LCL_RC_OK : LCL_RC_ERR;
}

static int rl_set_Camera2D_zoom(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Camera2D *p;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::camera_2d_set_zoom", 2, argc);
  if (rl_ptr_Camera2D(interp, argv[0], &p) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::camera_2d_set_zoom", 1, "camera_2d", "Camera2D");
  { double x; if (rl_get_float(interp, argv[1], &x) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::camera_2d_set_zoom", 2, "zoom", "float"); p->zoom = (float)x; }
  return LCL_RC_OK;
}

static int rl_get_Mesh_vertexCount(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Mesh s;
  if (argc != 1) return rl_arity_error(interp, "raylib::mesh_vertex_count", 1, argc);
  if (rl_get_Mesh(interp, argv[0], &s) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::mesh_vertex_count", 1, "mesh", "Mesh");
  *out = lcl_int_new((long)s.vertexCount);
  return *out ? LCL_RC_OK : LCL_RC_ERR;
}

static int rl_set_Mesh_vertexCount(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Mesh *p;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::mesh_set_vertex_count", 2, argc);
  if (rl_ptr_Mesh(interp, argv[0], &p) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::mesh_set_vertex_count", 1, "mesh", "Mesh");
  { long x; if (rl_get_int(interp, argv[1], &x) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::mesh_set_vertex_count", 2, "vertexCount", "int"); p->vertexCount = (int)x; }
  return LCL_RC_OK;
}

static int rl_get_Mesh_triangleCount(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Mesh s;
  if (argc != 1) return rl_arity_error(interp, "raylib::mesh_triangle_count", 1, argc);
  if (rl_get_Mesh(interp, argv[0], &s) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::mesh_triangle_count", 1, "mesh", "Mesh");
  *out = lcl_int_new((long)s.triangleCount);
  return *out ? LCL_RC_OK : LCL_RC_ERR;
}

static int rl_set_Mesh_triangleCount(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Mesh *p;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::mesh_set_triangle_count", 2, argc);
  if (rl_ptr_Mesh(interp, argv[0], &p) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::mesh_set_triangle_count", 1, "mesh", "Mesh");
  { long x; if (rl_get_int(interp, argv[1], &x) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::mesh_set_triangle_count", 2, "triangleCount", "int"); p->triangleCount = (int)x; }
  return LCL_RC_OK;
}

static int rl_get_Mesh_boneCount(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Mesh s;
  if (argc != 1) return rl_arity_error(interp, "raylib::mesh_bone_count", 1, argc);
  if (rl_get_Mesh(interp, argv[0], &s) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::mesh_bone_count", 1, "mesh", "Mesh");
  *out = lcl_int_new((long)s.boneCount);
  return *out ? LCL_RC_OK : LCL_RC_ERR;
}

static int rl_set_Mesh_boneCount(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Mesh *p;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::mesh_set_bone_count", 2, argc);
  if (rl_ptr_Mesh(interp, argv[0], &p) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::mesh_set_bone_count", 1, "mesh", "Mesh");
  { long x; if (rl_get_int(interp, argv[1], &x) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::mesh_set_bone_count", 2, "boneCount", "int"); p->boneCount = (int)x; }
  return LCL_RC_OK;
}

static int rl_get_Mesh_vaoId(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Mesh s;
  if (argc != 1) return rl_arity_error(interp, "raylib::mesh_vao_id", 1, argc);
  if (rl_get_Mesh(interp, argv[0], &s) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::mesh_vao_id", 1, "mesh", "Mesh");
  *out = lcl_int_new((long)s.vaoId);
  return *out ? LCL_RC_OK : LCL_RC_ERR;
}

static int rl_set_Mesh_vaoId(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Mesh *p;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::mesh_set_vao_id", 2, argc);
  if (rl_ptr_Mesh(interp, argv[0], &p) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::mesh_set_vao_id", 1, "mesh", "Mesh");
  { long x; if (rl_get_int(interp, argv[1], &x) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::mesh_set_vao_id", 2, "vaoId", "int"); p->vaoId = (unsigned int)x; }
  return LCL_RC_OK;
}

static int rl_get_Shader_id(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Shader s;
  if (argc != 1) return rl_arity_error(interp, "raylib::shader_id", 1, argc);
  if (rl_get_Shader(interp, argv[0], &s) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::shader_id", 1, "shader", "Shader");
  *out = lcl_int_new((long)s.id);
  return *out ? LCL_RC_OK : LCL_RC_ERR;
}

static int rl_set_Shader_id(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Shader *p;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::shader_set_id", 2, argc);
  if (rl_ptr_Shader(interp, argv[0], &p) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::shader_set_id", 1, "shader", "Shader");
  { long x; if (rl_get_int(interp, argv[1], &x) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::shader_set_id", 2, "id", "int"); p->id = (unsigned int)x; }
  return LCL_RC_OK;
}

static int rl_ctor_MaterialMap(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  MaterialMap v;
  memset(&v, 0, sizeof(v));
  if (argc != 3) return rl_arity_error(interp, "raylib::material_map", 3, argc);
  if (rl_get_Texture(interp, argv[0], &v.texture) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::material_map", 1, "texture", "Texture");
  if (rl_get_Color(interp, argv[1], &v.color) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::material_map", 2, "color", "Color");
  { double x; if (rl_get_float(interp, argv[2], &x) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::material_map", 3, "value", "float"); v.value = (float)x; }
  *out = rl_new_MaterialMap(v);
  return *out ? LCL_RC_OK : LCL_RC_ERR;
}

static int rl_get_MaterialMap_texture(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  MaterialMap s;
  if (argc != 1) return rl_arity_error(interp, "raylib::material_map_texture", 1, argc);
  if (rl_get_MaterialMap(interp, argv[0], &s) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::material_map_texture", 1, "material_map", "MaterialMap");
  *out = rl_new_Texture(s.texture);
  return *out ? LCL_RC_OK : LCL_RC_ERR;
}

static int rl_set_MaterialMap_texture(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  MaterialMap *p;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::material_map_set_texture", 2, argc);
  if (rl_ptr_MaterialMap(interp, argv[0], &p) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::material_map_set_texture", 1, "material_map", "MaterialMap");
  if (rl_get_Texture(interp, argv[1], &p->texture) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::material_map_set_texture", 2, "texture", "Texture");
  return LCL_RC_OK;
}

static int rl_get_MaterialMap_color(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  MaterialMap s;
  if (argc != 1) return rl_arity_error(interp, "raylib::material_map_color", 1, argc);
  if (rl_get_MaterialMap(interp, argv[0], &s) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::material_map_color", 1, "material_map", "MaterialMap");
  *out = rl_new_Color(s.color);
  return *out ? LCL_RC_OK : LCL_RC_ERR;
}

static int rl_set_MaterialMap_color(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  MaterialMap *p;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::material_map_set_color", 2, argc);
  if (rl_ptr_MaterialMap(interp, argv[0], &p) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::material_map_set_color", 1, "material_map", "MaterialMap");
  if (rl_get_Color(interp, argv[1], &p->color) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::material_map_set_color", 2, "color", "Color");
  return LCL_RC_OK;
}

static int rl_get_MaterialMap_value(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  MaterialMap s;
  if (argc != 1) return rl_arity_error(interp, "raylib::material_map_value", 1, argc);
  if (rl_get_MaterialMap(interp, argv[0], &s) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::material_map_value", 1, "material_map", "MaterialMap");
  *out = lcl_float_new((double)s.value);
  return *out ? LCL_RC_OK : LCL_RC_ERR;
}

static int rl_set_MaterialMap_value(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  MaterialMap *p;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::material_map_set_value", 2, argc);
  if (rl_ptr_MaterialMap(interp, argv[0], &p) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::material_map_set_value", 1, "material_map", "MaterialMap");
  { double x; if (rl_get_float(interp, argv[1], &x) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::material_map_set_value", 2, "value", "float"); p->value = (float)x; }
  return LCL_RC_OK;
}

static int rl_get_Material_shader(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Material s;
  if (argc != 1) return rl_arity_error(interp, "raylib::material_shader", 1, argc);
  if (rl_get_Material(interp, argv[0], &s) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::material_shader", 1, "material", "Material");
  *out = rl_new_Shader(s.shader);
  return *out ? LCL_RC_OK : LCL_RC_ERR;
}

static int rl_set_Material_shader(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Material *p;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::material_set_shader", 2, argc);
  if (rl_ptr_Material(interp, argv[0], &p) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::material_set_shader", 1, "material", "Material");
  if (rl_get_Shader(interp, argv[1], &p->shader) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::material_set_shader", 2, "shader", "Shader");
  return LCL_RC_OK;
}

static int rl_get_Material_params(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Material *p;
  lcl_value *lst;
  int i;
  if (argc != 1) return rl_arity_error(interp, "raylib::material_params", 1, argc);
  if (rl_ptr_Material(interp, argv[0], &p) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::material_params", 1, "material", "Material");
  lst = lcl_list_new();
  if (!lst) return LCL_RC_ERR;
  for (i = 0; i < 4; i++) {
    lcl_value *item = lcl_float_new((double)p->params[i]);
    if (!item) { lcl_ref_dec(lst); return LCL_RC_ERR; }
    lcl_list_push(&lst, item);
    lcl_ref_dec(item);
  }
  *out = lst;
  return LCL_RC_OK;
}

static int rl_set_Material_params(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Material *p;
  int i;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::material_set_params", 2, argc);
  if (rl_ptr_Material(interp, argv[0], &p) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::material_set_params", 1, "material", "Material");
  if (lcl_value_type_of(argv[1]) != LCL_LIST || lcl_list_len(argv[1]) != 4) return RL_ARG_ERR(interp, "raylib::material_set_params", 2, "params", "list of 4 float");
  for (i = 0; i < 4; i++) {
    lcl_value *item; double x;
    if (lcl_list_get(argv[1], (size_t)i, &item) != LCL_OK) return LCL_RC_ERR;
    if (rl_get_float(interp, item, &x) != LCL_RC_OK) { lcl_ref_dec(item); return RL_ARG_ERR(interp, "raylib::material_set_params", 2, "params", "list of 4 float"); }
    lcl_ref_dec(item);
    p->params[i] = (float)x;
  }
  return LCL_RC_OK;
}

static int rl_ctor_Transform(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Transform v;
  memset(&v, 0, sizeof(v));
  if (argc != 3) return rl_arity_error(interp, "raylib::transform", 3, argc);
  if (rl_get_Vector3(interp, argv[0], &v.translation) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::transform", 1, "translation", "Vector3");
  if (rl_get_Vector4(interp, argv[1], &v.rotation) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::transform", 2, "rotation", "Vector4");
  if (rl_get_Vector3(interp, argv[2], &v.scale) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::transform", 3, "scale", "Vector3");
  *out = rl_new_Transform(v);
  return *out ? LCL_RC_OK : LCL_RC_ERR;
}

static int rl_get_Transform_translation(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Transform s;
  if (argc != 1) return rl_arity_error(interp, "raylib::transform_translation", 1, argc);
  if (rl_get_Transform(interp, argv[0], &s) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::transform_translation", 1, "transform", "Transform");
  *out = rl_new_Vector3(s.translation);
  return *out ? LCL_RC_OK : LCL_RC_ERR;
}

static int rl_set_Transform_translation(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Transform *p;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::transform_set_translation", 2, argc);
  if (rl_ptr_Transform(interp, argv[0], &p) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::transform_set_translation", 1, "transform", "Transform");
  if (rl_get_Vector3(interp, argv[1], &p->translation) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::transform_set_translation", 2, "translation", "Vector3");
  return LCL_RC_OK;
}

static int rl_get_Transform_rotation(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Transform s;
  if (argc != 1) return rl_arity_error(interp, "raylib::transform_rotation", 1, argc);
  if (rl_get_Transform(interp, argv[0], &s) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::transform_rotation", 1, "transform", "Transform");
  *out = rl_new_Vector4(s.rotation);
  return *out ? LCL_RC_OK : LCL_RC_ERR;
}

static int rl_set_Transform_rotation(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Transform *p;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::transform_set_rotation", 2, argc);
  if (rl_ptr_Transform(interp, argv[0], &p) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::transform_set_rotation", 1, "transform", "Transform");
  if (rl_get_Vector4(interp, argv[1], &p->rotation) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::transform_set_rotation", 2, "rotation", "Vector4");
  return LCL_RC_OK;
}

static int rl_get_Transform_scale(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Transform s;
  if (argc != 1) return rl_arity_error(interp, "raylib::transform_scale", 1, argc);
  if (rl_get_Transform(interp, argv[0], &s) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::transform_scale", 1, "transform", "Transform");
  *out = rl_new_Vector3(s.scale);
  return *out ? LCL_RC_OK : LCL_RC_ERR;
}

static int rl_set_Transform_scale(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Transform *p;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::transform_set_scale", 2, argc);
  if (rl_ptr_Transform(interp, argv[0], &p) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::transform_set_scale", 1, "transform", "Transform");
  if (rl_get_Vector3(interp, argv[1], &p->scale) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::transform_set_scale", 2, "scale", "Vector3");
  return LCL_RC_OK;
}

static int rl_get_BoneInfo_name(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  BoneInfo *p;
  char buf[33];
  if (argc != 1) return rl_arity_error(interp, "raylib::bone_info_name", 1, argc);
  if (rl_ptr_BoneInfo(interp, argv[0], &p) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::bone_info_name", 1, "bone_info", "BoneInfo");
  memcpy(buf, p->name, 32);
  buf[32] = '\0';
  *out = lcl_string_new(buf);
  return *out ? LCL_RC_OK : LCL_RC_ERR;
}

static int rl_get_BoneInfo_parent(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  BoneInfo s;
  if (argc != 1) return rl_arity_error(interp, "raylib::bone_info_parent", 1, argc);
  if (rl_get_BoneInfo(interp, argv[0], &s) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::bone_info_parent", 1, "bone_info", "BoneInfo");
  *out = lcl_int_new((long)s.parent);
  return *out ? LCL_RC_OK : LCL_RC_ERR;
}

static int rl_set_BoneInfo_parent(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  BoneInfo *p;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::bone_info_set_parent", 2, argc);
  if (rl_ptr_BoneInfo(interp, argv[0], &p) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::bone_info_set_parent", 1, "bone_info", "BoneInfo");
  { long x; if (rl_get_int(interp, argv[1], &x) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::bone_info_set_parent", 2, "parent", "int"); p->parent = (int)x; }
  return LCL_RC_OK;
}

static int rl_get_ModelSkeleton_boneCount(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  ModelSkeleton s;
  if (argc != 1) return rl_arity_error(interp, "raylib::model_skeleton_bone_count", 1, argc);
  if (rl_get_ModelSkeleton(interp, argv[0], &s) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::model_skeleton_bone_count", 1, "model_skeleton", "ModelSkeleton");
  *out = lcl_int_new((long)s.boneCount);
  return *out ? LCL_RC_OK : LCL_RC_ERR;
}

static int rl_set_ModelSkeleton_boneCount(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  ModelSkeleton *p;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::model_skeleton_set_bone_count", 2, argc);
  if (rl_ptr_ModelSkeleton(interp, argv[0], &p) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::model_skeleton_set_bone_count", 1, "model_skeleton", "ModelSkeleton");
  { long x; if (rl_get_int(interp, argv[1], &x) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::model_skeleton_set_bone_count", 2, "boneCount", "int"); p->boneCount = (int)x; }
  return LCL_RC_OK;
}

static int rl_get_Model_transform(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Model s;
  if (argc != 1) return rl_arity_error(interp, "raylib::model_transform", 1, argc);
  if (rl_get_Model(interp, argv[0], &s) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::model_transform", 1, "model", "Model");
  *out = rl_new_Matrix(s.transform);
  return *out ? LCL_RC_OK : LCL_RC_ERR;
}

static int rl_set_Model_transform(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Model *p;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::model_set_transform", 2, argc);
  if (rl_ptr_Model(interp, argv[0], &p) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::model_set_transform", 1, "model", "Model");
  if (rl_get_Matrix(interp, argv[1], &p->transform) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::model_set_transform", 2, "transform", "Matrix");
  return LCL_RC_OK;
}

static int rl_get_Model_meshCount(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Model s;
  if (argc != 1) return rl_arity_error(interp, "raylib::model_mesh_count", 1, argc);
  if (rl_get_Model(interp, argv[0], &s) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::model_mesh_count", 1, "model", "Model");
  *out = lcl_int_new((long)s.meshCount);
  return *out ? LCL_RC_OK : LCL_RC_ERR;
}

static int rl_set_Model_meshCount(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Model *p;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::model_set_mesh_count", 2, argc);
  if (rl_ptr_Model(interp, argv[0], &p) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::model_set_mesh_count", 1, "model", "Model");
  { long x; if (rl_get_int(interp, argv[1], &x) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::model_set_mesh_count", 2, "meshCount", "int"); p->meshCount = (int)x; }
  return LCL_RC_OK;
}

static int rl_get_Model_materialCount(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Model s;
  if (argc != 1) return rl_arity_error(interp, "raylib::model_material_count", 1, argc);
  if (rl_get_Model(interp, argv[0], &s) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::model_material_count", 1, "model", "Model");
  *out = lcl_int_new((long)s.materialCount);
  return *out ? LCL_RC_OK : LCL_RC_ERR;
}

static int rl_set_Model_materialCount(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Model *p;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::model_set_material_count", 2, argc);
  if (rl_ptr_Model(interp, argv[0], &p) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::model_set_material_count", 1, "model", "Model");
  { long x; if (rl_get_int(interp, argv[1], &x) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::model_set_material_count", 2, "materialCount", "int"); p->materialCount = (int)x; }
  return LCL_RC_OK;
}

static int rl_get_Model_skeleton(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Model s;
  if (argc != 1) return rl_arity_error(interp, "raylib::model_skeleton", 1, argc);
  if (rl_get_Model(interp, argv[0], &s) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::model_skeleton", 1, "model", "Model");
  *out = rl_new_ModelSkeleton(s.skeleton);
  return *out ? LCL_RC_OK : LCL_RC_ERR;
}

static int rl_set_Model_skeleton(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Model *p;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::model_set_skeleton", 2, argc);
  if (rl_ptr_Model(interp, argv[0], &p) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::model_set_skeleton", 1, "model", "Model");
  if (rl_get_ModelSkeleton(interp, argv[1], &p->skeleton) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::model_set_skeleton", 2, "skeleton", "ModelSkeleton");
  return LCL_RC_OK;
}

static int rl_get_ModelAnimation_name(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  ModelAnimation *p;
  char buf[33];
  if (argc != 1) return rl_arity_error(interp, "raylib::model_animation_name", 1, argc);
  if (rl_ptr_ModelAnimation(interp, argv[0], &p) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::model_animation_name", 1, "model_animation", "ModelAnimation");
  memcpy(buf, p->name, 32);
  buf[32] = '\0';
  *out = lcl_string_new(buf);
  return *out ? LCL_RC_OK : LCL_RC_ERR;
}

static int rl_get_ModelAnimation_boneCount(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  ModelAnimation s;
  if (argc != 1) return rl_arity_error(interp, "raylib::model_animation_bone_count", 1, argc);
  if (rl_get_ModelAnimation(interp, argv[0], &s) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::model_animation_bone_count", 1, "model_animation", "ModelAnimation");
  *out = lcl_int_new((long)s.boneCount);
  return *out ? LCL_RC_OK : LCL_RC_ERR;
}

static int rl_set_ModelAnimation_boneCount(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  ModelAnimation *p;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::model_animation_set_bone_count", 2, argc);
  if (rl_ptr_ModelAnimation(interp, argv[0], &p) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::model_animation_set_bone_count", 1, "model_animation", "ModelAnimation");
  { long x; if (rl_get_int(interp, argv[1], &x) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::model_animation_set_bone_count", 2, "boneCount", "int"); p->boneCount = (int)x; }
  return LCL_RC_OK;
}

static int rl_get_ModelAnimation_keyframeCount(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  ModelAnimation s;
  if (argc != 1) return rl_arity_error(interp, "raylib::model_animation_keyframe_count", 1, argc);
  if (rl_get_ModelAnimation(interp, argv[0], &s) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::model_animation_keyframe_count", 1, "model_animation", "ModelAnimation");
  *out = lcl_int_new((long)s.keyframeCount);
  return *out ? LCL_RC_OK : LCL_RC_ERR;
}

static int rl_set_ModelAnimation_keyframeCount(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  ModelAnimation *p;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::model_animation_set_keyframe_count", 2, argc);
  if (rl_ptr_ModelAnimation(interp, argv[0], &p) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::model_animation_set_keyframe_count", 1, "model_animation", "ModelAnimation");
  { long x; if (rl_get_int(interp, argv[1], &x) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::model_animation_set_keyframe_count", 2, "keyframeCount", "int"); p->keyframeCount = (int)x; }
  return LCL_RC_OK;
}

static int rl_ctor_Ray(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Ray v;
  memset(&v, 0, sizeof(v));
  if (argc != 2) return rl_arity_error(interp, "raylib::ray", 2, argc);
  if (rl_get_Vector3(interp, argv[0], &v.position) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::ray", 1, "position", "Vector3");
  if (rl_get_Vector3(interp, argv[1], &v.direction) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::ray", 2, "direction", "Vector3");
  *out = rl_new_Ray(v);
  return *out ? LCL_RC_OK : LCL_RC_ERR;
}

static int rl_get_Ray_position(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Ray s;
  if (argc != 1) return rl_arity_error(interp, "raylib::ray_position", 1, argc);
  if (rl_get_Ray(interp, argv[0], &s) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::ray_position", 1, "ray", "Ray");
  *out = rl_new_Vector3(s.position);
  return *out ? LCL_RC_OK : LCL_RC_ERR;
}

static int rl_set_Ray_position(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Ray *p;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::ray_set_position", 2, argc);
  if (rl_ptr_Ray(interp, argv[0], &p) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::ray_set_position", 1, "ray", "Ray");
  if (rl_get_Vector3(interp, argv[1], &p->position) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::ray_set_position", 2, "position", "Vector3");
  return LCL_RC_OK;
}

static int rl_get_Ray_direction(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Ray s;
  if (argc != 1) return rl_arity_error(interp, "raylib::ray_direction", 1, argc);
  if (rl_get_Ray(interp, argv[0], &s) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::ray_direction", 1, "ray", "Ray");
  *out = rl_new_Vector3(s.direction);
  return *out ? LCL_RC_OK : LCL_RC_ERR;
}

static int rl_set_Ray_direction(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Ray *p;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::ray_set_direction", 2, argc);
  if (rl_ptr_Ray(interp, argv[0], &p) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::ray_set_direction", 1, "ray", "Ray");
  if (rl_get_Vector3(interp, argv[1], &p->direction) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::ray_set_direction", 2, "direction", "Vector3");
  return LCL_RC_OK;
}

static int rl_ctor_RayCollision(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  RayCollision v;
  memset(&v, 0, sizeof(v));
  if (argc != 4) return rl_arity_error(interp, "raylib::ray_collision", 4, argc);
  { long x; if (rl_get_int(interp, argv[0], &x) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::ray_collision", 1, "hit", "int"); v.hit = (bool)x; }
  { double x; if (rl_get_float(interp, argv[1], &x) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::ray_collision", 2, "distance", "float"); v.distance = (float)x; }
  if (rl_get_Vector3(interp, argv[2], &v.point) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::ray_collision", 3, "point", "Vector3");
  if (rl_get_Vector3(interp, argv[3], &v.normal) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::ray_collision", 4, "normal", "Vector3");
  *out = rl_new_RayCollision(v);
  return *out ? LCL_RC_OK : LCL_RC_ERR;
}

static int rl_get_RayCollision_hit(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  RayCollision s;
  if (argc != 1) return rl_arity_error(interp, "raylib::ray_collision_hit", 1, argc);
  if (rl_get_RayCollision(interp, argv[0], &s) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::ray_collision_hit", 1, "ray_collision", "RayCollision");
  *out = lcl_int_new((long)s.hit);
  return *out ? LCL_RC_OK : LCL_RC_ERR;
}

static int rl_set_RayCollision_hit(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  RayCollision *p;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::ray_collision_set_hit", 2, argc);
  if (rl_ptr_RayCollision(interp, argv[0], &p) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::ray_collision_set_hit", 1, "ray_collision", "RayCollision");
  { long x; if (rl_get_int(interp, argv[1], &x) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::ray_collision_set_hit", 2, "hit", "int"); p->hit = (bool)x; }
  return LCL_RC_OK;
}

static int rl_get_RayCollision_distance(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  RayCollision s;
  if (argc != 1) return rl_arity_error(interp, "raylib::ray_collision_distance", 1, argc);
  if (rl_get_RayCollision(interp, argv[0], &s) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::ray_collision_distance", 1, "ray_collision", "RayCollision");
  *out = lcl_float_new((double)s.distance);
  return *out ? LCL_RC_OK : LCL_RC_ERR;
}

static int rl_set_RayCollision_distance(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  RayCollision *p;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::ray_collision_set_distance", 2, argc);
  if (rl_ptr_RayCollision(interp, argv[0], &p) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::ray_collision_set_distance", 1, "ray_collision", "RayCollision");
  { double x; if (rl_get_float(interp, argv[1], &x) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::ray_collision_set_distance", 2, "distance", "float"); p->distance = (float)x; }
  return LCL_RC_OK;
}

static int rl_get_RayCollision_point(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  RayCollision s;
  if (argc != 1) return rl_arity_error(interp, "raylib::ray_collision_point", 1, argc);
  if (rl_get_RayCollision(interp, argv[0], &s) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::ray_collision_point", 1, "ray_collision", "RayCollision");
  *out = rl_new_Vector3(s.point);
  return *out ? LCL_RC_OK : LCL_RC_ERR;
}

static int rl_set_RayCollision_point(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  RayCollision *p;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::ray_collision_set_point", 2, argc);
  if (rl_ptr_RayCollision(interp, argv[0], &p) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::ray_collision_set_point", 1, "ray_collision", "RayCollision");
  if (rl_get_Vector3(interp, argv[1], &p->point) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::ray_collision_set_point", 2, "point", "Vector3");
  return LCL_RC_OK;
}

static int rl_get_RayCollision_normal(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  RayCollision s;
  if (argc != 1) return rl_arity_error(interp, "raylib::ray_collision_normal", 1, argc);
  if (rl_get_RayCollision(interp, argv[0], &s) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::ray_collision_normal", 1, "ray_collision", "RayCollision");
  *out = rl_new_Vector3(s.normal);
  return *out ? LCL_RC_OK : LCL_RC_ERR;
}

static int rl_set_RayCollision_normal(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  RayCollision *p;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::ray_collision_set_normal", 2, argc);
  if (rl_ptr_RayCollision(interp, argv[0], &p) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::ray_collision_set_normal", 1, "ray_collision", "RayCollision");
  if (rl_get_Vector3(interp, argv[1], &p->normal) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::ray_collision_set_normal", 2, "normal", "Vector3");
  return LCL_RC_OK;
}

static int rl_ctor_BoundingBox(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  BoundingBox v;
  memset(&v, 0, sizeof(v));
  if (argc != 2) return rl_arity_error(interp, "raylib::bounding_box", 2, argc);
  if (rl_get_Vector3(interp, argv[0], &v.min) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::bounding_box", 1, "min", "Vector3");
  if (rl_get_Vector3(interp, argv[1], &v.max) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::bounding_box", 2, "max", "Vector3");
  *out = rl_new_BoundingBox(v);
  return *out ? LCL_RC_OK : LCL_RC_ERR;
}

static int rl_get_BoundingBox_min(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  BoundingBox s;
  if (argc != 1) return rl_arity_error(interp, "raylib::bounding_box_min", 1, argc);
  if (rl_get_BoundingBox(interp, argv[0], &s) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::bounding_box_min", 1, "bounding_box", "BoundingBox");
  *out = rl_new_Vector3(s.min);
  return *out ? LCL_RC_OK : LCL_RC_ERR;
}

static int rl_set_BoundingBox_min(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  BoundingBox *p;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::bounding_box_set_min", 2, argc);
  if (rl_ptr_BoundingBox(interp, argv[0], &p) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::bounding_box_set_min", 1, "bounding_box", "BoundingBox");
  if (rl_get_Vector3(interp, argv[1], &p->min) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::bounding_box_set_min", 2, "min", "Vector3");
  return LCL_RC_OK;
}

static int rl_get_BoundingBox_max(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  BoundingBox s;
  if (argc != 1) return rl_arity_error(interp, "raylib::bounding_box_max", 1, argc);
  if (rl_get_BoundingBox(interp, argv[0], &s) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::bounding_box_max", 1, "bounding_box", "BoundingBox");
  *out = rl_new_Vector3(s.max);
  return *out ? LCL_RC_OK : LCL_RC_ERR;
}

static int rl_set_BoundingBox_max(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  BoundingBox *p;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::bounding_box_set_max", 2, argc);
  if (rl_ptr_BoundingBox(interp, argv[0], &p) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::bounding_box_set_max", 1, "bounding_box", "BoundingBox");
  if (rl_get_Vector3(interp, argv[1], &p->max) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::bounding_box_set_max", 2, "max", "Vector3");
  return LCL_RC_OK;
}

static int rl_get_Wave_frameCount(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Wave s;
  if (argc != 1) return rl_arity_error(interp, "raylib::wave_frame_count", 1, argc);
  if (rl_get_Wave(interp, argv[0], &s) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::wave_frame_count", 1, "wave", "Wave");
  *out = lcl_int_new((long)s.frameCount);
  return *out ? LCL_RC_OK : LCL_RC_ERR;
}

static int rl_set_Wave_frameCount(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Wave *p;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::wave_set_frame_count", 2, argc);
  if (rl_ptr_Wave(interp, argv[0], &p) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::wave_set_frame_count", 1, "wave", "Wave");
  { long x; if (rl_get_int(interp, argv[1], &x) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::wave_set_frame_count", 2, "frameCount", "int"); p->frameCount = (unsigned int)x; }
  return LCL_RC_OK;
}

static int rl_get_Wave_sampleRate(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Wave s;
  if (argc != 1) return rl_arity_error(interp, "raylib::wave_sample_rate", 1, argc);
  if (rl_get_Wave(interp, argv[0], &s) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::wave_sample_rate", 1, "wave", "Wave");
  *out = lcl_int_new((long)s.sampleRate);
  return *out ? LCL_RC_OK : LCL_RC_ERR;
}

static int rl_set_Wave_sampleRate(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Wave *p;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::wave_set_sample_rate", 2, argc);
  if (rl_ptr_Wave(interp, argv[0], &p) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::wave_set_sample_rate", 1, "wave", "Wave");
  { long x; if (rl_get_int(interp, argv[1], &x) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::wave_set_sample_rate", 2, "sampleRate", "int"); p->sampleRate = (unsigned int)x; }
  return LCL_RC_OK;
}

static int rl_get_Wave_sampleSize(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Wave s;
  if (argc != 1) return rl_arity_error(interp, "raylib::wave_sample_size", 1, argc);
  if (rl_get_Wave(interp, argv[0], &s) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::wave_sample_size", 1, "wave", "Wave");
  *out = lcl_int_new((long)s.sampleSize);
  return *out ? LCL_RC_OK : LCL_RC_ERR;
}

static int rl_set_Wave_sampleSize(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Wave *p;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::wave_set_sample_size", 2, argc);
  if (rl_ptr_Wave(interp, argv[0], &p) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::wave_set_sample_size", 1, "wave", "Wave");
  { long x; if (rl_get_int(interp, argv[1], &x) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::wave_set_sample_size", 2, "sampleSize", "int"); p->sampleSize = (unsigned int)x; }
  return LCL_RC_OK;
}

static int rl_get_Wave_channels(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Wave s;
  if (argc != 1) return rl_arity_error(interp, "raylib::wave_channels", 1, argc);
  if (rl_get_Wave(interp, argv[0], &s) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::wave_channels", 1, "wave", "Wave");
  *out = lcl_int_new((long)s.channels);
  return *out ? LCL_RC_OK : LCL_RC_ERR;
}

static int rl_set_Wave_channels(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Wave *p;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::wave_set_channels", 2, argc);
  if (rl_ptr_Wave(interp, argv[0], &p) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::wave_set_channels", 1, "wave", "Wave");
  { long x; if (rl_get_int(interp, argv[1], &x) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::wave_set_channels", 2, "channels", "int"); p->channels = (unsigned int)x; }
  return LCL_RC_OK;
}

static int rl_get_AudioStream_sampleRate(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  AudioStream s;
  if (argc != 1) return rl_arity_error(interp, "raylib::audio_stream_sample_rate", 1, argc);
  if (rl_get_AudioStream(interp, argv[0], &s) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::audio_stream_sample_rate", 1, "audio_stream", "AudioStream");
  *out = lcl_int_new((long)s.sampleRate);
  return *out ? LCL_RC_OK : LCL_RC_ERR;
}

static int rl_set_AudioStream_sampleRate(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  AudioStream *p;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::audio_stream_set_sample_rate", 2, argc);
  if (rl_ptr_AudioStream(interp, argv[0], &p) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::audio_stream_set_sample_rate", 1, "audio_stream", "AudioStream");
  { long x; if (rl_get_int(interp, argv[1], &x) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::audio_stream_set_sample_rate", 2, "sampleRate", "int"); p->sampleRate = (unsigned int)x; }
  return LCL_RC_OK;
}

static int rl_get_AudioStream_sampleSize(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  AudioStream s;
  if (argc != 1) return rl_arity_error(interp, "raylib::audio_stream_sample_size", 1, argc);
  if (rl_get_AudioStream(interp, argv[0], &s) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::audio_stream_sample_size", 1, "audio_stream", "AudioStream");
  *out = lcl_int_new((long)s.sampleSize);
  return *out ? LCL_RC_OK : LCL_RC_ERR;
}

static int rl_set_AudioStream_sampleSize(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  AudioStream *p;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::audio_stream_set_sample_size", 2, argc);
  if (rl_ptr_AudioStream(interp, argv[0], &p) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::audio_stream_set_sample_size", 1, "audio_stream", "AudioStream");
  { long x; if (rl_get_int(interp, argv[1], &x) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::audio_stream_set_sample_size", 2, "sampleSize", "int"); p->sampleSize = (unsigned int)x; }
  return LCL_RC_OK;
}

static int rl_get_AudioStream_channels(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  AudioStream s;
  if (argc != 1) return rl_arity_error(interp, "raylib::audio_stream_channels", 1, argc);
  if (rl_get_AudioStream(interp, argv[0], &s) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::audio_stream_channels", 1, "audio_stream", "AudioStream");
  *out = lcl_int_new((long)s.channels);
  return *out ? LCL_RC_OK : LCL_RC_ERR;
}

static int rl_set_AudioStream_channels(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  AudioStream *p;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::audio_stream_set_channels", 2, argc);
  if (rl_ptr_AudioStream(interp, argv[0], &p) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::audio_stream_set_channels", 1, "audio_stream", "AudioStream");
  { long x; if (rl_get_int(interp, argv[1], &x) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::audio_stream_set_channels", 2, "channels", "int"); p->channels = (unsigned int)x; }
  return LCL_RC_OK;
}

static int rl_get_Sound_stream(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Sound s;
  if (argc != 1) return rl_arity_error(interp, "raylib::sound_stream", 1, argc);
  if (rl_get_Sound(interp, argv[0], &s) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::sound_stream", 1, "sound", "Sound");
  *out = rl_new_AudioStream(s.stream);
  return *out ? LCL_RC_OK : LCL_RC_ERR;
}

static int rl_set_Sound_stream(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Sound *p;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::sound_set_stream", 2, argc);
  if (rl_ptr_Sound(interp, argv[0], &p) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::sound_set_stream", 1, "sound", "Sound");
  if (rl_get_AudioStream(interp, argv[1], &p->stream) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::sound_set_stream", 2, "stream", "AudioStream");
  return LCL_RC_OK;
}

static int rl_get_Sound_frameCount(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Sound s;
  if (argc != 1) return rl_arity_error(interp, "raylib::sound_frame_count", 1, argc);
  if (rl_get_Sound(interp, argv[0], &s) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::sound_frame_count", 1, "sound", "Sound");
  *out = lcl_int_new((long)s.frameCount);
  return *out ? LCL_RC_OK : LCL_RC_ERR;
}

static int rl_set_Sound_frameCount(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Sound *p;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::sound_set_frame_count", 2, argc);
  if (rl_ptr_Sound(interp, argv[0], &p) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::sound_set_frame_count", 1, "sound", "Sound");
  { long x; if (rl_get_int(interp, argv[1], &x) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::sound_set_frame_count", 2, "frameCount", "int"); p->frameCount = (unsigned int)x; }
  return LCL_RC_OK;
}

static int rl_get_Music_stream(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Music s;
  if (argc != 1) return rl_arity_error(interp, "raylib::music_stream", 1, argc);
  if (rl_get_Music(interp, argv[0], &s) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::music_stream", 1, "music", "Music");
  *out = rl_new_AudioStream(s.stream);
  return *out ? LCL_RC_OK : LCL_RC_ERR;
}

static int rl_set_Music_stream(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Music *p;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::music_set_stream", 2, argc);
  if (rl_ptr_Music(interp, argv[0], &p) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::music_set_stream", 1, "music", "Music");
  if (rl_get_AudioStream(interp, argv[1], &p->stream) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::music_set_stream", 2, "stream", "AudioStream");
  return LCL_RC_OK;
}

static int rl_get_Music_frameCount(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Music s;
  if (argc != 1) return rl_arity_error(interp, "raylib::music_frame_count", 1, argc);
  if (rl_get_Music(interp, argv[0], &s) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::music_frame_count", 1, "music", "Music");
  *out = lcl_int_new((long)s.frameCount);
  return *out ? LCL_RC_OK : LCL_RC_ERR;
}

static int rl_set_Music_frameCount(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Music *p;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::music_set_frame_count", 2, argc);
  if (rl_ptr_Music(interp, argv[0], &p) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::music_set_frame_count", 1, "music", "Music");
  { long x; if (rl_get_int(interp, argv[1], &x) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::music_set_frame_count", 2, "frameCount", "int"); p->frameCount = (unsigned int)x; }
  return LCL_RC_OK;
}

static int rl_get_Music_looping(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Music s;
  if (argc != 1) return rl_arity_error(interp, "raylib::music_looping", 1, argc);
  if (rl_get_Music(interp, argv[0], &s) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::music_looping", 1, "music", "Music");
  *out = lcl_int_new((long)s.looping);
  return *out ? LCL_RC_OK : LCL_RC_ERR;
}

static int rl_set_Music_looping(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Music *p;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::music_set_looping", 2, argc);
  if (rl_ptr_Music(interp, argv[0], &p) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::music_set_looping", 1, "music", "Music");
  { long x; if (rl_get_int(interp, argv[1], &x) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::music_set_looping", 2, "looping", "int"); p->looping = (bool)x; }
  return LCL_RC_OK;
}

static int rl_get_Music_ctxType(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Music s;
  if (argc != 1) return rl_arity_error(interp, "raylib::music_ctx_type", 1, argc);
  if (rl_get_Music(interp, argv[0], &s) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::music_ctx_type", 1, "music", "Music");
  *out = lcl_int_new((long)s.ctxType);
  return *out ? LCL_RC_OK : LCL_RC_ERR;
}

static int rl_set_Music_ctxType(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Music *p;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::music_set_ctx_type", 2, argc);
  if (rl_ptr_Music(interp, argv[0], &p) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::music_set_ctx_type", 1, "music", "Music");
  { long x; if (rl_get_int(interp, argv[1], &x) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::music_set_ctx_type", 2, "ctxType", "int"); p->ctxType = (int)x; }
  return LCL_RC_OK;
}

static int rl_get_VrDeviceInfo_hResolution(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  VrDeviceInfo s;
  if (argc != 1) return rl_arity_error(interp, "raylib::vr_device_info_h_resolution", 1, argc);
  if (rl_get_VrDeviceInfo(interp, argv[0], &s) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::vr_device_info_h_resolution", 1, "vr_device_info", "VrDeviceInfo");
  *out = lcl_int_new((long)s.hResolution);
  return *out ? LCL_RC_OK : LCL_RC_ERR;
}

static int rl_set_VrDeviceInfo_hResolution(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  VrDeviceInfo *p;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::vr_device_info_set_h_resolution", 2, argc);
  if (rl_ptr_VrDeviceInfo(interp, argv[0], &p) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::vr_device_info_set_h_resolution", 1, "vr_device_info", "VrDeviceInfo");
  { long x; if (rl_get_int(interp, argv[1], &x) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::vr_device_info_set_h_resolution", 2, "hResolution", "int"); p->hResolution = (int)x; }
  return LCL_RC_OK;
}

static int rl_get_VrDeviceInfo_vResolution(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  VrDeviceInfo s;
  if (argc != 1) return rl_arity_error(interp, "raylib::vr_device_info_v_resolution", 1, argc);
  if (rl_get_VrDeviceInfo(interp, argv[0], &s) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::vr_device_info_v_resolution", 1, "vr_device_info", "VrDeviceInfo");
  *out = lcl_int_new((long)s.vResolution);
  return *out ? LCL_RC_OK : LCL_RC_ERR;
}

static int rl_set_VrDeviceInfo_vResolution(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  VrDeviceInfo *p;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::vr_device_info_set_v_resolution", 2, argc);
  if (rl_ptr_VrDeviceInfo(interp, argv[0], &p) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::vr_device_info_set_v_resolution", 1, "vr_device_info", "VrDeviceInfo");
  { long x; if (rl_get_int(interp, argv[1], &x) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::vr_device_info_set_v_resolution", 2, "vResolution", "int"); p->vResolution = (int)x; }
  return LCL_RC_OK;
}

static int rl_get_VrDeviceInfo_hScreenSize(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  VrDeviceInfo s;
  if (argc != 1) return rl_arity_error(interp, "raylib::vr_device_info_h_screen_size", 1, argc);
  if (rl_get_VrDeviceInfo(interp, argv[0], &s) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::vr_device_info_h_screen_size", 1, "vr_device_info", "VrDeviceInfo");
  *out = lcl_float_new((double)s.hScreenSize);
  return *out ? LCL_RC_OK : LCL_RC_ERR;
}

static int rl_set_VrDeviceInfo_hScreenSize(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  VrDeviceInfo *p;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::vr_device_info_set_h_screen_size", 2, argc);
  if (rl_ptr_VrDeviceInfo(interp, argv[0], &p) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::vr_device_info_set_h_screen_size", 1, "vr_device_info", "VrDeviceInfo");
  { double x; if (rl_get_float(interp, argv[1], &x) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::vr_device_info_set_h_screen_size", 2, "hScreenSize", "float"); p->hScreenSize = (float)x; }
  return LCL_RC_OK;
}

static int rl_get_VrDeviceInfo_vScreenSize(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  VrDeviceInfo s;
  if (argc != 1) return rl_arity_error(interp, "raylib::vr_device_info_v_screen_size", 1, argc);
  if (rl_get_VrDeviceInfo(interp, argv[0], &s) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::vr_device_info_v_screen_size", 1, "vr_device_info", "VrDeviceInfo");
  *out = lcl_float_new((double)s.vScreenSize);
  return *out ? LCL_RC_OK : LCL_RC_ERR;
}

static int rl_set_VrDeviceInfo_vScreenSize(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  VrDeviceInfo *p;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::vr_device_info_set_v_screen_size", 2, argc);
  if (rl_ptr_VrDeviceInfo(interp, argv[0], &p) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::vr_device_info_set_v_screen_size", 1, "vr_device_info", "VrDeviceInfo");
  { double x; if (rl_get_float(interp, argv[1], &x) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::vr_device_info_set_v_screen_size", 2, "vScreenSize", "float"); p->vScreenSize = (float)x; }
  return LCL_RC_OK;
}

static int rl_get_VrDeviceInfo_eyeToScreenDistance(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  VrDeviceInfo s;
  if (argc != 1) return rl_arity_error(interp, "raylib::vr_device_info_eye_to_screen_distance", 1, argc);
  if (rl_get_VrDeviceInfo(interp, argv[0], &s) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::vr_device_info_eye_to_screen_distance", 1, "vr_device_info", "VrDeviceInfo");
  *out = lcl_float_new((double)s.eyeToScreenDistance);
  return *out ? LCL_RC_OK : LCL_RC_ERR;
}

static int rl_set_VrDeviceInfo_eyeToScreenDistance(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  VrDeviceInfo *p;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::vr_device_info_set_eye_to_screen_distance", 2, argc);
  if (rl_ptr_VrDeviceInfo(interp, argv[0], &p) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::vr_device_info_set_eye_to_screen_distance", 1, "vr_device_info", "VrDeviceInfo");
  { double x; if (rl_get_float(interp, argv[1], &x) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::vr_device_info_set_eye_to_screen_distance", 2, "eyeToScreenDistance", "float"); p->eyeToScreenDistance = (float)x; }
  return LCL_RC_OK;
}

static int rl_get_VrDeviceInfo_lensSeparationDistance(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  VrDeviceInfo s;
  if (argc != 1) return rl_arity_error(interp, "raylib::vr_device_info_lens_separation_distance", 1, argc);
  if (rl_get_VrDeviceInfo(interp, argv[0], &s) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::vr_device_info_lens_separation_distance", 1, "vr_device_info", "VrDeviceInfo");
  *out = lcl_float_new((double)s.lensSeparationDistance);
  return *out ? LCL_RC_OK : LCL_RC_ERR;
}

static int rl_set_VrDeviceInfo_lensSeparationDistance(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  VrDeviceInfo *p;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::vr_device_info_set_lens_separation_distance", 2, argc);
  if (rl_ptr_VrDeviceInfo(interp, argv[0], &p) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::vr_device_info_set_lens_separation_distance", 1, "vr_device_info", "VrDeviceInfo");
  { double x; if (rl_get_float(interp, argv[1], &x) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::vr_device_info_set_lens_separation_distance", 2, "lensSeparationDistance", "float"); p->lensSeparationDistance = (float)x; }
  return LCL_RC_OK;
}

static int rl_get_VrDeviceInfo_interpupillaryDistance(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  VrDeviceInfo s;
  if (argc != 1) return rl_arity_error(interp, "raylib::vr_device_info_interpupillary_distance", 1, argc);
  if (rl_get_VrDeviceInfo(interp, argv[0], &s) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::vr_device_info_interpupillary_distance", 1, "vr_device_info", "VrDeviceInfo");
  *out = lcl_float_new((double)s.interpupillaryDistance);
  return *out ? LCL_RC_OK : LCL_RC_ERR;
}

static int rl_set_VrDeviceInfo_interpupillaryDistance(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  VrDeviceInfo *p;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::vr_device_info_set_interpupillary_distance", 2, argc);
  if (rl_ptr_VrDeviceInfo(interp, argv[0], &p) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::vr_device_info_set_interpupillary_distance", 1, "vr_device_info", "VrDeviceInfo");
  { double x; if (rl_get_float(interp, argv[1], &x) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::vr_device_info_set_interpupillary_distance", 2, "interpupillaryDistance", "float"); p->interpupillaryDistance = (float)x; }
  return LCL_RC_OK;
}

static int rl_get_VrDeviceInfo_lensDistortionValues(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  VrDeviceInfo *p;
  lcl_value *lst;
  int i;
  if (argc != 1) return rl_arity_error(interp, "raylib::vr_device_info_lens_distortion_values", 1, argc);
  if (rl_ptr_VrDeviceInfo(interp, argv[0], &p) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::vr_device_info_lens_distortion_values", 1, "vr_device_info", "VrDeviceInfo");
  lst = lcl_list_new();
  if (!lst) return LCL_RC_ERR;
  for (i = 0; i < 4; i++) {
    lcl_value *item = lcl_float_new((double)p->lensDistortionValues[i]);
    if (!item) { lcl_ref_dec(lst); return LCL_RC_ERR; }
    lcl_list_push(&lst, item);
    lcl_ref_dec(item);
  }
  *out = lst;
  return LCL_RC_OK;
}

static int rl_set_VrDeviceInfo_lensDistortionValues(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  VrDeviceInfo *p;
  int i;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::vr_device_info_set_lens_distortion_values", 2, argc);
  if (rl_ptr_VrDeviceInfo(interp, argv[0], &p) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::vr_device_info_set_lens_distortion_values", 1, "vr_device_info", "VrDeviceInfo");
  if (lcl_value_type_of(argv[1]) != LCL_LIST || lcl_list_len(argv[1]) != 4) return RL_ARG_ERR(interp, "raylib::vr_device_info_set_lens_distortion_values", 2, "lensDistortionValues", "list of 4 float");
  for (i = 0; i < 4; i++) {
    lcl_value *item; double x;
    if (lcl_list_get(argv[1], (size_t)i, &item) != LCL_OK) return LCL_RC_ERR;
    if (rl_get_float(interp, item, &x) != LCL_RC_OK) { lcl_ref_dec(item); return RL_ARG_ERR(interp, "raylib::vr_device_info_set_lens_distortion_values", 2, "lensDistortionValues", "list of 4 float"); }
    lcl_ref_dec(item);
    p->lensDistortionValues[i] = (float)x;
  }
  return LCL_RC_OK;
}

static int rl_get_VrDeviceInfo_chromaAbCorrection(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  VrDeviceInfo *p;
  lcl_value *lst;
  int i;
  if (argc != 1) return rl_arity_error(interp, "raylib::vr_device_info_chroma_ab_correction", 1, argc);
  if (rl_ptr_VrDeviceInfo(interp, argv[0], &p) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::vr_device_info_chroma_ab_correction", 1, "vr_device_info", "VrDeviceInfo");
  lst = lcl_list_new();
  if (!lst) return LCL_RC_ERR;
  for (i = 0; i < 4; i++) {
    lcl_value *item = lcl_float_new((double)p->chromaAbCorrection[i]);
    if (!item) { lcl_ref_dec(lst); return LCL_RC_ERR; }
    lcl_list_push(&lst, item);
    lcl_ref_dec(item);
  }
  *out = lst;
  return LCL_RC_OK;
}

static int rl_set_VrDeviceInfo_chromaAbCorrection(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  VrDeviceInfo *p;
  int i;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::vr_device_info_set_chroma_ab_correction", 2, argc);
  if (rl_ptr_VrDeviceInfo(interp, argv[0], &p) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::vr_device_info_set_chroma_ab_correction", 1, "vr_device_info", "VrDeviceInfo");
  if (lcl_value_type_of(argv[1]) != LCL_LIST || lcl_list_len(argv[1]) != 4) return RL_ARG_ERR(interp, "raylib::vr_device_info_set_chroma_ab_correction", 2, "chromaAbCorrection", "list of 4 float");
  for (i = 0; i < 4; i++) {
    lcl_value *item; double x;
    if (lcl_list_get(argv[1], (size_t)i, &item) != LCL_OK) return LCL_RC_ERR;
    if (rl_get_float(interp, item, &x) != LCL_RC_OK) { lcl_ref_dec(item); return RL_ARG_ERR(interp, "raylib::vr_device_info_set_chroma_ab_correction", 2, "chromaAbCorrection", "list of 4 float"); }
    lcl_ref_dec(item);
    p->chromaAbCorrection[i] = (float)x;
  }
  return LCL_RC_OK;
}

static int rl_get_VrStereoConfig_leftLensCenter(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  VrStereoConfig *p;
  lcl_value *lst;
  int i;
  if (argc != 1) return rl_arity_error(interp, "raylib::vr_stereo_config_left_lens_center", 1, argc);
  if (rl_ptr_VrStereoConfig(interp, argv[0], &p) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::vr_stereo_config_left_lens_center", 1, "vr_stereo_config", "VrStereoConfig");
  lst = lcl_list_new();
  if (!lst) return LCL_RC_ERR;
  for (i = 0; i < 2; i++) {
    lcl_value *item = lcl_float_new((double)p->leftLensCenter[i]);
    if (!item) { lcl_ref_dec(lst); return LCL_RC_ERR; }
    lcl_list_push(&lst, item);
    lcl_ref_dec(item);
  }
  *out = lst;
  return LCL_RC_OK;
}

static int rl_set_VrStereoConfig_leftLensCenter(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  VrStereoConfig *p;
  int i;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::vr_stereo_config_set_left_lens_center", 2, argc);
  if (rl_ptr_VrStereoConfig(interp, argv[0], &p) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::vr_stereo_config_set_left_lens_center", 1, "vr_stereo_config", "VrStereoConfig");
  if (lcl_value_type_of(argv[1]) != LCL_LIST || lcl_list_len(argv[1]) != 2) return RL_ARG_ERR(interp, "raylib::vr_stereo_config_set_left_lens_center", 2, "leftLensCenter", "list of 2 float");
  for (i = 0; i < 2; i++) {
    lcl_value *item; double x;
    if (lcl_list_get(argv[1], (size_t)i, &item) != LCL_OK) return LCL_RC_ERR;
    if (rl_get_float(interp, item, &x) != LCL_RC_OK) { lcl_ref_dec(item); return RL_ARG_ERR(interp, "raylib::vr_stereo_config_set_left_lens_center", 2, "leftLensCenter", "list of 2 float"); }
    lcl_ref_dec(item);
    p->leftLensCenter[i] = (float)x;
  }
  return LCL_RC_OK;
}

static int rl_get_VrStereoConfig_rightLensCenter(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  VrStereoConfig *p;
  lcl_value *lst;
  int i;
  if (argc != 1) return rl_arity_error(interp, "raylib::vr_stereo_config_right_lens_center", 1, argc);
  if (rl_ptr_VrStereoConfig(interp, argv[0], &p) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::vr_stereo_config_right_lens_center", 1, "vr_stereo_config", "VrStereoConfig");
  lst = lcl_list_new();
  if (!lst) return LCL_RC_ERR;
  for (i = 0; i < 2; i++) {
    lcl_value *item = lcl_float_new((double)p->rightLensCenter[i]);
    if (!item) { lcl_ref_dec(lst); return LCL_RC_ERR; }
    lcl_list_push(&lst, item);
    lcl_ref_dec(item);
  }
  *out = lst;
  return LCL_RC_OK;
}

static int rl_set_VrStereoConfig_rightLensCenter(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  VrStereoConfig *p;
  int i;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::vr_stereo_config_set_right_lens_center", 2, argc);
  if (rl_ptr_VrStereoConfig(interp, argv[0], &p) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::vr_stereo_config_set_right_lens_center", 1, "vr_stereo_config", "VrStereoConfig");
  if (lcl_value_type_of(argv[1]) != LCL_LIST || lcl_list_len(argv[1]) != 2) return RL_ARG_ERR(interp, "raylib::vr_stereo_config_set_right_lens_center", 2, "rightLensCenter", "list of 2 float");
  for (i = 0; i < 2; i++) {
    lcl_value *item; double x;
    if (lcl_list_get(argv[1], (size_t)i, &item) != LCL_OK) return LCL_RC_ERR;
    if (rl_get_float(interp, item, &x) != LCL_RC_OK) { lcl_ref_dec(item); return RL_ARG_ERR(interp, "raylib::vr_stereo_config_set_right_lens_center", 2, "rightLensCenter", "list of 2 float"); }
    lcl_ref_dec(item);
    p->rightLensCenter[i] = (float)x;
  }
  return LCL_RC_OK;
}

static int rl_get_VrStereoConfig_leftScreenCenter(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  VrStereoConfig *p;
  lcl_value *lst;
  int i;
  if (argc != 1) return rl_arity_error(interp, "raylib::vr_stereo_config_left_screen_center", 1, argc);
  if (rl_ptr_VrStereoConfig(interp, argv[0], &p) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::vr_stereo_config_left_screen_center", 1, "vr_stereo_config", "VrStereoConfig");
  lst = lcl_list_new();
  if (!lst) return LCL_RC_ERR;
  for (i = 0; i < 2; i++) {
    lcl_value *item = lcl_float_new((double)p->leftScreenCenter[i]);
    if (!item) { lcl_ref_dec(lst); return LCL_RC_ERR; }
    lcl_list_push(&lst, item);
    lcl_ref_dec(item);
  }
  *out = lst;
  return LCL_RC_OK;
}

static int rl_set_VrStereoConfig_leftScreenCenter(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  VrStereoConfig *p;
  int i;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::vr_stereo_config_set_left_screen_center", 2, argc);
  if (rl_ptr_VrStereoConfig(interp, argv[0], &p) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::vr_stereo_config_set_left_screen_center", 1, "vr_stereo_config", "VrStereoConfig");
  if (lcl_value_type_of(argv[1]) != LCL_LIST || lcl_list_len(argv[1]) != 2) return RL_ARG_ERR(interp, "raylib::vr_stereo_config_set_left_screen_center", 2, "leftScreenCenter", "list of 2 float");
  for (i = 0; i < 2; i++) {
    lcl_value *item; double x;
    if (lcl_list_get(argv[1], (size_t)i, &item) != LCL_OK) return LCL_RC_ERR;
    if (rl_get_float(interp, item, &x) != LCL_RC_OK) { lcl_ref_dec(item); return RL_ARG_ERR(interp, "raylib::vr_stereo_config_set_left_screen_center", 2, "leftScreenCenter", "list of 2 float"); }
    lcl_ref_dec(item);
    p->leftScreenCenter[i] = (float)x;
  }
  return LCL_RC_OK;
}

static int rl_get_VrStereoConfig_rightScreenCenter(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  VrStereoConfig *p;
  lcl_value *lst;
  int i;
  if (argc != 1) return rl_arity_error(interp, "raylib::vr_stereo_config_right_screen_center", 1, argc);
  if (rl_ptr_VrStereoConfig(interp, argv[0], &p) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::vr_stereo_config_right_screen_center", 1, "vr_stereo_config", "VrStereoConfig");
  lst = lcl_list_new();
  if (!lst) return LCL_RC_ERR;
  for (i = 0; i < 2; i++) {
    lcl_value *item = lcl_float_new((double)p->rightScreenCenter[i]);
    if (!item) { lcl_ref_dec(lst); return LCL_RC_ERR; }
    lcl_list_push(&lst, item);
    lcl_ref_dec(item);
  }
  *out = lst;
  return LCL_RC_OK;
}

static int rl_set_VrStereoConfig_rightScreenCenter(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  VrStereoConfig *p;
  int i;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::vr_stereo_config_set_right_screen_center", 2, argc);
  if (rl_ptr_VrStereoConfig(interp, argv[0], &p) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::vr_stereo_config_set_right_screen_center", 1, "vr_stereo_config", "VrStereoConfig");
  if (lcl_value_type_of(argv[1]) != LCL_LIST || lcl_list_len(argv[1]) != 2) return RL_ARG_ERR(interp, "raylib::vr_stereo_config_set_right_screen_center", 2, "rightScreenCenter", "list of 2 float");
  for (i = 0; i < 2; i++) {
    lcl_value *item; double x;
    if (lcl_list_get(argv[1], (size_t)i, &item) != LCL_OK) return LCL_RC_ERR;
    if (rl_get_float(interp, item, &x) != LCL_RC_OK) { lcl_ref_dec(item); return RL_ARG_ERR(interp, "raylib::vr_stereo_config_set_right_screen_center", 2, "rightScreenCenter", "list of 2 float"); }
    lcl_ref_dec(item);
    p->rightScreenCenter[i] = (float)x;
  }
  return LCL_RC_OK;
}

static int rl_get_VrStereoConfig_scale(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  VrStereoConfig *p;
  lcl_value *lst;
  int i;
  if (argc != 1) return rl_arity_error(interp, "raylib::vr_stereo_config_scale", 1, argc);
  if (rl_ptr_VrStereoConfig(interp, argv[0], &p) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::vr_stereo_config_scale", 1, "vr_stereo_config", "VrStereoConfig");
  lst = lcl_list_new();
  if (!lst) return LCL_RC_ERR;
  for (i = 0; i < 2; i++) {
    lcl_value *item = lcl_float_new((double)p->scale[i]);
    if (!item) { lcl_ref_dec(lst); return LCL_RC_ERR; }
    lcl_list_push(&lst, item);
    lcl_ref_dec(item);
  }
  *out = lst;
  return LCL_RC_OK;
}

static int rl_set_VrStereoConfig_scale(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  VrStereoConfig *p;
  int i;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::vr_stereo_config_set_scale", 2, argc);
  if (rl_ptr_VrStereoConfig(interp, argv[0], &p) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::vr_stereo_config_set_scale", 1, "vr_stereo_config", "VrStereoConfig");
  if (lcl_value_type_of(argv[1]) != LCL_LIST || lcl_list_len(argv[1]) != 2) return RL_ARG_ERR(interp, "raylib::vr_stereo_config_set_scale", 2, "scale", "list of 2 float");
  for (i = 0; i < 2; i++) {
    lcl_value *item; double x;
    if (lcl_list_get(argv[1], (size_t)i, &item) != LCL_OK) return LCL_RC_ERR;
    if (rl_get_float(interp, item, &x) != LCL_RC_OK) { lcl_ref_dec(item); return RL_ARG_ERR(interp, "raylib::vr_stereo_config_set_scale", 2, "scale", "list of 2 float"); }
    lcl_ref_dec(item);
    p->scale[i] = (float)x;
  }
  return LCL_RC_OK;
}

static int rl_get_VrStereoConfig_scaleIn(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  VrStereoConfig *p;
  lcl_value *lst;
  int i;
  if (argc != 1) return rl_arity_error(interp, "raylib::vr_stereo_config_scale_in", 1, argc);
  if (rl_ptr_VrStereoConfig(interp, argv[0], &p) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::vr_stereo_config_scale_in", 1, "vr_stereo_config", "VrStereoConfig");
  lst = lcl_list_new();
  if (!lst) return LCL_RC_ERR;
  for (i = 0; i < 2; i++) {
    lcl_value *item = lcl_float_new((double)p->scaleIn[i]);
    if (!item) { lcl_ref_dec(lst); return LCL_RC_ERR; }
    lcl_list_push(&lst, item);
    lcl_ref_dec(item);
  }
  *out = lst;
  return LCL_RC_OK;
}

static int rl_set_VrStereoConfig_scaleIn(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  VrStereoConfig *p;
  int i;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::vr_stereo_config_set_scale_in", 2, argc);
  if (rl_ptr_VrStereoConfig(interp, argv[0], &p) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::vr_stereo_config_set_scale_in", 1, "vr_stereo_config", "VrStereoConfig");
  if (lcl_value_type_of(argv[1]) != LCL_LIST || lcl_list_len(argv[1]) != 2) return RL_ARG_ERR(interp, "raylib::vr_stereo_config_set_scale_in", 2, "scaleIn", "list of 2 float");
  for (i = 0; i < 2; i++) {
    lcl_value *item; double x;
    if (lcl_list_get(argv[1], (size_t)i, &item) != LCL_OK) return LCL_RC_ERR;
    if (rl_get_float(interp, item, &x) != LCL_RC_OK) { lcl_ref_dec(item); return RL_ARG_ERR(interp, "raylib::vr_stereo_config_set_scale_in", 2, "scaleIn", "list of 2 float"); }
    lcl_ref_dec(item);
    p->scaleIn[i] = (float)x;
  }
  return LCL_RC_OK;
}

static int rl_get_FilePathList_count(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  FilePathList s;
  if (argc != 1) return rl_arity_error(interp, "raylib::file_path_list_count", 1, argc);
  if (rl_get_FilePathList(interp, argv[0], &s) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::file_path_list_count", 1, "file_path_list", "FilePathList");
  *out = lcl_int_new((long)s.count);
  return *out ? LCL_RC_OK : LCL_RC_ERR;
}

static int rl_set_FilePathList_count(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  FilePathList *p;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::file_path_list_set_count", 2, argc);
  if (rl_ptr_FilePathList(interp, argv[0], &p) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::file_path_list_set_count", 1, "file_path_list", "FilePathList");
  { long x; if (rl_get_int(interp, argv[1], &x) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::file_path_list_set_count", 2, "count", "int"); p->count = (unsigned int)x; }
  return LCL_RC_OK;
}

static int rl_get_AutomationEvent_frame(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  AutomationEvent s;
  if (argc != 1) return rl_arity_error(interp, "raylib::automation_event_frame", 1, argc);
  if (rl_get_AutomationEvent(interp, argv[0], &s) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::automation_event_frame", 1, "automation_event", "AutomationEvent");
  *out = lcl_int_new((long)s.frame);
  return *out ? LCL_RC_OK : LCL_RC_ERR;
}

static int rl_set_AutomationEvent_frame(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  AutomationEvent *p;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::automation_event_set_frame", 2, argc);
  if (rl_ptr_AutomationEvent(interp, argv[0], &p) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::automation_event_set_frame", 1, "automation_event", "AutomationEvent");
  { long x; if (rl_get_int(interp, argv[1], &x) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::automation_event_set_frame", 2, "frame", "int"); p->frame = (unsigned int)x; }
  return LCL_RC_OK;
}

static int rl_get_AutomationEvent_type(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  AutomationEvent s;
  if (argc != 1) return rl_arity_error(interp, "raylib::automation_event_type", 1, argc);
  if (rl_get_AutomationEvent(interp, argv[0], &s) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::automation_event_type", 1, "automation_event", "AutomationEvent");
  *out = lcl_int_new((long)s.type);
  return *out ? LCL_RC_OK : LCL_RC_ERR;
}

static int rl_set_AutomationEvent_type(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  AutomationEvent *p;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::automation_event_set_type", 2, argc);
  if (rl_ptr_AutomationEvent(interp, argv[0], &p) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::automation_event_set_type", 1, "automation_event", "AutomationEvent");
  { long x; if (rl_get_int(interp, argv[1], &x) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::automation_event_set_type", 2, "type", "int"); p->type = (unsigned int)x; }
  return LCL_RC_OK;
}

static int rl_get_AutomationEvent_params(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  AutomationEvent *p;
  lcl_value *lst;
  int i;
  if (argc != 1) return rl_arity_error(interp, "raylib::automation_event_params", 1, argc);
  if (rl_ptr_AutomationEvent(interp, argv[0], &p) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::automation_event_params", 1, "automation_event", "AutomationEvent");
  lst = lcl_list_new();
  if (!lst) return LCL_RC_ERR;
  for (i = 0; i < 4; i++) {
    lcl_value *item = lcl_int_new((long)p->params[i]);
    if (!item) { lcl_ref_dec(lst); return LCL_RC_ERR; }
    lcl_list_push(&lst, item);
    lcl_ref_dec(item);
  }
  *out = lst;
  return LCL_RC_OK;
}

static int rl_set_AutomationEvent_params(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  AutomationEvent *p;
  int i;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::automation_event_set_params", 2, argc);
  if (rl_ptr_AutomationEvent(interp, argv[0], &p) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::automation_event_set_params", 1, "automation_event", "AutomationEvent");
  if (lcl_value_type_of(argv[1]) != LCL_LIST || lcl_list_len(argv[1]) != 4) return RL_ARG_ERR(interp, "raylib::automation_event_set_params", 2, "params", "list of 4 int");
  for (i = 0; i < 4; i++) {
    lcl_value *item; long x;
    if (lcl_list_get(argv[1], (size_t)i, &item) != LCL_OK) return LCL_RC_ERR;
    if (rl_get_int(interp, item, &x) != LCL_RC_OK) { lcl_ref_dec(item); return RL_ARG_ERR(interp, "raylib::automation_event_set_params", 2, "params", "list of 4 int"); }
    lcl_ref_dec(item);
    p->params[i] = (int)x;
  }
  return LCL_RC_OK;
}

static int rl_get_AutomationEventList_capacity(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  AutomationEventList s;
  if (argc != 1) return rl_arity_error(interp, "raylib::automation_event_list_capacity", 1, argc);
  if (rl_get_AutomationEventList(interp, argv[0], &s) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::automation_event_list_capacity", 1, "automation_event_list", "AutomationEventList");
  *out = lcl_int_new((long)s.capacity);
  return *out ? LCL_RC_OK : LCL_RC_ERR;
}

static int rl_set_AutomationEventList_capacity(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  AutomationEventList *p;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::automation_event_list_set_capacity", 2, argc);
  if (rl_ptr_AutomationEventList(interp, argv[0], &p) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::automation_event_list_set_capacity", 1, "automation_event_list", "AutomationEventList");
  { long x; if (rl_get_int(interp, argv[1], &x) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::automation_event_list_set_capacity", 2, "capacity", "int"); p->capacity = (unsigned int)x; }
  return LCL_RC_OK;
}

static int rl_get_AutomationEventList_count(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  AutomationEventList s;
  if (argc != 1) return rl_arity_error(interp, "raylib::automation_event_list_count", 1, argc);
  if (rl_get_AutomationEventList(interp, argv[0], &s) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::automation_event_list_count", 1, "automation_event_list", "AutomationEventList");
  *out = lcl_int_new((long)s.count);
  return *out ? LCL_RC_OK : LCL_RC_ERR;
}

static int rl_set_AutomationEventList_count(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  AutomationEventList *p;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::automation_event_list_set_count", 2, argc);
  if (rl_ptr_AutomationEventList(interp, argv[0], &p) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::automation_event_list_set_count", 1, "automation_event_list", "AutomationEventList");
  { long x; if (rl_get_int(interp, argv[1], &x) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::automation_event_list_set_count", 2, "count", "int"); p->count = (unsigned int)x; }
  return LCL_RC_OK;
}

/* InitWindow: Initialize window and OpenGL context */
static int rl_fn_InitWindow(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  long a0;
  long a1;
  const char *a2;
  (void)out;
  if (argc != 3) return rl_arity_error(interp, "raylib::init_window", 3, argc);
  if (rl_get_int(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::init_window", 1, "width", "int");
  if (rl_get_int(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::init_window", 2, "height", "int");
  if (rl_get_string(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::init_window", 3, "title", "string");
  InitWindow((int)a0, (int)a1, a2);
  return LCL_RC_OK;
}

/* CloseWindow: Close window and unload OpenGL context */
static int rl_fn_CloseWindow(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  (void)out;
  (void)argv;
  if (argc != 0) return rl_arity_error(interp, "raylib::close_window", 0, argc);
  CloseWindow();
  return LCL_RC_OK;
}

/* WindowShouldClose: Check if application should close (KEY_ESCAPE pressed or windows close icon clicked) */
static int rl_fn_WindowShouldClose(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  bool r;
  (void)argv;
  if (argc != 0) return rl_arity_error(interp, "raylib::window_should_close", 0, argc);
  r = WindowShouldClose();
  *out = lcl_int_new((long)r);
  return LCL_RC_OK;
}

/* IsWindowReady: Check if window has been initialized successfully */
static int rl_fn_IsWindowReady(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  bool r;
  (void)argv;
  if (argc != 0) return rl_arity_error(interp, "raylib::is_window_ready", 0, argc);
  r = IsWindowReady();
  *out = lcl_int_new((long)r);
  return LCL_RC_OK;
}

/* IsWindowFullscreen: Check if window is currently fullscreen */
static int rl_fn_IsWindowFullscreen(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  bool r;
  (void)argv;
  if (argc != 0) return rl_arity_error(interp, "raylib::is_window_fullscreen", 0, argc);
  r = IsWindowFullscreen();
  *out = lcl_int_new((long)r);
  return LCL_RC_OK;
}

/* IsWindowHidden: Check if window is currently hidden */
static int rl_fn_IsWindowHidden(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  bool r;
  (void)argv;
  if (argc != 0) return rl_arity_error(interp, "raylib::is_window_hidden", 0, argc);
  r = IsWindowHidden();
  *out = lcl_int_new((long)r);
  return LCL_RC_OK;
}

/* IsWindowMinimized: Check if window is currently minimized */
static int rl_fn_IsWindowMinimized(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  bool r;
  (void)argv;
  if (argc != 0) return rl_arity_error(interp, "raylib::is_window_minimized", 0, argc);
  r = IsWindowMinimized();
  *out = lcl_int_new((long)r);
  return LCL_RC_OK;
}

/* IsWindowMaximized: Check if window is currently maximized */
static int rl_fn_IsWindowMaximized(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  bool r;
  (void)argv;
  if (argc != 0) return rl_arity_error(interp, "raylib::is_window_maximized", 0, argc);
  r = IsWindowMaximized();
  *out = lcl_int_new((long)r);
  return LCL_RC_OK;
}

/* IsWindowFocused: Check if window is currently focused */
static int rl_fn_IsWindowFocused(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  bool r;
  (void)argv;
  if (argc != 0) return rl_arity_error(interp, "raylib::is_window_focused", 0, argc);
  r = IsWindowFocused();
  *out = lcl_int_new((long)r);
  return LCL_RC_OK;
}

/* IsWindowResized: Check if window has been resized last frame */
static int rl_fn_IsWindowResized(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  bool r;
  (void)argv;
  if (argc != 0) return rl_arity_error(interp, "raylib::is_window_resized", 0, argc);
  r = IsWindowResized();
  *out = lcl_int_new((long)r);
  return LCL_RC_OK;
}

/* IsWindowState: Check if one specific window flag is enabled */
static int rl_fn_IsWindowState(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  long a0;
  bool r;
  if (argc != 1) return rl_arity_error(interp, "raylib::is_window_state", 1, argc);
  if (rl_get_int(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::is_window_state", 1, "flag", "int");
  r = IsWindowState((unsigned int)a0);
  *out = lcl_int_new((long)r);
  return LCL_RC_OK;
}

/* SetWindowState: Set window configuration state using flags */
static int rl_fn_SetWindowState(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  long a0;
  (void)out;
  if (argc != 1) return rl_arity_error(interp, "raylib::set_window_state", 1, argc);
  if (rl_get_int(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::set_window_state", 1, "flags", "int");
  SetWindowState((unsigned int)a0);
  return LCL_RC_OK;
}

/* ClearWindowState: Clear window configuration state flags */
static int rl_fn_ClearWindowState(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  long a0;
  (void)out;
  if (argc != 1) return rl_arity_error(interp, "raylib::clear_window_state", 1, argc);
  if (rl_get_int(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::clear_window_state", 1, "flags", "int");
  ClearWindowState((unsigned int)a0);
  return LCL_RC_OK;
}

/* ToggleFullscreen: Toggle window state: fullscreen/windowed, resizes monitor to match window resolution */
static int rl_fn_ToggleFullscreen(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  (void)out;
  (void)argv;
  if (argc != 0) return rl_arity_error(interp, "raylib::toggle_fullscreen", 0, argc);
  ToggleFullscreen();
  return LCL_RC_OK;
}

/* ToggleBorderlessWindowed: Toggle window state: borderless windowed, resizes window to match monitor resolution */
static int rl_fn_ToggleBorderlessWindowed(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  (void)out;
  (void)argv;
  if (argc != 0) return rl_arity_error(interp, "raylib::toggle_borderless_windowed", 0, argc);
  ToggleBorderlessWindowed();
  return LCL_RC_OK;
}

/* MaximizeWindow: Set window state: maximized, if resizable */
static int rl_fn_MaximizeWindow(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  (void)out;
  (void)argv;
  if (argc != 0) return rl_arity_error(interp, "raylib::maximize_window", 0, argc);
  MaximizeWindow();
  return LCL_RC_OK;
}

/* MinimizeWindow: Set window state: minimized, if resizable */
static int rl_fn_MinimizeWindow(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  (void)out;
  (void)argv;
  if (argc != 0) return rl_arity_error(interp, "raylib::minimize_window", 0, argc);
  MinimizeWindow();
  return LCL_RC_OK;
}

/* RestoreWindow: Restore window from being minimized/maximized */
static int rl_fn_RestoreWindow(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  (void)out;
  (void)argv;
  if (argc != 0) return rl_arity_error(interp, "raylib::restore_window", 0, argc);
  RestoreWindow();
  return LCL_RC_OK;
}

/* SetWindowIcon: Set icon for window (single image, RGBA 32bit) */
static int rl_fn_SetWindowIcon(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Image a0;
  (void)out;
  if (argc != 1) return rl_arity_error(interp, "raylib::set_window_icon", 1, argc);
  if (rl_get_Image(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::set_window_icon", 1, "image", "Image");
  SetWindowIcon(a0);
  return LCL_RC_OK;
}

/* SetWindowIcons: Set icon for window (multiple images, RGBA 32bit) */
static int rl_fn_SetWindowIcons(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Image *a0 = NULL;
  int n0 = 0;
  (void)out;
  int rc = LCL_RC_ERR;
  if (argc != 1) return rl_arity_error(interp, "raylib::set_window_icons", 1, argc);
  if (lcl_value_type_of(argv[0]) != LCL_LIST) return RL_ARG_ERR(interp, "raylib::set_window_icons", 1, "images", "list of Image");
  n0 = (int)lcl_list_len(argv[0]);
  a0 = (Image *)calloc(n0 > 0 ? (size_t)n0 : 1, sizeof(*a0));
  if (!a0) goto cleanup;
  {
    int k;
    for (k = 0; k < n0; k++) {
      lcl_value *item;
      if (lcl_list_get(argv[0], (size_t)k, &item) != LCL_OK) goto cleanup;
      if (rl_get_Image(interp, item, &a0[k]) != LCL_RC_OK) { lcl_ref_dec(item); RL_ARG_ERR(interp, "raylib::set_window_icons", 1, "images", "list of Image"); goto cleanup; }
      lcl_ref_dec(item);
    }
  }
  SetWindowIcons(a0, n0);
  rc = LCL_RC_OK;
cleanup:
  free(a0);
  return rc;
}

/* SetWindowTitle: Set title for window */
static int rl_fn_SetWindowTitle(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  const char *a0;
  (void)out;
  if (argc != 1) return rl_arity_error(interp, "raylib::set_window_title", 1, argc);
  if (rl_get_string(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::set_window_title", 1, "title", "string");
  SetWindowTitle(a0);
  return LCL_RC_OK;
}

/* SetWindowPosition: Set window position on screen */
static int rl_fn_SetWindowPosition(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  long a0;
  long a1;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::set_window_position", 2, argc);
  if (rl_get_int(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::set_window_position", 1, "x", "int");
  if (rl_get_int(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::set_window_position", 2, "y", "int");
  SetWindowPosition((int)a0, (int)a1);
  return LCL_RC_OK;
}

/* SetWindowMonitor: Set monitor for the current window */
static int rl_fn_SetWindowMonitor(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  long a0;
  (void)out;
  if (argc != 1) return rl_arity_error(interp, "raylib::set_window_monitor", 1, argc);
  if (rl_get_int(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::set_window_monitor", 1, "monitor", "int");
  SetWindowMonitor((int)a0);
  return LCL_RC_OK;
}

/* SetWindowMinSize: Set window minimum dimensions (for FLAG_WINDOW_RESIZABLE) */
static int rl_fn_SetWindowMinSize(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  long a0;
  long a1;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::set_window_min_size", 2, argc);
  if (rl_get_int(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::set_window_min_size", 1, "width", "int");
  if (rl_get_int(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::set_window_min_size", 2, "height", "int");
  SetWindowMinSize((int)a0, (int)a1);
  return LCL_RC_OK;
}

/* SetWindowMaxSize: Set window maximum dimensions (for FLAG_WINDOW_RESIZABLE) */
static int rl_fn_SetWindowMaxSize(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  long a0;
  long a1;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::set_window_max_size", 2, argc);
  if (rl_get_int(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::set_window_max_size", 1, "width", "int");
  if (rl_get_int(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::set_window_max_size", 2, "height", "int");
  SetWindowMaxSize((int)a0, (int)a1);
  return LCL_RC_OK;
}

/* SetWindowSize: Set window dimensions */
static int rl_fn_SetWindowSize(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  long a0;
  long a1;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::set_window_size", 2, argc);
  if (rl_get_int(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::set_window_size", 1, "width", "int");
  if (rl_get_int(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::set_window_size", 2, "height", "int");
  SetWindowSize((int)a0, (int)a1);
  return LCL_RC_OK;
}

/* SetWindowOpacity: Set window opacity [0.0f..1.0f] */
static int rl_fn_SetWindowOpacity(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  double a0;
  (void)out;
  if (argc != 1) return rl_arity_error(interp, "raylib::set_window_opacity", 1, argc);
  if (rl_get_float(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::set_window_opacity", 1, "opacity", "float");
  SetWindowOpacity((float)a0);
  return LCL_RC_OK;
}

/* SetWindowFocused: Set window focused */
static int rl_fn_SetWindowFocused(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  (void)out;
  (void)argv;
  if (argc != 0) return rl_arity_error(interp, "raylib::set_window_focused", 0, argc);
  SetWindowFocused();
  return LCL_RC_OK;
}

/* GetScreenWidth: Get current screen width */
static int rl_fn_GetScreenWidth(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  int r;
  (void)argv;
  if (argc != 0) return rl_arity_error(interp, "raylib::get_screen_width", 0, argc);
  r = GetScreenWidth();
  *out = lcl_int_new((long)r);
  return LCL_RC_OK;
}

/* GetScreenHeight: Get current screen height */
static int rl_fn_GetScreenHeight(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  int r;
  (void)argv;
  if (argc != 0) return rl_arity_error(interp, "raylib::get_screen_height", 0, argc);
  r = GetScreenHeight();
  *out = lcl_int_new((long)r);
  return LCL_RC_OK;
}

/* GetRenderWidth: Get current render width (it considers HiDPI) */
static int rl_fn_GetRenderWidth(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  int r;
  (void)argv;
  if (argc != 0) return rl_arity_error(interp, "raylib::get_render_width", 0, argc);
  r = GetRenderWidth();
  *out = lcl_int_new((long)r);
  return LCL_RC_OK;
}

/* GetRenderHeight: Get current render height (it considers HiDPI) */
static int rl_fn_GetRenderHeight(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  int r;
  (void)argv;
  if (argc != 0) return rl_arity_error(interp, "raylib::get_render_height", 0, argc);
  r = GetRenderHeight();
  *out = lcl_int_new((long)r);
  return LCL_RC_OK;
}

/* GetMonitorCount: Get number of connected monitors */
static int rl_fn_GetMonitorCount(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  int r;
  (void)argv;
  if (argc != 0) return rl_arity_error(interp, "raylib::get_monitor_count", 0, argc);
  r = GetMonitorCount();
  *out = lcl_int_new((long)r);
  return LCL_RC_OK;
}

/* GetCurrentMonitor: Get current monitor where window is placed */
static int rl_fn_GetCurrentMonitor(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  int r;
  (void)argv;
  if (argc != 0) return rl_arity_error(interp, "raylib::get_current_monitor", 0, argc);
  r = GetCurrentMonitor();
  *out = lcl_int_new((long)r);
  return LCL_RC_OK;
}

/* GetMonitorPosition: Get specified monitor position */
static int rl_fn_GetMonitorPosition(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  long a0;
  Vector2 r;
  if (argc != 1) return rl_arity_error(interp, "raylib::get_monitor_position", 1, argc);
  if (rl_get_int(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::get_monitor_position", 1, "monitor", "int");
  r = GetMonitorPosition((int)a0);
  *out = rl_new_Vector2(r);
  return LCL_RC_OK;
}

/* GetMonitorWidth: Get specified monitor width (current video mode used by monitor) */
static int rl_fn_GetMonitorWidth(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  long a0;
  int r;
  if (argc != 1) return rl_arity_error(interp, "raylib::get_monitor_width", 1, argc);
  if (rl_get_int(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::get_monitor_width", 1, "monitor", "int");
  r = GetMonitorWidth((int)a0);
  *out = lcl_int_new((long)r);
  return LCL_RC_OK;
}

/* GetMonitorHeight: Get specified monitor height (current video mode used by monitor) */
static int rl_fn_GetMonitorHeight(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  long a0;
  int r;
  if (argc != 1) return rl_arity_error(interp, "raylib::get_monitor_height", 1, argc);
  if (rl_get_int(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::get_monitor_height", 1, "monitor", "int");
  r = GetMonitorHeight((int)a0);
  *out = lcl_int_new((long)r);
  return LCL_RC_OK;
}

/* GetMonitorPhysicalWidth: Get specified monitor physical width in millimetres */
static int rl_fn_GetMonitorPhysicalWidth(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  long a0;
  int r;
  if (argc != 1) return rl_arity_error(interp, "raylib::get_monitor_physical_width", 1, argc);
  if (rl_get_int(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::get_monitor_physical_width", 1, "monitor", "int");
  r = GetMonitorPhysicalWidth((int)a0);
  *out = lcl_int_new((long)r);
  return LCL_RC_OK;
}

/* GetMonitorPhysicalHeight: Get specified monitor physical height in millimetres */
static int rl_fn_GetMonitorPhysicalHeight(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  long a0;
  int r;
  if (argc != 1) return rl_arity_error(interp, "raylib::get_monitor_physical_height", 1, argc);
  if (rl_get_int(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::get_monitor_physical_height", 1, "monitor", "int");
  r = GetMonitorPhysicalHeight((int)a0);
  *out = lcl_int_new((long)r);
  return LCL_RC_OK;
}

/* GetMonitorRefreshRate: Get specified monitor refresh rate */
static int rl_fn_GetMonitorRefreshRate(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  long a0;
  int r;
  if (argc != 1) return rl_arity_error(interp, "raylib::get_monitor_refresh_rate", 1, argc);
  if (rl_get_int(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::get_monitor_refresh_rate", 1, "monitor", "int");
  r = GetMonitorRefreshRate((int)a0);
  *out = lcl_int_new((long)r);
  return LCL_RC_OK;
}

/* GetWindowPosition: Get window position XY on monitor */
static int rl_fn_GetWindowPosition(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Vector2 r;
  (void)argv;
  if (argc != 0) return rl_arity_error(interp, "raylib::get_window_position", 0, argc);
  r = GetWindowPosition();
  *out = rl_new_Vector2(r);
  return LCL_RC_OK;
}

/* GetWindowScaleDPI: Get window scale DPI factor */
static int rl_fn_GetWindowScaleDPI(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Vector2 r;
  (void)argv;
  if (argc != 0) return rl_arity_error(interp, "raylib::get_window_scale_dpi", 0, argc);
  r = GetWindowScaleDPI();
  *out = rl_new_Vector2(r);
  return LCL_RC_OK;
}

/* GetMonitorName: Get the human-readable, UTF-8 encoded name of the specified monitor */
static int rl_fn_GetMonitorName(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  long a0;
  const char * r;
  if (argc != 1) return rl_arity_error(interp, "raylib::get_monitor_name", 1, argc);
  if (rl_get_int(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::get_monitor_name", 1, "monitor", "int");
  r = GetMonitorName((int)a0);
  *out = lcl_string_new(r ? r : "");
  return LCL_RC_OK;
}

/* SetClipboardText: Set clipboard text content */
static int rl_fn_SetClipboardText(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  const char *a0;
  (void)out;
  if (argc != 1) return rl_arity_error(interp, "raylib::set_clipboard_text", 1, argc);
  if (rl_get_string(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::set_clipboard_text", 1, "text", "string");
  SetClipboardText(a0);
  return LCL_RC_OK;
}

/* GetClipboardText: Get clipboard text content */
static int rl_fn_GetClipboardText(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  const char * r;
  (void)argv;
  if (argc != 0) return rl_arity_error(interp, "raylib::get_clipboard_text", 0, argc);
  r = GetClipboardText();
  *out = lcl_string_new(r ? r : "");
  return LCL_RC_OK;
}

/* GetClipboardImage: Get clipboard image content */
static int rl_fn_GetClipboardImage(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Image r;
  (void)argv;
  if (argc != 0) return rl_arity_error(interp, "raylib::get_clipboard_image", 0, argc);
  r = GetClipboardImage();
  *out = rl_new_Image(r);
  return LCL_RC_OK;
}

/* EnableEventWaiting: Enable waiting for events on EndDrawing(), no automatic event polling */
static int rl_fn_EnableEventWaiting(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  (void)out;
  (void)argv;
  if (argc != 0) return rl_arity_error(interp, "raylib::enable_event_waiting", 0, argc);
  EnableEventWaiting();
  return LCL_RC_OK;
}

/* DisableEventWaiting: Disable waiting for events on EndDrawing(), automatic events polling */
static int rl_fn_DisableEventWaiting(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  (void)out;
  (void)argv;
  if (argc != 0) return rl_arity_error(interp, "raylib::disable_event_waiting", 0, argc);
  DisableEventWaiting();
  return LCL_RC_OK;
}

/* ShowCursor: Shows cursor */
static int rl_fn_ShowCursor(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  (void)out;
  (void)argv;
  if (argc != 0) return rl_arity_error(interp, "raylib::show_cursor", 0, argc);
  ShowCursor();
  return LCL_RC_OK;
}

/* HideCursor: Hides cursor */
static int rl_fn_HideCursor(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  (void)out;
  (void)argv;
  if (argc != 0) return rl_arity_error(interp, "raylib::hide_cursor", 0, argc);
  HideCursor();
  return LCL_RC_OK;
}

/* IsCursorHidden: Check if cursor is not visible */
static int rl_fn_IsCursorHidden(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  bool r;
  (void)argv;
  if (argc != 0) return rl_arity_error(interp, "raylib::is_cursor_hidden", 0, argc);
  r = IsCursorHidden();
  *out = lcl_int_new((long)r);
  return LCL_RC_OK;
}

/* EnableCursor: Enables cursor (unlock cursor) */
static int rl_fn_EnableCursor(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  (void)out;
  (void)argv;
  if (argc != 0) return rl_arity_error(interp, "raylib::enable_cursor", 0, argc);
  EnableCursor();
  return LCL_RC_OK;
}

/* DisableCursor: Disables cursor (lock cursor) */
static int rl_fn_DisableCursor(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  (void)out;
  (void)argv;
  if (argc != 0) return rl_arity_error(interp, "raylib::disable_cursor", 0, argc);
  DisableCursor();
  return LCL_RC_OK;
}

/* IsCursorOnScreen: Check if cursor is on the screen */
static int rl_fn_IsCursorOnScreen(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  bool r;
  (void)argv;
  if (argc != 0) return rl_arity_error(interp, "raylib::is_cursor_on_screen", 0, argc);
  r = IsCursorOnScreen();
  *out = lcl_int_new((long)r);
  return LCL_RC_OK;
}

/* ClearBackground: Set background color (framebuffer clear color) */
static int rl_fn_ClearBackground(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Color a0;
  (void)out;
  if (argc != 1) return rl_arity_error(interp, "raylib::clear_background", 1, argc);
  if (rl_get_Color(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::clear_background", 1, "color", "Color");
  ClearBackground(a0);
  return LCL_RC_OK;
}

/* BeginDrawing: Setup canvas (framebuffer) to start drawing */
static int rl_fn_BeginDrawing(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  (void)out;
  (void)argv;
  if (argc != 0) return rl_arity_error(interp, "raylib::begin_drawing", 0, argc);
  BeginDrawing();
  return LCL_RC_OK;
}

/* EndDrawing: End canvas drawing and swap buffers (double buffering) */
static int rl_fn_EndDrawing(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  (void)out;
  (void)argv;
  if (argc != 0) return rl_arity_error(interp, "raylib::end_drawing", 0, argc);
  EndDrawing();
  return LCL_RC_OK;
}

/* BeginMode2D: Begin 2D mode with custom camera (2D) */
static int rl_fn_BeginMode2D(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Camera2D a0;
  (void)out;
  if (argc != 1) return rl_arity_error(interp, "raylib::begin_mode_2d", 1, argc);
  if (rl_get_Camera2D(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::begin_mode_2d", 1, "camera", "Camera2D");
  BeginMode2D(a0);
  return LCL_RC_OK;
}

/* EndMode2D: Ends 2D mode with custom camera */
static int rl_fn_EndMode2D(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  (void)out;
  (void)argv;
  if (argc != 0) return rl_arity_error(interp, "raylib::end_mode_2d", 0, argc);
  EndMode2D();
  return LCL_RC_OK;
}

/* BeginMode3D: Begin 3D mode with custom camera (3D) */
static int rl_fn_BeginMode3D(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Camera3D a0;
  (void)out;
  if (argc != 1) return rl_arity_error(interp, "raylib::begin_mode_3d", 1, argc);
  if (rl_get_Camera3D(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::begin_mode_3d", 1, "camera", "Camera3D");
  BeginMode3D(a0);
  return LCL_RC_OK;
}

/* EndMode3D: Ends 3D mode and returns to default 2D orthographic mode */
static int rl_fn_EndMode3D(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  (void)out;
  (void)argv;
  if (argc != 0) return rl_arity_error(interp, "raylib::end_mode_3d", 0, argc);
  EndMode3D();
  return LCL_RC_OK;
}

/* BeginTextureMode: Begin drawing to render texture */
static int rl_fn_BeginTextureMode(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  RenderTexture a0;
  (void)out;
  if (argc != 1) return rl_arity_error(interp, "raylib::begin_texture_mode", 1, argc);
  if (rl_get_RenderTexture(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::begin_texture_mode", 1, "target", "RenderTexture");
  BeginTextureMode(a0);
  return LCL_RC_OK;
}

/* EndTextureMode: Ends drawing to render texture */
static int rl_fn_EndTextureMode(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  (void)out;
  (void)argv;
  if (argc != 0) return rl_arity_error(interp, "raylib::end_texture_mode", 0, argc);
  EndTextureMode();
  return LCL_RC_OK;
}

/* BeginShaderMode: Begin custom shader drawing */
static int rl_fn_BeginShaderMode(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Shader a0;
  (void)out;
  if (argc != 1) return rl_arity_error(interp, "raylib::begin_shader_mode", 1, argc);
  if (rl_get_Shader(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::begin_shader_mode", 1, "shader", "Shader");
  BeginShaderMode(a0);
  return LCL_RC_OK;
}

/* EndShaderMode: End custom shader drawing (use default shader) */
static int rl_fn_EndShaderMode(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  (void)out;
  (void)argv;
  if (argc != 0) return rl_arity_error(interp, "raylib::end_shader_mode", 0, argc);
  EndShaderMode();
  return LCL_RC_OK;
}

/* BeginBlendMode: Begin blending mode (alpha, additive, multiplied, subtract, custom) */
static int rl_fn_BeginBlendMode(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  long a0;
  (void)out;
  if (argc != 1) return rl_arity_error(interp, "raylib::begin_blend_mode", 1, argc);
  if (rl_get_int(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::begin_blend_mode", 1, "mode", "int");
  BeginBlendMode((int)a0);
  return LCL_RC_OK;
}

/* EndBlendMode: End blending mode (reset to default: alpha blending) */
static int rl_fn_EndBlendMode(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  (void)out;
  (void)argv;
  if (argc != 0) return rl_arity_error(interp, "raylib::end_blend_mode", 0, argc);
  EndBlendMode();
  return LCL_RC_OK;
}

/* BeginScissorMode: Begin scissor mode (define screen area for following drawing) */
static int rl_fn_BeginScissorMode(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  long a0;
  long a1;
  long a2;
  long a3;
  (void)out;
  if (argc != 4) return rl_arity_error(interp, "raylib::begin_scissor_mode", 4, argc);
  if (rl_get_int(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::begin_scissor_mode", 1, "x", "int");
  if (rl_get_int(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::begin_scissor_mode", 2, "y", "int");
  if (rl_get_int(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::begin_scissor_mode", 3, "width", "int");
  if (rl_get_int(interp, argv[3], &a3) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::begin_scissor_mode", 4, "height", "int");
  BeginScissorMode((int)a0, (int)a1, (int)a2, (int)a3);
  return LCL_RC_OK;
}

/* EndScissorMode: End scissor mode */
static int rl_fn_EndScissorMode(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  (void)out;
  (void)argv;
  if (argc != 0) return rl_arity_error(interp, "raylib::end_scissor_mode", 0, argc);
  EndScissorMode();
  return LCL_RC_OK;
}

/* BeginVrStereoMode: Begin stereo rendering (requires VR simulator) */
static int rl_fn_BeginVrStereoMode(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  VrStereoConfig a0;
  (void)out;
  if (argc != 1) return rl_arity_error(interp, "raylib::begin_vr_stereo_mode", 1, argc);
  if (rl_get_VrStereoConfig(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::begin_vr_stereo_mode", 1, "config", "VrStereoConfig");
  BeginVrStereoMode(a0);
  return LCL_RC_OK;
}

/* EndVrStereoMode: End stereo rendering (requires VR simulator) */
static int rl_fn_EndVrStereoMode(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  (void)out;
  (void)argv;
  if (argc != 0) return rl_arity_error(interp, "raylib::end_vr_stereo_mode", 0, argc);
  EndVrStereoMode();
  return LCL_RC_OK;
}

/* LoadVrStereoConfig: Load VR stereo config for VR simulator device parameters */
static int rl_fn_LoadVrStereoConfig(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  VrDeviceInfo a0;
  VrStereoConfig r;
  if (argc != 1) return rl_arity_error(interp, "raylib::load_vr_stereo_config", 1, argc);
  if (rl_get_VrDeviceInfo(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::load_vr_stereo_config", 1, "device", "VrDeviceInfo");
  r = LoadVrStereoConfig(a0);
  *out = rl_new_VrStereoConfig(r);
  return LCL_RC_OK;
}

/* UnloadVrStereoConfig: Unload VR stereo config */
static int rl_fn_UnloadVrStereoConfig(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  VrStereoConfig a0;
  (void)out;
  if (argc != 1) return rl_arity_error(interp, "raylib::unload_vr_stereo_config", 1, argc);
  if (rl_get_VrStereoConfig(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::unload_vr_stereo_config", 1, "config", "VrStereoConfig");
  UnloadVrStereoConfig(a0);
  return LCL_RC_OK;
}

/* LoadShader: Load shader from files and bind default locations */
static int rl_fn_LoadShader(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  const char *a0;
  const char *a1;
  Shader r;
  if (argc != 2) return rl_arity_error(interp, "raylib::load_shader", 2, argc);
  if (rl_get_string(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::load_shader", 1, "vsFileName", "string");
  if (rl_get_string(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::load_shader", 2, "fsFileName", "string");
  r = LoadShader(a0, a1);
  *out = rl_new_Shader(r);
  return LCL_RC_OK;
}

/* LoadShaderFromMemory: Load shader from code strings and bind default locations */
static int rl_fn_LoadShaderFromMemory(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  const char *a0;
  const char *a1;
  Shader r;
  if (argc != 2) return rl_arity_error(interp, "raylib::load_shader_from_memory", 2, argc);
  if (rl_get_string(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::load_shader_from_memory", 1, "vsCode", "string");
  if (rl_get_string(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::load_shader_from_memory", 2, "fsCode", "string");
  r = LoadShaderFromMemory(a0, a1);
  *out = rl_new_Shader(r);
  return LCL_RC_OK;
}

/* IsShaderValid: Check if a shader is valid (loaded on GPU) */
static int rl_fn_IsShaderValid(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Shader a0;
  bool r;
  if (argc != 1) return rl_arity_error(interp, "raylib::is_shader_valid", 1, argc);
  if (rl_get_Shader(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::is_shader_valid", 1, "shader", "Shader");
  r = IsShaderValid(a0);
  *out = lcl_int_new((long)r);
  return LCL_RC_OK;
}

/* GetShaderLocation: Get shader uniform location */
static int rl_fn_GetShaderLocation(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Shader a0;
  const char *a1;
  int r;
  if (argc != 2) return rl_arity_error(interp, "raylib::get_shader_location", 2, argc);
  if (rl_get_Shader(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::get_shader_location", 1, "shader", "Shader");
  if (rl_get_string(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::get_shader_location", 2, "uniformName", "string");
  r = GetShaderLocation(a0, a1);
  *out = lcl_int_new((long)r);
  return LCL_RC_OK;
}

/* GetShaderLocationAttrib: Get shader attribute location */
static int rl_fn_GetShaderLocationAttrib(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Shader a0;
  const char *a1;
  int r;
  if (argc != 2) return rl_arity_error(interp, "raylib::get_shader_location_attrib", 2, argc);
  if (rl_get_Shader(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::get_shader_location_attrib", 1, "shader", "Shader");
  if (rl_get_string(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::get_shader_location_attrib", 2, "attribName", "string");
  r = GetShaderLocationAttrib(a0, a1);
  *out = lcl_int_new((long)r);
  return LCL_RC_OK;
}

/* SetShaderValueMatrix: Set shader uniform value (matrix 4x4) */
static int rl_fn_SetShaderValueMatrix(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Shader a0;
  long a1;
  Matrix a2;
  (void)out;
  if (argc != 3) return rl_arity_error(interp, "raylib::set_shader_value_matrix", 3, argc);
  if (rl_get_Shader(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::set_shader_value_matrix", 1, "shader", "Shader");
  if (rl_get_int(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::set_shader_value_matrix", 2, "locIndex", "int");
  if (rl_get_Matrix(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::set_shader_value_matrix", 3, "mat", "Matrix");
  SetShaderValueMatrix(a0, (int)a1, a2);
  return LCL_RC_OK;
}

/* SetShaderValueTexture: Set shader uniform value and bind the texture (sampler2d) */
static int rl_fn_SetShaderValueTexture(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Shader a0;
  long a1;
  Texture a2;
  (void)out;
  if (argc != 3) return rl_arity_error(interp, "raylib::set_shader_value_texture", 3, argc);
  if (rl_get_Shader(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::set_shader_value_texture", 1, "shader", "Shader");
  if (rl_get_int(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::set_shader_value_texture", 2, "locIndex", "int");
  if (rl_get_Texture(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::set_shader_value_texture", 3, "texture", "Texture");
  SetShaderValueTexture(a0, (int)a1, a2);
  return LCL_RC_OK;
}

/* UnloadShader: Unload shader from GPU memory (VRAM) */
static int rl_fn_UnloadShader(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Shader a0;
  (void)out;
  if (argc != 1) return rl_arity_error(interp, "raylib::unload_shader", 1, argc);
  if (rl_get_Shader(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::unload_shader", 1, "shader", "Shader");
  UnloadShader(a0);
  return LCL_RC_OK;
}

/* GetScreenToWorldRay: Get a ray trace from screen position (i.e mouse) */
static int rl_fn_GetScreenToWorldRay(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Vector2 a0;
  Camera3D a1;
  Ray r;
  if (argc != 2) return rl_arity_error(interp, "raylib::get_screen_to_world_ray", 2, argc);
  if (rl_get_Vector2(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::get_screen_to_world_ray", 1, "position", "Vector2");
  if (rl_get_Camera3D(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::get_screen_to_world_ray", 2, "camera", "Camera3D");
  r = GetScreenToWorldRay(a0, a1);
  *out = rl_new_Ray(r);
  return LCL_RC_OK;
}

/* GetScreenToWorldRayEx: Get a ray trace from screen position (i.e mouse) in a viewport */
static int rl_fn_GetScreenToWorldRayEx(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Vector2 a0;
  Camera3D a1;
  long a2;
  long a3;
  Ray r;
  if (argc != 4) return rl_arity_error(interp, "raylib::get_screen_to_world_ray_ex", 4, argc);
  if (rl_get_Vector2(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::get_screen_to_world_ray_ex", 1, "position", "Vector2");
  if (rl_get_Camera3D(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::get_screen_to_world_ray_ex", 2, "camera", "Camera3D");
  if (rl_get_int(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::get_screen_to_world_ray_ex", 3, "width", "int");
  if (rl_get_int(interp, argv[3], &a3) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::get_screen_to_world_ray_ex", 4, "height", "int");
  r = GetScreenToWorldRayEx(a0, a1, (int)a2, (int)a3);
  *out = rl_new_Ray(r);
  return LCL_RC_OK;
}

/* GetWorldToScreen: Get the screen space position for a 3d world space position */
static int rl_fn_GetWorldToScreen(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Vector3 a0;
  Camera3D a1;
  Vector2 r;
  if (argc != 2) return rl_arity_error(interp, "raylib::get_world_to_screen", 2, argc);
  if (rl_get_Vector3(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::get_world_to_screen", 1, "position", "Vector3");
  if (rl_get_Camera3D(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::get_world_to_screen", 2, "camera", "Camera3D");
  r = GetWorldToScreen(a0, a1);
  *out = rl_new_Vector2(r);
  return LCL_RC_OK;
}

/* GetWorldToScreenEx: Get size position for a 3d world space position */
static int rl_fn_GetWorldToScreenEx(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Vector3 a0;
  Camera3D a1;
  long a2;
  long a3;
  Vector2 r;
  if (argc != 4) return rl_arity_error(interp, "raylib::get_world_to_screen_ex", 4, argc);
  if (rl_get_Vector3(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::get_world_to_screen_ex", 1, "position", "Vector3");
  if (rl_get_Camera3D(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::get_world_to_screen_ex", 2, "camera", "Camera3D");
  if (rl_get_int(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::get_world_to_screen_ex", 3, "width", "int");
  if (rl_get_int(interp, argv[3], &a3) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::get_world_to_screen_ex", 4, "height", "int");
  r = GetWorldToScreenEx(a0, a1, (int)a2, (int)a3);
  *out = rl_new_Vector2(r);
  return LCL_RC_OK;
}

/* GetWorldToScreen2D: Get the screen space position for a 2d camera world space position */
static int rl_fn_GetWorldToScreen2D(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Vector2 a0;
  Camera2D a1;
  Vector2 r;
  if (argc != 2) return rl_arity_error(interp, "raylib::get_world_to_screen_2d", 2, argc);
  if (rl_get_Vector2(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::get_world_to_screen_2d", 1, "position", "Vector2");
  if (rl_get_Camera2D(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::get_world_to_screen_2d", 2, "camera", "Camera2D");
  r = GetWorldToScreen2D(a0, a1);
  *out = rl_new_Vector2(r);
  return LCL_RC_OK;
}

/* GetScreenToWorld2D: Get the world space position for a 2d camera screen space position */
static int rl_fn_GetScreenToWorld2D(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Vector2 a0;
  Camera2D a1;
  Vector2 r;
  if (argc != 2) return rl_arity_error(interp, "raylib::get_screen_to_world_2d", 2, argc);
  if (rl_get_Vector2(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::get_screen_to_world_2d", 1, "position", "Vector2");
  if (rl_get_Camera2D(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::get_screen_to_world_2d", 2, "camera", "Camera2D");
  r = GetScreenToWorld2D(a0, a1);
  *out = rl_new_Vector2(r);
  return LCL_RC_OK;
}

/* GetCameraMatrix: Get camera transform matrix (view matrix) */
static int rl_fn_GetCameraMatrix(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Camera3D a0;
  Matrix r;
  if (argc != 1) return rl_arity_error(interp, "raylib::get_camera_matrix", 1, argc);
  if (rl_get_Camera3D(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::get_camera_matrix", 1, "camera", "Camera3D");
  r = GetCameraMatrix(a0);
  *out = rl_new_Matrix(r);
  return LCL_RC_OK;
}

/* GetCameraMatrix2D: Get camera 2d transform matrix */
static int rl_fn_GetCameraMatrix2D(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Camera2D a0;
  Matrix r;
  if (argc != 1) return rl_arity_error(interp, "raylib::get_camera_matrix_2d", 1, argc);
  if (rl_get_Camera2D(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::get_camera_matrix_2d", 1, "camera", "Camera2D");
  r = GetCameraMatrix2D(a0);
  *out = rl_new_Matrix(r);
  return LCL_RC_OK;
}

/* SetTargetFPS: Set target FPS (maximum) */
static int rl_fn_SetTargetFPS(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  long a0;
  (void)out;
  if (argc != 1) return rl_arity_error(interp, "raylib::set_target_fps", 1, argc);
  if (rl_get_int(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::set_target_fps", 1, "fps", "int");
  SetTargetFPS((int)a0);
  return LCL_RC_OK;
}

/* GetFrameTime: Get time in seconds for last frame drawn (delta time) */
static int rl_fn_GetFrameTime(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  float r;
  (void)argv;
  if (argc != 0) return rl_arity_error(interp, "raylib::get_frame_time", 0, argc);
  r = GetFrameTime();
  *out = lcl_float_new((double)r);
  return LCL_RC_OK;
}

/* GetTime: Get elapsed time in seconds since InitWindow() */
static int rl_fn_GetTime(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  double r;
  (void)argv;
  if (argc != 0) return rl_arity_error(interp, "raylib::get_time", 0, argc);
  r = GetTime();
  *out = lcl_float_new((double)r);
  return LCL_RC_OK;
}

/* GetFPS: Get current FPS */
static int rl_fn_GetFPS(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  int r;
  (void)argv;
  if (argc != 0) return rl_arity_error(interp, "raylib::get_fps", 0, argc);
  r = GetFPS();
  *out = lcl_int_new((long)r);
  return LCL_RC_OK;
}

/* SwapScreenBuffer: Swap back buffer with front buffer (screen drawing) */
static int rl_fn_SwapScreenBuffer(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  (void)out;
  (void)argv;
  if (argc != 0) return rl_arity_error(interp, "raylib::swap_screen_buffer", 0, argc);
  SwapScreenBuffer();
  return LCL_RC_OK;
}

/* PollInputEvents: Register all input events */
static int rl_fn_PollInputEvents(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  (void)out;
  (void)argv;
  if (argc != 0) return rl_arity_error(interp, "raylib::poll_input_events", 0, argc);
  PollInputEvents();
  return LCL_RC_OK;
}

/* WaitTime: Wait for some time (halt program execution) */
static int rl_fn_WaitTime(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  double a0;
  (void)out;
  if (argc != 1) return rl_arity_error(interp, "raylib::wait_time", 1, argc);
  if (rl_get_float(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::wait_time", 1, "seconds", "float");
  WaitTime((double)a0);
  return LCL_RC_OK;
}

/* SetRandomSeed: Set the seed for the random number generator */
static int rl_fn_SetRandomSeed(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  long a0;
  (void)out;
  if (argc != 1) return rl_arity_error(interp, "raylib::set_random_seed", 1, argc);
  if (rl_get_int(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::set_random_seed", 1, "seed", "int");
  SetRandomSeed((unsigned int)a0);
  return LCL_RC_OK;
}

/* GetRandomValue: Get a random value between min and max (both included) */
static int rl_fn_GetRandomValue(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  long a0;
  long a1;
  int r;
  if (argc != 2) return rl_arity_error(interp, "raylib::get_random_value", 2, argc);
  if (rl_get_int(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::get_random_value", 1, "min", "int");
  if (rl_get_int(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::get_random_value", 2, "max", "int");
  r = GetRandomValue((int)a0, (int)a1);
  *out = lcl_int_new((long)r);
  return LCL_RC_OK;
}

/* TakeScreenshot: Takes a screenshot of current screen (filename extension defines format) */
static int rl_fn_TakeScreenshot(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  const char *a0;
  (void)out;
  if (argc != 1) return rl_arity_error(interp, "raylib::take_screenshot", 1, argc);
  if (rl_get_string(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::take_screenshot", 1, "fileName", "string");
  TakeScreenshot(a0);
  return LCL_RC_OK;
}

/* SetConfigFlags: Setup init configuration flags (view FLAGS) */
static int rl_fn_SetConfigFlags(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  long a0;
  (void)out;
  if (argc != 1) return rl_arity_error(interp, "raylib::set_config_flags", 1, argc);
  if (rl_get_int(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::set_config_flags", 1, "flags", "int");
  SetConfigFlags((unsigned int)a0);
  return LCL_RC_OK;
}

/* OpenURL: Open URL with default system browser (if available) */
static int rl_fn_OpenURL(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  const char *a0;
  (void)out;
  if (argc != 1) return rl_arity_error(interp, "raylib::open_url", 1, argc);
  if (rl_get_string(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::open_url", 1, "url", "string");
  OpenURL(a0);
  return LCL_RC_OK;
}

/* SetTraceLogLevel: Set the current threshold (minimum) log level */
static int rl_fn_SetTraceLogLevel(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  long a0;
  (void)out;
  if (argc != 1) return rl_arity_error(interp, "raylib::set_trace_log_level", 1, argc);
  if (rl_get_int(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::set_trace_log_level", 1, "logLevel", "int");
  SetTraceLogLevel((int)a0);
  return LCL_RC_OK;
}

/* SaveFileText: Save text data to file (write), string must be '\\0' terminated, returns true on success */
static int rl_fn_SaveFileText(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  const char *a0;
  const char *a1;
  bool r;
  if (argc != 2) return rl_arity_error(interp, "raylib::save_file_text", 2, argc);
  if (rl_get_string(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::save_file_text", 1, "fileName", "string");
  if (rl_get_string(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::save_file_text", 2, "text", "string");
  r = SaveFileText(a0, a1);
  *out = lcl_int_new((long)r);
  return LCL_RC_OK;
}

/* FileRename: Rename file (if exists) */
static int rl_fn_FileRename(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  const char *a0;
  const char *a1;
  int r;
  if (argc != 2) return rl_arity_error(interp, "raylib::file_rename", 2, argc);
  if (rl_get_string(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::file_rename", 1, "fileName", "string");
  if (rl_get_string(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::file_rename", 2, "fileRename", "string");
  r = FileRename(a0, a1);
  *out = lcl_int_new((long)r);
  return LCL_RC_OK;
}

/* FileRemove: Remove file (if exists) */
static int rl_fn_FileRemove(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  const char *a0;
  int r;
  if (argc != 1) return rl_arity_error(interp, "raylib::file_remove", 1, argc);
  if (rl_get_string(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::file_remove", 1, "fileName", "string");
  r = FileRemove(a0);
  *out = lcl_int_new((long)r);
  return LCL_RC_OK;
}

/* FileCopy: Copy file from one path to another, dstPath created if it doesn't exist */
static int rl_fn_FileCopy(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  const char *a0;
  const char *a1;
  int r;
  if (argc != 2) return rl_arity_error(interp, "raylib::file_copy", 2, argc);
  if (rl_get_string(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::file_copy", 1, "srcPath", "string");
  if (rl_get_string(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::file_copy", 2, "dstPath", "string");
  r = FileCopy(a0, a1);
  *out = lcl_int_new((long)r);
  return LCL_RC_OK;
}

/* FileMove: Move file from one directory to another, dstPath created if it doesn't exist */
static int rl_fn_FileMove(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  const char *a0;
  const char *a1;
  int r;
  if (argc != 2) return rl_arity_error(interp, "raylib::file_move", 2, argc);
  if (rl_get_string(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::file_move", 1, "srcPath", "string");
  if (rl_get_string(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::file_move", 2, "dstPath", "string");
  r = FileMove(a0, a1);
  *out = lcl_int_new((long)r);
  return LCL_RC_OK;
}

/* FileTextReplace: Replace text in an existing file */
static int rl_fn_FileTextReplace(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  const char *a0;
  const char *a1;
  const char *a2;
  int r;
  if (argc != 3) return rl_arity_error(interp, "raylib::file_text_replace", 3, argc);
  if (rl_get_string(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::file_text_replace", 1, "fileName", "string");
  if (rl_get_string(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::file_text_replace", 2, "search", "string");
  if (rl_get_string(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::file_text_replace", 3, "replacement", "string");
  r = FileTextReplace(a0, a1, a2);
  *out = lcl_int_new((long)r);
  return LCL_RC_OK;
}

/* FileTextFindIndex: Find text in existing file */
static int rl_fn_FileTextFindIndex(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  const char *a0;
  const char *a1;
  int r;
  if (argc != 2) return rl_arity_error(interp, "raylib::file_text_find_index", 2, argc);
  if (rl_get_string(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::file_text_find_index", 1, "fileName", "string");
  if (rl_get_string(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::file_text_find_index", 2, "search", "string");
  r = FileTextFindIndex(a0, a1);
  *out = lcl_int_new((long)r);
  return LCL_RC_OK;
}

/* FileExists: Check if file exists */
static int rl_fn_FileExists(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  const char *a0;
  bool r;
  if (argc != 1) return rl_arity_error(interp, "raylib::file_exists", 1, argc);
  if (rl_get_string(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::file_exists", 1, "fileName", "string");
  r = FileExists(a0);
  *out = lcl_int_new((long)r);
  return LCL_RC_OK;
}

/* DirectoryExists: Check if a directory path exists */
static int rl_fn_DirectoryExists(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  const char *a0;
  bool r;
  if (argc != 1) return rl_arity_error(interp, "raylib::directory_exists", 1, argc);
  if (rl_get_string(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::directory_exists", 1, "dirPath", "string");
  r = DirectoryExists(a0);
  *out = lcl_int_new((long)r);
  return LCL_RC_OK;
}

/* IsFileExtension: Check file extension (recommended include point: .png, .wav) */
static int rl_fn_IsFileExtension(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  const char *a0;
  const char *a1;
  bool r;
  if (argc != 2) return rl_arity_error(interp, "raylib::is_file_extension", 2, argc);
  if (rl_get_string(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::is_file_extension", 1, "fileName", "string");
  if (rl_get_string(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::is_file_extension", 2, "ext", "string");
  r = IsFileExtension(a0, a1);
  *out = lcl_int_new((long)r);
  return LCL_RC_OK;
}

/* GetFileLength: Get file length in bytes (NOTE: GetFileSize() conflicts with windows.h) */
static int rl_fn_GetFileLength(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  const char *a0;
  int r;
  if (argc != 1) return rl_arity_error(interp, "raylib::get_file_length", 1, argc);
  if (rl_get_string(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::get_file_length", 1, "fileName", "string");
  r = GetFileLength(a0);
  *out = lcl_int_new((long)r);
  return LCL_RC_OK;
}

/* GetFileModTime: Get file modification time (last write time) */
static int rl_fn_GetFileModTime(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  const char *a0;
  long r;
  if (argc != 1) return rl_arity_error(interp, "raylib::get_file_mod_time", 1, argc);
  if (rl_get_string(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::get_file_mod_time", 1, "fileName", "string");
  r = GetFileModTime(a0);
  *out = lcl_int_new((long)r);
  return LCL_RC_OK;
}

/* GetFileExtension: Get pointer to extension for a filename string (includes dot: '.png') */
static int rl_fn_GetFileExtension(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  const char *a0;
  const char * r;
  if (argc != 1) return rl_arity_error(interp, "raylib::get_file_extension", 1, argc);
  if (rl_get_string(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::get_file_extension", 1, "fileName", "string");
  r = GetFileExtension(a0);
  *out = lcl_string_new(r ? r : "");
  return LCL_RC_OK;
}

/* GetFileName: Get pointer to filename for a path string */
static int rl_fn_GetFileName(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  const char *a0;
  const char * r;
  if (argc != 1) return rl_arity_error(interp, "raylib::get_file_name", 1, argc);
  if (rl_get_string(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::get_file_name", 1, "filePath", "string");
  r = GetFileName(a0);
  *out = lcl_string_new(r ? r : "");
  return LCL_RC_OK;
}

/* GetFileNameWithoutExt: Get filename string without extension (uses static string) */
static int rl_fn_GetFileNameWithoutExt(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  const char *a0;
  const char * r;
  if (argc != 1) return rl_arity_error(interp, "raylib::get_file_name_without_ext", 1, argc);
  if (rl_get_string(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::get_file_name_without_ext", 1, "filePath", "string");
  r = GetFileNameWithoutExt(a0);
  *out = lcl_string_new(r ? r : "");
  return LCL_RC_OK;
}

/* GetDirectoryPath: Get full path for a given fileName with path (uses static string) */
static int rl_fn_GetDirectoryPath(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  const char *a0;
  const char * r;
  if (argc != 1) return rl_arity_error(interp, "raylib::get_directory_path", 1, argc);
  if (rl_get_string(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::get_directory_path", 1, "filePath", "string");
  r = GetDirectoryPath(a0);
  *out = lcl_string_new(r ? r : "");
  return LCL_RC_OK;
}

/* GetPrevDirectoryPath: Get previous directory path for a given path (uses static string) */
static int rl_fn_GetPrevDirectoryPath(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  const char *a0;
  const char * r;
  if (argc != 1) return rl_arity_error(interp, "raylib::get_prev_directory_path", 1, argc);
  if (rl_get_string(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::get_prev_directory_path", 1, "dirPath", "string");
  r = GetPrevDirectoryPath(a0);
  *out = lcl_string_new(r ? r : "");
  return LCL_RC_OK;
}

/* GetWorkingDirectory: Get current working directory (uses static string) */
static int rl_fn_GetWorkingDirectory(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  const char * r;
  (void)argv;
  if (argc != 0) return rl_arity_error(interp, "raylib::get_working_directory", 0, argc);
  r = GetWorkingDirectory();
  *out = lcl_string_new(r ? r : "");
  return LCL_RC_OK;
}

/* GetApplicationDirectory: Get the directory of the running application (uses static string) */
static int rl_fn_GetApplicationDirectory(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  const char * r;
  (void)argv;
  if (argc != 0) return rl_arity_error(interp, "raylib::get_application_directory", 0, argc);
  r = GetApplicationDirectory();
  *out = lcl_string_new(r ? r : "");
  return LCL_RC_OK;
}

/* MakeDirectory: Create directories (including full path requested), returns 0 on success */
static int rl_fn_MakeDirectory(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  const char *a0;
  int r;
  if (argc != 1) return rl_arity_error(interp, "raylib::make_directory", 1, argc);
  if (rl_get_string(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::make_directory", 1, "dirPath", "string");
  r = MakeDirectory(a0);
  *out = lcl_int_new((long)r);
  return LCL_RC_OK;
}

/* ChangeDirectory: Change working directory, return true on success */
static int rl_fn_ChangeDirectory(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  const char *a0;
  bool r;
  if (argc != 1) return rl_arity_error(interp, "raylib::change_directory", 1, argc);
  if (rl_get_string(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::change_directory", 1, "dirPath", "string");
  r = ChangeDirectory(a0);
  *out = lcl_int_new((long)r);
  return LCL_RC_OK;
}

/* IsPathFile: Check if a given path is a file or a directory */
static int rl_fn_IsPathFile(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  const char *a0;
  bool r;
  if (argc != 1) return rl_arity_error(interp, "raylib::is_path_file", 1, argc);
  if (rl_get_string(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::is_path_file", 1, "path", "string");
  r = IsPathFile(a0);
  *out = lcl_int_new((long)r);
  return LCL_RC_OK;
}

/* IsFileNameValid: Check if fileName is valid for the platform/OS */
static int rl_fn_IsFileNameValid(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  const char *a0;
  bool r;
  if (argc != 1) return rl_arity_error(interp, "raylib::is_file_name_valid", 1, argc);
  if (rl_get_string(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::is_file_name_valid", 1, "fileName", "string");
  r = IsFileNameValid(a0);
  *out = lcl_int_new((long)r);
  return LCL_RC_OK;
}

/* LoadDirectoryFiles: Load directory filepaths, files and directories, no subdirs scan */
static int rl_fn_LoadDirectoryFiles(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  const char *a0;
  FilePathList r;
  if (argc != 1) return rl_arity_error(interp, "raylib::load_directory_files", 1, argc);
  if (rl_get_string(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::load_directory_files", 1, "dirPath", "string");
  r = LoadDirectoryFiles(a0);
  *out = rl_new_FilePathList(r);
  return LCL_RC_OK;
}

/* LoadDirectoryFilesEx: Load directory filepaths with extension filtering and subdir scan; some filters available: "*.*", "FILES*", "DIRS*" */
static int rl_fn_LoadDirectoryFilesEx(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  const char *a0;
  const char *a1;
  long a2;
  FilePathList r;
  if (argc != 3) return rl_arity_error(interp, "raylib::load_directory_files_ex", 3, argc);
  if (rl_get_string(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::load_directory_files_ex", 1, "basePath", "string");
  if (rl_get_string(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::load_directory_files_ex", 2, "filter", "string");
  if (rl_get_int(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::load_directory_files_ex", 3, "scanSubdirs", "int");
  r = LoadDirectoryFilesEx(a0, a1, (bool)a2);
  *out = rl_new_FilePathList(r);
  return LCL_RC_OK;
}

/* UnloadDirectoryFiles: Unload filepaths */
static int rl_fn_UnloadDirectoryFiles(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  FilePathList a0;
  (void)out;
  if (argc != 1) return rl_arity_error(interp, "raylib::unload_directory_files", 1, argc);
  if (rl_get_FilePathList(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::unload_directory_files", 1, "files", "FilePathList");
  UnloadDirectoryFiles(a0);
  return LCL_RC_OK;
}

/* IsFileDropped: Check if a file has been dropped into window */
static int rl_fn_IsFileDropped(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  bool r;
  (void)argv;
  if (argc != 0) return rl_arity_error(interp, "raylib::is_file_dropped", 0, argc);
  r = IsFileDropped();
  *out = lcl_int_new((long)r);
  return LCL_RC_OK;
}

/* LoadDroppedFiles: Load dropped filepaths */
static int rl_fn_LoadDroppedFiles(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  FilePathList r;
  (void)argv;
  if (argc != 0) return rl_arity_error(interp, "raylib::load_dropped_files", 0, argc);
  r = LoadDroppedFiles();
  *out = rl_new_FilePathList(r);
  return LCL_RC_OK;
}

/* UnloadDroppedFiles: Unload dropped filepaths */
static int rl_fn_UnloadDroppedFiles(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  FilePathList a0;
  (void)out;
  if (argc != 1) return rl_arity_error(interp, "raylib::unload_dropped_files", 1, argc);
  if (rl_get_FilePathList(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::unload_dropped_files", 1, "files", "FilePathList");
  UnloadDroppedFiles(a0);
  return LCL_RC_OK;
}

/* GetDirectoryFileCount: Get the file count in a directory */
static int rl_fn_GetDirectoryFileCount(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  const char *a0;
  unsigned int r;
  if (argc != 1) return rl_arity_error(interp, "raylib::get_directory_file_count", 1, argc);
  if (rl_get_string(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::get_directory_file_count", 1, "dirPath", "string");
  r = GetDirectoryFileCount(a0);
  *out = lcl_int_new((long)r);
  return LCL_RC_OK;
}

/* GetDirectoryFileCountEx: Get the file count in a directory with extension filtering and recursive directory scan. Use 'DIR' in the filter string to include directories in the result */
static int rl_fn_GetDirectoryFileCountEx(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  const char *a0;
  const char *a1;
  long a2;
  unsigned int r;
  if (argc != 3) return rl_arity_error(interp, "raylib::get_directory_file_count_ex", 3, argc);
  if (rl_get_string(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::get_directory_file_count_ex", 1, "basePath", "string");
  if (rl_get_string(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::get_directory_file_count_ex", 2, "filter", "string");
  if (rl_get_int(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::get_directory_file_count_ex", 3, "scanSubdirs", "int");
  r = GetDirectoryFileCountEx(a0, a1, (bool)a2);
  *out = lcl_int_new((long)r);
  return LCL_RC_OK;
}

/* LoadAutomationEventList: Load automation events list from file, NULL for empty list, capacity = MAX_AUTOMATION_EVENTS */
static int rl_fn_LoadAutomationEventList(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  const char *a0;
  AutomationEventList r;
  if (argc != 1) return rl_arity_error(interp, "raylib::load_automation_event_list", 1, argc);
  if (rl_get_string(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::load_automation_event_list", 1, "fileName", "string");
  r = LoadAutomationEventList(a0);
  *out = rl_new_AutomationEventList(r);
  return LCL_RC_OK;
}

/* UnloadAutomationEventList: Unload automation events list from file */
static int rl_fn_UnloadAutomationEventList(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  AutomationEventList a0;
  (void)out;
  if (argc != 1) return rl_arity_error(interp, "raylib::unload_automation_event_list", 1, argc);
  if (rl_get_AutomationEventList(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::unload_automation_event_list", 1, "list", "AutomationEventList");
  UnloadAutomationEventList(a0);
  return LCL_RC_OK;
}

/* ExportAutomationEventList: Export automation events list as text file */
static int rl_fn_ExportAutomationEventList(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  AutomationEventList a0;
  const char *a1;
  bool r;
  if (argc != 2) return rl_arity_error(interp, "raylib::export_automation_event_list", 2, argc);
  if (rl_get_AutomationEventList(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::export_automation_event_list", 1, "list", "AutomationEventList");
  if (rl_get_string(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::export_automation_event_list", 2, "fileName", "string");
  r = ExportAutomationEventList(a0, a1);
  *out = lcl_int_new((long)r);
  return LCL_RC_OK;
}

/* SetAutomationEventList: Set automation event list to record to */
static int rl_fn_SetAutomationEventList(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  AutomationEventList *a0;
  (void)out;
  if (argc != 1) return rl_arity_error(interp, "raylib::set_automation_event_list", 1, argc);
  if (rl_ptr_AutomationEventList(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::set_automation_event_list", 1, "list", "AutomationEventList");
  SetAutomationEventList(a0);
  return LCL_RC_OK;
}

/* SetAutomationEventBaseFrame: Set automation event internal base frame to start recording */
static int rl_fn_SetAutomationEventBaseFrame(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  long a0;
  (void)out;
  if (argc != 1) return rl_arity_error(interp, "raylib::set_automation_event_base_frame", 1, argc);
  if (rl_get_int(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::set_automation_event_base_frame", 1, "frame", "int");
  SetAutomationEventBaseFrame((int)a0);
  return LCL_RC_OK;
}

/* StartAutomationEventRecording: Start recording automation events (AutomationEventList must be set) */
static int rl_fn_StartAutomationEventRecording(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  (void)out;
  (void)argv;
  if (argc != 0) return rl_arity_error(interp, "raylib::start_automation_event_recording", 0, argc);
  StartAutomationEventRecording();
  return LCL_RC_OK;
}

/* StopAutomationEventRecording: Stop recording automation events */
static int rl_fn_StopAutomationEventRecording(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  (void)out;
  (void)argv;
  if (argc != 0) return rl_arity_error(interp, "raylib::stop_automation_event_recording", 0, argc);
  StopAutomationEventRecording();
  return LCL_RC_OK;
}

/* PlayAutomationEvent: Play a recorded automation event */
static int rl_fn_PlayAutomationEvent(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  AutomationEvent a0;
  (void)out;
  if (argc != 1) return rl_arity_error(interp, "raylib::play_automation_event", 1, argc);
  if (rl_get_AutomationEvent(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::play_automation_event", 1, "event", "AutomationEvent");
  PlayAutomationEvent(a0);
  return LCL_RC_OK;
}

/* IsKeyPressed: Check if a key has been pressed once */
static int rl_fn_IsKeyPressed(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  long a0;
  bool r;
  if (argc != 1) return rl_arity_error(interp, "raylib::is_key_pressed", 1, argc);
  if (rl_get_int(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::is_key_pressed", 1, "key", "int");
  r = IsKeyPressed((int)a0);
  *out = lcl_int_new((long)r);
  return LCL_RC_OK;
}

/* IsKeyPressedRepeat: Check if a key has been pressed again */
static int rl_fn_IsKeyPressedRepeat(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  long a0;
  bool r;
  if (argc != 1) return rl_arity_error(interp, "raylib::is_key_pressed_repeat", 1, argc);
  if (rl_get_int(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::is_key_pressed_repeat", 1, "key", "int");
  r = IsKeyPressedRepeat((int)a0);
  *out = lcl_int_new((long)r);
  return LCL_RC_OK;
}

/* IsKeyDown: Check if a key is being pressed */
static int rl_fn_IsKeyDown(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  long a0;
  bool r;
  if (argc != 1) return rl_arity_error(interp, "raylib::is_key_down", 1, argc);
  if (rl_get_int(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::is_key_down", 1, "key", "int");
  r = IsKeyDown((int)a0);
  *out = lcl_int_new((long)r);
  return LCL_RC_OK;
}

/* IsKeyReleased: Check if a key has been released once */
static int rl_fn_IsKeyReleased(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  long a0;
  bool r;
  if (argc != 1) return rl_arity_error(interp, "raylib::is_key_released", 1, argc);
  if (rl_get_int(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::is_key_released", 1, "key", "int");
  r = IsKeyReleased((int)a0);
  *out = lcl_int_new((long)r);
  return LCL_RC_OK;
}

/* IsKeyUp: Check if a key is NOT being pressed */
static int rl_fn_IsKeyUp(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  long a0;
  bool r;
  if (argc != 1) return rl_arity_error(interp, "raylib::is_key_up", 1, argc);
  if (rl_get_int(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::is_key_up", 1, "key", "int");
  r = IsKeyUp((int)a0);
  *out = lcl_int_new((long)r);
  return LCL_RC_OK;
}

/* GetKeyPressed: Get key pressed (keycode), call it multiple times for keys queued, returns 0 when the queue is empty */
static int rl_fn_GetKeyPressed(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  int r;
  (void)argv;
  if (argc != 0) return rl_arity_error(interp, "raylib::get_key_pressed", 0, argc);
  r = GetKeyPressed();
  *out = lcl_int_new((long)r);
  return LCL_RC_OK;
}

/* GetCharPressed: Get char pressed (unicode), call it multiple times for chars queued, returns 0 when the queue is empty */
static int rl_fn_GetCharPressed(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  int r;
  (void)argv;
  if (argc != 0) return rl_arity_error(interp, "raylib::get_char_pressed", 0, argc);
  r = GetCharPressed();
  *out = lcl_int_new((long)r);
  return LCL_RC_OK;
}

/* GetKeyName: Get name of a QWERTY key on the current keyboard layout (eg returns string 'q' for KEY_A on an AZERTY keyboard) */
static int rl_fn_GetKeyName(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  long a0;
  const char * r;
  if (argc != 1) return rl_arity_error(interp, "raylib::get_key_name", 1, argc);
  if (rl_get_int(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::get_key_name", 1, "key", "int");
  r = GetKeyName((int)a0);
  *out = lcl_string_new(r ? r : "");
  return LCL_RC_OK;
}

/* SetExitKey: Set a custom key to exit program (default is ESC) */
static int rl_fn_SetExitKey(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  long a0;
  (void)out;
  if (argc != 1) return rl_arity_error(interp, "raylib::set_exit_key", 1, argc);
  if (rl_get_int(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::set_exit_key", 1, "key", "int");
  SetExitKey((int)a0);
  return LCL_RC_OK;
}

/* IsGamepadAvailable: Check if a gamepad is available */
static int rl_fn_IsGamepadAvailable(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  long a0;
  bool r;
  if (argc != 1) return rl_arity_error(interp, "raylib::is_gamepad_available", 1, argc);
  if (rl_get_int(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::is_gamepad_available", 1, "gamepad", "int");
  r = IsGamepadAvailable((int)a0);
  *out = lcl_int_new((long)r);
  return LCL_RC_OK;
}

/* GetGamepadName: Get gamepad internal name id */
static int rl_fn_GetGamepadName(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  long a0;
  const char * r;
  if (argc != 1) return rl_arity_error(interp, "raylib::get_gamepad_name", 1, argc);
  if (rl_get_int(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::get_gamepad_name", 1, "gamepad", "int");
  r = GetGamepadName((int)a0);
  *out = lcl_string_new(r ? r : "");
  return LCL_RC_OK;
}

/* IsGamepadButtonPressed: Check if a gamepad button has been pressed once */
static int rl_fn_IsGamepadButtonPressed(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  long a0;
  long a1;
  bool r;
  if (argc != 2) return rl_arity_error(interp, "raylib::is_gamepad_button_pressed", 2, argc);
  if (rl_get_int(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::is_gamepad_button_pressed", 1, "gamepad", "int");
  if (rl_get_int(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::is_gamepad_button_pressed", 2, "button", "int");
  r = IsGamepadButtonPressed((int)a0, (int)a1);
  *out = lcl_int_new((long)r);
  return LCL_RC_OK;
}

/* IsGamepadButtonDown: Check if a gamepad button is being pressed */
static int rl_fn_IsGamepadButtonDown(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  long a0;
  long a1;
  bool r;
  if (argc != 2) return rl_arity_error(interp, "raylib::is_gamepad_button_down", 2, argc);
  if (rl_get_int(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::is_gamepad_button_down", 1, "gamepad", "int");
  if (rl_get_int(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::is_gamepad_button_down", 2, "button", "int");
  r = IsGamepadButtonDown((int)a0, (int)a1);
  *out = lcl_int_new((long)r);
  return LCL_RC_OK;
}

/* IsGamepadButtonReleased: Check if a gamepad button has been released once */
static int rl_fn_IsGamepadButtonReleased(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  long a0;
  long a1;
  bool r;
  if (argc != 2) return rl_arity_error(interp, "raylib::is_gamepad_button_released", 2, argc);
  if (rl_get_int(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::is_gamepad_button_released", 1, "gamepad", "int");
  if (rl_get_int(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::is_gamepad_button_released", 2, "button", "int");
  r = IsGamepadButtonReleased((int)a0, (int)a1);
  *out = lcl_int_new((long)r);
  return LCL_RC_OK;
}

/* IsGamepadButtonUp: Check if a gamepad button is NOT being pressed */
static int rl_fn_IsGamepadButtonUp(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  long a0;
  long a1;
  bool r;
  if (argc != 2) return rl_arity_error(interp, "raylib::is_gamepad_button_up", 2, argc);
  if (rl_get_int(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::is_gamepad_button_up", 1, "gamepad", "int");
  if (rl_get_int(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::is_gamepad_button_up", 2, "button", "int");
  r = IsGamepadButtonUp((int)a0, (int)a1);
  *out = lcl_int_new((long)r);
  return LCL_RC_OK;
}

/* GetGamepadButtonPressed: Get the last gamepad button pressed */
static int rl_fn_GetGamepadButtonPressed(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  int r;
  (void)argv;
  if (argc != 0) return rl_arity_error(interp, "raylib::get_gamepad_button_pressed", 0, argc);
  r = GetGamepadButtonPressed();
  *out = lcl_int_new((long)r);
  return LCL_RC_OK;
}

/* GetGamepadAxisCount: Get axis count for a gamepad */
static int rl_fn_GetGamepadAxisCount(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  long a0;
  int r;
  if (argc != 1) return rl_arity_error(interp, "raylib::get_gamepad_axis_count", 1, argc);
  if (rl_get_int(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::get_gamepad_axis_count", 1, "gamepad", "int");
  r = GetGamepadAxisCount((int)a0);
  *out = lcl_int_new((long)r);
  return LCL_RC_OK;
}

/* GetGamepadAxisMovement: Get movement value for a gamepad axis */
static int rl_fn_GetGamepadAxisMovement(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  long a0;
  long a1;
  float r;
  if (argc != 2) return rl_arity_error(interp, "raylib::get_gamepad_axis_movement", 2, argc);
  if (rl_get_int(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::get_gamepad_axis_movement", 1, "gamepad", "int");
  if (rl_get_int(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::get_gamepad_axis_movement", 2, "axis", "int");
  r = GetGamepadAxisMovement((int)a0, (int)a1);
  *out = lcl_float_new((double)r);
  return LCL_RC_OK;
}

/* SetGamepadMappings: Set internal gamepad mappings (SDL_GameControllerDB) */
static int rl_fn_SetGamepadMappings(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  const char *a0;
  int r;
  if (argc != 1) return rl_arity_error(interp, "raylib::set_gamepad_mappings", 1, argc);
  if (rl_get_string(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::set_gamepad_mappings", 1, "mappings", "string");
  r = SetGamepadMappings(a0);
  *out = lcl_int_new((long)r);
  return LCL_RC_OK;
}

/* SetGamepadVibration: Set gamepad vibration for both motors (duration in seconds) */
static int rl_fn_SetGamepadVibration(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  long a0;
  double a1;
  double a2;
  double a3;
  (void)out;
  if (argc != 4) return rl_arity_error(interp, "raylib::set_gamepad_vibration", 4, argc);
  if (rl_get_int(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::set_gamepad_vibration", 1, "gamepad", "int");
  if (rl_get_float(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::set_gamepad_vibration", 2, "leftMotor", "float");
  if (rl_get_float(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::set_gamepad_vibration", 3, "rightMotor", "float");
  if (rl_get_float(interp, argv[3], &a3) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::set_gamepad_vibration", 4, "duration", "float");
  SetGamepadVibration((int)a0, (float)a1, (float)a2, (float)a3);
  return LCL_RC_OK;
}

/* IsMouseButtonPressed: Check if a mouse button has been pressed once */
static int rl_fn_IsMouseButtonPressed(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  long a0;
  bool r;
  if (argc != 1) return rl_arity_error(interp, "raylib::is_mouse_button_pressed", 1, argc);
  if (rl_get_int(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::is_mouse_button_pressed", 1, "button", "int");
  r = IsMouseButtonPressed((int)a0);
  *out = lcl_int_new((long)r);
  return LCL_RC_OK;
}

/* IsMouseButtonDown: Check if a mouse button is being pressed */
static int rl_fn_IsMouseButtonDown(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  long a0;
  bool r;
  if (argc != 1) return rl_arity_error(interp, "raylib::is_mouse_button_down", 1, argc);
  if (rl_get_int(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::is_mouse_button_down", 1, "button", "int");
  r = IsMouseButtonDown((int)a0);
  *out = lcl_int_new((long)r);
  return LCL_RC_OK;
}

/* IsMouseButtonReleased: Check if a mouse button has been released once */
static int rl_fn_IsMouseButtonReleased(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  long a0;
  bool r;
  if (argc != 1) return rl_arity_error(interp, "raylib::is_mouse_button_released", 1, argc);
  if (rl_get_int(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::is_mouse_button_released", 1, "button", "int");
  r = IsMouseButtonReleased((int)a0);
  *out = lcl_int_new((long)r);
  return LCL_RC_OK;
}

/* IsMouseButtonUp: Check if a mouse button is NOT being pressed */
static int rl_fn_IsMouseButtonUp(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  long a0;
  bool r;
  if (argc != 1) return rl_arity_error(interp, "raylib::is_mouse_button_up", 1, argc);
  if (rl_get_int(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::is_mouse_button_up", 1, "button", "int");
  r = IsMouseButtonUp((int)a0);
  *out = lcl_int_new((long)r);
  return LCL_RC_OK;
}

/* GetMouseX: Get mouse position X */
static int rl_fn_GetMouseX(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  int r;
  (void)argv;
  if (argc != 0) return rl_arity_error(interp, "raylib::get_mouse_x", 0, argc);
  r = GetMouseX();
  *out = lcl_int_new((long)r);
  return LCL_RC_OK;
}

/* GetMouseY: Get mouse position Y */
static int rl_fn_GetMouseY(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  int r;
  (void)argv;
  if (argc != 0) return rl_arity_error(interp, "raylib::get_mouse_y", 0, argc);
  r = GetMouseY();
  *out = lcl_int_new((long)r);
  return LCL_RC_OK;
}

/* GetMousePosition: Get mouse position XY */
static int rl_fn_GetMousePosition(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Vector2 r;
  (void)argv;
  if (argc != 0) return rl_arity_error(interp, "raylib::get_mouse_position", 0, argc);
  r = GetMousePosition();
  *out = rl_new_Vector2(r);
  return LCL_RC_OK;
}

/* GetMouseDelta: Get mouse delta between frames */
static int rl_fn_GetMouseDelta(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Vector2 r;
  (void)argv;
  if (argc != 0) return rl_arity_error(interp, "raylib::get_mouse_delta", 0, argc);
  r = GetMouseDelta();
  *out = rl_new_Vector2(r);
  return LCL_RC_OK;
}

/* SetMousePosition: Set mouse position XY */
static int rl_fn_SetMousePosition(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  long a0;
  long a1;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::set_mouse_position", 2, argc);
  if (rl_get_int(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::set_mouse_position", 1, "x", "int");
  if (rl_get_int(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::set_mouse_position", 2, "y", "int");
  SetMousePosition((int)a0, (int)a1);
  return LCL_RC_OK;
}

/* SetMouseOffset: Set mouse offset */
static int rl_fn_SetMouseOffset(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  long a0;
  long a1;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::set_mouse_offset", 2, argc);
  if (rl_get_int(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::set_mouse_offset", 1, "offsetX", "int");
  if (rl_get_int(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::set_mouse_offset", 2, "offsetY", "int");
  SetMouseOffset((int)a0, (int)a1);
  return LCL_RC_OK;
}

/* SetMouseScale: Set mouse scaling */
static int rl_fn_SetMouseScale(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  double a0;
  double a1;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::set_mouse_scale", 2, argc);
  if (rl_get_float(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::set_mouse_scale", 1, "scaleX", "float");
  if (rl_get_float(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::set_mouse_scale", 2, "scaleY", "float");
  SetMouseScale((float)a0, (float)a1);
  return LCL_RC_OK;
}

/* GetMouseWheelMove: Get mouse wheel movement for X or Y, whichever is larger */
static int rl_fn_GetMouseWheelMove(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  float r;
  (void)argv;
  if (argc != 0) return rl_arity_error(interp, "raylib::get_mouse_wheel_move", 0, argc);
  r = GetMouseWheelMove();
  *out = lcl_float_new((double)r);
  return LCL_RC_OK;
}

/* GetMouseWheelMoveV: Get mouse wheel movement for both X and Y */
static int rl_fn_GetMouseWheelMoveV(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Vector2 r;
  (void)argv;
  if (argc != 0) return rl_arity_error(interp, "raylib::get_mouse_wheel_move_v", 0, argc);
  r = GetMouseWheelMoveV();
  *out = rl_new_Vector2(r);
  return LCL_RC_OK;
}

/* SetMouseCursor: Set mouse cursor */
static int rl_fn_SetMouseCursor(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  long a0;
  (void)out;
  if (argc != 1) return rl_arity_error(interp, "raylib::set_mouse_cursor", 1, argc);
  if (rl_get_int(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::set_mouse_cursor", 1, "cursor", "int");
  SetMouseCursor((int)a0);
  return LCL_RC_OK;
}

/* GetTouchX: Get touch position X for touch point 0 (relative to screen size) */
static int rl_fn_GetTouchX(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  int r;
  (void)argv;
  if (argc != 0) return rl_arity_error(interp, "raylib::get_touch_x", 0, argc);
  r = GetTouchX();
  *out = lcl_int_new((long)r);
  return LCL_RC_OK;
}

/* GetTouchY: Get touch position Y for touch point 0 (relative to screen size) */
static int rl_fn_GetTouchY(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  int r;
  (void)argv;
  if (argc != 0) return rl_arity_error(interp, "raylib::get_touch_y", 0, argc);
  r = GetTouchY();
  *out = lcl_int_new((long)r);
  return LCL_RC_OK;
}

/* GetTouchPosition: Get touch position XY for a touch point index (relative to screen size) */
static int rl_fn_GetTouchPosition(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  long a0;
  Vector2 r;
  if (argc != 1) return rl_arity_error(interp, "raylib::get_touch_position", 1, argc);
  if (rl_get_int(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::get_touch_position", 1, "index", "int");
  r = GetTouchPosition((int)a0);
  *out = rl_new_Vector2(r);
  return LCL_RC_OK;
}

/* GetTouchPointId: Get touch point identifier for given index */
static int rl_fn_GetTouchPointId(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  long a0;
  int r;
  if (argc != 1) return rl_arity_error(interp, "raylib::get_touch_point_id", 1, argc);
  if (rl_get_int(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::get_touch_point_id", 1, "index", "int");
  r = GetTouchPointId((int)a0);
  *out = lcl_int_new((long)r);
  return LCL_RC_OK;
}

/* GetTouchPointCount: Get number of touch points */
static int rl_fn_GetTouchPointCount(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  int r;
  (void)argv;
  if (argc != 0) return rl_arity_error(interp, "raylib::get_touch_point_count", 0, argc);
  r = GetTouchPointCount();
  *out = lcl_int_new((long)r);
  return LCL_RC_OK;
}

/* SetGesturesEnabled: Enable a set of gestures using flags */
static int rl_fn_SetGesturesEnabled(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  long a0;
  (void)out;
  if (argc != 1) return rl_arity_error(interp, "raylib::set_gestures_enabled", 1, argc);
  if (rl_get_int(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::set_gestures_enabled", 1, "flags", "int");
  SetGesturesEnabled((unsigned int)a0);
  return LCL_RC_OK;
}

/* IsGestureDetected: Check if a gesture have been detected */
static int rl_fn_IsGestureDetected(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  long a0;
  bool r;
  if (argc != 1) return rl_arity_error(interp, "raylib::is_gesture_detected", 1, argc);
  if (rl_get_int(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::is_gesture_detected", 1, "gesture", "int");
  r = IsGestureDetected((unsigned int)a0);
  *out = lcl_int_new((long)r);
  return LCL_RC_OK;
}

/* GetGestureDetected: Get latest detected gesture */
static int rl_fn_GetGestureDetected(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  int r;
  (void)argv;
  if (argc != 0) return rl_arity_error(interp, "raylib::get_gesture_detected", 0, argc);
  r = GetGestureDetected();
  *out = lcl_int_new((long)r);
  return LCL_RC_OK;
}

/* GetGestureHoldDuration: Get gesture hold time in seconds */
static int rl_fn_GetGestureHoldDuration(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  float r;
  (void)argv;
  if (argc != 0) return rl_arity_error(interp, "raylib::get_gesture_hold_duration", 0, argc);
  r = GetGestureHoldDuration();
  *out = lcl_float_new((double)r);
  return LCL_RC_OK;
}

/* GetGestureDragVector: Get gesture drag vector */
static int rl_fn_GetGestureDragVector(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Vector2 r;
  (void)argv;
  if (argc != 0) return rl_arity_error(interp, "raylib::get_gesture_drag_vector", 0, argc);
  r = GetGestureDragVector();
  *out = rl_new_Vector2(r);
  return LCL_RC_OK;
}

/* GetGestureDragAngle: Get gesture drag angle */
static int rl_fn_GetGestureDragAngle(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  float r;
  (void)argv;
  if (argc != 0) return rl_arity_error(interp, "raylib::get_gesture_drag_angle", 0, argc);
  r = GetGestureDragAngle();
  *out = lcl_float_new((double)r);
  return LCL_RC_OK;
}

/* GetGesturePinchVector: Get gesture pinch delta */
static int rl_fn_GetGesturePinchVector(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Vector2 r;
  (void)argv;
  if (argc != 0) return rl_arity_error(interp, "raylib::get_gesture_pinch_vector", 0, argc);
  r = GetGesturePinchVector();
  *out = rl_new_Vector2(r);
  return LCL_RC_OK;
}

/* GetGesturePinchAngle: Get gesture pinch angle */
static int rl_fn_GetGesturePinchAngle(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  float r;
  (void)argv;
  if (argc != 0) return rl_arity_error(interp, "raylib::get_gesture_pinch_angle", 0, argc);
  r = GetGesturePinchAngle();
  *out = lcl_float_new((double)r);
  return LCL_RC_OK;
}

/* UpdateCamera: Update camera position for selected mode */
static int rl_fn_UpdateCamera(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Camera3D *a0;
  long a1;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::update_camera", 2, argc);
  if (rl_ptr_Camera3D(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::update_camera", 1, "camera", "Camera3D");
  if (rl_get_int(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::update_camera", 2, "mode", "int");
  UpdateCamera(a0, (int)a1);
  return LCL_RC_OK;
}

/* UpdateCameraPro: Update camera movement/rotation */
static int rl_fn_UpdateCameraPro(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Camera3D *a0;
  Vector3 a1;
  Vector3 a2;
  double a3;
  (void)out;
  if (argc != 4) return rl_arity_error(interp, "raylib::update_camera_pro", 4, argc);
  if (rl_ptr_Camera3D(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::update_camera_pro", 1, "camera", "Camera3D");
  if (rl_get_Vector3(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::update_camera_pro", 2, "movement", "Vector3");
  if (rl_get_Vector3(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::update_camera_pro", 3, "rotation", "Vector3");
  if (rl_get_float(interp, argv[3], &a3) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::update_camera_pro", 4, "zoom", "float");
  UpdateCameraPro(a0, a1, a2, (float)a3);
  return LCL_RC_OK;
}

/* SetShapesTexture: Set texture and rectangle to be used on shapes drawing */
static int rl_fn_SetShapesTexture(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Texture a0;
  Rectangle a1;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::set_shapes_texture", 2, argc);
  if (rl_get_Texture(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::set_shapes_texture", 1, "texture", "Texture");
  if (rl_get_Rectangle(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::set_shapes_texture", 2, "source", "Rectangle");
  SetShapesTexture(a0, a1);
  return LCL_RC_OK;
}

/* GetShapesTexture: Get texture that is used for shapes drawing */
static int rl_fn_GetShapesTexture(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Texture r;
  (void)argv;
  if (argc != 0) return rl_arity_error(interp, "raylib::get_shapes_texture", 0, argc);
  r = GetShapesTexture();
  *out = rl_new_Texture(r);
  return LCL_RC_OK;
}

/* GetShapesTextureRectangle: Get texture source rectangle that is used for shapes drawing */
static int rl_fn_GetShapesTextureRectangle(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Rectangle r;
  (void)argv;
  if (argc != 0) return rl_arity_error(interp, "raylib::get_shapes_texture_rectangle", 0, argc);
  r = GetShapesTextureRectangle();
  *out = rl_new_Rectangle(r);
  return LCL_RC_OK;
}

/* DrawPixel: Draw a pixel using geometry [Can be slow, use with care] */
static int rl_fn_DrawPixel(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  long a0;
  long a1;
  Color a2;
  (void)out;
  if (argc != 3) return rl_arity_error(interp, "raylib::draw_pixel", 3, argc);
  if (rl_get_int(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_pixel", 1, "posX", "int");
  if (rl_get_int(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_pixel", 2, "posY", "int");
  if (rl_get_Color(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_pixel", 3, "color", "Color");
  DrawPixel((int)a0, (int)a1, a2);
  return LCL_RC_OK;
}

/* DrawPixelV: Draw a pixel using geometry (Vector version) [Can be slow, use with care] */
static int rl_fn_DrawPixelV(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Vector2 a0;
  Color a1;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::draw_pixel_v", 2, argc);
  if (rl_get_Vector2(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_pixel_v", 1, "position", "Vector2");
  if (rl_get_Color(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_pixel_v", 2, "color", "Color");
  DrawPixelV(a0, a1);
  return LCL_RC_OK;
}

/* DrawLine: Draw a line */
static int rl_fn_DrawLine(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  long a0;
  long a1;
  long a2;
  long a3;
  Color a4;
  (void)out;
  if (argc != 5) return rl_arity_error(interp, "raylib::draw_line", 5, argc);
  if (rl_get_int(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_line", 1, "startPosX", "int");
  if (rl_get_int(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_line", 2, "startPosY", "int");
  if (rl_get_int(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_line", 3, "endPosX", "int");
  if (rl_get_int(interp, argv[3], &a3) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_line", 4, "endPosY", "int");
  if (rl_get_Color(interp, argv[4], &a4) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_line", 5, "color", "Color");
  DrawLine((int)a0, (int)a1, (int)a2, (int)a3, a4);
  return LCL_RC_OK;
}

/* DrawLineV: Draw a line (using gl lines) */
static int rl_fn_DrawLineV(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Vector2 a0;
  Vector2 a1;
  Color a2;
  (void)out;
  if (argc != 3) return rl_arity_error(interp, "raylib::draw_line_v", 3, argc);
  if (rl_get_Vector2(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_line_v", 1, "startPos", "Vector2");
  if (rl_get_Vector2(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_line_v", 2, "endPos", "Vector2");
  if (rl_get_Color(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_line_v", 3, "color", "Color");
  DrawLineV(a0, a1, a2);
  return LCL_RC_OK;
}

/* DrawLineEx: Draw a line (using triangles/quads) */
static int rl_fn_DrawLineEx(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Vector2 a0;
  Vector2 a1;
  double a2;
  Color a3;
  (void)out;
  if (argc != 4) return rl_arity_error(interp, "raylib::draw_line_ex", 4, argc);
  if (rl_get_Vector2(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_line_ex", 1, "startPos", "Vector2");
  if (rl_get_Vector2(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_line_ex", 2, "endPos", "Vector2");
  if (rl_get_float(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_line_ex", 3, "thick", "float");
  if (rl_get_Color(interp, argv[3], &a3) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_line_ex", 4, "color", "Color");
  DrawLineEx(a0, a1, (float)a2, a3);
  return LCL_RC_OK;
}

/* DrawLineStrip: Draw lines sequence (using gl lines) */
static int rl_fn_DrawLineStrip(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Vector2 *a0 = NULL;
  int n0 = 0;
  Color a1;
  (void)out;
  int rc = LCL_RC_ERR;
  if (argc != 2) return rl_arity_error(interp, "raylib::draw_line_strip", 2, argc);
  if (rl_get_Color(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_line_strip", 2, "color", "Color");
  if (lcl_value_type_of(argv[0]) != LCL_LIST) return RL_ARG_ERR(interp, "raylib::draw_line_strip", 1, "points", "list of Vector2");
  n0 = (int)lcl_list_len(argv[0]);
  a0 = (Vector2 *)calloc(n0 > 0 ? (size_t)n0 : 1, sizeof(*a0));
  if (!a0) goto cleanup;
  {
    int k;
    for (k = 0; k < n0; k++) {
      lcl_value *item;
      if (lcl_list_get(argv[0], (size_t)k, &item) != LCL_OK) goto cleanup;
      if (rl_get_Vector2(interp, item, &a0[k]) != LCL_RC_OK) { lcl_ref_dec(item); RL_ARG_ERR(interp, "raylib::draw_line_strip", 1, "points", "list of Vector2"); goto cleanup; }
      lcl_ref_dec(item);
    }
  }
  DrawLineStrip(a0, n0, a1);
  rc = LCL_RC_OK;
cleanup:
  free(a0);
  return rc;
}

/* DrawLineBezier: Draw line segment cubic-bezier in-out interpolation */
static int rl_fn_DrawLineBezier(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Vector2 a0;
  Vector2 a1;
  double a2;
  Color a3;
  (void)out;
  if (argc != 4) return rl_arity_error(interp, "raylib::draw_line_bezier", 4, argc);
  if (rl_get_Vector2(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_line_bezier", 1, "startPos", "Vector2");
  if (rl_get_Vector2(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_line_bezier", 2, "endPos", "Vector2");
  if (rl_get_float(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_line_bezier", 3, "thick", "float");
  if (rl_get_Color(interp, argv[3], &a3) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_line_bezier", 4, "color", "Color");
  DrawLineBezier(a0, a1, (float)a2, a3);
  return LCL_RC_OK;
}

/* DrawLineDashed: Draw a dashed line */
static int rl_fn_DrawLineDashed(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Vector2 a0;
  Vector2 a1;
  long a2;
  long a3;
  Color a4;
  (void)out;
  if (argc != 5) return rl_arity_error(interp, "raylib::draw_line_dashed", 5, argc);
  if (rl_get_Vector2(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_line_dashed", 1, "startPos", "Vector2");
  if (rl_get_Vector2(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_line_dashed", 2, "endPos", "Vector2");
  if (rl_get_int(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_line_dashed", 3, "dashSize", "int");
  if (rl_get_int(interp, argv[3], &a3) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_line_dashed", 4, "spaceSize", "int");
  if (rl_get_Color(interp, argv[4], &a4) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_line_dashed", 5, "color", "Color");
  DrawLineDashed(a0, a1, (int)a2, (int)a3, a4);
  return LCL_RC_OK;
}

/* DrawCircle: Draw a color-filled circle */
static int rl_fn_DrawCircle(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  long a0;
  long a1;
  double a2;
  Color a3;
  (void)out;
  if (argc != 4) return rl_arity_error(interp, "raylib::draw_circle", 4, argc);
  if (rl_get_int(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_circle", 1, "centerX", "int");
  if (rl_get_int(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_circle", 2, "centerY", "int");
  if (rl_get_float(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_circle", 3, "radius", "float");
  if (rl_get_Color(interp, argv[3], &a3) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_circle", 4, "color", "Color");
  DrawCircle((int)a0, (int)a1, (float)a2, a3);
  return LCL_RC_OK;
}

/* DrawCircleV: Draw a color-filled circle (Vector version) */
static int rl_fn_DrawCircleV(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Vector2 a0;
  double a1;
  Color a2;
  (void)out;
  if (argc != 3) return rl_arity_error(interp, "raylib::draw_circle_v", 3, argc);
  if (rl_get_Vector2(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_circle_v", 1, "center", "Vector2");
  if (rl_get_float(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_circle_v", 2, "radius", "float");
  if (rl_get_Color(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_circle_v", 3, "color", "Color");
  DrawCircleV(a0, (float)a1, a2);
  return LCL_RC_OK;
}

/* DrawCircleGradient: Draw a gradient-filled circle */
static int rl_fn_DrawCircleGradient(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Vector2 a0;
  double a1;
  Color a2;
  Color a3;
  (void)out;
  if (argc != 4) return rl_arity_error(interp, "raylib::draw_circle_gradient", 4, argc);
  if (rl_get_Vector2(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_circle_gradient", 1, "center", "Vector2");
  if (rl_get_float(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_circle_gradient", 2, "radius", "float");
  if (rl_get_Color(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_circle_gradient", 3, "inner", "Color");
  if (rl_get_Color(interp, argv[3], &a3) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_circle_gradient", 4, "outer", "Color");
  DrawCircleGradient(a0, (float)a1, a2, a3);
  return LCL_RC_OK;
}

/* DrawCircleSector: Draw a piece of a circle */
static int rl_fn_DrawCircleSector(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Vector2 a0;
  double a1;
  double a2;
  double a3;
  long a4;
  Color a5;
  (void)out;
  if (argc != 6) return rl_arity_error(interp, "raylib::draw_circle_sector", 6, argc);
  if (rl_get_Vector2(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_circle_sector", 1, "center", "Vector2");
  if (rl_get_float(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_circle_sector", 2, "radius", "float");
  if (rl_get_float(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_circle_sector", 3, "startAngle", "float");
  if (rl_get_float(interp, argv[3], &a3) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_circle_sector", 4, "endAngle", "float");
  if (rl_get_int(interp, argv[4], &a4) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_circle_sector", 5, "segments", "int");
  if (rl_get_Color(interp, argv[5], &a5) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_circle_sector", 6, "color", "Color");
  DrawCircleSector(a0, (float)a1, (float)a2, (float)a3, (int)a4, a5);
  return LCL_RC_OK;
}

/* DrawCircleSectorLines: Draw circle sector outline */
static int rl_fn_DrawCircleSectorLines(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Vector2 a0;
  double a1;
  double a2;
  double a3;
  long a4;
  Color a5;
  (void)out;
  if (argc != 6) return rl_arity_error(interp, "raylib::draw_circle_sector_lines", 6, argc);
  if (rl_get_Vector2(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_circle_sector_lines", 1, "center", "Vector2");
  if (rl_get_float(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_circle_sector_lines", 2, "radius", "float");
  if (rl_get_float(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_circle_sector_lines", 3, "startAngle", "float");
  if (rl_get_float(interp, argv[3], &a3) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_circle_sector_lines", 4, "endAngle", "float");
  if (rl_get_int(interp, argv[4], &a4) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_circle_sector_lines", 5, "segments", "int");
  if (rl_get_Color(interp, argv[5], &a5) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_circle_sector_lines", 6, "color", "Color");
  DrawCircleSectorLines(a0, (float)a1, (float)a2, (float)a3, (int)a4, a5);
  return LCL_RC_OK;
}

/* DrawCircleLines: Draw circle outline */
static int rl_fn_DrawCircleLines(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  long a0;
  long a1;
  double a2;
  Color a3;
  (void)out;
  if (argc != 4) return rl_arity_error(interp, "raylib::draw_circle_lines", 4, argc);
  if (rl_get_int(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_circle_lines", 1, "centerX", "int");
  if (rl_get_int(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_circle_lines", 2, "centerY", "int");
  if (rl_get_float(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_circle_lines", 3, "radius", "float");
  if (rl_get_Color(interp, argv[3], &a3) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_circle_lines", 4, "color", "Color");
  DrawCircleLines((int)a0, (int)a1, (float)a2, a3);
  return LCL_RC_OK;
}

/* DrawCircleLinesV: Draw circle outline (Vector version) */
static int rl_fn_DrawCircleLinesV(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Vector2 a0;
  double a1;
  Color a2;
  (void)out;
  if (argc != 3) return rl_arity_error(interp, "raylib::draw_circle_lines_v", 3, argc);
  if (rl_get_Vector2(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_circle_lines_v", 1, "center", "Vector2");
  if (rl_get_float(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_circle_lines_v", 2, "radius", "float");
  if (rl_get_Color(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_circle_lines_v", 3, "color", "Color");
  DrawCircleLinesV(a0, (float)a1, a2);
  return LCL_RC_OK;
}

/* DrawEllipse: Draw ellipse */
static int rl_fn_DrawEllipse(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  long a0;
  long a1;
  double a2;
  double a3;
  Color a4;
  (void)out;
  if (argc != 5) return rl_arity_error(interp, "raylib::draw_ellipse", 5, argc);
  if (rl_get_int(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_ellipse", 1, "centerX", "int");
  if (rl_get_int(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_ellipse", 2, "centerY", "int");
  if (rl_get_float(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_ellipse", 3, "radiusH", "float");
  if (rl_get_float(interp, argv[3], &a3) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_ellipse", 4, "radiusV", "float");
  if (rl_get_Color(interp, argv[4], &a4) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_ellipse", 5, "color", "Color");
  DrawEllipse((int)a0, (int)a1, (float)a2, (float)a3, a4);
  return LCL_RC_OK;
}

/* DrawEllipseV: Draw ellipse (Vector version) */
static int rl_fn_DrawEllipseV(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Vector2 a0;
  double a1;
  double a2;
  Color a3;
  (void)out;
  if (argc != 4) return rl_arity_error(interp, "raylib::draw_ellipse_v", 4, argc);
  if (rl_get_Vector2(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_ellipse_v", 1, "center", "Vector2");
  if (rl_get_float(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_ellipse_v", 2, "radiusH", "float");
  if (rl_get_float(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_ellipse_v", 3, "radiusV", "float");
  if (rl_get_Color(interp, argv[3], &a3) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_ellipse_v", 4, "color", "Color");
  DrawEllipseV(a0, (float)a1, (float)a2, a3);
  return LCL_RC_OK;
}

/* DrawEllipseLines: Draw ellipse outline */
static int rl_fn_DrawEllipseLines(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  long a0;
  long a1;
  double a2;
  double a3;
  Color a4;
  (void)out;
  if (argc != 5) return rl_arity_error(interp, "raylib::draw_ellipse_lines", 5, argc);
  if (rl_get_int(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_ellipse_lines", 1, "centerX", "int");
  if (rl_get_int(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_ellipse_lines", 2, "centerY", "int");
  if (rl_get_float(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_ellipse_lines", 3, "radiusH", "float");
  if (rl_get_float(interp, argv[3], &a3) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_ellipse_lines", 4, "radiusV", "float");
  if (rl_get_Color(interp, argv[4], &a4) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_ellipse_lines", 5, "color", "Color");
  DrawEllipseLines((int)a0, (int)a1, (float)a2, (float)a3, a4);
  return LCL_RC_OK;
}

/* DrawEllipseLinesV: Draw ellipse outline (Vector version) */
static int rl_fn_DrawEllipseLinesV(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Vector2 a0;
  double a1;
  double a2;
  Color a3;
  (void)out;
  if (argc != 4) return rl_arity_error(interp, "raylib::draw_ellipse_lines_v", 4, argc);
  if (rl_get_Vector2(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_ellipse_lines_v", 1, "center", "Vector2");
  if (rl_get_float(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_ellipse_lines_v", 2, "radiusH", "float");
  if (rl_get_float(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_ellipse_lines_v", 3, "radiusV", "float");
  if (rl_get_Color(interp, argv[3], &a3) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_ellipse_lines_v", 4, "color", "Color");
  DrawEllipseLinesV(a0, (float)a1, (float)a2, a3);
  return LCL_RC_OK;
}

/* DrawRing: Draw ring */
static int rl_fn_DrawRing(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Vector2 a0;
  double a1;
  double a2;
  double a3;
  double a4;
  long a5;
  Color a6;
  (void)out;
  if (argc != 7) return rl_arity_error(interp, "raylib::draw_ring", 7, argc);
  if (rl_get_Vector2(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_ring", 1, "center", "Vector2");
  if (rl_get_float(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_ring", 2, "innerRadius", "float");
  if (rl_get_float(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_ring", 3, "outerRadius", "float");
  if (rl_get_float(interp, argv[3], &a3) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_ring", 4, "startAngle", "float");
  if (rl_get_float(interp, argv[4], &a4) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_ring", 5, "endAngle", "float");
  if (rl_get_int(interp, argv[5], &a5) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_ring", 6, "segments", "int");
  if (rl_get_Color(interp, argv[6], &a6) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_ring", 7, "color", "Color");
  DrawRing(a0, (float)a1, (float)a2, (float)a3, (float)a4, (int)a5, a6);
  return LCL_RC_OK;
}

/* DrawRingLines: Draw ring outline */
static int rl_fn_DrawRingLines(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Vector2 a0;
  double a1;
  double a2;
  double a3;
  double a4;
  long a5;
  Color a6;
  (void)out;
  if (argc != 7) return rl_arity_error(interp, "raylib::draw_ring_lines", 7, argc);
  if (rl_get_Vector2(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_ring_lines", 1, "center", "Vector2");
  if (rl_get_float(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_ring_lines", 2, "innerRadius", "float");
  if (rl_get_float(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_ring_lines", 3, "outerRadius", "float");
  if (rl_get_float(interp, argv[3], &a3) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_ring_lines", 4, "startAngle", "float");
  if (rl_get_float(interp, argv[4], &a4) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_ring_lines", 5, "endAngle", "float");
  if (rl_get_int(interp, argv[5], &a5) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_ring_lines", 6, "segments", "int");
  if (rl_get_Color(interp, argv[6], &a6) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_ring_lines", 7, "color", "Color");
  DrawRingLines(a0, (float)a1, (float)a2, (float)a3, (float)a4, (int)a5, a6);
  return LCL_RC_OK;
}

/* DrawRectangle: Draw a color-filled rectangle */
static int rl_fn_DrawRectangle(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  long a0;
  long a1;
  long a2;
  long a3;
  Color a4;
  (void)out;
  if (argc != 5) return rl_arity_error(interp, "raylib::draw_rectangle", 5, argc);
  if (rl_get_int(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_rectangle", 1, "posX", "int");
  if (rl_get_int(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_rectangle", 2, "posY", "int");
  if (rl_get_int(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_rectangle", 3, "width", "int");
  if (rl_get_int(interp, argv[3], &a3) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_rectangle", 4, "height", "int");
  if (rl_get_Color(interp, argv[4], &a4) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_rectangle", 5, "color", "Color");
  DrawRectangle((int)a0, (int)a1, (int)a2, (int)a3, a4);
  return LCL_RC_OK;
}

/* DrawRectangleV: Draw a color-filled rectangle (Vector version) */
static int rl_fn_DrawRectangleV(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Vector2 a0;
  Vector2 a1;
  Color a2;
  (void)out;
  if (argc != 3) return rl_arity_error(interp, "raylib::draw_rectangle_v", 3, argc);
  if (rl_get_Vector2(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_rectangle_v", 1, "position", "Vector2");
  if (rl_get_Vector2(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_rectangle_v", 2, "size", "Vector2");
  if (rl_get_Color(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_rectangle_v", 3, "color", "Color");
  DrawRectangleV(a0, a1, a2);
  return LCL_RC_OK;
}

/* DrawRectangleRec: Draw a color-filled rectangle */
static int rl_fn_DrawRectangleRec(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Rectangle a0;
  Color a1;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::draw_rectangle_rec", 2, argc);
  if (rl_get_Rectangle(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_rectangle_rec", 1, "rec", "Rectangle");
  if (rl_get_Color(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_rectangle_rec", 2, "color", "Color");
  DrawRectangleRec(a0, a1);
  return LCL_RC_OK;
}

/* DrawRectanglePro: Draw a color-filled rectangle with pro parameters */
static int rl_fn_DrawRectanglePro(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Rectangle a0;
  Vector2 a1;
  double a2;
  Color a3;
  (void)out;
  if (argc != 4) return rl_arity_error(interp, "raylib::draw_rectangle_pro", 4, argc);
  if (rl_get_Rectangle(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_rectangle_pro", 1, "rec", "Rectangle");
  if (rl_get_Vector2(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_rectangle_pro", 2, "origin", "Vector2");
  if (rl_get_float(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_rectangle_pro", 3, "rotation", "float");
  if (rl_get_Color(interp, argv[3], &a3) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_rectangle_pro", 4, "color", "Color");
  DrawRectanglePro(a0, a1, (float)a2, a3);
  return LCL_RC_OK;
}

/* DrawRectangleGradientV: Draw a vertical-gradient-filled rectangle */
static int rl_fn_DrawRectangleGradientV(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  long a0;
  long a1;
  long a2;
  long a3;
  Color a4;
  Color a5;
  (void)out;
  if (argc != 6) return rl_arity_error(interp, "raylib::draw_rectangle_gradient_v", 6, argc);
  if (rl_get_int(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_rectangle_gradient_v", 1, "posX", "int");
  if (rl_get_int(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_rectangle_gradient_v", 2, "posY", "int");
  if (rl_get_int(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_rectangle_gradient_v", 3, "width", "int");
  if (rl_get_int(interp, argv[3], &a3) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_rectangle_gradient_v", 4, "height", "int");
  if (rl_get_Color(interp, argv[4], &a4) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_rectangle_gradient_v", 5, "top", "Color");
  if (rl_get_Color(interp, argv[5], &a5) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_rectangle_gradient_v", 6, "bottom", "Color");
  DrawRectangleGradientV((int)a0, (int)a1, (int)a2, (int)a3, a4, a5);
  return LCL_RC_OK;
}

/* DrawRectangleGradientH: Draw a horizontal-gradient-filled rectangle */
static int rl_fn_DrawRectangleGradientH(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  long a0;
  long a1;
  long a2;
  long a3;
  Color a4;
  Color a5;
  (void)out;
  if (argc != 6) return rl_arity_error(interp, "raylib::draw_rectangle_gradient_h", 6, argc);
  if (rl_get_int(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_rectangle_gradient_h", 1, "posX", "int");
  if (rl_get_int(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_rectangle_gradient_h", 2, "posY", "int");
  if (rl_get_int(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_rectangle_gradient_h", 3, "width", "int");
  if (rl_get_int(interp, argv[3], &a3) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_rectangle_gradient_h", 4, "height", "int");
  if (rl_get_Color(interp, argv[4], &a4) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_rectangle_gradient_h", 5, "left", "Color");
  if (rl_get_Color(interp, argv[5], &a5) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_rectangle_gradient_h", 6, "right", "Color");
  DrawRectangleGradientH((int)a0, (int)a1, (int)a2, (int)a3, a4, a5);
  return LCL_RC_OK;
}

/* DrawRectangleGradientEx: Draw a gradient-filled rectangle with custom vertex colors */
static int rl_fn_DrawRectangleGradientEx(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Rectangle a0;
  Color a1;
  Color a2;
  Color a3;
  Color a4;
  (void)out;
  if (argc != 5) return rl_arity_error(interp, "raylib::draw_rectangle_gradient_ex", 5, argc);
  if (rl_get_Rectangle(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_rectangle_gradient_ex", 1, "rec", "Rectangle");
  if (rl_get_Color(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_rectangle_gradient_ex", 2, "topLeft", "Color");
  if (rl_get_Color(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_rectangle_gradient_ex", 3, "bottomLeft", "Color");
  if (rl_get_Color(interp, argv[3], &a3) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_rectangle_gradient_ex", 4, "bottomRight", "Color");
  if (rl_get_Color(interp, argv[4], &a4) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_rectangle_gradient_ex", 5, "topRight", "Color");
  DrawRectangleGradientEx(a0, a1, a2, a3, a4);
  return LCL_RC_OK;
}

/* DrawRectangleLines: Draw rectangle outline */
static int rl_fn_DrawRectangleLines(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  long a0;
  long a1;
  long a2;
  long a3;
  Color a4;
  (void)out;
  if (argc != 5) return rl_arity_error(interp, "raylib::draw_rectangle_lines", 5, argc);
  if (rl_get_int(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_rectangle_lines", 1, "posX", "int");
  if (rl_get_int(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_rectangle_lines", 2, "posY", "int");
  if (rl_get_int(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_rectangle_lines", 3, "width", "int");
  if (rl_get_int(interp, argv[3], &a3) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_rectangle_lines", 4, "height", "int");
  if (rl_get_Color(interp, argv[4], &a4) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_rectangle_lines", 5, "color", "Color");
  DrawRectangleLines((int)a0, (int)a1, (int)a2, (int)a3, a4);
  return LCL_RC_OK;
}

/* DrawRectangleLinesEx: Draw rectangle outline with extended parameters */
static int rl_fn_DrawRectangleLinesEx(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Rectangle a0;
  double a1;
  Color a2;
  (void)out;
  if (argc != 3) return rl_arity_error(interp, "raylib::draw_rectangle_lines_ex", 3, argc);
  if (rl_get_Rectangle(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_rectangle_lines_ex", 1, "rec", "Rectangle");
  if (rl_get_float(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_rectangle_lines_ex", 2, "lineThick", "float");
  if (rl_get_Color(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_rectangle_lines_ex", 3, "color", "Color");
  DrawRectangleLinesEx(a0, (float)a1, a2);
  return LCL_RC_OK;
}

/* DrawRectangleRounded: Draw rectangle with rounded edges */
static int rl_fn_DrawRectangleRounded(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Rectangle a0;
  double a1;
  long a2;
  Color a3;
  (void)out;
  if (argc != 4) return rl_arity_error(interp, "raylib::draw_rectangle_rounded", 4, argc);
  if (rl_get_Rectangle(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_rectangle_rounded", 1, "rec", "Rectangle");
  if (rl_get_float(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_rectangle_rounded", 2, "roundness", "float");
  if (rl_get_int(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_rectangle_rounded", 3, "segments", "int");
  if (rl_get_Color(interp, argv[3], &a3) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_rectangle_rounded", 4, "color", "Color");
  DrawRectangleRounded(a0, (float)a1, (int)a2, a3);
  return LCL_RC_OK;
}

/* DrawRectangleRoundedLines: Draw rectangle lines with rounded edges */
static int rl_fn_DrawRectangleRoundedLines(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Rectangle a0;
  double a1;
  long a2;
  Color a3;
  (void)out;
  if (argc != 4) return rl_arity_error(interp, "raylib::draw_rectangle_rounded_lines", 4, argc);
  if (rl_get_Rectangle(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_rectangle_rounded_lines", 1, "rec", "Rectangle");
  if (rl_get_float(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_rectangle_rounded_lines", 2, "roundness", "float");
  if (rl_get_int(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_rectangle_rounded_lines", 3, "segments", "int");
  if (rl_get_Color(interp, argv[3], &a3) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_rectangle_rounded_lines", 4, "color", "Color");
  DrawRectangleRoundedLines(a0, (float)a1, (int)a2, a3);
  return LCL_RC_OK;
}

/* DrawRectangleRoundedLinesEx: Draw rectangle with rounded edges outline */
static int rl_fn_DrawRectangleRoundedLinesEx(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Rectangle a0;
  double a1;
  long a2;
  double a3;
  Color a4;
  (void)out;
  if (argc != 5) return rl_arity_error(interp, "raylib::draw_rectangle_rounded_lines_ex", 5, argc);
  if (rl_get_Rectangle(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_rectangle_rounded_lines_ex", 1, "rec", "Rectangle");
  if (rl_get_float(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_rectangle_rounded_lines_ex", 2, "roundness", "float");
  if (rl_get_int(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_rectangle_rounded_lines_ex", 3, "segments", "int");
  if (rl_get_float(interp, argv[3], &a3) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_rectangle_rounded_lines_ex", 4, "lineThick", "float");
  if (rl_get_Color(interp, argv[4], &a4) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_rectangle_rounded_lines_ex", 5, "color", "Color");
  DrawRectangleRoundedLinesEx(a0, (float)a1, (int)a2, (float)a3, a4);
  return LCL_RC_OK;
}

/* DrawTriangle: Draw a color-filled triangle (vertex in counter-clockwise order!) */
static int rl_fn_DrawTriangle(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Vector2 a0;
  Vector2 a1;
  Vector2 a2;
  Color a3;
  (void)out;
  if (argc != 4) return rl_arity_error(interp, "raylib::draw_triangle", 4, argc);
  if (rl_get_Vector2(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_triangle", 1, "v1", "Vector2");
  if (rl_get_Vector2(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_triangle", 2, "v2", "Vector2");
  if (rl_get_Vector2(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_triangle", 3, "v3", "Vector2");
  if (rl_get_Color(interp, argv[3], &a3) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_triangle", 4, "color", "Color");
  DrawTriangle(a0, a1, a2, a3);
  return LCL_RC_OK;
}

/* DrawTriangleLines: Draw triangle outline (vertex in counter-clockwise order!) */
static int rl_fn_DrawTriangleLines(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Vector2 a0;
  Vector2 a1;
  Vector2 a2;
  Color a3;
  (void)out;
  if (argc != 4) return rl_arity_error(interp, "raylib::draw_triangle_lines", 4, argc);
  if (rl_get_Vector2(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_triangle_lines", 1, "v1", "Vector2");
  if (rl_get_Vector2(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_triangle_lines", 2, "v2", "Vector2");
  if (rl_get_Vector2(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_triangle_lines", 3, "v3", "Vector2");
  if (rl_get_Color(interp, argv[3], &a3) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_triangle_lines", 4, "color", "Color");
  DrawTriangleLines(a0, a1, a2, a3);
  return LCL_RC_OK;
}

/* DrawTriangleFan: Draw a triangle fan defined by points (first vertex is the center) */
static int rl_fn_DrawTriangleFan(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Vector2 *a0 = NULL;
  int n0 = 0;
  Color a1;
  (void)out;
  int rc = LCL_RC_ERR;
  if (argc != 2) return rl_arity_error(interp, "raylib::draw_triangle_fan", 2, argc);
  if (rl_get_Color(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_triangle_fan", 2, "color", "Color");
  if (lcl_value_type_of(argv[0]) != LCL_LIST) return RL_ARG_ERR(interp, "raylib::draw_triangle_fan", 1, "points", "list of Vector2");
  n0 = (int)lcl_list_len(argv[0]);
  a0 = (Vector2 *)calloc(n0 > 0 ? (size_t)n0 : 1, sizeof(*a0));
  if (!a0) goto cleanup;
  {
    int k;
    for (k = 0; k < n0; k++) {
      lcl_value *item;
      if (lcl_list_get(argv[0], (size_t)k, &item) != LCL_OK) goto cleanup;
      if (rl_get_Vector2(interp, item, &a0[k]) != LCL_RC_OK) { lcl_ref_dec(item); RL_ARG_ERR(interp, "raylib::draw_triangle_fan", 1, "points", "list of Vector2"); goto cleanup; }
      lcl_ref_dec(item);
    }
  }
  DrawTriangleFan(a0, n0, a1);
  rc = LCL_RC_OK;
cleanup:
  free(a0);
  return rc;
}

/* DrawTriangleStrip: Draw a triangle strip defined by points */
static int rl_fn_DrawTriangleStrip(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Vector2 *a0 = NULL;
  int n0 = 0;
  Color a1;
  (void)out;
  int rc = LCL_RC_ERR;
  if (argc != 2) return rl_arity_error(interp, "raylib::draw_triangle_strip", 2, argc);
  if (rl_get_Color(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_triangle_strip", 2, "color", "Color");
  if (lcl_value_type_of(argv[0]) != LCL_LIST) return RL_ARG_ERR(interp, "raylib::draw_triangle_strip", 1, "points", "list of Vector2");
  n0 = (int)lcl_list_len(argv[0]);
  a0 = (Vector2 *)calloc(n0 > 0 ? (size_t)n0 : 1, sizeof(*a0));
  if (!a0) goto cleanup;
  {
    int k;
    for (k = 0; k < n0; k++) {
      lcl_value *item;
      if (lcl_list_get(argv[0], (size_t)k, &item) != LCL_OK) goto cleanup;
      if (rl_get_Vector2(interp, item, &a0[k]) != LCL_RC_OK) { lcl_ref_dec(item); RL_ARG_ERR(interp, "raylib::draw_triangle_strip", 1, "points", "list of Vector2"); goto cleanup; }
      lcl_ref_dec(item);
    }
  }
  DrawTriangleStrip(a0, n0, a1);
  rc = LCL_RC_OK;
cleanup:
  free(a0);
  return rc;
}

/* DrawPoly: Draw a regular polygon (Vector version) */
static int rl_fn_DrawPoly(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Vector2 a0;
  long a1;
  double a2;
  double a3;
  Color a4;
  (void)out;
  if (argc != 5) return rl_arity_error(interp, "raylib::draw_poly", 5, argc);
  if (rl_get_Vector2(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_poly", 1, "center", "Vector2");
  if (rl_get_int(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_poly", 2, "sides", "int");
  if (rl_get_float(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_poly", 3, "radius", "float");
  if (rl_get_float(interp, argv[3], &a3) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_poly", 4, "rotation", "float");
  if (rl_get_Color(interp, argv[4], &a4) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_poly", 5, "color", "Color");
  DrawPoly(a0, (int)a1, (float)a2, (float)a3, a4);
  return LCL_RC_OK;
}

/* DrawPolyLines: Draw a polygon outline of n sides */
static int rl_fn_DrawPolyLines(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Vector2 a0;
  long a1;
  double a2;
  double a3;
  Color a4;
  (void)out;
  if (argc != 5) return rl_arity_error(interp, "raylib::draw_poly_lines", 5, argc);
  if (rl_get_Vector2(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_poly_lines", 1, "center", "Vector2");
  if (rl_get_int(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_poly_lines", 2, "sides", "int");
  if (rl_get_float(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_poly_lines", 3, "radius", "float");
  if (rl_get_float(interp, argv[3], &a3) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_poly_lines", 4, "rotation", "float");
  if (rl_get_Color(interp, argv[4], &a4) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_poly_lines", 5, "color", "Color");
  DrawPolyLines(a0, (int)a1, (float)a2, (float)a3, a4);
  return LCL_RC_OK;
}

/* DrawPolyLinesEx: Draw a polygon outline of n sides with extended parameters */
static int rl_fn_DrawPolyLinesEx(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Vector2 a0;
  long a1;
  double a2;
  double a3;
  double a4;
  Color a5;
  (void)out;
  if (argc != 6) return rl_arity_error(interp, "raylib::draw_poly_lines_ex", 6, argc);
  if (rl_get_Vector2(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_poly_lines_ex", 1, "center", "Vector2");
  if (rl_get_int(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_poly_lines_ex", 2, "sides", "int");
  if (rl_get_float(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_poly_lines_ex", 3, "radius", "float");
  if (rl_get_float(interp, argv[3], &a3) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_poly_lines_ex", 4, "rotation", "float");
  if (rl_get_float(interp, argv[4], &a4) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_poly_lines_ex", 5, "lineThick", "float");
  if (rl_get_Color(interp, argv[5], &a5) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_poly_lines_ex", 6, "color", "Color");
  DrawPolyLinesEx(a0, (int)a1, (float)a2, (float)a3, (float)a4, a5);
  return LCL_RC_OK;
}

/* DrawSplineLinear: Draw spline: Linear, minimum 2 points */
static int rl_fn_DrawSplineLinear(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Vector2 *a0 = NULL;
  int n0 = 0;
  double a1;
  Color a2;
  (void)out;
  int rc = LCL_RC_ERR;
  if (argc != 3) return rl_arity_error(interp, "raylib::draw_spline_linear", 3, argc);
  if (rl_get_float(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_spline_linear", 2, "thick", "float");
  if (rl_get_Color(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_spline_linear", 3, "color", "Color");
  if (lcl_value_type_of(argv[0]) != LCL_LIST) return RL_ARG_ERR(interp, "raylib::draw_spline_linear", 1, "points", "list of Vector2");
  n0 = (int)lcl_list_len(argv[0]);
  a0 = (Vector2 *)calloc(n0 > 0 ? (size_t)n0 : 1, sizeof(*a0));
  if (!a0) goto cleanup;
  {
    int k;
    for (k = 0; k < n0; k++) {
      lcl_value *item;
      if (lcl_list_get(argv[0], (size_t)k, &item) != LCL_OK) goto cleanup;
      if (rl_get_Vector2(interp, item, &a0[k]) != LCL_RC_OK) { lcl_ref_dec(item); RL_ARG_ERR(interp, "raylib::draw_spline_linear", 1, "points", "list of Vector2"); goto cleanup; }
      lcl_ref_dec(item);
    }
  }
  DrawSplineLinear(a0, n0, (float)a1, a2);
  rc = LCL_RC_OK;
cleanup:
  free(a0);
  return rc;
}

/* DrawSplineBasis: Draw spline: B-Spline, minimum 4 points */
static int rl_fn_DrawSplineBasis(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Vector2 *a0 = NULL;
  int n0 = 0;
  double a1;
  Color a2;
  (void)out;
  int rc = LCL_RC_ERR;
  if (argc != 3) return rl_arity_error(interp, "raylib::draw_spline_basis", 3, argc);
  if (rl_get_float(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_spline_basis", 2, "thick", "float");
  if (rl_get_Color(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_spline_basis", 3, "color", "Color");
  if (lcl_value_type_of(argv[0]) != LCL_LIST) return RL_ARG_ERR(interp, "raylib::draw_spline_basis", 1, "points", "list of Vector2");
  n0 = (int)lcl_list_len(argv[0]);
  a0 = (Vector2 *)calloc(n0 > 0 ? (size_t)n0 : 1, sizeof(*a0));
  if (!a0) goto cleanup;
  {
    int k;
    for (k = 0; k < n0; k++) {
      lcl_value *item;
      if (lcl_list_get(argv[0], (size_t)k, &item) != LCL_OK) goto cleanup;
      if (rl_get_Vector2(interp, item, &a0[k]) != LCL_RC_OK) { lcl_ref_dec(item); RL_ARG_ERR(interp, "raylib::draw_spline_basis", 1, "points", "list of Vector2"); goto cleanup; }
      lcl_ref_dec(item);
    }
  }
  DrawSplineBasis(a0, n0, (float)a1, a2);
  rc = LCL_RC_OK;
cleanup:
  free(a0);
  return rc;
}

/* DrawSplineCatmullRom: Draw spline: Catmull-Rom, minimum 4 points */
static int rl_fn_DrawSplineCatmullRom(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Vector2 *a0 = NULL;
  int n0 = 0;
  double a1;
  Color a2;
  (void)out;
  int rc = LCL_RC_ERR;
  if (argc != 3) return rl_arity_error(interp, "raylib::draw_spline_catmull_rom", 3, argc);
  if (rl_get_float(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_spline_catmull_rom", 2, "thick", "float");
  if (rl_get_Color(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_spline_catmull_rom", 3, "color", "Color");
  if (lcl_value_type_of(argv[0]) != LCL_LIST) return RL_ARG_ERR(interp, "raylib::draw_spline_catmull_rom", 1, "points", "list of Vector2");
  n0 = (int)lcl_list_len(argv[0]);
  a0 = (Vector2 *)calloc(n0 > 0 ? (size_t)n0 : 1, sizeof(*a0));
  if (!a0) goto cleanup;
  {
    int k;
    for (k = 0; k < n0; k++) {
      lcl_value *item;
      if (lcl_list_get(argv[0], (size_t)k, &item) != LCL_OK) goto cleanup;
      if (rl_get_Vector2(interp, item, &a0[k]) != LCL_RC_OK) { lcl_ref_dec(item); RL_ARG_ERR(interp, "raylib::draw_spline_catmull_rom", 1, "points", "list of Vector2"); goto cleanup; }
      lcl_ref_dec(item);
    }
  }
  DrawSplineCatmullRom(a0, n0, (float)a1, a2);
  rc = LCL_RC_OK;
cleanup:
  free(a0);
  return rc;
}

/* DrawSplineBezierQuadratic: Draw spline: Quadratic Bezier, minimum 3 points (1 control point): [p1, c2, p3, c4...] */
static int rl_fn_DrawSplineBezierQuadratic(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Vector2 *a0 = NULL;
  int n0 = 0;
  double a1;
  Color a2;
  (void)out;
  int rc = LCL_RC_ERR;
  if (argc != 3) return rl_arity_error(interp, "raylib::draw_spline_bezier_quadratic", 3, argc);
  if (rl_get_float(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_spline_bezier_quadratic", 2, "thick", "float");
  if (rl_get_Color(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_spline_bezier_quadratic", 3, "color", "Color");
  if (lcl_value_type_of(argv[0]) != LCL_LIST) return RL_ARG_ERR(interp, "raylib::draw_spline_bezier_quadratic", 1, "points", "list of Vector2");
  n0 = (int)lcl_list_len(argv[0]);
  a0 = (Vector2 *)calloc(n0 > 0 ? (size_t)n0 : 1, sizeof(*a0));
  if (!a0) goto cleanup;
  {
    int k;
    for (k = 0; k < n0; k++) {
      lcl_value *item;
      if (lcl_list_get(argv[0], (size_t)k, &item) != LCL_OK) goto cleanup;
      if (rl_get_Vector2(interp, item, &a0[k]) != LCL_RC_OK) { lcl_ref_dec(item); RL_ARG_ERR(interp, "raylib::draw_spline_bezier_quadratic", 1, "points", "list of Vector2"); goto cleanup; }
      lcl_ref_dec(item);
    }
  }
  DrawSplineBezierQuadratic(a0, n0, (float)a1, a2);
  rc = LCL_RC_OK;
cleanup:
  free(a0);
  return rc;
}

/* DrawSplineBezierCubic: Draw spline: Cubic Bezier, minimum 4 points (2 control points): [p1, c2, c3, p4, c5, c6...] */
static int rl_fn_DrawSplineBezierCubic(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Vector2 *a0 = NULL;
  int n0 = 0;
  double a1;
  Color a2;
  (void)out;
  int rc = LCL_RC_ERR;
  if (argc != 3) return rl_arity_error(interp, "raylib::draw_spline_bezier_cubic", 3, argc);
  if (rl_get_float(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_spline_bezier_cubic", 2, "thick", "float");
  if (rl_get_Color(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_spline_bezier_cubic", 3, "color", "Color");
  if (lcl_value_type_of(argv[0]) != LCL_LIST) return RL_ARG_ERR(interp, "raylib::draw_spline_bezier_cubic", 1, "points", "list of Vector2");
  n0 = (int)lcl_list_len(argv[0]);
  a0 = (Vector2 *)calloc(n0 > 0 ? (size_t)n0 : 1, sizeof(*a0));
  if (!a0) goto cleanup;
  {
    int k;
    for (k = 0; k < n0; k++) {
      lcl_value *item;
      if (lcl_list_get(argv[0], (size_t)k, &item) != LCL_OK) goto cleanup;
      if (rl_get_Vector2(interp, item, &a0[k]) != LCL_RC_OK) { lcl_ref_dec(item); RL_ARG_ERR(interp, "raylib::draw_spline_bezier_cubic", 1, "points", "list of Vector2"); goto cleanup; }
      lcl_ref_dec(item);
    }
  }
  DrawSplineBezierCubic(a0, n0, (float)a1, a2);
  rc = LCL_RC_OK;
cleanup:
  free(a0);
  return rc;
}

/* DrawSplineSegmentLinear: Draw spline segment: Linear, 2 points */
static int rl_fn_DrawSplineSegmentLinear(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Vector2 a0;
  Vector2 a1;
  double a2;
  Color a3;
  (void)out;
  if (argc != 4) return rl_arity_error(interp, "raylib::draw_spline_segment_linear", 4, argc);
  if (rl_get_Vector2(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_spline_segment_linear", 1, "p1", "Vector2");
  if (rl_get_Vector2(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_spline_segment_linear", 2, "p2", "Vector2");
  if (rl_get_float(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_spline_segment_linear", 3, "thick", "float");
  if (rl_get_Color(interp, argv[3], &a3) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_spline_segment_linear", 4, "color", "Color");
  DrawSplineSegmentLinear(a0, a1, (float)a2, a3);
  return LCL_RC_OK;
}

/* DrawSplineSegmentBasis: Draw spline segment: B-Spline, 4 points */
static int rl_fn_DrawSplineSegmentBasis(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Vector2 a0;
  Vector2 a1;
  Vector2 a2;
  Vector2 a3;
  double a4;
  Color a5;
  (void)out;
  if (argc != 6) return rl_arity_error(interp, "raylib::draw_spline_segment_basis", 6, argc);
  if (rl_get_Vector2(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_spline_segment_basis", 1, "p1", "Vector2");
  if (rl_get_Vector2(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_spline_segment_basis", 2, "p2", "Vector2");
  if (rl_get_Vector2(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_spline_segment_basis", 3, "p3", "Vector2");
  if (rl_get_Vector2(interp, argv[3], &a3) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_spline_segment_basis", 4, "p4", "Vector2");
  if (rl_get_float(interp, argv[4], &a4) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_spline_segment_basis", 5, "thick", "float");
  if (rl_get_Color(interp, argv[5], &a5) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_spline_segment_basis", 6, "color", "Color");
  DrawSplineSegmentBasis(a0, a1, a2, a3, (float)a4, a5);
  return LCL_RC_OK;
}

/* DrawSplineSegmentCatmullRom: Draw spline segment: Catmull-Rom, 4 points */
static int rl_fn_DrawSplineSegmentCatmullRom(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Vector2 a0;
  Vector2 a1;
  Vector2 a2;
  Vector2 a3;
  double a4;
  Color a5;
  (void)out;
  if (argc != 6) return rl_arity_error(interp, "raylib::draw_spline_segment_catmull_rom", 6, argc);
  if (rl_get_Vector2(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_spline_segment_catmull_rom", 1, "p1", "Vector2");
  if (rl_get_Vector2(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_spline_segment_catmull_rom", 2, "p2", "Vector2");
  if (rl_get_Vector2(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_spline_segment_catmull_rom", 3, "p3", "Vector2");
  if (rl_get_Vector2(interp, argv[3], &a3) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_spline_segment_catmull_rom", 4, "p4", "Vector2");
  if (rl_get_float(interp, argv[4], &a4) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_spline_segment_catmull_rom", 5, "thick", "float");
  if (rl_get_Color(interp, argv[5], &a5) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_spline_segment_catmull_rom", 6, "color", "Color");
  DrawSplineSegmentCatmullRom(a0, a1, a2, a3, (float)a4, a5);
  return LCL_RC_OK;
}

/* DrawSplineSegmentBezierQuadratic: Draw spline segment: Quadratic Bezier, 2 points, 1 control point */
static int rl_fn_DrawSplineSegmentBezierQuadratic(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Vector2 a0;
  Vector2 a1;
  Vector2 a2;
  double a3;
  Color a4;
  (void)out;
  if (argc != 5) return rl_arity_error(interp, "raylib::draw_spline_segment_bezier_quadratic", 5, argc);
  if (rl_get_Vector2(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_spline_segment_bezier_quadratic", 1, "p1", "Vector2");
  if (rl_get_Vector2(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_spline_segment_bezier_quadratic", 2, "c2", "Vector2");
  if (rl_get_Vector2(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_spline_segment_bezier_quadratic", 3, "p3", "Vector2");
  if (rl_get_float(interp, argv[3], &a3) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_spline_segment_bezier_quadratic", 4, "thick", "float");
  if (rl_get_Color(interp, argv[4], &a4) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_spline_segment_bezier_quadratic", 5, "color", "Color");
  DrawSplineSegmentBezierQuadratic(a0, a1, a2, (float)a3, a4);
  return LCL_RC_OK;
}

/* DrawSplineSegmentBezierCubic: Draw spline segment: Cubic Bezier, 2 points, 2 control points */
static int rl_fn_DrawSplineSegmentBezierCubic(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Vector2 a0;
  Vector2 a1;
  Vector2 a2;
  Vector2 a3;
  double a4;
  Color a5;
  (void)out;
  if (argc != 6) return rl_arity_error(interp, "raylib::draw_spline_segment_bezier_cubic", 6, argc);
  if (rl_get_Vector2(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_spline_segment_bezier_cubic", 1, "p1", "Vector2");
  if (rl_get_Vector2(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_spline_segment_bezier_cubic", 2, "c2", "Vector2");
  if (rl_get_Vector2(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_spline_segment_bezier_cubic", 3, "c3", "Vector2");
  if (rl_get_Vector2(interp, argv[3], &a3) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_spline_segment_bezier_cubic", 4, "p4", "Vector2");
  if (rl_get_float(interp, argv[4], &a4) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_spline_segment_bezier_cubic", 5, "thick", "float");
  if (rl_get_Color(interp, argv[5], &a5) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_spline_segment_bezier_cubic", 6, "color", "Color");
  DrawSplineSegmentBezierCubic(a0, a1, a2, a3, (float)a4, a5);
  return LCL_RC_OK;
}

/* GetSplinePointLinear: Get (evaluate) spline point: Linear */
static int rl_fn_GetSplinePointLinear(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Vector2 a0;
  Vector2 a1;
  double a2;
  Vector2 r;
  if (argc != 3) return rl_arity_error(interp, "raylib::get_spline_point_linear", 3, argc);
  if (rl_get_Vector2(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::get_spline_point_linear", 1, "startPos", "Vector2");
  if (rl_get_Vector2(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::get_spline_point_linear", 2, "endPos", "Vector2");
  if (rl_get_float(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::get_spline_point_linear", 3, "t", "float");
  r = GetSplinePointLinear(a0, a1, (float)a2);
  *out = rl_new_Vector2(r);
  return LCL_RC_OK;
}

/* GetSplinePointBasis: Get (evaluate) spline point: B-Spline */
static int rl_fn_GetSplinePointBasis(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Vector2 a0;
  Vector2 a1;
  Vector2 a2;
  Vector2 a3;
  double a4;
  Vector2 r;
  if (argc != 5) return rl_arity_error(interp, "raylib::get_spline_point_basis", 5, argc);
  if (rl_get_Vector2(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::get_spline_point_basis", 1, "p1", "Vector2");
  if (rl_get_Vector2(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::get_spline_point_basis", 2, "p2", "Vector2");
  if (rl_get_Vector2(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::get_spline_point_basis", 3, "p3", "Vector2");
  if (rl_get_Vector2(interp, argv[3], &a3) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::get_spline_point_basis", 4, "p4", "Vector2");
  if (rl_get_float(interp, argv[4], &a4) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::get_spline_point_basis", 5, "t", "float");
  r = GetSplinePointBasis(a0, a1, a2, a3, (float)a4);
  *out = rl_new_Vector2(r);
  return LCL_RC_OK;
}

/* GetSplinePointCatmullRom: Get (evaluate) spline point: Catmull-Rom */
static int rl_fn_GetSplinePointCatmullRom(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Vector2 a0;
  Vector2 a1;
  Vector2 a2;
  Vector2 a3;
  double a4;
  Vector2 r;
  if (argc != 5) return rl_arity_error(interp, "raylib::get_spline_point_catmull_rom", 5, argc);
  if (rl_get_Vector2(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::get_spline_point_catmull_rom", 1, "p1", "Vector2");
  if (rl_get_Vector2(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::get_spline_point_catmull_rom", 2, "p2", "Vector2");
  if (rl_get_Vector2(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::get_spline_point_catmull_rom", 3, "p3", "Vector2");
  if (rl_get_Vector2(interp, argv[3], &a3) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::get_spline_point_catmull_rom", 4, "p4", "Vector2");
  if (rl_get_float(interp, argv[4], &a4) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::get_spline_point_catmull_rom", 5, "t", "float");
  r = GetSplinePointCatmullRom(a0, a1, a2, a3, (float)a4);
  *out = rl_new_Vector2(r);
  return LCL_RC_OK;
}

/* GetSplinePointBezierQuad: Get (evaluate) spline point: Quadratic Bezier */
static int rl_fn_GetSplinePointBezierQuad(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Vector2 a0;
  Vector2 a1;
  Vector2 a2;
  double a3;
  Vector2 r;
  if (argc != 4) return rl_arity_error(interp, "raylib::get_spline_point_bezier_quad", 4, argc);
  if (rl_get_Vector2(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::get_spline_point_bezier_quad", 1, "p1", "Vector2");
  if (rl_get_Vector2(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::get_spline_point_bezier_quad", 2, "c2", "Vector2");
  if (rl_get_Vector2(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::get_spline_point_bezier_quad", 3, "p3", "Vector2");
  if (rl_get_float(interp, argv[3], &a3) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::get_spline_point_bezier_quad", 4, "t", "float");
  r = GetSplinePointBezierQuad(a0, a1, a2, (float)a3);
  *out = rl_new_Vector2(r);
  return LCL_RC_OK;
}

/* GetSplinePointBezierCubic: Get (evaluate) spline point: Cubic Bezier */
static int rl_fn_GetSplinePointBezierCubic(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Vector2 a0;
  Vector2 a1;
  Vector2 a2;
  Vector2 a3;
  double a4;
  Vector2 r;
  if (argc != 5) return rl_arity_error(interp, "raylib::get_spline_point_bezier_cubic", 5, argc);
  if (rl_get_Vector2(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::get_spline_point_bezier_cubic", 1, "p1", "Vector2");
  if (rl_get_Vector2(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::get_spline_point_bezier_cubic", 2, "c2", "Vector2");
  if (rl_get_Vector2(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::get_spline_point_bezier_cubic", 3, "c3", "Vector2");
  if (rl_get_Vector2(interp, argv[3], &a3) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::get_spline_point_bezier_cubic", 4, "p4", "Vector2");
  if (rl_get_float(interp, argv[4], &a4) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::get_spline_point_bezier_cubic", 5, "t", "float");
  r = GetSplinePointBezierCubic(a0, a1, a2, a3, (float)a4);
  *out = rl_new_Vector2(r);
  return LCL_RC_OK;
}

/* CheckCollisionRecs: Check collision between two rectangles */
static int rl_fn_CheckCollisionRecs(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Rectangle a0;
  Rectangle a1;
  bool r;
  if (argc != 2) return rl_arity_error(interp, "raylib::check_collision_recs", 2, argc);
  if (rl_get_Rectangle(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::check_collision_recs", 1, "rec1", "Rectangle");
  if (rl_get_Rectangle(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::check_collision_recs", 2, "rec2", "Rectangle");
  r = CheckCollisionRecs(a0, a1);
  *out = lcl_int_new((long)r);
  return LCL_RC_OK;
}

/* CheckCollisionCircles: Check collision between two circles */
static int rl_fn_CheckCollisionCircles(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Vector2 a0;
  double a1;
  Vector2 a2;
  double a3;
  bool r;
  if (argc != 4) return rl_arity_error(interp, "raylib::check_collision_circles", 4, argc);
  if (rl_get_Vector2(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::check_collision_circles", 1, "center1", "Vector2");
  if (rl_get_float(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::check_collision_circles", 2, "radius1", "float");
  if (rl_get_Vector2(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::check_collision_circles", 3, "center2", "Vector2");
  if (rl_get_float(interp, argv[3], &a3) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::check_collision_circles", 4, "radius2", "float");
  r = CheckCollisionCircles(a0, (float)a1, a2, (float)a3);
  *out = lcl_int_new((long)r);
  return LCL_RC_OK;
}

/* CheckCollisionCircleRec: Check collision between circle and rectangle */
static int rl_fn_CheckCollisionCircleRec(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Vector2 a0;
  double a1;
  Rectangle a2;
  bool r;
  if (argc != 3) return rl_arity_error(interp, "raylib::check_collision_circle_rec", 3, argc);
  if (rl_get_Vector2(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::check_collision_circle_rec", 1, "center", "Vector2");
  if (rl_get_float(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::check_collision_circle_rec", 2, "radius", "float");
  if (rl_get_Rectangle(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::check_collision_circle_rec", 3, "rec", "Rectangle");
  r = CheckCollisionCircleRec(a0, (float)a1, a2);
  *out = lcl_int_new((long)r);
  return LCL_RC_OK;
}

/* CheckCollisionCircleLine: Check if circle collides with a line created betweeen two points [p1] and [p2] */
static int rl_fn_CheckCollisionCircleLine(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Vector2 a0;
  double a1;
  Vector2 a2;
  Vector2 a3;
  bool r;
  if (argc != 4) return rl_arity_error(interp, "raylib::check_collision_circle_line", 4, argc);
  if (rl_get_Vector2(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::check_collision_circle_line", 1, "center", "Vector2");
  if (rl_get_float(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::check_collision_circle_line", 2, "radius", "float");
  if (rl_get_Vector2(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::check_collision_circle_line", 3, "p1", "Vector2");
  if (rl_get_Vector2(interp, argv[3], &a3) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::check_collision_circle_line", 4, "p2", "Vector2");
  r = CheckCollisionCircleLine(a0, (float)a1, a2, a3);
  *out = lcl_int_new((long)r);
  return LCL_RC_OK;
}

/* CheckCollisionPointRec: Check if point is inside rectangle */
static int rl_fn_CheckCollisionPointRec(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Vector2 a0;
  Rectangle a1;
  bool r;
  if (argc != 2) return rl_arity_error(interp, "raylib::check_collision_point_rec", 2, argc);
  if (rl_get_Vector2(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::check_collision_point_rec", 1, "point", "Vector2");
  if (rl_get_Rectangle(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::check_collision_point_rec", 2, "rec", "Rectangle");
  r = CheckCollisionPointRec(a0, a1);
  *out = lcl_int_new((long)r);
  return LCL_RC_OK;
}

/* CheckCollisionPointCircle: Check if point is inside circle */
static int rl_fn_CheckCollisionPointCircle(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Vector2 a0;
  Vector2 a1;
  double a2;
  bool r;
  if (argc != 3) return rl_arity_error(interp, "raylib::check_collision_point_circle", 3, argc);
  if (rl_get_Vector2(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::check_collision_point_circle", 1, "point", "Vector2");
  if (rl_get_Vector2(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::check_collision_point_circle", 2, "center", "Vector2");
  if (rl_get_float(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::check_collision_point_circle", 3, "radius", "float");
  r = CheckCollisionPointCircle(a0, a1, (float)a2);
  *out = lcl_int_new((long)r);
  return LCL_RC_OK;
}

/* CheckCollisionPointTriangle: Check if point is inside a triangle */
static int rl_fn_CheckCollisionPointTriangle(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Vector2 a0;
  Vector2 a1;
  Vector2 a2;
  Vector2 a3;
  bool r;
  if (argc != 4) return rl_arity_error(interp, "raylib::check_collision_point_triangle", 4, argc);
  if (rl_get_Vector2(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::check_collision_point_triangle", 1, "point", "Vector2");
  if (rl_get_Vector2(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::check_collision_point_triangle", 2, "p1", "Vector2");
  if (rl_get_Vector2(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::check_collision_point_triangle", 3, "p2", "Vector2");
  if (rl_get_Vector2(interp, argv[3], &a3) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::check_collision_point_triangle", 4, "p3", "Vector2");
  r = CheckCollisionPointTriangle(a0, a1, a2, a3);
  *out = lcl_int_new((long)r);
  return LCL_RC_OK;
}

/* CheckCollisionPointLine: Check if point belongs to line created between two points [p1] and [p2] with defined margin in pixels [threshold] */
static int rl_fn_CheckCollisionPointLine(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Vector2 a0;
  Vector2 a1;
  Vector2 a2;
  long a3;
  bool r;
  if (argc != 4) return rl_arity_error(interp, "raylib::check_collision_point_line", 4, argc);
  if (rl_get_Vector2(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::check_collision_point_line", 1, "point", "Vector2");
  if (rl_get_Vector2(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::check_collision_point_line", 2, "p1", "Vector2");
  if (rl_get_Vector2(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::check_collision_point_line", 3, "p2", "Vector2");
  if (rl_get_int(interp, argv[3], &a3) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::check_collision_point_line", 4, "threshold", "int");
  r = CheckCollisionPointLine(a0, a1, a2, (int)a3);
  *out = lcl_int_new((long)r);
  return LCL_RC_OK;
}

/* CheckCollisionPointPoly: Check if point is within a polygon described by array of vertices */
static int rl_fn_CheckCollisionPointPoly(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Vector2 a0;
  Vector2 *a1 = NULL;
  int n1 = 0;
  bool r;
  int rc = LCL_RC_ERR;
  if (argc != 2) return rl_arity_error(interp, "raylib::check_collision_point_poly", 2, argc);
  if (rl_get_Vector2(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::check_collision_point_poly", 1, "point", "Vector2");
  if (lcl_value_type_of(argv[1]) != LCL_LIST) return RL_ARG_ERR(interp, "raylib::check_collision_point_poly", 2, "points", "list of Vector2");
  n1 = (int)lcl_list_len(argv[1]);
  a1 = (Vector2 *)calloc(n1 > 0 ? (size_t)n1 : 1, sizeof(*a1));
  if (!a1) goto cleanup;
  {
    int k;
    for (k = 0; k < n1; k++) {
      lcl_value *item;
      if (lcl_list_get(argv[1], (size_t)k, &item) != LCL_OK) goto cleanup;
      if (rl_get_Vector2(interp, item, &a1[k]) != LCL_RC_OK) { lcl_ref_dec(item); RL_ARG_ERR(interp, "raylib::check_collision_point_poly", 2, "points", "list of Vector2"); goto cleanup; }
      lcl_ref_dec(item);
    }
  }
  r = CheckCollisionPointPoly(a0, a1, n1);
  *out = lcl_int_new((long)r);
  rc = LCL_RC_OK;
cleanup:
  free(a1);
  return rc;
}

/* CheckCollisionLines: Check the collision between two lines defined by two points each, returns collision point by reference */
static int rl_fn_CheckCollisionLines(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Vector2 a0;
  Vector2 a1;
  Vector2 a2;
  Vector2 a3;
  Vector2 *a4;
  bool r;
  if (argc != 5) return rl_arity_error(interp, "raylib::check_collision_lines", 5, argc);
  if (rl_get_Vector2(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::check_collision_lines", 1, "startPos1", "Vector2");
  if (rl_get_Vector2(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::check_collision_lines", 2, "endPos1", "Vector2");
  if (rl_get_Vector2(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::check_collision_lines", 3, "startPos2", "Vector2");
  if (rl_get_Vector2(interp, argv[3], &a3) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::check_collision_lines", 4, "endPos2", "Vector2");
  if (rl_ptr_Vector2(interp, argv[4], &a4) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::check_collision_lines", 5, "collisionPoint", "Vector2");
  r = CheckCollisionLines(a0, a1, a2, a3, a4);
  *out = lcl_int_new((long)r);
  return LCL_RC_OK;
}

/* GetCollisionRec: Get collision rectangle for two rectangles collision */
static int rl_fn_GetCollisionRec(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Rectangle a0;
  Rectangle a1;
  Rectangle r;
  if (argc != 2) return rl_arity_error(interp, "raylib::get_collision_rec", 2, argc);
  if (rl_get_Rectangle(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::get_collision_rec", 1, "rec1", "Rectangle");
  if (rl_get_Rectangle(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::get_collision_rec", 2, "rec2", "Rectangle");
  r = GetCollisionRec(a0, a1);
  *out = rl_new_Rectangle(r);
  return LCL_RC_OK;
}

/* LoadImage: Load image from file into CPU memory (RAM) */
static int rl_fn_LoadImage(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  const char *a0;
  Image r;
  if (argc != 1) return rl_arity_error(interp, "raylib::load_image", 1, argc);
  if (rl_get_string(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::load_image", 1, "fileName", "string");
  r = LoadImage(a0);
  *out = rl_new_Image(r);
  return LCL_RC_OK;
}

/* LoadImageRaw: Load image from RAW file data */
static int rl_fn_LoadImageRaw(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  const char *a0;
  long a1;
  long a2;
  long a3;
  long a4;
  Image r;
  if (argc != 5) return rl_arity_error(interp, "raylib::load_image_raw", 5, argc);
  if (rl_get_string(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::load_image_raw", 1, "fileName", "string");
  if (rl_get_int(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::load_image_raw", 2, "width", "int");
  if (rl_get_int(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::load_image_raw", 3, "height", "int");
  if (rl_get_int(interp, argv[3], &a3) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::load_image_raw", 4, "format", "int");
  if (rl_get_int(interp, argv[4], &a4) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::load_image_raw", 5, "headerSize", "int");
  r = LoadImageRaw(a0, (int)a1, (int)a2, (int)a3, (int)a4);
  *out = rl_new_Image(r);
  return LCL_RC_OK;
}

/* LoadImageFromTexture: Load image from GPU texture data */
static int rl_fn_LoadImageFromTexture(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Texture a0;
  Image r;
  if (argc != 1) return rl_arity_error(interp, "raylib::load_image_from_texture", 1, argc);
  if (rl_get_Texture(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::load_image_from_texture", 1, "texture", "Texture");
  r = LoadImageFromTexture(a0);
  *out = rl_new_Image(r);
  return LCL_RC_OK;
}

/* LoadImageFromScreen: Load image from screen buffer and (screenshot) */
static int rl_fn_LoadImageFromScreen(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Image r;
  (void)argv;
  if (argc != 0) return rl_arity_error(interp, "raylib::load_image_from_screen", 0, argc);
  r = LoadImageFromScreen();
  *out = rl_new_Image(r);
  return LCL_RC_OK;
}

/* IsImageValid: Check if an image is valid (data and parameters) */
static int rl_fn_IsImageValid(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Image a0;
  bool r;
  if (argc != 1) return rl_arity_error(interp, "raylib::is_image_valid", 1, argc);
  if (rl_get_Image(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::is_image_valid", 1, "image", "Image");
  r = IsImageValid(a0);
  *out = lcl_int_new((long)r);
  return LCL_RC_OK;
}

/* UnloadImage: Unload image from CPU memory (RAM) */
static int rl_fn_UnloadImage(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Image a0;
  (void)out;
  if (argc != 1) return rl_arity_error(interp, "raylib::unload_image", 1, argc);
  if (rl_get_Image(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::unload_image", 1, "image", "Image");
  UnloadImage(a0);
  return LCL_RC_OK;
}

/* ExportImage: Export image data to file, returns true on success */
static int rl_fn_ExportImage(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Image a0;
  const char *a1;
  bool r;
  if (argc != 2) return rl_arity_error(interp, "raylib::export_image", 2, argc);
  if (rl_get_Image(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::export_image", 1, "image", "Image");
  if (rl_get_string(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::export_image", 2, "fileName", "string");
  r = ExportImage(a0, a1);
  *out = lcl_int_new((long)r);
  return LCL_RC_OK;
}

/* ExportImageAsCode: Export image as code file defining an array of bytes, returns true on success */
static int rl_fn_ExportImageAsCode(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Image a0;
  const char *a1;
  bool r;
  if (argc != 2) return rl_arity_error(interp, "raylib::export_image_as_code", 2, argc);
  if (rl_get_Image(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::export_image_as_code", 1, "image", "Image");
  if (rl_get_string(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::export_image_as_code", 2, "fileName", "string");
  r = ExportImageAsCode(a0, a1);
  *out = lcl_int_new((long)r);
  return LCL_RC_OK;
}

/* GenImageColor: Generate image: plain color */
static int rl_fn_GenImageColor(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  long a0;
  long a1;
  Color a2;
  Image r;
  if (argc != 3) return rl_arity_error(interp, "raylib::gen_image_color", 3, argc);
  if (rl_get_int(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::gen_image_color", 1, "width", "int");
  if (rl_get_int(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::gen_image_color", 2, "height", "int");
  if (rl_get_Color(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::gen_image_color", 3, "color", "Color");
  r = GenImageColor((int)a0, (int)a1, a2);
  *out = rl_new_Image(r);
  return LCL_RC_OK;
}

/* GenImageGradientLinear: Generate image: linear gradient, direction in degrees [0..360], 0=Vertical gradient */
static int rl_fn_GenImageGradientLinear(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  long a0;
  long a1;
  long a2;
  Color a3;
  Color a4;
  Image r;
  if (argc != 5) return rl_arity_error(interp, "raylib::gen_image_gradient_linear", 5, argc);
  if (rl_get_int(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::gen_image_gradient_linear", 1, "width", "int");
  if (rl_get_int(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::gen_image_gradient_linear", 2, "height", "int");
  if (rl_get_int(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::gen_image_gradient_linear", 3, "direction", "int");
  if (rl_get_Color(interp, argv[3], &a3) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::gen_image_gradient_linear", 4, "start", "Color");
  if (rl_get_Color(interp, argv[4], &a4) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::gen_image_gradient_linear", 5, "end", "Color");
  r = GenImageGradientLinear((int)a0, (int)a1, (int)a2, a3, a4);
  *out = rl_new_Image(r);
  return LCL_RC_OK;
}

/* GenImageGradientRadial: Generate image: radial gradient */
static int rl_fn_GenImageGradientRadial(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  long a0;
  long a1;
  double a2;
  Color a3;
  Color a4;
  Image r;
  if (argc != 5) return rl_arity_error(interp, "raylib::gen_image_gradient_radial", 5, argc);
  if (rl_get_int(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::gen_image_gradient_radial", 1, "width", "int");
  if (rl_get_int(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::gen_image_gradient_radial", 2, "height", "int");
  if (rl_get_float(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::gen_image_gradient_radial", 3, "density", "float");
  if (rl_get_Color(interp, argv[3], &a3) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::gen_image_gradient_radial", 4, "inner", "Color");
  if (rl_get_Color(interp, argv[4], &a4) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::gen_image_gradient_radial", 5, "outer", "Color");
  r = GenImageGradientRadial((int)a0, (int)a1, (float)a2, a3, a4);
  *out = rl_new_Image(r);
  return LCL_RC_OK;
}

/* GenImageGradientSquare: Generate image: square gradient */
static int rl_fn_GenImageGradientSquare(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  long a0;
  long a1;
  double a2;
  Color a3;
  Color a4;
  Image r;
  if (argc != 5) return rl_arity_error(interp, "raylib::gen_image_gradient_square", 5, argc);
  if (rl_get_int(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::gen_image_gradient_square", 1, "width", "int");
  if (rl_get_int(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::gen_image_gradient_square", 2, "height", "int");
  if (rl_get_float(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::gen_image_gradient_square", 3, "density", "float");
  if (rl_get_Color(interp, argv[3], &a3) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::gen_image_gradient_square", 4, "inner", "Color");
  if (rl_get_Color(interp, argv[4], &a4) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::gen_image_gradient_square", 5, "outer", "Color");
  r = GenImageGradientSquare((int)a0, (int)a1, (float)a2, a3, a4);
  *out = rl_new_Image(r);
  return LCL_RC_OK;
}

/* GenImageChecked: Generate image: checked */
static int rl_fn_GenImageChecked(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  long a0;
  long a1;
  long a2;
  long a3;
  Color a4;
  Color a5;
  Image r;
  if (argc != 6) return rl_arity_error(interp, "raylib::gen_image_checked", 6, argc);
  if (rl_get_int(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::gen_image_checked", 1, "width", "int");
  if (rl_get_int(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::gen_image_checked", 2, "height", "int");
  if (rl_get_int(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::gen_image_checked", 3, "checksX", "int");
  if (rl_get_int(interp, argv[3], &a3) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::gen_image_checked", 4, "checksY", "int");
  if (rl_get_Color(interp, argv[4], &a4) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::gen_image_checked", 5, "col1", "Color");
  if (rl_get_Color(interp, argv[5], &a5) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::gen_image_checked", 6, "col2", "Color");
  r = GenImageChecked((int)a0, (int)a1, (int)a2, (int)a3, a4, a5);
  *out = rl_new_Image(r);
  return LCL_RC_OK;
}

/* GenImageWhiteNoise: Generate image: white noise */
static int rl_fn_GenImageWhiteNoise(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  long a0;
  long a1;
  double a2;
  Image r;
  if (argc != 3) return rl_arity_error(interp, "raylib::gen_image_white_noise", 3, argc);
  if (rl_get_int(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::gen_image_white_noise", 1, "width", "int");
  if (rl_get_int(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::gen_image_white_noise", 2, "height", "int");
  if (rl_get_float(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::gen_image_white_noise", 3, "factor", "float");
  r = GenImageWhiteNoise((int)a0, (int)a1, (float)a2);
  *out = rl_new_Image(r);
  return LCL_RC_OK;
}

/* GenImagePerlinNoise: Generate image: perlin noise */
static int rl_fn_GenImagePerlinNoise(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  long a0;
  long a1;
  long a2;
  long a3;
  double a4;
  Image r;
  if (argc != 5) return rl_arity_error(interp, "raylib::gen_image_perlin_noise", 5, argc);
  if (rl_get_int(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::gen_image_perlin_noise", 1, "width", "int");
  if (rl_get_int(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::gen_image_perlin_noise", 2, "height", "int");
  if (rl_get_int(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::gen_image_perlin_noise", 3, "offsetX", "int");
  if (rl_get_int(interp, argv[3], &a3) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::gen_image_perlin_noise", 4, "offsetY", "int");
  if (rl_get_float(interp, argv[4], &a4) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::gen_image_perlin_noise", 5, "scale", "float");
  r = GenImagePerlinNoise((int)a0, (int)a1, (int)a2, (int)a3, (float)a4);
  *out = rl_new_Image(r);
  return LCL_RC_OK;
}

/* GenImageCellular: Generate image: cellular algorithm, bigger tileSize means bigger cells */
static int rl_fn_GenImageCellular(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  long a0;
  long a1;
  long a2;
  Image r;
  if (argc != 3) return rl_arity_error(interp, "raylib::gen_image_cellular", 3, argc);
  if (rl_get_int(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::gen_image_cellular", 1, "width", "int");
  if (rl_get_int(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::gen_image_cellular", 2, "height", "int");
  if (rl_get_int(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::gen_image_cellular", 3, "tileSize", "int");
  r = GenImageCellular((int)a0, (int)a1, (int)a2);
  *out = rl_new_Image(r);
  return LCL_RC_OK;
}

/* GenImageText: Generate image: grayscale image from text data */
static int rl_fn_GenImageText(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  long a0;
  long a1;
  const char *a2;
  Image r;
  if (argc != 3) return rl_arity_error(interp, "raylib::gen_image_text", 3, argc);
  if (rl_get_int(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::gen_image_text", 1, "width", "int");
  if (rl_get_int(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::gen_image_text", 2, "height", "int");
  if (rl_get_string(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::gen_image_text", 3, "text", "string");
  r = GenImageText((int)a0, (int)a1, a2);
  *out = rl_new_Image(r);
  return LCL_RC_OK;
}

/* ImageCopy: Create an image duplicate (useful for transformations) */
static int rl_fn_ImageCopy(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Image a0;
  Image r;
  if (argc != 1) return rl_arity_error(interp, "raylib::image_copy", 1, argc);
  if (rl_get_Image(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_copy", 1, "image", "Image");
  r = ImageCopy(a0);
  *out = rl_new_Image(r);
  return LCL_RC_OK;
}

/* ImageFromImage: Create an image from another image piece */
static int rl_fn_ImageFromImage(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Image a0;
  Rectangle a1;
  Image r;
  if (argc != 2) return rl_arity_error(interp, "raylib::image_from_image", 2, argc);
  if (rl_get_Image(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_from_image", 1, "image", "Image");
  if (rl_get_Rectangle(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_from_image", 2, "rec", "Rectangle");
  r = ImageFromImage(a0, a1);
  *out = rl_new_Image(r);
  return LCL_RC_OK;
}

/* ImageFromChannel: Create an image from a selected channel of another image (GRAYSCALE) */
static int rl_fn_ImageFromChannel(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Image a0;
  long a1;
  Image r;
  if (argc != 2) return rl_arity_error(interp, "raylib::image_from_channel", 2, argc);
  if (rl_get_Image(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_from_channel", 1, "image", "Image");
  if (rl_get_int(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_from_channel", 2, "selectedChannel", "int");
  r = ImageFromChannel(a0, (int)a1);
  *out = rl_new_Image(r);
  return LCL_RC_OK;
}

/* ImageText: Create an image from text (default font) */
static int rl_fn_ImageText(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  const char *a0;
  long a1;
  Color a2;
  Image r;
  if (argc != 3) return rl_arity_error(interp, "raylib::image_text", 3, argc);
  if (rl_get_string(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_text", 1, "text", "string");
  if (rl_get_int(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_text", 2, "fontSize", "int");
  if (rl_get_Color(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_text", 3, "color", "Color");
  r = ImageText(a0, (int)a1, a2);
  *out = rl_new_Image(r);
  return LCL_RC_OK;
}

/* ImageTextEx: Create an image from text (custom sprite font) */
static int rl_fn_ImageTextEx(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Font a0;
  const char *a1;
  double a2;
  double a3;
  Color a4;
  Image r;
  if (argc != 5) return rl_arity_error(interp, "raylib::image_text_ex", 5, argc);
  if (rl_get_Font(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_text_ex", 1, "font", "Font");
  if (rl_get_string(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_text_ex", 2, "text", "string");
  if (rl_get_float(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_text_ex", 3, "fontSize", "float");
  if (rl_get_float(interp, argv[3], &a3) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_text_ex", 4, "spacing", "float");
  if (rl_get_Color(interp, argv[4], &a4) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_text_ex", 5, "tint", "Color");
  r = ImageTextEx(a0, a1, (float)a2, (float)a3, a4);
  *out = rl_new_Image(r);
  return LCL_RC_OK;
}

/* ImageFormat: Convert image data to desired format */
static int rl_fn_ImageFormat(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Image *a0;
  long a1;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::image_format", 2, argc);
  if (rl_ptr_Image(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_format", 1, "image", "Image");
  if (rl_get_int(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_format", 2, "newFormat", "int");
  ImageFormat(a0, (int)a1);
  return LCL_RC_OK;
}

/* ImageToPOT: Convert image to POT (power-of-two) */
static int rl_fn_ImageToPOT(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Image *a0;
  Color a1;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::image_to_pot", 2, argc);
  if (rl_ptr_Image(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_to_pot", 1, "image", "Image");
  if (rl_get_Color(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_to_pot", 2, "fill", "Color");
  ImageToPOT(a0, a1);
  return LCL_RC_OK;
}

/* ImageCrop: Crop an image to a defined rectangle */
static int rl_fn_ImageCrop(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Image *a0;
  Rectangle a1;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::image_crop", 2, argc);
  if (rl_ptr_Image(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_crop", 1, "image", "Image");
  if (rl_get_Rectangle(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_crop", 2, "crop", "Rectangle");
  ImageCrop(a0, a1);
  return LCL_RC_OK;
}

/* ImageAlphaCrop: Crop image depending on alpha value */
static int rl_fn_ImageAlphaCrop(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Image *a0;
  double a1;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::image_alpha_crop", 2, argc);
  if (rl_ptr_Image(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_alpha_crop", 1, "image", "Image");
  if (rl_get_float(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_alpha_crop", 2, "threshold", "float");
  ImageAlphaCrop(a0, (float)a1);
  return LCL_RC_OK;
}

/* ImageAlphaClear: Clear alpha channel to desired color */
static int rl_fn_ImageAlphaClear(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Image *a0;
  Color a1;
  double a2;
  (void)out;
  if (argc != 3) return rl_arity_error(interp, "raylib::image_alpha_clear", 3, argc);
  if (rl_ptr_Image(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_alpha_clear", 1, "image", "Image");
  if (rl_get_Color(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_alpha_clear", 2, "color", "Color");
  if (rl_get_float(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_alpha_clear", 3, "threshold", "float");
  ImageAlphaClear(a0, a1, (float)a2);
  return LCL_RC_OK;
}

/* ImageAlphaMask: Apply alpha mask to image */
static int rl_fn_ImageAlphaMask(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Image *a0;
  Image a1;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::image_alpha_mask", 2, argc);
  if (rl_ptr_Image(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_alpha_mask", 1, "image", "Image");
  if (rl_get_Image(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_alpha_mask", 2, "alphaMask", "Image");
  ImageAlphaMask(a0, a1);
  return LCL_RC_OK;
}

/* ImageAlphaPremultiply: Premultiply alpha channel */
static int rl_fn_ImageAlphaPremultiply(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Image *a0;
  (void)out;
  if (argc != 1) return rl_arity_error(interp, "raylib::image_alpha_premultiply", 1, argc);
  if (rl_ptr_Image(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_alpha_premultiply", 1, "image", "Image");
  ImageAlphaPremultiply(a0);
  return LCL_RC_OK;
}

/* ImageBlurGaussian: Apply Gaussian blur using a box blur approximation */
static int rl_fn_ImageBlurGaussian(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Image *a0;
  long a1;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::image_blur_gaussian", 2, argc);
  if (rl_ptr_Image(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_blur_gaussian", 1, "image", "Image");
  if (rl_get_int(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_blur_gaussian", 2, "blurSize", "int");
  ImageBlurGaussian(a0, (int)a1);
  return LCL_RC_OK;
}

/* ImageResize: Resize image (Bicubic scaling algorithm) */
static int rl_fn_ImageResize(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Image *a0;
  long a1;
  long a2;
  (void)out;
  if (argc != 3) return rl_arity_error(interp, "raylib::image_resize", 3, argc);
  if (rl_ptr_Image(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_resize", 1, "image", "Image");
  if (rl_get_int(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_resize", 2, "newWidth", "int");
  if (rl_get_int(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_resize", 3, "newHeight", "int");
  ImageResize(a0, (int)a1, (int)a2);
  return LCL_RC_OK;
}

/* ImageResizeNN: Resize image (Nearest-Neighbor scaling algorithm) */
static int rl_fn_ImageResizeNN(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Image *a0;
  long a1;
  long a2;
  (void)out;
  if (argc != 3) return rl_arity_error(interp, "raylib::image_resize_nn", 3, argc);
  if (rl_ptr_Image(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_resize_nn", 1, "image", "Image");
  if (rl_get_int(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_resize_nn", 2, "newWidth", "int");
  if (rl_get_int(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_resize_nn", 3, "newHeight", "int");
  ImageResizeNN(a0, (int)a1, (int)a2);
  return LCL_RC_OK;
}

/* ImageResizeCanvas: Resize canvas and fill with color */
static int rl_fn_ImageResizeCanvas(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Image *a0;
  long a1;
  long a2;
  long a3;
  long a4;
  Color a5;
  (void)out;
  if (argc != 6) return rl_arity_error(interp, "raylib::image_resize_canvas", 6, argc);
  if (rl_ptr_Image(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_resize_canvas", 1, "image", "Image");
  if (rl_get_int(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_resize_canvas", 2, "newWidth", "int");
  if (rl_get_int(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_resize_canvas", 3, "newHeight", "int");
  if (rl_get_int(interp, argv[3], &a3) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_resize_canvas", 4, "offsetX", "int");
  if (rl_get_int(interp, argv[4], &a4) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_resize_canvas", 5, "offsetY", "int");
  if (rl_get_Color(interp, argv[5], &a5) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_resize_canvas", 6, "fill", "Color");
  ImageResizeCanvas(a0, (int)a1, (int)a2, (int)a3, (int)a4, a5);
  return LCL_RC_OK;
}

/* ImageMipmaps: Compute all mipmap levels for a provided image */
static int rl_fn_ImageMipmaps(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Image *a0;
  (void)out;
  if (argc != 1) return rl_arity_error(interp, "raylib::image_mipmaps", 1, argc);
  if (rl_ptr_Image(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_mipmaps", 1, "image", "Image");
  ImageMipmaps(a0);
  return LCL_RC_OK;
}

/* ImageDither: Dither image data to 16bpp or lower (Floyd-Steinberg dithering) */
static int rl_fn_ImageDither(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Image *a0;
  long a1;
  long a2;
  long a3;
  long a4;
  (void)out;
  if (argc != 5) return rl_arity_error(interp, "raylib::image_dither", 5, argc);
  if (rl_ptr_Image(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_dither", 1, "image", "Image");
  if (rl_get_int(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_dither", 2, "rBpp", "int");
  if (rl_get_int(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_dither", 3, "gBpp", "int");
  if (rl_get_int(interp, argv[3], &a3) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_dither", 4, "bBpp", "int");
  if (rl_get_int(interp, argv[4], &a4) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_dither", 5, "aBpp", "int");
  ImageDither(a0, (int)a1, (int)a2, (int)a3, (int)a4);
  return LCL_RC_OK;
}

/* ImageFlipVertical: Flip image vertically */
static int rl_fn_ImageFlipVertical(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Image *a0;
  (void)out;
  if (argc != 1) return rl_arity_error(interp, "raylib::image_flip_vertical", 1, argc);
  if (rl_ptr_Image(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_flip_vertical", 1, "image", "Image");
  ImageFlipVertical(a0);
  return LCL_RC_OK;
}

/* ImageFlipHorizontal: Flip image horizontally */
static int rl_fn_ImageFlipHorizontal(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Image *a0;
  (void)out;
  if (argc != 1) return rl_arity_error(interp, "raylib::image_flip_horizontal", 1, argc);
  if (rl_ptr_Image(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_flip_horizontal", 1, "image", "Image");
  ImageFlipHorizontal(a0);
  return LCL_RC_OK;
}

/* ImageRotate: Rotate image by input angle in degrees (-359 to 359) */
static int rl_fn_ImageRotate(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Image *a0;
  long a1;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::image_rotate", 2, argc);
  if (rl_ptr_Image(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_rotate", 1, "image", "Image");
  if (rl_get_int(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_rotate", 2, "degrees", "int");
  ImageRotate(a0, (int)a1);
  return LCL_RC_OK;
}

/* ImageRotateCW: Rotate image clockwise 90deg */
static int rl_fn_ImageRotateCW(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Image *a0;
  (void)out;
  if (argc != 1) return rl_arity_error(interp, "raylib::image_rotate_cw", 1, argc);
  if (rl_ptr_Image(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_rotate_cw", 1, "image", "Image");
  ImageRotateCW(a0);
  return LCL_RC_OK;
}

/* ImageRotateCCW: Rotate image counter-clockwise 90deg */
static int rl_fn_ImageRotateCCW(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Image *a0;
  (void)out;
  if (argc != 1) return rl_arity_error(interp, "raylib::image_rotate_ccw", 1, argc);
  if (rl_ptr_Image(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_rotate_ccw", 1, "image", "Image");
  ImageRotateCCW(a0);
  return LCL_RC_OK;
}

/* ImageColorTint: Modify image color: tint */
static int rl_fn_ImageColorTint(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Image *a0;
  Color a1;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::image_color_tint", 2, argc);
  if (rl_ptr_Image(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_color_tint", 1, "image", "Image");
  if (rl_get_Color(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_color_tint", 2, "color", "Color");
  ImageColorTint(a0, a1);
  return LCL_RC_OK;
}

/* ImageColorInvert: Modify image color: invert */
static int rl_fn_ImageColorInvert(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Image *a0;
  (void)out;
  if (argc != 1) return rl_arity_error(interp, "raylib::image_color_invert", 1, argc);
  if (rl_ptr_Image(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_color_invert", 1, "image", "Image");
  ImageColorInvert(a0);
  return LCL_RC_OK;
}

/* ImageColorGrayscale: Modify image color: grayscale */
static int rl_fn_ImageColorGrayscale(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Image *a0;
  (void)out;
  if (argc != 1) return rl_arity_error(interp, "raylib::image_color_grayscale", 1, argc);
  if (rl_ptr_Image(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_color_grayscale", 1, "image", "Image");
  ImageColorGrayscale(a0);
  return LCL_RC_OK;
}

/* ImageColorContrast: Modify image color: contrast (-100 to 100) */
static int rl_fn_ImageColorContrast(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Image *a0;
  double a1;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::image_color_contrast", 2, argc);
  if (rl_ptr_Image(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_color_contrast", 1, "image", "Image");
  if (rl_get_float(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_color_contrast", 2, "contrast", "float");
  ImageColorContrast(a0, (float)a1);
  return LCL_RC_OK;
}

/* ImageColorBrightness: Modify image color: brightness (-255 to 255) */
static int rl_fn_ImageColorBrightness(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Image *a0;
  long a1;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::image_color_brightness", 2, argc);
  if (rl_ptr_Image(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_color_brightness", 1, "image", "Image");
  if (rl_get_int(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_color_brightness", 2, "brightness", "int");
  ImageColorBrightness(a0, (int)a1);
  return LCL_RC_OK;
}

/* ImageColorReplace: Modify image color: replace color */
static int rl_fn_ImageColorReplace(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Image *a0;
  Color a1;
  Color a2;
  (void)out;
  if (argc != 3) return rl_arity_error(interp, "raylib::image_color_replace", 3, argc);
  if (rl_ptr_Image(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_color_replace", 1, "image", "Image");
  if (rl_get_Color(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_color_replace", 2, "color", "Color");
  if (rl_get_Color(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_color_replace", 3, "replace", "Color");
  ImageColorReplace(a0, a1, a2);
  return LCL_RC_OK;
}

/* UnloadImageColors: Unload color data loaded with LoadImageColors() */
static int rl_fn_UnloadImageColors(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Color *a0;
  (void)out;
  if (argc != 1) return rl_arity_error(interp, "raylib::unload_image_colors", 1, argc);
  if (rl_ptr_Color(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::unload_image_colors", 1, "colors", "Color");
  UnloadImageColors(a0);
  return LCL_RC_OK;
}

/* UnloadImagePalette: Unload colors palette loaded with LoadImagePalette() */
static int rl_fn_UnloadImagePalette(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Color *a0;
  (void)out;
  if (argc != 1) return rl_arity_error(interp, "raylib::unload_image_palette", 1, argc);
  if (rl_ptr_Color(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::unload_image_palette", 1, "colors", "Color");
  UnloadImagePalette(a0);
  return LCL_RC_OK;
}

/* GetImageAlphaBorder: Get image alpha border rectangle */
static int rl_fn_GetImageAlphaBorder(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Image a0;
  double a1;
  Rectangle r;
  if (argc != 2) return rl_arity_error(interp, "raylib::get_image_alpha_border", 2, argc);
  if (rl_get_Image(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::get_image_alpha_border", 1, "image", "Image");
  if (rl_get_float(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::get_image_alpha_border", 2, "threshold", "float");
  r = GetImageAlphaBorder(a0, (float)a1);
  *out = rl_new_Rectangle(r);
  return LCL_RC_OK;
}

/* GetImageColor: Get image pixel color at (x, y) position */
static int rl_fn_GetImageColor(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Image a0;
  long a1;
  long a2;
  Color r;
  if (argc != 3) return rl_arity_error(interp, "raylib::get_image_color", 3, argc);
  if (rl_get_Image(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::get_image_color", 1, "image", "Image");
  if (rl_get_int(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::get_image_color", 2, "x", "int");
  if (rl_get_int(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::get_image_color", 3, "y", "int");
  r = GetImageColor(a0, (int)a1, (int)a2);
  *out = rl_new_Color(r);
  return LCL_RC_OK;
}

/* ImageClearBackground: Clear image background with given color */
static int rl_fn_ImageClearBackground(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Image *a0;
  Color a1;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::image_clear_background", 2, argc);
  if (rl_ptr_Image(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_clear_background", 1, "dst", "Image");
  if (rl_get_Color(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_clear_background", 2, "color", "Color");
  ImageClearBackground(a0, a1);
  return LCL_RC_OK;
}

/* ImageDrawPixel: Draw pixel within an image */
static int rl_fn_ImageDrawPixel(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Image *a0;
  long a1;
  long a2;
  Color a3;
  (void)out;
  if (argc != 4) return rl_arity_error(interp, "raylib::image_draw_pixel", 4, argc);
  if (rl_ptr_Image(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_draw_pixel", 1, "dst", "Image");
  if (rl_get_int(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_draw_pixel", 2, "posX", "int");
  if (rl_get_int(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_draw_pixel", 3, "posY", "int");
  if (rl_get_Color(interp, argv[3], &a3) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_draw_pixel", 4, "color", "Color");
  ImageDrawPixel(a0, (int)a1, (int)a2, a3);
  return LCL_RC_OK;
}

/* ImageDrawPixelV: Draw pixel within an image (Vector version) */
static int rl_fn_ImageDrawPixelV(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Image *a0;
  Vector2 a1;
  Color a2;
  (void)out;
  if (argc != 3) return rl_arity_error(interp, "raylib::image_draw_pixel_v", 3, argc);
  if (rl_ptr_Image(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_draw_pixel_v", 1, "dst", "Image");
  if (rl_get_Vector2(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_draw_pixel_v", 2, "position", "Vector2");
  if (rl_get_Color(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_draw_pixel_v", 3, "color", "Color");
  ImageDrawPixelV(a0, a1, a2);
  return LCL_RC_OK;
}

/* ImageDrawLine: Draw line within an image */
static int rl_fn_ImageDrawLine(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Image *a0;
  long a1;
  long a2;
  long a3;
  long a4;
  Color a5;
  (void)out;
  if (argc != 6) return rl_arity_error(interp, "raylib::image_draw_line", 6, argc);
  if (rl_ptr_Image(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_draw_line", 1, "dst", "Image");
  if (rl_get_int(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_draw_line", 2, "startPosX", "int");
  if (rl_get_int(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_draw_line", 3, "startPosY", "int");
  if (rl_get_int(interp, argv[3], &a3) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_draw_line", 4, "endPosX", "int");
  if (rl_get_int(interp, argv[4], &a4) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_draw_line", 5, "endPosY", "int");
  if (rl_get_Color(interp, argv[5], &a5) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_draw_line", 6, "color", "Color");
  ImageDrawLine(a0, (int)a1, (int)a2, (int)a3, (int)a4, a5);
  return LCL_RC_OK;
}

/* ImageDrawLineV: Draw line within an image (Vector version) */
static int rl_fn_ImageDrawLineV(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Image *a0;
  Vector2 a1;
  Vector2 a2;
  Color a3;
  (void)out;
  if (argc != 4) return rl_arity_error(interp, "raylib::image_draw_line_v", 4, argc);
  if (rl_ptr_Image(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_draw_line_v", 1, "dst", "Image");
  if (rl_get_Vector2(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_draw_line_v", 2, "start", "Vector2");
  if (rl_get_Vector2(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_draw_line_v", 3, "end", "Vector2");
  if (rl_get_Color(interp, argv[3], &a3) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_draw_line_v", 4, "color", "Color");
  ImageDrawLineV(a0, a1, a2, a3);
  return LCL_RC_OK;
}

/* ImageDrawLineEx: Draw a line defining thickness within an image */
static int rl_fn_ImageDrawLineEx(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Image *a0;
  Vector2 a1;
  Vector2 a2;
  long a3;
  Color a4;
  (void)out;
  if (argc != 5) return rl_arity_error(interp, "raylib::image_draw_line_ex", 5, argc);
  if (rl_ptr_Image(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_draw_line_ex", 1, "dst", "Image");
  if (rl_get_Vector2(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_draw_line_ex", 2, "start", "Vector2");
  if (rl_get_Vector2(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_draw_line_ex", 3, "end", "Vector2");
  if (rl_get_int(interp, argv[3], &a3) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_draw_line_ex", 4, "thick", "int");
  if (rl_get_Color(interp, argv[4], &a4) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_draw_line_ex", 5, "color", "Color");
  ImageDrawLineEx(a0, a1, a2, (int)a3, a4);
  return LCL_RC_OK;
}

/* ImageDrawCircle: Draw a filled circle within an image */
static int rl_fn_ImageDrawCircle(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Image *a0;
  long a1;
  long a2;
  long a3;
  Color a4;
  (void)out;
  if (argc != 5) return rl_arity_error(interp, "raylib::image_draw_circle", 5, argc);
  if (rl_ptr_Image(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_draw_circle", 1, "dst", "Image");
  if (rl_get_int(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_draw_circle", 2, "centerX", "int");
  if (rl_get_int(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_draw_circle", 3, "centerY", "int");
  if (rl_get_int(interp, argv[3], &a3) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_draw_circle", 4, "radius", "int");
  if (rl_get_Color(interp, argv[4], &a4) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_draw_circle", 5, "color", "Color");
  ImageDrawCircle(a0, (int)a1, (int)a2, (int)a3, a4);
  return LCL_RC_OK;
}

/* ImageDrawCircleV: Draw a filled circle within an image (Vector version) */
static int rl_fn_ImageDrawCircleV(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Image *a0;
  Vector2 a1;
  long a2;
  Color a3;
  (void)out;
  if (argc != 4) return rl_arity_error(interp, "raylib::image_draw_circle_v", 4, argc);
  if (rl_ptr_Image(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_draw_circle_v", 1, "dst", "Image");
  if (rl_get_Vector2(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_draw_circle_v", 2, "center", "Vector2");
  if (rl_get_int(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_draw_circle_v", 3, "radius", "int");
  if (rl_get_Color(interp, argv[3], &a3) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_draw_circle_v", 4, "color", "Color");
  ImageDrawCircleV(a0, a1, (int)a2, a3);
  return LCL_RC_OK;
}

/* ImageDrawCircleLines: Draw circle outline within an image */
static int rl_fn_ImageDrawCircleLines(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Image *a0;
  long a1;
  long a2;
  long a3;
  Color a4;
  (void)out;
  if (argc != 5) return rl_arity_error(interp, "raylib::image_draw_circle_lines", 5, argc);
  if (rl_ptr_Image(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_draw_circle_lines", 1, "dst", "Image");
  if (rl_get_int(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_draw_circle_lines", 2, "centerX", "int");
  if (rl_get_int(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_draw_circle_lines", 3, "centerY", "int");
  if (rl_get_int(interp, argv[3], &a3) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_draw_circle_lines", 4, "radius", "int");
  if (rl_get_Color(interp, argv[4], &a4) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_draw_circle_lines", 5, "color", "Color");
  ImageDrawCircleLines(a0, (int)a1, (int)a2, (int)a3, a4);
  return LCL_RC_OK;
}

/* ImageDrawCircleLinesV: Draw circle outline within an image (Vector version) */
static int rl_fn_ImageDrawCircleLinesV(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Image *a0;
  Vector2 a1;
  long a2;
  Color a3;
  (void)out;
  if (argc != 4) return rl_arity_error(interp, "raylib::image_draw_circle_lines_v", 4, argc);
  if (rl_ptr_Image(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_draw_circle_lines_v", 1, "dst", "Image");
  if (rl_get_Vector2(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_draw_circle_lines_v", 2, "center", "Vector2");
  if (rl_get_int(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_draw_circle_lines_v", 3, "radius", "int");
  if (rl_get_Color(interp, argv[3], &a3) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_draw_circle_lines_v", 4, "color", "Color");
  ImageDrawCircleLinesV(a0, a1, (int)a2, a3);
  return LCL_RC_OK;
}

/* ImageDrawRectangle: Draw rectangle within an image */
static int rl_fn_ImageDrawRectangle(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Image *a0;
  long a1;
  long a2;
  long a3;
  long a4;
  Color a5;
  (void)out;
  if (argc != 6) return rl_arity_error(interp, "raylib::image_draw_rectangle", 6, argc);
  if (rl_ptr_Image(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_draw_rectangle", 1, "dst", "Image");
  if (rl_get_int(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_draw_rectangle", 2, "posX", "int");
  if (rl_get_int(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_draw_rectangle", 3, "posY", "int");
  if (rl_get_int(interp, argv[3], &a3) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_draw_rectangle", 4, "width", "int");
  if (rl_get_int(interp, argv[4], &a4) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_draw_rectangle", 5, "height", "int");
  if (rl_get_Color(interp, argv[5], &a5) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_draw_rectangle", 6, "color", "Color");
  ImageDrawRectangle(a0, (int)a1, (int)a2, (int)a3, (int)a4, a5);
  return LCL_RC_OK;
}

/* ImageDrawRectangleV: Draw rectangle within an image (Vector version) */
static int rl_fn_ImageDrawRectangleV(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Image *a0;
  Vector2 a1;
  Vector2 a2;
  Color a3;
  (void)out;
  if (argc != 4) return rl_arity_error(interp, "raylib::image_draw_rectangle_v", 4, argc);
  if (rl_ptr_Image(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_draw_rectangle_v", 1, "dst", "Image");
  if (rl_get_Vector2(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_draw_rectangle_v", 2, "position", "Vector2");
  if (rl_get_Vector2(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_draw_rectangle_v", 3, "size", "Vector2");
  if (rl_get_Color(interp, argv[3], &a3) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_draw_rectangle_v", 4, "color", "Color");
  ImageDrawRectangleV(a0, a1, a2, a3);
  return LCL_RC_OK;
}

/* ImageDrawRectangleRec: Draw rectangle within an image */
static int rl_fn_ImageDrawRectangleRec(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Image *a0;
  Rectangle a1;
  Color a2;
  (void)out;
  if (argc != 3) return rl_arity_error(interp, "raylib::image_draw_rectangle_rec", 3, argc);
  if (rl_ptr_Image(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_draw_rectangle_rec", 1, "dst", "Image");
  if (rl_get_Rectangle(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_draw_rectangle_rec", 2, "rec", "Rectangle");
  if (rl_get_Color(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_draw_rectangle_rec", 3, "color", "Color");
  ImageDrawRectangleRec(a0, a1, a2);
  return LCL_RC_OK;
}

/* ImageDrawRectangleLines: Draw rectangle lines within an image */
static int rl_fn_ImageDrawRectangleLines(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Image *a0;
  Rectangle a1;
  long a2;
  Color a3;
  (void)out;
  if (argc != 4) return rl_arity_error(interp, "raylib::image_draw_rectangle_lines", 4, argc);
  if (rl_ptr_Image(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_draw_rectangle_lines", 1, "dst", "Image");
  if (rl_get_Rectangle(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_draw_rectangle_lines", 2, "rec", "Rectangle");
  if (rl_get_int(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_draw_rectangle_lines", 3, "thick", "int");
  if (rl_get_Color(interp, argv[3], &a3) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_draw_rectangle_lines", 4, "color", "Color");
  ImageDrawRectangleLines(a0, a1, (int)a2, a3);
  return LCL_RC_OK;
}

/* ImageDrawTriangle: Draw triangle within an image */
static int rl_fn_ImageDrawTriangle(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Image *a0;
  Vector2 a1;
  Vector2 a2;
  Vector2 a3;
  Color a4;
  (void)out;
  if (argc != 5) return rl_arity_error(interp, "raylib::image_draw_triangle", 5, argc);
  if (rl_ptr_Image(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_draw_triangle", 1, "dst", "Image");
  if (rl_get_Vector2(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_draw_triangle", 2, "v1", "Vector2");
  if (rl_get_Vector2(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_draw_triangle", 3, "v2", "Vector2");
  if (rl_get_Vector2(interp, argv[3], &a3) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_draw_triangle", 4, "v3", "Vector2");
  if (rl_get_Color(interp, argv[4], &a4) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_draw_triangle", 5, "color", "Color");
  ImageDrawTriangle(a0, a1, a2, a3, a4);
  return LCL_RC_OK;
}

/* ImageDrawTriangleEx: Draw triangle with interpolated colors within an image */
static int rl_fn_ImageDrawTriangleEx(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Image *a0;
  Vector2 a1;
  Vector2 a2;
  Vector2 a3;
  Color a4;
  Color a5;
  Color a6;
  (void)out;
  if (argc != 7) return rl_arity_error(interp, "raylib::image_draw_triangle_ex", 7, argc);
  if (rl_ptr_Image(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_draw_triangle_ex", 1, "dst", "Image");
  if (rl_get_Vector2(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_draw_triangle_ex", 2, "v1", "Vector2");
  if (rl_get_Vector2(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_draw_triangle_ex", 3, "v2", "Vector2");
  if (rl_get_Vector2(interp, argv[3], &a3) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_draw_triangle_ex", 4, "v3", "Vector2");
  if (rl_get_Color(interp, argv[4], &a4) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_draw_triangle_ex", 5, "c1", "Color");
  if (rl_get_Color(interp, argv[5], &a5) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_draw_triangle_ex", 6, "c2", "Color");
  if (rl_get_Color(interp, argv[6], &a6) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_draw_triangle_ex", 7, "c3", "Color");
  ImageDrawTriangleEx(a0, a1, a2, a3, a4, a5, a6);
  return LCL_RC_OK;
}

/* ImageDrawTriangleLines: Draw triangle outline within an image */
static int rl_fn_ImageDrawTriangleLines(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Image *a0;
  Vector2 a1;
  Vector2 a2;
  Vector2 a3;
  Color a4;
  (void)out;
  if (argc != 5) return rl_arity_error(interp, "raylib::image_draw_triangle_lines", 5, argc);
  if (rl_ptr_Image(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_draw_triangle_lines", 1, "dst", "Image");
  if (rl_get_Vector2(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_draw_triangle_lines", 2, "v1", "Vector2");
  if (rl_get_Vector2(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_draw_triangle_lines", 3, "v2", "Vector2");
  if (rl_get_Vector2(interp, argv[3], &a3) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_draw_triangle_lines", 4, "v3", "Vector2");
  if (rl_get_Color(interp, argv[4], &a4) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_draw_triangle_lines", 5, "color", "Color");
  ImageDrawTriangleLines(a0, a1, a2, a3, a4);
  return LCL_RC_OK;
}

/* ImageDrawTriangleFan: Draw a triangle fan defined by points within an image (first vertex is the center) */
static int rl_fn_ImageDrawTriangleFan(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Image *a0;
  Vector2 *a1 = NULL;
  int n1 = 0;
  Color a2;
  (void)out;
  int rc = LCL_RC_ERR;
  if (argc != 3) return rl_arity_error(interp, "raylib::image_draw_triangle_fan", 3, argc);
  if (rl_ptr_Image(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_draw_triangle_fan", 1, "dst", "Image");
  if (rl_get_Color(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_draw_triangle_fan", 3, "color", "Color");
  if (lcl_value_type_of(argv[1]) != LCL_LIST) return RL_ARG_ERR(interp, "raylib::image_draw_triangle_fan", 2, "points", "list of Vector2");
  n1 = (int)lcl_list_len(argv[1]);
  a1 = (Vector2 *)calloc(n1 > 0 ? (size_t)n1 : 1, sizeof(*a1));
  if (!a1) goto cleanup;
  {
    int k;
    for (k = 0; k < n1; k++) {
      lcl_value *item;
      if (lcl_list_get(argv[1], (size_t)k, &item) != LCL_OK) goto cleanup;
      if (rl_get_Vector2(interp, item, &a1[k]) != LCL_RC_OK) { lcl_ref_dec(item); RL_ARG_ERR(interp, "raylib::image_draw_triangle_fan", 2, "points", "list of Vector2"); goto cleanup; }
      lcl_ref_dec(item);
    }
  }
  ImageDrawTriangleFan(a0, a1, n1, a2);
  rc = LCL_RC_OK;
cleanup:
  free(a1);
  return rc;
}

/* ImageDrawTriangleStrip: Draw a triangle strip defined by points within an image */
static int rl_fn_ImageDrawTriangleStrip(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Image *a0;
  Vector2 *a1 = NULL;
  int n1 = 0;
  Color a2;
  (void)out;
  int rc = LCL_RC_ERR;
  if (argc != 3) return rl_arity_error(interp, "raylib::image_draw_triangle_strip", 3, argc);
  if (rl_ptr_Image(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_draw_triangle_strip", 1, "dst", "Image");
  if (rl_get_Color(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_draw_triangle_strip", 3, "color", "Color");
  if (lcl_value_type_of(argv[1]) != LCL_LIST) return RL_ARG_ERR(interp, "raylib::image_draw_triangle_strip", 2, "points", "list of Vector2");
  n1 = (int)lcl_list_len(argv[1]);
  a1 = (Vector2 *)calloc(n1 > 0 ? (size_t)n1 : 1, sizeof(*a1));
  if (!a1) goto cleanup;
  {
    int k;
    for (k = 0; k < n1; k++) {
      lcl_value *item;
      if (lcl_list_get(argv[1], (size_t)k, &item) != LCL_OK) goto cleanup;
      if (rl_get_Vector2(interp, item, &a1[k]) != LCL_RC_OK) { lcl_ref_dec(item); RL_ARG_ERR(interp, "raylib::image_draw_triangle_strip", 2, "points", "list of Vector2"); goto cleanup; }
      lcl_ref_dec(item);
    }
  }
  ImageDrawTriangleStrip(a0, a1, n1, a2);
  rc = LCL_RC_OK;
cleanup:
  free(a1);
  return rc;
}

/* ImageDraw: Draw a source image within a destination image (tint applied to source) */
static int rl_fn_ImageDraw(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Image *a0;
  Image a1;
  Rectangle a2;
  Rectangle a3;
  Color a4;
  (void)out;
  if (argc != 5) return rl_arity_error(interp, "raylib::image_draw", 5, argc);
  if (rl_ptr_Image(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_draw", 1, "dst", "Image");
  if (rl_get_Image(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_draw", 2, "src", "Image");
  if (rl_get_Rectangle(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_draw", 3, "srcRec", "Rectangle");
  if (rl_get_Rectangle(interp, argv[3], &a3) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_draw", 4, "dstRec", "Rectangle");
  if (rl_get_Color(interp, argv[4], &a4) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_draw", 5, "tint", "Color");
  ImageDraw(a0, a1, a2, a3, a4);
  return LCL_RC_OK;
}

/* ImageDrawText: Draw text (using default font) within an image (destination) */
static int rl_fn_ImageDrawText(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Image *a0;
  const char *a1;
  long a2;
  long a3;
  long a4;
  Color a5;
  (void)out;
  if (argc != 6) return rl_arity_error(interp, "raylib::image_draw_text", 6, argc);
  if (rl_ptr_Image(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_draw_text", 1, "dst", "Image");
  if (rl_get_string(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_draw_text", 2, "text", "string");
  if (rl_get_int(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_draw_text", 3, "posX", "int");
  if (rl_get_int(interp, argv[3], &a3) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_draw_text", 4, "posY", "int");
  if (rl_get_int(interp, argv[4], &a4) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_draw_text", 5, "fontSize", "int");
  if (rl_get_Color(interp, argv[5], &a5) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_draw_text", 6, "color", "Color");
  ImageDrawText(a0, a1, (int)a2, (int)a3, (int)a4, a5);
  return LCL_RC_OK;
}

/* ImageDrawTextEx: Draw text (custom sprite font) within an image (destination) */
static int rl_fn_ImageDrawTextEx(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Image *a0;
  Font a1;
  const char *a2;
  Vector2 a3;
  double a4;
  double a5;
  Color a6;
  (void)out;
  if (argc != 7) return rl_arity_error(interp, "raylib::image_draw_text_ex", 7, argc);
  if (rl_ptr_Image(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_draw_text_ex", 1, "dst", "Image");
  if (rl_get_Font(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_draw_text_ex", 2, "font", "Font");
  if (rl_get_string(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_draw_text_ex", 3, "text", "string");
  if (rl_get_Vector2(interp, argv[3], &a3) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_draw_text_ex", 4, "position", "Vector2");
  if (rl_get_float(interp, argv[4], &a4) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_draw_text_ex", 5, "fontSize", "float");
  if (rl_get_float(interp, argv[5], &a5) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_draw_text_ex", 6, "spacing", "float");
  if (rl_get_Color(interp, argv[6], &a6) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::image_draw_text_ex", 7, "tint", "Color");
  ImageDrawTextEx(a0, a1, a2, a3, (float)a4, (float)a5, a6);
  return LCL_RC_OK;
}

/* LoadTexture: Load texture from file into GPU memory (VRAM) */
static int rl_fn_LoadTexture(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  const char *a0;
  Texture r;
  if (argc != 1) return rl_arity_error(interp, "raylib::load_texture", 1, argc);
  if (rl_get_string(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::load_texture", 1, "fileName", "string");
  r = LoadTexture(a0);
  *out = rl_new_Texture(r);
  return LCL_RC_OK;
}

/* LoadTextureFromImage: Load texture from image data */
static int rl_fn_LoadTextureFromImage(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Image a0;
  Texture r;
  if (argc != 1) return rl_arity_error(interp, "raylib::load_texture_from_image", 1, argc);
  if (rl_get_Image(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::load_texture_from_image", 1, "image", "Image");
  r = LoadTextureFromImage(a0);
  *out = rl_new_Texture(r);
  return LCL_RC_OK;
}

/* LoadTextureCubemap: Load cubemap from image, multiple image cubemap layouts supported */
static int rl_fn_LoadTextureCubemap(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Image a0;
  long a1;
  Texture r;
  if (argc != 2) return rl_arity_error(interp, "raylib::load_texture_cubemap", 2, argc);
  if (rl_get_Image(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::load_texture_cubemap", 1, "image", "Image");
  if (rl_get_int(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::load_texture_cubemap", 2, "layout", "int");
  r = LoadTextureCubemap(a0, (int)a1);
  *out = rl_new_Texture(r);
  return LCL_RC_OK;
}

/* LoadRenderTexture: Load texture for rendering (framebuffer) */
static int rl_fn_LoadRenderTexture(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  long a0;
  long a1;
  RenderTexture r;
  if (argc != 2) return rl_arity_error(interp, "raylib::load_render_texture", 2, argc);
  if (rl_get_int(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::load_render_texture", 1, "width", "int");
  if (rl_get_int(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::load_render_texture", 2, "height", "int");
  r = LoadRenderTexture((int)a0, (int)a1);
  *out = rl_new_RenderTexture(r);
  return LCL_RC_OK;
}

/* IsTextureValid: Check if a texture is valid (loaded in GPU) */
static int rl_fn_IsTextureValid(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Texture a0;
  bool r;
  if (argc != 1) return rl_arity_error(interp, "raylib::is_texture_valid", 1, argc);
  if (rl_get_Texture(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::is_texture_valid", 1, "texture", "Texture");
  r = IsTextureValid(a0);
  *out = lcl_int_new((long)r);
  return LCL_RC_OK;
}

/* UnloadTexture: Unload texture from GPU memory (VRAM) */
static int rl_fn_UnloadTexture(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Texture a0;
  (void)out;
  if (argc != 1) return rl_arity_error(interp, "raylib::unload_texture", 1, argc);
  if (rl_get_Texture(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::unload_texture", 1, "texture", "Texture");
  UnloadTexture(a0);
  return LCL_RC_OK;
}

/* IsRenderTextureValid: Check if a render texture is valid (loaded in GPU) */
static int rl_fn_IsRenderTextureValid(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  RenderTexture a0;
  bool r;
  if (argc != 1) return rl_arity_error(interp, "raylib::is_render_texture_valid", 1, argc);
  if (rl_get_RenderTexture(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::is_render_texture_valid", 1, "target", "RenderTexture");
  r = IsRenderTextureValid(a0);
  *out = lcl_int_new((long)r);
  return LCL_RC_OK;
}

/* UnloadRenderTexture: Unload render texture from GPU memory (VRAM) */
static int rl_fn_UnloadRenderTexture(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  RenderTexture a0;
  (void)out;
  if (argc != 1) return rl_arity_error(interp, "raylib::unload_render_texture", 1, argc);
  if (rl_get_RenderTexture(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::unload_render_texture", 1, "target", "RenderTexture");
  UnloadRenderTexture(a0);
  return LCL_RC_OK;
}

/* GenTextureMipmaps: Generate GPU mipmaps for a texture */
static int rl_fn_GenTextureMipmaps(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Texture *a0;
  (void)out;
  if (argc != 1) return rl_arity_error(interp, "raylib::gen_texture_mipmaps", 1, argc);
  if (rl_ptr_Texture(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::gen_texture_mipmaps", 1, "texture", "Texture");
  GenTextureMipmaps(a0);
  return LCL_RC_OK;
}

/* SetTextureFilter: Set texture scaling filter mode */
static int rl_fn_SetTextureFilter(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Texture a0;
  long a1;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::set_texture_filter", 2, argc);
  if (rl_get_Texture(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::set_texture_filter", 1, "texture", "Texture");
  if (rl_get_int(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::set_texture_filter", 2, "filter", "int");
  SetTextureFilter(a0, (int)a1);
  return LCL_RC_OK;
}

/* SetTextureWrap: Set texture wrapping mode */
static int rl_fn_SetTextureWrap(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Texture a0;
  long a1;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::set_texture_wrap", 2, argc);
  if (rl_get_Texture(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::set_texture_wrap", 1, "texture", "Texture");
  if (rl_get_int(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::set_texture_wrap", 2, "wrap", "int");
  SetTextureWrap(a0, (int)a1);
  return LCL_RC_OK;
}

/* DrawTexture: Draw a Texture2D */
static int rl_fn_DrawTexture(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Texture a0;
  long a1;
  long a2;
  Color a3;
  (void)out;
  if (argc != 4) return rl_arity_error(interp, "raylib::draw_texture", 4, argc);
  if (rl_get_Texture(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_texture", 1, "texture", "Texture");
  if (rl_get_int(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_texture", 2, "posX", "int");
  if (rl_get_int(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_texture", 3, "posY", "int");
  if (rl_get_Color(interp, argv[3], &a3) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_texture", 4, "tint", "Color");
  DrawTexture(a0, (int)a1, (int)a2, a3);
  return LCL_RC_OK;
}

/* DrawTextureV: Draw a Texture2D with position defined as Vector2 */
static int rl_fn_DrawTextureV(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Texture a0;
  Vector2 a1;
  Color a2;
  (void)out;
  if (argc != 3) return rl_arity_error(interp, "raylib::draw_texture_v", 3, argc);
  if (rl_get_Texture(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_texture_v", 1, "texture", "Texture");
  if (rl_get_Vector2(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_texture_v", 2, "position", "Vector2");
  if (rl_get_Color(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_texture_v", 3, "tint", "Color");
  DrawTextureV(a0, a1, a2);
  return LCL_RC_OK;
}

/* DrawTextureEx: Draw a Texture2D with extended parameters */
static int rl_fn_DrawTextureEx(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Texture a0;
  Vector2 a1;
  double a2;
  double a3;
  Color a4;
  (void)out;
  if (argc != 5) return rl_arity_error(interp, "raylib::draw_texture_ex", 5, argc);
  if (rl_get_Texture(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_texture_ex", 1, "texture", "Texture");
  if (rl_get_Vector2(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_texture_ex", 2, "position", "Vector2");
  if (rl_get_float(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_texture_ex", 3, "rotation", "float");
  if (rl_get_float(interp, argv[3], &a3) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_texture_ex", 4, "scale", "float");
  if (rl_get_Color(interp, argv[4], &a4) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_texture_ex", 5, "tint", "Color");
  DrawTextureEx(a0, a1, (float)a2, (float)a3, a4);
  return LCL_RC_OK;
}

/* DrawTextureRec: Draw a part of a texture defined by a rectangle */
static int rl_fn_DrawTextureRec(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Texture a0;
  Rectangle a1;
  Vector2 a2;
  Color a3;
  (void)out;
  if (argc != 4) return rl_arity_error(interp, "raylib::draw_texture_rec", 4, argc);
  if (rl_get_Texture(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_texture_rec", 1, "texture", "Texture");
  if (rl_get_Rectangle(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_texture_rec", 2, "source", "Rectangle");
  if (rl_get_Vector2(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_texture_rec", 3, "position", "Vector2");
  if (rl_get_Color(interp, argv[3], &a3) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_texture_rec", 4, "tint", "Color");
  DrawTextureRec(a0, a1, a2, a3);
  return LCL_RC_OK;
}

/* DrawTexturePro: Draw a part of a texture defined by a rectangle with 'pro' parameters */
static int rl_fn_DrawTexturePro(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Texture a0;
  Rectangle a1;
  Rectangle a2;
  Vector2 a3;
  double a4;
  Color a5;
  (void)out;
  if (argc != 6) return rl_arity_error(interp, "raylib::draw_texture_pro", 6, argc);
  if (rl_get_Texture(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_texture_pro", 1, "texture", "Texture");
  if (rl_get_Rectangle(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_texture_pro", 2, "source", "Rectangle");
  if (rl_get_Rectangle(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_texture_pro", 3, "dest", "Rectangle");
  if (rl_get_Vector2(interp, argv[3], &a3) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_texture_pro", 4, "origin", "Vector2");
  if (rl_get_float(interp, argv[4], &a4) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_texture_pro", 5, "rotation", "float");
  if (rl_get_Color(interp, argv[5], &a5) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_texture_pro", 6, "tint", "Color");
  DrawTexturePro(a0, a1, a2, a3, (float)a4, a5);
  return LCL_RC_OK;
}

/* DrawTextureNPatch: Draws a texture (or part of it) that stretches or shrinks nicely */
static int rl_fn_DrawTextureNPatch(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Texture a0;
  NPatchInfo a1;
  Rectangle a2;
  Vector2 a3;
  double a4;
  Color a5;
  (void)out;
  if (argc != 6) return rl_arity_error(interp, "raylib::draw_texture_npatch", 6, argc);
  if (rl_get_Texture(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_texture_npatch", 1, "texture", "Texture");
  if (rl_get_NPatchInfo(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_texture_npatch", 2, "nPatchInfo", "NPatchInfo");
  if (rl_get_Rectangle(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_texture_npatch", 3, "dest", "Rectangle");
  if (rl_get_Vector2(interp, argv[3], &a3) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_texture_npatch", 4, "origin", "Vector2");
  if (rl_get_float(interp, argv[4], &a4) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_texture_npatch", 5, "rotation", "float");
  if (rl_get_Color(interp, argv[5], &a5) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_texture_npatch", 6, "tint", "Color");
  DrawTextureNPatch(a0, a1, a2, a3, (float)a4, a5);
  return LCL_RC_OK;
}

/* ColorIsEqual: Check if two colors are equal */
static int rl_fn_ColorIsEqual(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Color a0;
  Color a1;
  bool r;
  if (argc != 2) return rl_arity_error(interp, "raylib::color_is_equal", 2, argc);
  if (rl_get_Color(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::color_is_equal", 1, "col1", "Color");
  if (rl_get_Color(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::color_is_equal", 2, "col2", "Color");
  r = ColorIsEqual(a0, a1);
  *out = lcl_int_new((long)r);
  return LCL_RC_OK;
}

/* Fade: Get color with alpha applied, alpha goes from 0.0f to 1.0f */
static int rl_fn_Fade(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Color a0;
  double a1;
  Color r;
  if (argc != 2) return rl_arity_error(interp, "raylib::fade", 2, argc);
  if (rl_get_Color(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::fade", 1, "color", "Color");
  if (rl_get_float(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::fade", 2, "alpha", "float");
  r = Fade(a0, (float)a1);
  *out = rl_new_Color(r);
  return LCL_RC_OK;
}

/* ColorToInt: Get hexadecimal value for a Color (0xRRGGBBAA) */
static int rl_fn_ColorToInt(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Color a0;
  int r;
  if (argc != 1) return rl_arity_error(interp, "raylib::color_to_int", 1, argc);
  if (rl_get_Color(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::color_to_int", 1, "color", "Color");
  r = ColorToInt(a0);
  *out = lcl_int_new((long)r);
  return LCL_RC_OK;
}

/* ColorNormalize: Get Color normalized as float [0..1] */
static int rl_fn_ColorNormalize(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Color a0;
  Vector4 r;
  if (argc != 1) return rl_arity_error(interp, "raylib::color_normalize", 1, argc);
  if (rl_get_Color(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::color_normalize", 1, "color", "Color");
  r = ColorNormalize(a0);
  *out = rl_new_Vector4(r);
  return LCL_RC_OK;
}

/* ColorFromNormalized: Get Color from normalized values [0..1] */
static int rl_fn_ColorFromNormalized(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Vector4 a0;
  Color r;
  if (argc != 1) return rl_arity_error(interp, "raylib::color_from_normalized", 1, argc);
  if (rl_get_Vector4(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::color_from_normalized", 1, "normalized", "Vector4");
  r = ColorFromNormalized(a0);
  *out = rl_new_Color(r);
  return LCL_RC_OK;
}

/* ColorToHSV: Get HSV values for a Color, hue [0..360], saturation/value [0..1] */
static int rl_fn_ColorToHSV(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Color a0;
  Vector3 r;
  if (argc != 1) return rl_arity_error(interp, "raylib::color_to_hsv", 1, argc);
  if (rl_get_Color(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::color_to_hsv", 1, "color", "Color");
  r = ColorToHSV(a0);
  *out = rl_new_Vector3(r);
  return LCL_RC_OK;
}

/* ColorFromHSV: Get a Color from HSV values, hue [0..360], saturation/value [0..1] */
static int rl_fn_ColorFromHSV(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  double a0;
  double a1;
  double a2;
  Color r;
  if (argc != 3) return rl_arity_error(interp, "raylib::color_from_hsv", 3, argc);
  if (rl_get_float(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::color_from_hsv", 1, "hue", "float");
  if (rl_get_float(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::color_from_hsv", 2, "saturation", "float");
  if (rl_get_float(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::color_from_hsv", 3, "value", "float");
  r = ColorFromHSV((float)a0, (float)a1, (float)a2);
  *out = rl_new_Color(r);
  return LCL_RC_OK;
}

/* ColorTint: Get color multiplied with another color */
static int rl_fn_ColorTint(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Color a0;
  Color a1;
  Color r;
  if (argc != 2) return rl_arity_error(interp, "raylib::color_tint", 2, argc);
  if (rl_get_Color(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::color_tint", 1, "color", "Color");
  if (rl_get_Color(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::color_tint", 2, "tint", "Color");
  r = ColorTint(a0, a1);
  *out = rl_new_Color(r);
  return LCL_RC_OK;
}

/* ColorBrightness: Get color with brightness correction, brightness factor goes from -1.0f to 1.0f */
static int rl_fn_ColorBrightness(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Color a0;
  double a1;
  Color r;
  if (argc != 2) return rl_arity_error(interp, "raylib::color_brightness", 2, argc);
  if (rl_get_Color(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::color_brightness", 1, "color", "Color");
  if (rl_get_float(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::color_brightness", 2, "factor", "float");
  r = ColorBrightness(a0, (float)a1);
  *out = rl_new_Color(r);
  return LCL_RC_OK;
}

/* ColorContrast: Get color with contrast correction, contrast values between -1.0f and 1.0f */
static int rl_fn_ColorContrast(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Color a0;
  double a1;
  Color r;
  if (argc != 2) return rl_arity_error(interp, "raylib::color_contrast", 2, argc);
  if (rl_get_Color(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::color_contrast", 1, "color", "Color");
  if (rl_get_float(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::color_contrast", 2, "contrast", "float");
  r = ColorContrast(a0, (float)a1);
  *out = rl_new_Color(r);
  return LCL_RC_OK;
}

/* ColorAlpha: Get color with alpha applied, alpha goes from 0.0f to 1.0f */
static int rl_fn_ColorAlpha(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Color a0;
  double a1;
  Color r;
  if (argc != 2) return rl_arity_error(interp, "raylib::color_alpha", 2, argc);
  if (rl_get_Color(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::color_alpha", 1, "color", "Color");
  if (rl_get_float(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::color_alpha", 2, "alpha", "float");
  r = ColorAlpha(a0, (float)a1);
  *out = rl_new_Color(r);
  return LCL_RC_OK;
}

/* ColorAlphaBlend: Get src alpha-blended into dst color with tint */
static int rl_fn_ColorAlphaBlend(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Color a0;
  Color a1;
  Color a2;
  Color r;
  if (argc != 3) return rl_arity_error(interp, "raylib::color_alpha_blend", 3, argc);
  if (rl_get_Color(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::color_alpha_blend", 1, "dst", "Color");
  if (rl_get_Color(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::color_alpha_blend", 2, "src", "Color");
  if (rl_get_Color(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::color_alpha_blend", 3, "tint", "Color");
  r = ColorAlphaBlend(a0, a1, a2);
  *out = rl_new_Color(r);
  return LCL_RC_OK;
}

/* ColorLerp: Get color lerp interpolation between two colors, factor [0.0f..1.0f] */
static int rl_fn_ColorLerp(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Color a0;
  Color a1;
  double a2;
  Color r;
  if (argc != 3) return rl_arity_error(interp, "raylib::color_lerp", 3, argc);
  if (rl_get_Color(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::color_lerp", 1, "color1", "Color");
  if (rl_get_Color(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::color_lerp", 2, "color2", "Color");
  if (rl_get_float(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::color_lerp", 3, "factor", "float");
  r = ColorLerp(a0, a1, (float)a2);
  *out = rl_new_Color(r);
  return LCL_RC_OK;
}

/* GetColor: Get Color structure from hexadecimal value */
static int rl_fn_GetColor(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  long a0;
  Color r;
  if (argc != 1) return rl_arity_error(interp, "raylib::get_color", 1, argc);
  if (rl_get_int(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::get_color", 1, "hexValue", "int");
  r = GetColor((unsigned int)a0);
  *out = rl_new_Color(r);
  return LCL_RC_OK;
}

/* GetPixelDataSize: Get pixel data size in bytes for certain format */
static int rl_fn_GetPixelDataSize(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  long a0;
  long a1;
  long a2;
  int r;
  if (argc != 3) return rl_arity_error(interp, "raylib::get_pixel_data_size", 3, argc);
  if (rl_get_int(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::get_pixel_data_size", 1, "width", "int");
  if (rl_get_int(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::get_pixel_data_size", 2, "height", "int");
  if (rl_get_int(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::get_pixel_data_size", 3, "format", "int");
  r = GetPixelDataSize((int)a0, (int)a1, (int)a2);
  *out = lcl_int_new((long)r);
  return LCL_RC_OK;
}

/* GetFontDefault: Get the default Font */
static int rl_fn_GetFontDefault(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Font r;
  (void)argv;
  if (argc != 0) return rl_arity_error(interp, "raylib::get_font_default", 0, argc);
  r = GetFontDefault();
  *out = rl_new_Font(r);
  return LCL_RC_OK;
}

/* LoadFont: Load font from file into GPU memory (VRAM) */
static int rl_fn_LoadFont(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  const char *a0;
  Font r;
  if (argc != 1) return rl_arity_error(interp, "raylib::load_font", 1, argc);
  if (rl_get_string(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::load_font", 1, "fileName", "string");
  r = LoadFont(a0);
  *out = rl_new_Font(r);
  return LCL_RC_OK;
}

/* LoadFontEx: Load font from file with extended parameters, use NULL for codepoints and 0 for codepointCount to load the default character set, font size is provided in pixels height */
static int rl_fn_LoadFontEx(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  const char *a0;
  long a1;
  int *a2 = NULL;
  int n2 = 0;
  Font r;
  int rc = LCL_RC_ERR;
  if (argc != 3) return rl_arity_error(interp, "raylib::load_font_ex", 3, argc);
  if (rl_get_string(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::load_font_ex", 1, "fileName", "string");
  if (rl_get_int(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::load_font_ex", 2, "fontSize", "int");
  if (lcl_value_type_of(argv[2]) != LCL_LIST) return RL_ARG_ERR(interp, "raylib::load_font_ex", 3, "codepoints", "list of int");
  n2 = (int)lcl_list_len(argv[2]);
  a2 = (int *)calloc(n2 > 0 ? (size_t)n2 : 1, sizeof(*a2));
  if (!a2) goto cleanup;
  {
    int k;
    for (k = 0; k < n2; k++) {
      lcl_value *item;
      if (lcl_list_get(argv[2], (size_t)k, &item) != LCL_OK) goto cleanup;
      { long x; if (rl_get_int(interp, item, &x) != LCL_RC_OK) { lcl_ref_dec(item); RL_ARG_ERR(interp, "raylib::load_font_ex", 3, "codepoints", "list of int"); goto cleanup; } a2[k] = (int)x; }
      lcl_ref_dec(item);
    }
  }
  r = LoadFontEx(a0, (int)a1, a2, n2);
  *out = rl_new_Font(r);
  rc = LCL_RC_OK;
cleanup:
  free(a2);
  return rc;
}

/* LoadFontFromImage: Load font from Image (XNA style) */
static int rl_fn_LoadFontFromImage(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Image a0;
  Color a1;
  long a2;
  Font r;
  if (argc != 3) return rl_arity_error(interp, "raylib::load_font_from_image", 3, argc);
  if (rl_get_Image(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::load_font_from_image", 1, "image", "Image");
  if (rl_get_Color(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::load_font_from_image", 2, "key", "Color");
  if (rl_get_int(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::load_font_from_image", 3, "firstChar", "int");
  r = LoadFontFromImage(a0, a1, (int)a2);
  *out = rl_new_Font(r);
  return LCL_RC_OK;
}

/* IsFontValid: Check if a font is valid (font data loaded, WARNING: GPU texture not checked) */
static int rl_fn_IsFontValid(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Font a0;
  bool r;
  if (argc != 1) return rl_arity_error(interp, "raylib::is_font_valid", 1, argc);
  if (rl_get_Font(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::is_font_valid", 1, "font", "Font");
  r = IsFontValid(a0);
  *out = lcl_int_new((long)r);
  return LCL_RC_OK;
}

/* UnloadFontData: Unload font chars info data (RAM) */
static int rl_fn_UnloadFontData(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  GlyphInfo *a0 = NULL;
  int n0 = 0;
  (void)out;
  int rc = LCL_RC_ERR;
  if (argc != 1) return rl_arity_error(interp, "raylib::unload_font_data", 1, argc);
  if (lcl_value_type_of(argv[0]) != LCL_LIST) return RL_ARG_ERR(interp, "raylib::unload_font_data", 1, "glyphs", "list of GlyphInfo");
  n0 = (int)lcl_list_len(argv[0]);
  a0 = (GlyphInfo *)calloc(n0 > 0 ? (size_t)n0 : 1, sizeof(*a0));
  if (!a0) goto cleanup;
  {
    int k;
    for (k = 0; k < n0; k++) {
      lcl_value *item;
      if (lcl_list_get(argv[0], (size_t)k, &item) != LCL_OK) goto cleanup;
      if (rl_get_GlyphInfo(interp, item, &a0[k]) != LCL_RC_OK) { lcl_ref_dec(item); RL_ARG_ERR(interp, "raylib::unload_font_data", 1, "glyphs", "list of GlyphInfo"); goto cleanup; }
      lcl_ref_dec(item);
    }
  }
  UnloadFontData(a0, n0);
  rc = LCL_RC_OK;
cleanup:
  free(a0);
  return rc;
}

/* UnloadFont: Unload font from GPU memory (VRAM) */
static int rl_fn_UnloadFont(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Font a0;
  (void)out;
  if (argc != 1) return rl_arity_error(interp, "raylib::unload_font", 1, argc);
  if (rl_get_Font(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::unload_font", 1, "font", "Font");
  UnloadFont(a0);
  return LCL_RC_OK;
}

/* ExportFontAsCode: Export font as code file, returns true on success */
static int rl_fn_ExportFontAsCode(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Font a0;
  const char *a1;
  bool r;
  if (argc != 2) return rl_arity_error(interp, "raylib::export_font_as_code", 2, argc);
  if (rl_get_Font(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::export_font_as_code", 1, "font", "Font");
  if (rl_get_string(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::export_font_as_code", 2, "fileName", "string");
  r = ExportFontAsCode(a0, a1);
  *out = lcl_int_new((long)r);
  return LCL_RC_OK;
}

/* DrawFPS: Draw current FPS */
static int rl_fn_DrawFPS(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  long a0;
  long a1;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::draw_fps", 2, argc);
  if (rl_get_int(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_fps", 1, "posX", "int");
  if (rl_get_int(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_fps", 2, "posY", "int");
  DrawFPS((int)a0, (int)a1);
  return LCL_RC_OK;
}

/* DrawText: Draw text (using default font) */
static int rl_fn_DrawText(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  const char *a0;
  long a1;
  long a2;
  long a3;
  Color a4;
  (void)out;
  if (argc != 5) return rl_arity_error(interp, "raylib::draw_text", 5, argc);
  if (rl_get_string(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_text", 1, "text", "string");
  if (rl_get_int(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_text", 2, "posX", "int");
  if (rl_get_int(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_text", 3, "posY", "int");
  if (rl_get_int(interp, argv[3], &a3) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_text", 4, "fontSize", "int");
  if (rl_get_Color(interp, argv[4], &a4) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_text", 5, "color", "Color");
  DrawText(a0, (int)a1, (int)a2, (int)a3, a4);
  return LCL_RC_OK;
}

/* DrawTextEx: Draw text using font and additional parameters */
static int rl_fn_DrawTextEx(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Font a0;
  const char *a1;
  Vector2 a2;
  double a3;
  double a4;
  Color a5;
  (void)out;
  if (argc != 6) return rl_arity_error(interp, "raylib::draw_text_ex", 6, argc);
  if (rl_get_Font(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_text_ex", 1, "font", "Font");
  if (rl_get_string(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_text_ex", 2, "text", "string");
  if (rl_get_Vector2(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_text_ex", 3, "position", "Vector2");
  if (rl_get_float(interp, argv[3], &a3) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_text_ex", 4, "fontSize", "float");
  if (rl_get_float(interp, argv[4], &a4) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_text_ex", 5, "spacing", "float");
  if (rl_get_Color(interp, argv[5], &a5) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_text_ex", 6, "tint", "Color");
  DrawTextEx(a0, a1, a2, (float)a3, (float)a4, a5);
  return LCL_RC_OK;
}

/* DrawTextPro: Draw text using Font and pro parameters (rotation) */
static int rl_fn_DrawTextPro(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Font a0;
  const char *a1;
  Vector2 a2;
  Vector2 a3;
  double a4;
  double a5;
  double a6;
  Color a7;
  (void)out;
  if (argc != 8) return rl_arity_error(interp, "raylib::draw_text_pro", 8, argc);
  if (rl_get_Font(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_text_pro", 1, "font", "Font");
  if (rl_get_string(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_text_pro", 2, "text", "string");
  if (rl_get_Vector2(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_text_pro", 3, "position", "Vector2");
  if (rl_get_Vector2(interp, argv[3], &a3) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_text_pro", 4, "origin", "Vector2");
  if (rl_get_float(interp, argv[4], &a4) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_text_pro", 5, "rotation", "float");
  if (rl_get_float(interp, argv[5], &a5) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_text_pro", 6, "fontSize", "float");
  if (rl_get_float(interp, argv[6], &a6) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_text_pro", 7, "spacing", "float");
  if (rl_get_Color(interp, argv[7], &a7) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_text_pro", 8, "tint", "Color");
  DrawTextPro(a0, a1, a2, a3, (float)a4, (float)a5, (float)a6, a7);
  return LCL_RC_OK;
}

/* DrawTextCodepoint: Draw one character (codepoint) */
static int rl_fn_DrawTextCodepoint(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Font a0;
  long a1;
  Vector2 a2;
  double a3;
  Color a4;
  (void)out;
  if (argc != 5) return rl_arity_error(interp, "raylib::draw_text_codepoint", 5, argc);
  if (rl_get_Font(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_text_codepoint", 1, "font", "Font");
  if (rl_get_int(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_text_codepoint", 2, "codepoint", "int");
  if (rl_get_Vector2(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_text_codepoint", 3, "position", "Vector2");
  if (rl_get_float(interp, argv[3], &a3) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_text_codepoint", 4, "fontSize", "float");
  if (rl_get_Color(interp, argv[4], &a4) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_text_codepoint", 5, "tint", "Color");
  DrawTextCodepoint(a0, (int)a1, a2, (float)a3, a4);
  return LCL_RC_OK;
}

/* DrawTextCodepoints: Draw multiple character (codepoint) */
static int rl_fn_DrawTextCodepoints(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Font a0;
  int *a1 = NULL;
  int n1 = 0;
  Vector2 a2;
  double a3;
  double a4;
  Color a5;
  (void)out;
  int rc = LCL_RC_ERR;
  if (argc != 6) return rl_arity_error(interp, "raylib::draw_text_codepoints", 6, argc);
  if (rl_get_Font(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_text_codepoints", 1, "font", "Font");
  if (rl_get_Vector2(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_text_codepoints", 3, "position", "Vector2");
  if (rl_get_float(interp, argv[3], &a3) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_text_codepoints", 4, "fontSize", "float");
  if (rl_get_float(interp, argv[4], &a4) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_text_codepoints", 5, "spacing", "float");
  if (rl_get_Color(interp, argv[5], &a5) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_text_codepoints", 6, "tint", "Color");
  if (lcl_value_type_of(argv[1]) != LCL_LIST) return RL_ARG_ERR(interp, "raylib::draw_text_codepoints", 2, "codepoints", "list of int");
  n1 = (int)lcl_list_len(argv[1]);
  a1 = (int *)calloc(n1 > 0 ? (size_t)n1 : 1, sizeof(*a1));
  if (!a1) goto cleanup;
  {
    int k;
    for (k = 0; k < n1; k++) {
      lcl_value *item;
      if (lcl_list_get(argv[1], (size_t)k, &item) != LCL_OK) goto cleanup;
      { long x; if (rl_get_int(interp, item, &x) != LCL_RC_OK) { lcl_ref_dec(item); RL_ARG_ERR(interp, "raylib::draw_text_codepoints", 2, "codepoints", "list of int"); goto cleanup; } a1[k] = (int)x; }
      lcl_ref_dec(item);
    }
  }
  DrawTextCodepoints(a0, a1, n1, a2, (float)a3, (float)a4, a5);
  rc = LCL_RC_OK;
cleanup:
  free(a1);
  return rc;
}

/* SetTextLineSpacing: Set vertical line spacing when drawing with line-breaks */
static int rl_fn_SetTextLineSpacing(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  long a0;
  (void)out;
  if (argc != 1) return rl_arity_error(interp, "raylib::set_text_line_spacing", 1, argc);
  if (rl_get_int(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::set_text_line_spacing", 1, "spacing", "int");
  SetTextLineSpacing((int)a0);
  return LCL_RC_OK;
}

/* MeasureText: Measure string width for default font */
static int rl_fn_MeasureText(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  const char *a0;
  long a1;
  int r;
  if (argc != 2) return rl_arity_error(interp, "raylib::measure_text", 2, argc);
  if (rl_get_string(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::measure_text", 1, "text", "string");
  if (rl_get_int(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::measure_text", 2, "fontSize", "int");
  r = MeasureText(a0, (int)a1);
  *out = lcl_int_new((long)r);
  return LCL_RC_OK;
}

/* MeasureTextEx: Measure string size for Font */
static int rl_fn_MeasureTextEx(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Font a0;
  const char *a1;
  double a2;
  double a3;
  Vector2 r;
  if (argc != 4) return rl_arity_error(interp, "raylib::measure_text_ex", 4, argc);
  if (rl_get_Font(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::measure_text_ex", 1, "font", "Font");
  if (rl_get_string(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::measure_text_ex", 2, "text", "string");
  if (rl_get_float(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::measure_text_ex", 3, "fontSize", "float");
  if (rl_get_float(interp, argv[3], &a3) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::measure_text_ex", 4, "spacing", "float");
  r = MeasureTextEx(a0, a1, (float)a2, (float)a3);
  *out = rl_new_Vector2(r);
  return LCL_RC_OK;
}

/* GetGlyphIndex: Get glyph index position in font for a codepoint (unicode character), fallback to '?' if not found */
static int rl_fn_GetGlyphIndex(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Font a0;
  long a1;
  int r;
  if (argc != 2) return rl_arity_error(interp, "raylib::get_glyph_index", 2, argc);
  if (rl_get_Font(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::get_glyph_index", 1, "font", "Font");
  if (rl_get_int(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::get_glyph_index", 2, "codepoint", "int");
  r = GetGlyphIndex(a0, (int)a1);
  *out = lcl_int_new((long)r);
  return LCL_RC_OK;
}

/* GetGlyphInfo: Get glyph font info data for a codepoint (unicode character), fallback to '?' if not found */
static int rl_fn_GetGlyphInfo(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Font a0;
  long a1;
  GlyphInfo r;
  if (argc != 2) return rl_arity_error(interp, "raylib::get_glyph_info", 2, argc);
  if (rl_get_Font(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::get_glyph_info", 1, "font", "Font");
  if (rl_get_int(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::get_glyph_info", 2, "codepoint", "int");
  r = GetGlyphInfo(a0, (int)a1);
  *out = rl_new_GlyphInfo(r);
  return LCL_RC_OK;
}

/* GetGlyphAtlasRec: Get glyph rectangle in font atlas for a codepoint (unicode character), fallback to '?' if not found */
static int rl_fn_GetGlyphAtlasRec(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Font a0;
  long a1;
  Rectangle r;
  if (argc != 2) return rl_arity_error(interp, "raylib::get_glyph_atlas_rec", 2, argc);
  if (rl_get_Font(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::get_glyph_atlas_rec", 1, "font", "Font");
  if (rl_get_int(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::get_glyph_atlas_rec", 2, "codepoint", "int");
  r = GetGlyphAtlasRec(a0, (int)a1);
  *out = rl_new_Rectangle(r);
  return LCL_RC_OK;
}

/* GetCodepointCount: Get total number of codepoints in a UTF-8 encoded string */
static int rl_fn_GetCodepointCount(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  const char *a0;
  int r;
  if (argc != 1) return rl_arity_error(interp, "raylib::get_codepoint_count", 1, argc);
  if (rl_get_string(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::get_codepoint_count", 1, "text", "string");
  r = GetCodepointCount(a0);
  *out = lcl_int_new((long)r);
  return LCL_RC_OK;
}

/* TextIsEqual: Check if two text string are equal */
static int rl_fn_TextIsEqual(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  const char *a0;
  const char *a1;
  bool r;
  if (argc != 2) return rl_arity_error(interp, "raylib::text_is_equal", 2, argc);
  if (rl_get_string(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::text_is_equal", 1, "text1", "string");
  if (rl_get_string(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::text_is_equal", 2, "text2", "string");
  r = TextIsEqual(a0, a1);
  *out = lcl_int_new((long)r);
  return LCL_RC_OK;
}

/* TextLength: Get text length, checks for '\\0' ending */
static int rl_fn_TextLength(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  const char *a0;
  unsigned int r;
  if (argc != 1) return rl_arity_error(interp, "raylib::text_length", 1, argc);
  if (rl_get_string(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::text_length", 1, "text", "string");
  r = TextLength(a0);
  *out = lcl_int_new((long)r);
  return LCL_RC_OK;
}

/* TextSubtext: Get a piece of a text string */
static int rl_fn_TextSubtext(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  const char *a0;
  long a1;
  long a2;
  const char * r;
  if (argc != 3) return rl_arity_error(interp, "raylib::text_subtext", 3, argc);
  if (rl_get_string(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::text_subtext", 1, "text", "string");
  if (rl_get_int(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::text_subtext", 2, "position", "int");
  if (rl_get_int(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::text_subtext", 3, "length", "int");
  r = TextSubtext(a0, (int)a1, (int)a2);
  *out = lcl_string_new(r ? r : "");
  return LCL_RC_OK;
}

/* TextRemoveSpaces: Remove text spaces, concat words */
static int rl_fn_TextRemoveSpaces(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  const char *a0;
  const char * r;
  if (argc != 1) return rl_arity_error(interp, "raylib::text_remove_spaces", 1, argc);
  if (rl_get_string(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::text_remove_spaces", 1, "text", "string");
  r = TextRemoveSpaces(a0);
  *out = lcl_string_new(r ? r : "");
  return LCL_RC_OK;
}

/* TextFindIndex: Find first text occurrence within a string, -1 if not found */
static int rl_fn_TextFindIndex(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  const char *a0;
  const char *a1;
  int r;
  if (argc != 2) return rl_arity_error(interp, "raylib::text_find_index", 2, argc);
  if (rl_get_string(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::text_find_index", 1, "text", "string");
  if (rl_get_string(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::text_find_index", 2, "search", "string");
  r = TextFindIndex(a0, a1);
  *out = lcl_int_new((long)r);
  return LCL_RC_OK;
}

/* TextToInteger: Get integer value from text */
static int rl_fn_TextToInteger(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  const char *a0;
  int r;
  if (argc != 1) return rl_arity_error(interp, "raylib::text_to_integer", 1, argc);
  if (rl_get_string(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::text_to_integer", 1, "text", "string");
  r = TextToInteger(a0);
  *out = lcl_int_new((long)r);
  return LCL_RC_OK;
}

/* TextToFloat: Get float value from text */
static int rl_fn_TextToFloat(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  const char *a0;
  float r;
  if (argc != 1) return rl_arity_error(interp, "raylib::text_to_float", 1, argc);
  if (rl_get_string(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::text_to_float", 1, "text", "string");
  r = TextToFloat(a0);
  *out = lcl_float_new((double)r);
  return LCL_RC_OK;
}

/* DrawLine3D: Draw a line in 3D world space */
static int rl_fn_DrawLine3D(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Vector3 a0;
  Vector3 a1;
  Color a2;
  (void)out;
  if (argc != 3) return rl_arity_error(interp, "raylib::draw_line_3d", 3, argc);
  if (rl_get_Vector3(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_line_3d", 1, "startPos", "Vector3");
  if (rl_get_Vector3(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_line_3d", 2, "endPos", "Vector3");
  if (rl_get_Color(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_line_3d", 3, "color", "Color");
  DrawLine3D(a0, a1, a2);
  return LCL_RC_OK;
}

/* DrawPoint3D: Draw a point in 3D space, actually a small line */
static int rl_fn_DrawPoint3D(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Vector3 a0;
  Color a1;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::draw_point_3d", 2, argc);
  if (rl_get_Vector3(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_point_3d", 1, "position", "Vector3");
  if (rl_get_Color(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_point_3d", 2, "color", "Color");
  DrawPoint3D(a0, a1);
  return LCL_RC_OK;
}

/* DrawCircle3D: Draw a circle in 3D world space */
static int rl_fn_DrawCircle3D(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Vector3 a0;
  double a1;
  Vector3 a2;
  double a3;
  Color a4;
  (void)out;
  if (argc != 5) return rl_arity_error(interp, "raylib::draw_circle_3d", 5, argc);
  if (rl_get_Vector3(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_circle_3d", 1, "center", "Vector3");
  if (rl_get_float(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_circle_3d", 2, "radius", "float");
  if (rl_get_Vector3(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_circle_3d", 3, "rotationAxis", "Vector3");
  if (rl_get_float(interp, argv[3], &a3) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_circle_3d", 4, "rotationAngle", "float");
  if (rl_get_Color(interp, argv[4], &a4) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_circle_3d", 5, "color", "Color");
  DrawCircle3D(a0, (float)a1, a2, (float)a3, a4);
  return LCL_RC_OK;
}

/* DrawTriangle3D: Draw a color-filled triangle (vertex in counter-clockwise order!) */
static int rl_fn_DrawTriangle3D(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Vector3 a0;
  Vector3 a1;
  Vector3 a2;
  Color a3;
  (void)out;
  if (argc != 4) return rl_arity_error(interp, "raylib::draw_triangle_3d", 4, argc);
  if (rl_get_Vector3(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_triangle_3d", 1, "v1", "Vector3");
  if (rl_get_Vector3(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_triangle_3d", 2, "v2", "Vector3");
  if (rl_get_Vector3(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_triangle_3d", 3, "v3", "Vector3");
  if (rl_get_Color(interp, argv[3], &a3) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_triangle_3d", 4, "color", "Color");
  DrawTriangle3D(a0, a1, a2, a3);
  return LCL_RC_OK;
}

/* DrawTriangleStrip3D: Draw a triangle strip defined by points */
static int rl_fn_DrawTriangleStrip3D(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Vector3 *a0 = NULL;
  int n0 = 0;
  Color a1;
  (void)out;
  int rc = LCL_RC_ERR;
  if (argc != 2) return rl_arity_error(interp, "raylib::draw_triangle_strip_3d", 2, argc);
  if (rl_get_Color(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_triangle_strip_3d", 2, "color", "Color");
  if (lcl_value_type_of(argv[0]) != LCL_LIST) return RL_ARG_ERR(interp, "raylib::draw_triangle_strip_3d", 1, "points", "list of Vector3");
  n0 = (int)lcl_list_len(argv[0]);
  a0 = (Vector3 *)calloc(n0 > 0 ? (size_t)n0 : 1, sizeof(*a0));
  if (!a0) goto cleanup;
  {
    int k;
    for (k = 0; k < n0; k++) {
      lcl_value *item;
      if (lcl_list_get(argv[0], (size_t)k, &item) != LCL_OK) goto cleanup;
      if (rl_get_Vector3(interp, item, &a0[k]) != LCL_RC_OK) { lcl_ref_dec(item); RL_ARG_ERR(interp, "raylib::draw_triangle_strip_3d", 1, "points", "list of Vector3"); goto cleanup; }
      lcl_ref_dec(item);
    }
  }
  DrawTriangleStrip3D(a0, n0, a1);
  rc = LCL_RC_OK;
cleanup:
  free(a0);
  return rc;
}

/* DrawCube: Draw cube */
static int rl_fn_DrawCube(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Vector3 a0;
  double a1;
  double a2;
  double a3;
  Color a4;
  (void)out;
  if (argc != 5) return rl_arity_error(interp, "raylib::draw_cube", 5, argc);
  if (rl_get_Vector3(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_cube", 1, "position", "Vector3");
  if (rl_get_float(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_cube", 2, "width", "float");
  if (rl_get_float(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_cube", 3, "height", "float");
  if (rl_get_float(interp, argv[3], &a3) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_cube", 4, "length", "float");
  if (rl_get_Color(interp, argv[4], &a4) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_cube", 5, "color", "Color");
  DrawCube(a0, (float)a1, (float)a2, (float)a3, a4);
  return LCL_RC_OK;
}

/* DrawCubeV: Draw cube (Vector version) */
static int rl_fn_DrawCubeV(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Vector3 a0;
  Vector3 a1;
  Color a2;
  (void)out;
  if (argc != 3) return rl_arity_error(interp, "raylib::draw_cube_v", 3, argc);
  if (rl_get_Vector3(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_cube_v", 1, "position", "Vector3");
  if (rl_get_Vector3(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_cube_v", 2, "size", "Vector3");
  if (rl_get_Color(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_cube_v", 3, "color", "Color");
  DrawCubeV(a0, a1, a2);
  return LCL_RC_OK;
}

/* DrawCubeWires: Draw cube wires */
static int rl_fn_DrawCubeWires(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Vector3 a0;
  double a1;
  double a2;
  double a3;
  Color a4;
  (void)out;
  if (argc != 5) return rl_arity_error(interp, "raylib::draw_cube_wires", 5, argc);
  if (rl_get_Vector3(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_cube_wires", 1, "position", "Vector3");
  if (rl_get_float(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_cube_wires", 2, "width", "float");
  if (rl_get_float(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_cube_wires", 3, "height", "float");
  if (rl_get_float(interp, argv[3], &a3) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_cube_wires", 4, "length", "float");
  if (rl_get_Color(interp, argv[4], &a4) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_cube_wires", 5, "color", "Color");
  DrawCubeWires(a0, (float)a1, (float)a2, (float)a3, a4);
  return LCL_RC_OK;
}

/* DrawCubeWiresV: Draw cube wires (Vector version) */
static int rl_fn_DrawCubeWiresV(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Vector3 a0;
  Vector3 a1;
  Color a2;
  (void)out;
  if (argc != 3) return rl_arity_error(interp, "raylib::draw_cube_wires_v", 3, argc);
  if (rl_get_Vector3(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_cube_wires_v", 1, "position", "Vector3");
  if (rl_get_Vector3(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_cube_wires_v", 2, "size", "Vector3");
  if (rl_get_Color(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_cube_wires_v", 3, "color", "Color");
  DrawCubeWiresV(a0, a1, a2);
  return LCL_RC_OK;
}

/* DrawSphere: Draw sphere */
static int rl_fn_DrawSphere(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Vector3 a0;
  double a1;
  Color a2;
  (void)out;
  if (argc != 3) return rl_arity_error(interp, "raylib::draw_sphere", 3, argc);
  if (rl_get_Vector3(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_sphere", 1, "centerPos", "Vector3");
  if (rl_get_float(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_sphere", 2, "radius", "float");
  if (rl_get_Color(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_sphere", 3, "color", "Color");
  DrawSphere(a0, (float)a1, a2);
  return LCL_RC_OK;
}

/* DrawSphereEx: Draw sphere with extended parameters */
static int rl_fn_DrawSphereEx(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Vector3 a0;
  double a1;
  long a2;
  long a3;
  Color a4;
  (void)out;
  if (argc != 5) return rl_arity_error(interp, "raylib::draw_sphere_ex", 5, argc);
  if (rl_get_Vector3(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_sphere_ex", 1, "centerPos", "Vector3");
  if (rl_get_float(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_sphere_ex", 2, "radius", "float");
  if (rl_get_int(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_sphere_ex", 3, "rings", "int");
  if (rl_get_int(interp, argv[3], &a3) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_sphere_ex", 4, "slices", "int");
  if (rl_get_Color(interp, argv[4], &a4) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_sphere_ex", 5, "color", "Color");
  DrawSphereEx(a0, (float)a1, (int)a2, (int)a3, a4);
  return LCL_RC_OK;
}

/* DrawSphereWires: Draw sphere wires */
static int rl_fn_DrawSphereWires(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Vector3 a0;
  double a1;
  long a2;
  long a3;
  Color a4;
  (void)out;
  if (argc != 5) return rl_arity_error(interp, "raylib::draw_sphere_wires", 5, argc);
  if (rl_get_Vector3(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_sphere_wires", 1, "centerPos", "Vector3");
  if (rl_get_float(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_sphere_wires", 2, "radius", "float");
  if (rl_get_int(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_sphere_wires", 3, "rings", "int");
  if (rl_get_int(interp, argv[3], &a3) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_sphere_wires", 4, "slices", "int");
  if (rl_get_Color(interp, argv[4], &a4) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_sphere_wires", 5, "color", "Color");
  DrawSphereWires(a0, (float)a1, (int)a2, (int)a3, a4);
  return LCL_RC_OK;
}

/* DrawCylinder: Draw a cylinder/cone */
static int rl_fn_DrawCylinder(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Vector3 a0;
  double a1;
  double a2;
  double a3;
  long a4;
  Color a5;
  (void)out;
  if (argc != 6) return rl_arity_error(interp, "raylib::draw_cylinder", 6, argc);
  if (rl_get_Vector3(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_cylinder", 1, "position", "Vector3");
  if (rl_get_float(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_cylinder", 2, "radiusTop", "float");
  if (rl_get_float(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_cylinder", 3, "radiusBottom", "float");
  if (rl_get_float(interp, argv[3], &a3) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_cylinder", 4, "height", "float");
  if (rl_get_int(interp, argv[4], &a4) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_cylinder", 5, "slices", "int");
  if (rl_get_Color(interp, argv[5], &a5) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_cylinder", 6, "color", "Color");
  DrawCylinder(a0, (float)a1, (float)a2, (float)a3, (int)a4, a5);
  return LCL_RC_OK;
}

/* DrawCylinderEx: Draw a cylinder with base at startPos and top at endPos */
static int rl_fn_DrawCylinderEx(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Vector3 a0;
  Vector3 a1;
  double a2;
  double a3;
  long a4;
  Color a5;
  (void)out;
  if (argc != 6) return rl_arity_error(interp, "raylib::draw_cylinder_ex", 6, argc);
  if (rl_get_Vector3(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_cylinder_ex", 1, "startPos", "Vector3");
  if (rl_get_Vector3(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_cylinder_ex", 2, "endPos", "Vector3");
  if (rl_get_float(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_cylinder_ex", 3, "startRadius", "float");
  if (rl_get_float(interp, argv[3], &a3) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_cylinder_ex", 4, "endRadius", "float");
  if (rl_get_int(interp, argv[4], &a4) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_cylinder_ex", 5, "sides", "int");
  if (rl_get_Color(interp, argv[5], &a5) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_cylinder_ex", 6, "color", "Color");
  DrawCylinderEx(a0, a1, (float)a2, (float)a3, (int)a4, a5);
  return LCL_RC_OK;
}

/* DrawCylinderWires: Draw a cylinder/cone wires */
static int rl_fn_DrawCylinderWires(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Vector3 a0;
  double a1;
  double a2;
  double a3;
  long a4;
  Color a5;
  (void)out;
  if (argc != 6) return rl_arity_error(interp, "raylib::draw_cylinder_wires", 6, argc);
  if (rl_get_Vector3(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_cylinder_wires", 1, "position", "Vector3");
  if (rl_get_float(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_cylinder_wires", 2, "radiusTop", "float");
  if (rl_get_float(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_cylinder_wires", 3, "radiusBottom", "float");
  if (rl_get_float(interp, argv[3], &a3) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_cylinder_wires", 4, "height", "float");
  if (rl_get_int(interp, argv[4], &a4) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_cylinder_wires", 5, "slices", "int");
  if (rl_get_Color(interp, argv[5], &a5) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_cylinder_wires", 6, "color", "Color");
  DrawCylinderWires(a0, (float)a1, (float)a2, (float)a3, (int)a4, a5);
  return LCL_RC_OK;
}

/* DrawCylinderWiresEx: Draw a cylinder wires with base at startPos and top at endPos */
static int rl_fn_DrawCylinderWiresEx(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Vector3 a0;
  Vector3 a1;
  double a2;
  double a3;
  long a4;
  Color a5;
  (void)out;
  if (argc != 6) return rl_arity_error(interp, "raylib::draw_cylinder_wires_ex", 6, argc);
  if (rl_get_Vector3(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_cylinder_wires_ex", 1, "startPos", "Vector3");
  if (rl_get_Vector3(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_cylinder_wires_ex", 2, "endPos", "Vector3");
  if (rl_get_float(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_cylinder_wires_ex", 3, "startRadius", "float");
  if (rl_get_float(interp, argv[3], &a3) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_cylinder_wires_ex", 4, "endRadius", "float");
  if (rl_get_int(interp, argv[4], &a4) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_cylinder_wires_ex", 5, "sides", "int");
  if (rl_get_Color(interp, argv[5], &a5) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_cylinder_wires_ex", 6, "color", "Color");
  DrawCylinderWiresEx(a0, a1, (float)a2, (float)a3, (int)a4, a5);
  return LCL_RC_OK;
}

/* DrawCapsule: Draw a capsule with the center of its sphere caps at startPos and endPos */
static int rl_fn_DrawCapsule(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Vector3 a0;
  Vector3 a1;
  double a2;
  long a3;
  long a4;
  Color a5;
  (void)out;
  if (argc != 6) return rl_arity_error(interp, "raylib::draw_capsule", 6, argc);
  if (rl_get_Vector3(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_capsule", 1, "startPos", "Vector3");
  if (rl_get_Vector3(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_capsule", 2, "endPos", "Vector3");
  if (rl_get_float(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_capsule", 3, "radius", "float");
  if (rl_get_int(interp, argv[3], &a3) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_capsule", 4, "slices", "int");
  if (rl_get_int(interp, argv[4], &a4) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_capsule", 5, "rings", "int");
  if (rl_get_Color(interp, argv[5], &a5) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_capsule", 6, "color", "Color");
  DrawCapsule(a0, a1, (float)a2, (int)a3, (int)a4, a5);
  return LCL_RC_OK;
}

/* DrawCapsuleWires: Draw capsule wireframe with the center of its sphere caps at startPos and endPos */
static int rl_fn_DrawCapsuleWires(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Vector3 a0;
  Vector3 a1;
  double a2;
  long a3;
  long a4;
  Color a5;
  (void)out;
  if (argc != 6) return rl_arity_error(interp, "raylib::draw_capsule_wires", 6, argc);
  if (rl_get_Vector3(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_capsule_wires", 1, "startPos", "Vector3");
  if (rl_get_Vector3(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_capsule_wires", 2, "endPos", "Vector3");
  if (rl_get_float(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_capsule_wires", 3, "radius", "float");
  if (rl_get_int(interp, argv[3], &a3) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_capsule_wires", 4, "slices", "int");
  if (rl_get_int(interp, argv[4], &a4) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_capsule_wires", 5, "rings", "int");
  if (rl_get_Color(interp, argv[5], &a5) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_capsule_wires", 6, "color", "Color");
  DrawCapsuleWires(a0, a1, (float)a2, (int)a3, (int)a4, a5);
  return LCL_RC_OK;
}

/* DrawPlane: Draw a plane XZ */
static int rl_fn_DrawPlane(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Vector3 a0;
  Vector2 a1;
  Color a2;
  (void)out;
  if (argc != 3) return rl_arity_error(interp, "raylib::draw_plane", 3, argc);
  if (rl_get_Vector3(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_plane", 1, "centerPos", "Vector3");
  if (rl_get_Vector2(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_plane", 2, "size", "Vector2");
  if (rl_get_Color(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_plane", 3, "color", "Color");
  DrawPlane(a0, a1, a2);
  return LCL_RC_OK;
}

/* DrawRay: Draw a ray line */
static int rl_fn_DrawRay(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Ray a0;
  Color a1;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::draw_ray", 2, argc);
  if (rl_get_Ray(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_ray", 1, "ray", "Ray");
  if (rl_get_Color(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_ray", 2, "color", "Color");
  DrawRay(a0, a1);
  return LCL_RC_OK;
}

/* DrawGrid: Draw a grid (centered at (0, 0, 0)) */
static int rl_fn_DrawGrid(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  long a0;
  double a1;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::draw_grid", 2, argc);
  if (rl_get_int(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_grid", 1, "slices", "int");
  if (rl_get_float(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_grid", 2, "spacing", "float");
  DrawGrid((int)a0, (float)a1);
  return LCL_RC_OK;
}

/* LoadModel: Load model from files (meshes and materials) */
static int rl_fn_LoadModel(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  const char *a0;
  Model r;
  if (argc != 1) return rl_arity_error(interp, "raylib::load_model", 1, argc);
  if (rl_get_string(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::load_model", 1, "fileName", "string");
  r = LoadModel(a0);
  *out = rl_new_Model(r);
  return LCL_RC_OK;
}

/* LoadModelFromMesh: Load model from generated mesh (default material) */
static int rl_fn_LoadModelFromMesh(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Mesh a0;
  Model r;
  if (argc != 1) return rl_arity_error(interp, "raylib::load_model_from_mesh", 1, argc);
  if (rl_get_Mesh(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::load_model_from_mesh", 1, "mesh", "Mesh");
  r = LoadModelFromMesh(a0);
  *out = rl_new_Model(r);
  return LCL_RC_OK;
}

/* IsModelValid: Check if a model is valid (loaded in GPU, VAO/VBOs) */
static int rl_fn_IsModelValid(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Model a0;
  bool r;
  if (argc != 1) return rl_arity_error(interp, "raylib::is_model_valid", 1, argc);
  if (rl_get_Model(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::is_model_valid", 1, "model", "Model");
  r = IsModelValid(a0);
  *out = lcl_int_new((long)r);
  return LCL_RC_OK;
}

/* UnloadModel: Unload model (including meshes) from memory (RAM and/or VRAM) */
static int rl_fn_UnloadModel(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Model a0;
  (void)out;
  if (argc != 1) return rl_arity_error(interp, "raylib::unload_model", 1, argc);
  if (rl_get_Model(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::unload_model", 1, "model", "Model");
  UnloadModel(a0);
  return LCL_RC_OK;
}

/* GetModelBoundingBox: Compute model bounding box limits (considers all meshes) */
static int rl_fn_GetModelBoundingBox(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Model a0;
  BoundingBox r;
  if (argc != 1) return rl_arity_error(interp, "raylib::get_model_bounding_box", 1, argc);
  if (rl_get_Model(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::get_model_bounding_box", 1, "model", "Model");
  r = GetModelBoundingBox(a0);
  *out = rl_new_BoundingBox(r);
  return LCL_RC_OK;
}

/* DrawModel: Draw a model (with texture if set) */
static int rl_fn_DrawModel(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Model a0;
  Vector3 a1;
  double a2;
  Color a3;
  (void)out;
  if (argc != 4) return rl_arity_error(interp, "raylib::draw_model", 4, argc);
  if (rl_get_Model(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_model", 1, "model", "Model");
  if (rl_get_Vector3(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_model", 2, "position", "Vector3");
  if (rl_get_float(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_model", 3, "scale", "float");
  if (rl_get_Color(interp, argv[3], &a3) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_model", 4, "tint", "Color");
  DrawModel(a0, a1, (float)a2, a3);
  return LCL_RC_OK;
}

/* DrawModelEx: Draw a model with extended parameters */
static int rl_fn_DrawModelEx(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Model a0;
  Vector3 a1;
  Vector3 a2;
  double a3;
  Vector3 a4;
  Color a5;
  (void)out;
  if (argc != 6) return rl_arity_error(interp, "raylib::draw_model_ex", 6, argc);
  if (rl_get_Model(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_model_ex", 1, "model", "Model");
  if (rl_get_Vector3(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_model_ex", 2, "position", "Vector3");
  if (rl_get_Vector3(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_model_ex", 3, "rotationAxis", "Vector3");
  if (rl_get_float(interp, argv[3], &a3) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_model_ex", 4, "rotationAngle", "float");
  if (rl_get_Vector3(interp, argv[4], &a4) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_model_ex", 5, "scale", "Vector3");
  if (rl_get_Color(interp, argv[5], &a5) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_model_ex", 6, "tint", "Color");
  DrawModelEx(a0, a1, a2, (float)a3, a4, a5);
  return LCL_RC_OK;
}

/* DrawModelWires: Draw a model wires (with texture if set) */
static int rl_fn_DrawModelWires(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Model a0;
  Vector3 a1;
  double a2;
  Color a3;
  (void)out;
  if (argc != 4) return rl_arity_error(interp, "raylib::draw_model_wires", 4, argc);
  if (rl_get_Model(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_model_wires", 1, "model", "Model");
  if (rl_get_Vector3(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_model_wires", 2, "position", "Vector3");
  if (rl_get_float(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_model_wires", 3, "scale", "float");
  if (rl_get_Color(interp, argv[3], &a3) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_model_wires", 4, "tint", "Color");
  DrawModelWires(a0, a1, (float)a2, a3);
  return LCL_RC_OK;
}

/* DrawModelWiresEx: Draw a model wires (with texture if set) with extended parameters */
static int rl_fn_DrawModelWiresEx(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Model a0;
  Vector3 a1;
  Vector3 a2;
  double a3;
  Vector3 a4;
  Color a5;
  (void)out;
  if (argc != 6) return rl_arity_error(interp, "raylib::draw_model_wires_ex", 6, argc);
  if (rl_get_Model(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_model_wires_ex", 1, "model", "Model");
  if (rl_get_Vector3(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_model_wires_ex", 2, "position", "Vector3");
  if (rl_get_Vector3(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_model_wires_ex", 3, "rotationAxis", "Vector3");
  if (rl_get_float(interp, argv[3], &a3) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_model_wires_ex", 4, "rotationAngle", "float");
  if (rl_get_Vector3(interp, argv[4], &a4) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_model_wires_ex", 5, "scale", "Vector3");
  if (rl_get_Color(interp, argv[5], &a5) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_model_wires_ex", 6, "tint", "Color");
  DrawModelWiresEx(a0, a1, a2, (float)a3, a4, a5);
  return LCL_RC_OK;
}

/* DrawBoundingBox: Draw bounding box (wires) */
static int rl_fn_DrawBoundingBox(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  BoundingBox a0;
  Color a1;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::draw_bounding_box", 2, argc);
  if (rl_get_BoundingBox(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_bounding_box", 1, "box", "BoundingBox");
  if (rl_get_Color(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_bounding_box", 2, "color", "Color");
  DrawBoundingBox(a0, a1);
  return LCL_RC_OK;
}

/* DrawBillboard: Draw a billboard texture */
static int rl_fn_DrawBillboard(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Camera3D a0;
  Texture a1;
  Vector3 a2;
  double a3;
  Color a4;
  (void)out;
  if (argc != 5) return rl_arity_error(interp, "raylib::draw_billboard", 5, argc);
  if (rl_get_Camera3D(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_billboard", 1, "camera", "Camera3D");
  if (rl_get_Texture(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_billboard", 2, "texture", "Texture");
  if (rl_get_Vector3(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_billboard", 3, "position", "Vector3");
  if (rl_get_float(interp, argv[3], &a3) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_billboard", 4, "scale", "float");
  if (rl_get_Color(interp, argv[4], &a4) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_billboard", 5, "tint", "Color");
  DrawBillboard(a0, a1, a2, (float)a3, a4);
  return LCL_RC_OK;
}

/* DrawBillboardRec: Draw a billboard texture defined by source */
static int rl_fn_DrawBillboardRec(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Camera3D a0;
  Texture a1;
  Rectangle a2;
  Vector3 a3;
  Vector2 a4;
  Color a5;
  (void)out;
  if (argc != 6) return rl_arity_error(interp, "raylib::draw_billboard_rec", 6, argc);
  if (rl_get_Camera3D(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_billboard_rec", 1, "camera", "Camera3D");
  if (rl_get_Texture(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_billboard_rec", 2, "texture", "Texture");
  if (rl_get_Rectangle(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_billboard_rec", 3, "source", "Rectangle");
  if (rl_get_Vector3(interp, argv[3], &a3) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_billboard_rec", 4, "position", "Vector3");
  if (rl_get_Vector2(interp, argv[4], &a4) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_billboard_rec", 5, "size", "Vector2");
  if (rl_get_Color(interp, argv[5], &a5) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_billboard_rec", 6, "tint", "Color");
  DrawBillboardRec(a0, a1, a2, a3, a4, a5);
  return LCL_RC_OK;
}

/* DrawBillboardPro: Draw a billboard texture defined by source and rotation */
static int rl_fn_DrawBillboardPro(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Camera3D a0;
  Texture a1;
  Rectangle a2;
  Vector3 a3;
  Vector3 a4;
  Vector2 a5;
  Vector2 a6;
  double a7;
  Color a8;
  (void)out;
  if (argc != 9) return rl_arity_error(interp, "raylib::draw_billboard_pro", 9, argc);
  if (rl_get_Camera3D(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_billboard_pro", 1, "camera", "Camera3D");
  if (rl_get_Texture(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_billboard_pro", 2, "texture", "Texture");
  if (rl_get_Rectangle(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_billboard_pro", 3, "source", "Rectangle");
  if (rl_get_Vector3(interp, argv[3], &a3) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_billboard_pro", 4, "position", "Vector3");
  if (rl_get_Vector3(interp, argv[4], &a4) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_billboard_pro", 5, "up", "Vector3");
  if (rl_get_Vector2(interp, argv[5], &a5) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_billboard_pro", 6, "size", "Vector2");
  if (rl_get_Vector2(interp, argv[6], &a6) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_billboard_pro", 7, "origin", "Vector2");
  if (rl_get_float(interp, argv[7], &a7) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_billboard_pro", 8, "rotation", "float");
  if (rl_get_Color(interp, argv[8], &a8) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_billboard_pro", 9, "tint", "Color");
  DrawBillboardPro(a0, a1, a2, a3, a4, a5, a6, (float)a7, a8);
  return LCL_RC_OK;
}

/* UploadMesh: Upload mesh vertex data in GPU and provide VAO/VBO ids */
static int rl_fn_UploadMesh(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Mesh *a0;
  long a1;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::upload_mesh", 2, argc);
  if (rl_ptr_Mesh(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::upload_mesh", 1, "mesh", "Mesh");
  if (rl_get_int(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::upload_mesh", 2, "dynamic", "int");
  UploadMesh(a0, (bool)a1);
  return LCL_RC_OK;
}

/* UnloadMesh: Unload mesh data from CPU and GPU */
static int rl_fn_UnloadMesh(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Mesh a0;
  (void)out;
  if (argc != 1) return rl_arity_error(interp, "raylib::unload_mesh", 1, argc);
  if (rl_get_Mesh(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::unload_mesh", 1, "mesh", "Mesh");
  UnloadMesh(a0);
  return LCL_RC_OK;
}

/* DrawMesh: Draw a 3d mesh with material and transform */
static int rl_fn_DrawMesh(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Mesh a0;
  Material a1;
  Matrix a2;
  (void)out;
  if (argc != 3) return rl_arity_error(interp, "raylib::draw_mesh", 3, argc);
  if (rl_get_Mesh(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_mesh", 1, "mesh", "Mesh");
  if (rl_get_Material(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_mesh", 2, "material", "Material");
  if (rl_get_Matrix(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_mesh", 3, "transform", "Matrix");
  DrawMesh(a0, a1, a2);
  return LCL_RC_OK;
}

/* DrawMeshInstanced: Draw multiple mesh instances with material and different transforms */
static int rl_fn_DrawMeshInstanced(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Mesh a0;
  Material a1;
  Matrix *a2 = NULL;
  int n2 = 0;
  (void)out;
  int rc = LCL_RC_ERR;
  if (argc != 3) return rl_arity_error(interp, "raylib::draw_mesh_instanced", 3, argc);
  if (rl_get_Mesh(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_mesh_instanced", 1, "mesh", "Mesh");
  if (rl_get_Material(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::draw_mesh_instanced", 2, "material", "Material");
  if (lcl_value_type_of(argv[2]) != LCL_LIST) return RL_ARG_ERR(interp, "raylib::draw_mesh_instanced", 3, "transforms", "list of Matrix");
  n2 = (int)lcl_list_len(argv[2]);
  a2 = (Matrix *)calloc(n2 > 0 ? (size_t)n2 : 1, sizeof(*a2));
  if (!a2) goto cleanup;
  {
    int k;
    for (k = 0; k < n2; k++) {
      lcl_value *item;
      if (lcl_list_get(argv[2], (size_t)k, &item) != LCL_OK) goto cleanup;
      if (rl_get_Matrix(interp, item, &a2[k]) != LCL_RC_OK) { lcl_ref_dec(item); RL_ARG_ERR(interp, "raylib::draw_mesh_instanced", 3, "transforms", "list of Matrix"); goto cleanup; }
      lcl_ref_dec(item);
    }
  }
  DrawMeshInstanced(a0, a1, a2, n2);
  rc = LCL_RC_OK;
cleanup:
  free(a2);
  return rc;
}

/* GetMeshBoundingBox: Compute mesh bounding box limits */
static int rl_fn_GetMeshBoundingBox(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Mesh a0;
  BoundingBox r;
  if (argc != 1) return rl_arity_error(interp, "raylib::get_mesh_bounding_box", 1, argc);
  if (rl_get_Mesh(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::get_mesh_bounding_box", 1, "mesh", "Mesh");
  r = GetMeshBoundingBox(a0);
  *out = rl_new_BoundingBox(r);
  return LCL_RC_OK;
}

/* GenMeshTangents: Compute mesh tangents */
static int rl_fn_GenMeshTangents(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Mesh *a0;
  (void)out;
  if (argc != 1) return rl_arity_error(interp, "raylib::gen_mesh_tangents", 1, argc);
  if (rl_ptr_Mesh(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::gen_mesh_tangents", 1, "mesh", "Mesh");
  GenMeshTangents(a0);
  return LCL_RC_OK;
}

/* ExportMesh: Export mesh data to file, returns true on success */
static int rl_fn_ExportMesh(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Mesh a0;
  const char *a1;
  bool r;
  if (argc != 2) return rl_arity_error(interp, "raylib::export_mesh", 2, argc);
  if (rl_get_Mesh(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::export_mesh", 1, "mesh", "Mesh");
  if (rl_get_string(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::export_mesh", 2, "fileName", "string");
  r = ExportMesh(a0, a1);
  *out = lcl_int_new((long)r);
  return LCL_RC_OK;
}

/* ExportMeshAsCode: Export mesh as code file (.h) defining multiple arrays of vertex attributes */
static int rl_fn_ExportMeshAsCode(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Mesh a0;
  const char *a1;
  bool r;
  if (argc != 2) return rl_arity_error(interp, "raylib::export_mesh_as_code", 2, argc);
  if (rl_get_Mesh(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::export_mesh_as_code", 1, "mesh", "Mesh");
  if (rl_get_string(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::export_mesh_as_code", 2, "fileName", "string");
  r = ExportMeshAsCode(a0, a1);
  *out = lcl_int_new((long)r);
  return LCL_RC_OK;
}

/* GenMeshPoly: Generate polygonal mesh */
static int rl_fn_GenMeshPoly(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  long a0;
  double a1;
  Mesh r;
  if (argc != 2) return rl_arity_error(interp, "raylib::gen_mesh_poly", 2, argc);
  if (rl_get_int(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::gen_mesh_poly", 1, "sides", "int");
  if (rl_get_float(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::gen_mesh_poly", 2, "radius", "float");
  r = GenMeshPoly((int)a0, (float)a1);
  *out = rl_new_Mesh(r);
  return LCL_RC_OK;
}

/* GenMeshPlane: Generate plane mesh (with subdivisions) */
static int rl_fn_GenMeshPlane(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  double a0;
  double a1;
  long a2;
  long a3;
  Mesh r;
  if (argc != 4) return rl_arity_error(interp, "raylib::gen_mesh_plane", 4, argc);
  if (rl_get_float(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::gen_mesh_plane", 1, "width", "float");
  if (rl_get_float(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::gen_mesh_plane", 2, "length", "float");
  if (rl_get_int(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::gen_mesh_plane", 3, "resX", "int");
  if (rl_get_int(interp, argv[3], &a3) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::gen_mesh_plane", 4, "resZ", "int");
  r = GenMeshPlane((float)a0, (float)a1, (int)a2, (int)a3);
  *out = rl_new_Mesh(r);
  return LCL_RC_OK;
}

/* GenMeshCube: Generate cuboid mesh */
static int rl_fn_GenMeshCube(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  double a0;
  double a1;
  double a2;
  Mesh r;
  if (argc != 3) return rl_arity_error(interp, "raylib::gen_mesh_cube", 3, argc);
  if (rl_get_float(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::gen_mesh_cube", 1, "width", "float");
  if (rl_get_float(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::gen_mesh_cube", 2, "height", "float");
  if (rl_get_float(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::gen_mesh_cube", 3, "length", "float");
  r = GenMeshCube((float)a0, (float)a1, (float)a2);
  *out = rl_new_Mesh(r);
  return LCL_RC_OK;
}

/* GenMeshSphere: Generate sphere mesh (standard sphere) */
static int rl_fn_GenMeshSphere(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  double a0;
  long a1;
  long a2;
  Mesh r;
  if (argc != 3) return rl_arity_error(interp, "raylib::gen_mesh_sphere", 3, argc);
  if (rl_get_float(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::gen_mesh_sphere", 1, "radius", "float");
  if (rl_get_int(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::gen_mesh_sphere", 2, "rings", "int");
  if (rl_get_int(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::gen_mesh_sphere", 3, "slices", "int");
  r = GenMeshSphere((float)a0, (int)a1, (int)a2);
  *out = rl_new_Mesh(r);
  return LCL_RC_OK;
}

/* GenMeshHemiSphere: Generate half-sphere mesh (no bottom cap) */
static int rl_fn_GenMeshHemiSphere(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  double a0;
  long a1;
  long a2;
  Mesh r;
  if (argc != 3) return rl_arity_error(interp, "raylib::gen_mesh_hemi_sphere", 3, argc);
  if (rl_get_float(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::gen_mesh_hemi_sphere", 1, "radius", "float");
  if (rl_get_int(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::gen_mesh_hemi_sphere", 2, "rings", "int");
  if (rl_get_int(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::gen_mesh_hemi_sphere", 3, "slices", "int");
  r = GenMeshHemiSphere((float)a0, (int)a1, (int)a2);
  *out = rl_new_Mesh(r);
  return LCL_RC_OK;
}

/* GenMeshCylinder: Generate cylinder mesh */
static int rl_fn_GenMeshCylinder(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  double a0;
  double a1;
  long a2;
  Mesh r;
  if (argc != 3) return rl_arity_error(interp, "raylib::gen_mesh_cylinder", 3, argc);
  if (rl_get_float(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::gen_mesh_cylinder", 1, "radius", "float");
  if (rl_get_float(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::gen_mesh_cylinder", 2, "height", "float");
  if (rl_get_int(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::gen_mesh_cylinder", 3, "slices", "int");
  r = GenMeshCylinder((float)a0, (float)a1, (int)a2);
  *out = rl_new_Mesh(r);
  return LCL_RC_OK;
}

/* GenMeshCone: Generate cone/pyramid mesh */
static int rl_fn_GenMeshCone(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  double a0;
  double a1;
  long a2;
  Mesh r;
  if (argc != 3) return rl_arity_error(interp, "raylib::gen_mesh_cone", 3, argc);
  if (rl_get_float(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::gen_mesh_cone", 1, "radius", "float");
  if (rl_get_float(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::gen_mesh_cone", 2, "height", "float");
  if (rl_get_int(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::gen_mesh_cone", 3, "slices", "int");
  r = GenMeshCone((float)a0, (float)a1, (int)a2);
  *out = rl_new_Mesh(r);
  return LCL_RC_OK;
}

/* GenMeshTorus: Generate torus mesh */
static int rl_fn_GenMeshTorus(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  double a0;
  double a1;
  long a2;
  long a3;
  Mesh r;
  if (argc != 4) return rl_arity_error(interp, "raylib::gen_mesh_torus", 4, argc);
  if (rl_get_float(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::gen_mesh_torus", 1, "radius", "float");
  if (rl_get_float(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::gen_mesh_torus", 2, "size", "float");
  if (rl_get_int(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::gen_mesh_torus", 3, "radSeg", "int");
  if (rl_get_int(interp, argv[3], &a3) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::gen_mesh_torus", 4, "sides", "int");
  r = GenMeshTorus((float)a0, (float)a1, (int)a2, (int)a3);
  *out = rl_new_Mesh(r);
  return LCL_RC_OK;
}

/* GenMeshKnot: Generate trefoil knot mesh */
static int rl_fn_GenMeshKnot(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  double a0;
  double a1;
  long a2;
  long a3;
  Mesh r;
  if (argc != 4) return rl_arity_error(interp, "raylib::gen_mesh_knot", 4, argc);
  if (rl_get_float(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::gen_mesh_knot", 1, "radius", "float");
  if (rl_get_float(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::gen_mesh_knot", 2, "size", "float");
  if (rl_get_int(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::gen_mesh_knot", 3, "radSeg", "int");
  if (rl_get_int(interp, argv[3], &a3) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::gen_mesh_knot", 4, "sides", "int");
  r = GenMeshKnot((float)a0, (float)a1, (int)a2, (int)a3);
  *out = rl_new_Mesh(r);
  return LCL_RC_OK;
}

/* GenMeshHeightmap: Generate heightmap mesh from image data */
static int rl_fn_GenMeshHeightmap(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Image a0;
  Vector3 a1;
  Mesh r;
  if (argc != 2) return rl_arity_error(interp, "raylib::gen_mesh_heightmap", 2, argc);
  if (rl_get_Image(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::gen_mesh_heightmap", 1, "heightmap", "Image");
  if (rl_get_Vector3(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::gen_mesh_heightmap", 2, "size", "Vector3");
  r = GenMeshHeightmap(a0, a1);
  *out = rl_new_Mesh(r);
  return LCL_RC_OK;
}

/* GenMeshCubicmap: Generate cubes-based map mesh from image data */
static int rl_fn_GenMeshCubicmap(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Image a0;
  Vector3 a1;
  Mesh r;
  if (argc != 2) return rl_arity_error(interp, "raylib::gen_mesh_cubicmap", 2, argc);
  if (rl_get_Image(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::gen_mesh_cubicmap", 1, "cubicmap", "Image");
  if (rl_get_Vector3(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::gen_mesh_cubicmap", 2, "cubeSize", "Vector3");
  r = GenMeshCubicmap(a0, a1);
  *out = rl_new_Mesh(r);
  return LCL_RC_OK;
}

/* LoadMaterialDefault: Load default material (Supports: DIFFUSE, SPECULAR, NORMAL maps) */
static int rl_fn_LoadMaterialDefault(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Material r;
  (void)argv;
  if (argc != 0) return rl_arity_error(interp, "raylib::load_material_default", 0, argc);
  r = LoadMaterialDefault();
  *out = rl_new_Material(r);
  return LCL_RC_OK;
}

/* IsMaterialValid: Check if a material is valid (shader assigned, map textures loaded in GPU) */
static int rl_fn_IsMaterialValid(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Material a0;
  bool r;
  if (argc != 1) return rl_arity_error(interp, "raylib::is_material_valid", 1, argc);
  if (rl_get_Material(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::is_material_valid", 1, "material", "Material");
  r = IsMaterialValid(a0);
  *out = lcl_int_new((long)r);
  return LCL_RC_OK;
}

/* UnloadMaterial: Unload material from GPU memory (VRAM) */
static int rl_fn_UnloadMaterial(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Material a0;
  (void)out;
  if (argc != 1) return rl_arity_error(interp, "raylib::unload_material", 1, argc);
  if (rl_get_Material(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::unload_material", 1, "material", "Material");
  UnloadMaterial(a0);
  return LCL_RC_OK;
}

/* SetMaterialTexture: Set texture for a material map type (MATERIAL_MAP_DIFFUSE, MATERIAL_MAP_SPECULAR...) */
static int rl_fn_SetMaterialTexture(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Material *a0;
  long a1;
  Texture a2;
  (void)out;
  if (argc != 3) return rl_arity_error(interp, "raylib::set_material_texture", 3, argc);
  if (rl_ptr_Material(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::set_material_texture", 1, "material", "Material");
  if (rl_get_int(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::set_material_texture", 2, "mapType", "int");
  if (rl_get_Texture(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::set_material_texture", 3, "texture", "Texture");
  SetMaterialTexture(a0, (int)a1, a2);
  return LCL_RC_OK;
}

/* SetModelMeshMaterial: Set material for a mesh */
static int rl_fn_SetModelMeshMaterial(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Model *a0;
  long a1;
  long a2;
  (void)out;
  if (argc != 3) return rl_arity_error(interp, "raylib::set_model_mesh_material", 3, argc);
  if (rl_ptr_Model(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::set_model_mesh_material", 1, "model", "Model");
  if (rl_get_int(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::set_model_mesh_material", 2, "meshId", "int");
  if (rl_get_int(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::set_model_mesh_material", 3, "materialId", "int");
  SetModelMeshMaterial(a0, (int)a1, (int)a2);
  return LCL_RC_OK;
}

/* UpdateModelAnimation: Update model animation pose (vertex buffers and bone matrices) */
static int rl_fn_UpdateModelAnimation(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Model a0;
  ModelAnimation a1;
  double a2;
  (void)out;
  if (argc != 3) return rl_arity_error(interp, "raylib::update_model_animation", 3, argc);
  if (rl_get_Model(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::update_model_animation", 1, "model", "Model");
  if (rl_get_ModelAnimation(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::update_model_animation", 2, "anim", "ModelAnimation");
  if (rl_get_float(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::update_model_animation", 3, "frame", "float");
  UpdateModelAnimation(a0, a1, (float)a2);
  return LCL_RC_OK;
}

/* UpdateModelAnimationEx: Update model animation pose, blending two animations */
static int rl_fn_UpdateModelAnimationEx(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Model a0;
  ModelAnimation a1;
  double a2;
  ModelAnimation a3;
  double a4;
  double a5;
  (void)out;
  if (argc != 6) return rl_arity_error(interp, "raylib::update_model_animation_ex", 6, argc);
  if (rl_get_Model(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::update_model_animation_ex", 1, "model", "Model");
  if (rl_get_ModelAnimation(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::update_model_animation_ex", 2, "animA", "ModelAnimation");
  if (rl_get_float(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::update_model_animation_ex", 3, "frameA", "float");
  if (rl_get_ModelAnimation(interp, argv[3], &a3) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::update_model_animation_ex", 4, "animB", "ModelAnimation");
  if (rl_get_float(interp, argv[4], &a4) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::update_model_animation_ex", 5, "frameB", "float");
  if (rl_get_float(interp, argv[5], &a5) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::update_model_animation_ex", 6, "blend", "float");
  UpdateModelAnimationEx(a0, a1, (float)a2, a3, (float)a4, (float)a5);
  return LCL_RC_OK;
}

/* UnloadModelAnimations: Unload animation array data */
static int rl_fn_UnloadModelAnimations(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  ModelAnimation *a0 = NULL;
  int n0 = 0;
  (void)out;
  int rc = LCL_RC_ERR;
  if (argc != 1) return rl_arity_error(interp, "raylib::unload_model_animations", 1, argc);
  if (lcl_value_type_of(argv[0]) != LCL_LIST) return RL_ARG_ERR(interp, "raylib::unload_model_animations", 1, "animations", "list of ModelAnimation");
  n0 = (int)lcl_list_len(argv[0]);
  a0 = (ModelAnimation *)calloc(n0 > 0 ? (size_t)n0 : 1, sizeof(*a0));
  if (!a0) goto cleanup;
  {
    int k;
    for (k = 0; k < n0; k++) {
      lcl_value *item;
      if (lcl_list_get(argv[0], (size_t)k, &item) != LCL_OK) goto cleanup;
      if (rl_get_ModelAnimation(interp, item, &a0[k]) != LCL_RC_OK) { lcl_ref_dec(item); RL_ARG_ERR(interp, "raylib::unload_model_animations", 1, "animations", "list of ModelAnimation"); goto cleanup; }
      lcl_ref_dec(item);
    }
  }
  UnloadModelAnimations(a0, n0);
  rc = LCL_RC_OK;
cleanup:
  free(a0);
  return rc;
}

/* IsModelAnimationValid: Check model animation skeleton match */
static int rl_fn_IsModelAnimationValid(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Model a0;
  ModelAnimation a1;
  bool r;
  if (argc != 2) return rl_arity_error(interp, "raylib::is_model_animation_valid", 2, argc);
  if (rl_get_Model(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::is_model_animation_valid", 1, "model", "Model");
  if (rl_get_ModelAnimation(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::is_model_animation_valid", 2, "anim", "ModelAnimation");
  r = IsModelAnimationValid(a0, a1);
  *out = lcl_int_new((long)r);
  return LCL_RC_OK;
}

/* CheckCollisionSpheres: Check collision between two spheres */
static int rl_fn_CheckCollisionSpheres(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Vector3 a0;
  double a1;
  Vector3 a2;
  double a3;
  bool r;
  if (argc != 4) return rl_arity_error(interp, "raylib::check_collision_spheres", 4, argc);
  if (rl_get_Vector3(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::check_collision_spheres", 1, "center1", "Vector3");
  if (rl_get_float(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::check_collision_spheres", 2, "radius1", "float");
  if (rl_get_Vector3(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::check_collision_spheres", 3, "center2", "Vector3");
  if (rl_get_float(interp, argv[3], &a3) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::check_collision_spheres", 4, "radius2", "float");
  r = CheckCollisionSpheres(a0, (float)a1, a2, (float)a3);
  *out = lcl_int_new((long)r);
  return LCL_RC_OK;
}

/* CheckCollisionBoxes: Check collision between two bounding boxes */
static int rl_fn_CheckCollisionBoxes(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  BoundingBox a0;
  BoundingBox a1;
  bool r;
  if (argc != 2) return rl_arity_error(interp, "raylib::check_collision_boxes", 2, argc);
  if (rl_get_BoundingBox(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::check_collision_boxes", 1, "box1", "BoundingBox");
  if (rl_get_BoundingBox(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::check_collision_boxes", 2, "box2", "BoundingBox");
  r = CheckCollisionBoxes(a0, a1);
  *out = lcl_int_new((long)r);
  return LCL_RC_OK;
}

/* CheckCollisionBoxSphere: Check collision between box and sphere */
static int rl_fn_CheckCollisionBoxSphere(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  BoundingBox a0;
  Vector3 a1;
  double a2;
  bool r;
  if (argc != 3) return rl_arity_error(interp, "raylib::check_collision_box_sphere", 3, argc);
  if (rl_get_BoundingBox(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::check_collision_box_sphere", 1, "box", "BoundingBox");
  if (rl_get_Vector3(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::check_collision_box_sphere", 2, "center", "Vector3");
  if (rl_get_float(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::check_collision_box_sphere", 3, "radius", "float");
  r = CheckCollisionBoxSphere(a0, a1, (float)a2);
  *out = lcl_int_new((long)r);
  return LCL_RC_OK;
}

/* GetRayCollisionSphere: Get collision info between ray and sphere */
static int rl_fn_GetRayCollisionSphere(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Ray a0;
  Vector3 a1;
  double a2;
  RayCollision r;
  if (argc != 3) return rl_arity_error(interp, "raylib::get_ray_collision_sphere", 3, argc);
  if (rl_get_Ray(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::get_ray_collision_sphere", 1, "ray", "Ray");
  if (rl_get_Vector3(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::get_ray_collision_sphere", 2, "center", "Vector3");
  if (rl_get_float(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::get_ray_collision_sphere", 3, "radius", "float");
  r = GetRayCollisionSphere(a0, a1, (float)a2);
  *out = rl_new_RayCollision(r);
  return LCL_RC_OK;
}

/* GetRayCollisionBox: Get collision info between ray and box */
static int rl_fn_GetRayCollisionBox(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Ray a0;
  BoundingBox a1;
  RayCollision r;
  if (argc != 2) return rl_arity_error(interp, "raylib::get_ray_collision_box", 2, argc);
  if (rl_get_Ray(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::get_ray_collision_box", 1, "ray", "Ray");
  if (rl_get_BoundingBox(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::get_ray_collision_box", 2, "box", "BoundingBox");
  r = GetRayCollisionBox(a0, a1);
  *out = rl_new_RayCollision(r);
  return LCL_RC_OK;
}

/* GetRayCollisionMesh: Get collision info between ray and mesh */
static int rl_fn_GetRayCollisionMesh(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Ray a0;
  Mesh a1;
  Matrix a2;
  RayCollision r;
  if (argc != 3) return rl_arity_error(interp, "raylib::get_ray_collision_mesh", 3, argc);
  if (rl_get_Ray(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::get_ray_collision_mesh", 1, "ray", "Ray");
  if (rl_get_Mesh(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::get_ray_collision_mesh", 2, "mesh", "Mesh");
  if (rl_get_Matrix(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::get_ray_collision_mesh", 3, "transform", "Matrix");
  r = GetRayCollisionMesh(a0, a1, a2);
  *out = rl_new_RayCollision(r);
  return LCL_RC_OK;
}

/* GetRayCollisionTriangle: Get collision info between ray and triangle */
static int rl_fn_GetRayCollisionTriangle(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Ray a0;
  Vector3 a1;
  Vector3 a2;
  Vector3 a3;
  RayCollision r;
  if (argc != 4) return rl_arity_error(interp, "raylib::get_ray_collision_triangle", 4, argc);
  if (rl_get_Ray(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::get_ray_collision_triangle", 1, "ray", "Ray");
  if (rl_get_Vector3(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::get_ray_collision_triangle", 2, "p1", "Vector3");
  if (rl_get_Vector3(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::get_ray_collision_triangle", 3, "p2", "Vector3");
  if (rl_get_Vector3(interp, argv[3], &a3) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::get_ray_collision_triangle", 4, "p3", "Vector3");
  r = GetRayCollisionTriangle(a0, a1, a2, a3);
  *out = rl_new_RayCollision(r);
  return LCL_RC_OK;
}

/* GetRayCollisionQuad: Get collision info between ray and quad */
static int rl_fn_GetRayCollisionQuad(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Ray a0;
  Vector3 a1;
  Vector3 a2;
  Vector3 a3;
  Vector3 a4;
  RayCollision r;
  if (argc != 5) return rl_arity_error(interp, "raylib::get_ray_collision_quad", 5, argc);
  if (rl_get_Ray(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::get_ray_collision_quad", 1, "ray", "Ray");
  if (rl_get_Vector3(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::get_ray_collision_quad", 2, "p1", "Vector3");
  if (rl_get_Vector3(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::get_ray_collision_quad", 3, "p2", "Vector3");
  if (rl_get_Vector3(interp, argv[3], &a3) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::get_ray_collision_quad", 4, "p3", "Vector3");
  if (rl_get_Vector3(interp, argv[4], &a4) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::get_ray_collision_quad", 5, "p4", "Vector3");
  r = GetRayCollisionQuad(a0, a1, a2, a3, a4);
  *out = rl_new_RayCollision(r);
  return LCL_RC_OK;
}

/* InitAudioDevice: Initialize audio device and context */
static int rl_fn_InitAudioDevice(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  (void)out;
  (void)argv;
  if (argc != 0) return rl_arity_error(interp, "raylib::init_audio_device", 0, argc);
  InitAudioDevice();
  return LCL_RC_OK;
}

/* CloseAudioDevice: Close the audio device and context */
static int rl_fn_CloseAudioDevice(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  (void)out;
  (void)argv;
  if (argc != 0) return rl_arity_error(interp, "raylib::close_audio_device", 0, argc);
  CloseAudioDevice();
  return LCL_RC_OK;
}

/* IsAudioDeviceReady: Check if audio device has been initialized successfully */
static int rl_fn_IsAudioDeviceReady(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  bool r;
  (void)argv;
  if (argc != 0) return rl_arity_error(interp, "raylib::is_audio_device_ready", 0, argc);
  r = IsAudioDeviceReady();
  *out = lcl_int_new((long)r);
  return LCL_RC_OK;
}

/* SetMasterVolume: Set master volume (listener) */
static int rl_fn_SetMasterVolume(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  double a0;
  (void)out;
  if (argc != 1) return rl_arity_error(interp, "raylib::set_master_volume", 1, argc);
  if (rl_get_float(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::set_master_volume", 1, "volume", "float");
  SetMasterVolume((float)a0);
  return LCL_RC_OK;
}

/* GetMasterVolume: Get master volume (listener) */
static int rl_fn_GetMasterVolume(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  float r;
  (void)argv;
  if (argc != 0) return rl_arity_error(interp, "raylib::get_master_volume", 0, argc);
  r = GetMasterVolume();
  *out = lcl_float_new((double)r);
  return LCL_RC_OK;
}

/* LoadWave: Load wave data from file */
static int rl_fn_LoadWave(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  const char *a0;
  Wave r;
  if (argc != 1) return rl_arity_error(interp, "raylib::load_wave", 1, argc);
  if (rl_get_string(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::load_wave", 1, "fileName", "string");
  r = LoadWave(a0);
  *out = rl_new_Wave(r);
  return LCL_RC_OK;
}

/* IsWaveValid: Checks if wave data is valid (data loaded and parameters) */
static int rl_fn_IsWaveValid(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Wave a0;
  bool r;
  if (argc != 1) return rl_arity_error(interp, "raylib::is_wave_valid", 1, argc);
  if (rl_get_Wave(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::is_wave_valid", 1, "wave", "Wave");
  r = IsWaveValid(a0);
  *out = lcl_int_new((long)r);
  return LCL_RC_OK;
}

/* LoadSound: Load sound from file */
static int rl_fn_LoadSound(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  const char *a0;
  Sound r;
  if (argc != 1) return rl_arity_error(interp, "raylib::load_sound", 1, argc);
  if (rl_get_string(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::load_sound", 1, "fileName", "string");
  r = LoadSound(a0);
  *out = rl_new_Sound(r);
  return LCL_RC_OK;
}

/* LoadSoundFromWave: Load sound from wave data */
static int rl_fn_LoadSoundFromWave(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Wave a0;
  Sound r;
  if (argc != 1) return rl_arity_error(interp, "raylib::load_sound_from_wave", 1, argc);
  if (rl_get_Wave(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::load_sound_from_wave", 1, "wave", "Wave");
  r = LoadSoundFromWave(a0);
  *out = rl_new_Sound(r);
  return LCL_RC_OK;
}

/* LoadSoundAlias: Create a new sound that shares the same sample data as the source sound, does not own the sound data */
static int rl_fn_LoadSoundAlias(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Sound a0;
  Sound r;
  if (argc != 1) return rl_arity_error(interp, "raylib::load_sound_alias", 1, argc);
  if (rl_get_Sound(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::load_sound_alias", 1, "source", "Sound");
  r = LoadSoundAlias(a0);
  *out = rl_new_Sound(r);
  return LCL_RC_OK;
}

/* IsSoundValid: Checks if a sound is valid (data loaded and buffers initialized) */
static int rl_fn_IsSoundValid(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Sound a0;
  bool r;
  if (argc != 1) return rl_arity_error(interp, "raylib::is_sound_valid", 1, argc);
  if (rl_get_Sound(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::is_sound_valid", 1, "sound", "Sound");
  r = IsSoundValid(a0);
  *out = lcl_int_new((long)r);
  return LCL_RC_OK;
}

/* UnloadWave: Unload wave data */
static int rl_fn_UnloadWave(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Wave a0;
  (void)out;
  if (argc != 1) return rl_arity_error(interp, "raylib::unload_wave", 1, argc);
  if (rl_get_Wave(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::unload_wave", 1, "wave", "Wave");
  UnloadWave(a0);
  return LCL_RC_OK;
}

/* UnloadSound: Unload sound */
static int rl_fn_UnloadSound(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Sound a0;
  (void)out;
  if (argc != 1) return rl_arity_error(interp, "raylib::unload_sound", 1, argc);
  if (rl_get_Sound(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::unload_sound", 1, "sound", "Sound");
  UnloadSound(a0);
  return LCL_RC_OK;
}

/* UnloadSoundAlias: Unload a sound alias (does not deallocate sample data) */
static int rl_fn_UnloadSoundAlias(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Sound a0;
  (void)out;
  if (argc != 1) return rl_arity_error(interp, "raylib::unload_sound_alias", 1, argc);
  if (rl_get_Sound(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::unload_sound_alias", 1, "alias", "Sound");
  UnloadSoundAlias(a0);
  return LCL_RC_OK;
}

/* ExportWave: Export wave data to file, returns true on success */
static int rl_fn_ExportWave(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Wave a0;
  const char *a1;
  bool r;
  if (argc != 2) return rl_arity_error(interp, "raylib::export_wave", 2, argc);
  if (rl_get_Wave(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::export_wave", 1, "wave", "Wave");
  if (rl_get_string(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::export_wave", 2, "fileName", "string");
  r = ExportWave(a0, a1);
  *out = lcl_int_new((long)r);
  return LCL_RC_OK;
}

/* ExportWaveAsCode: Export wave sample data to code (.h), returns true on success */
static int rl_fn_ExportWaveAsCode(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Wave a0;
  const char *a1;
  bool r;
  if (argc != 2) return rl_arity_error(interp, "raylib::export_wave_as_code", 2, argc);
  if (rl_get_Wave(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::export_wave_as_code", 1, "wave", "Wave");
  if (rl_get_string(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::export_wave_as_code", 2, "fileName", "string");
  r = ExportWaveAsCode(a0, a1);
  *out = lcl_int_new((long)r);
  return LCL_RC_OK;
}

/* PlaySound: Play a sound */
static int rl_fn_PlaySound(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Sound a0;
  (void)out;
  if (argc != 1) return rl_arity_error(interp, "raylib::play_sound", 1, argc);
  if (rl_get_Sound(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::play_sound", 1, "sound", "Sound");
  PlaySound(a0);
  return LCL_RC_OK;
}

/* StopSound: Stop playing a sound */
static int rl_fn_StopSound(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Sound a0;
  (void)out;
  if (argc != 1) return rl_arity_error(interp, "raylib::stop_sound", 1, argc);
  if (rl_get_Sound(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::stop_sound", 1, "sound", "Sound");
  StopSound(a0);
  return LCL_RC_OK;
}

/* PauseSound: Pause a sound */
static int rl_fn_PauseSound(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Sound a0;
  (void)out;
  if (argc != 1) return rl_arity_error(interp, "raylib::pause_sound", 1, argc);
  if (rl_get_Sound(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::pause_sound", 1, "sound", "Sound");
  PauseSound(a0);
  return LCL_RC_OK;
}

/* ResumeSound: Resume a paused sound */
static int rl_fn_ResumeSound(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Sound a0;
  (void)out;
  if (argc != 1) return rl_arity_error(interp, "raylib::resume_sound", 1, argc);
  if (rl_get_Sound(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::resume_sound", 1, "sound", "Sound");
  ResumeSound(a0);
  return LCL_RC_OK;
}

/* IsSoundPlaying: Check if a sound is currently playing */
static int rl_fn_IsSoundPlaying(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Sound a0;
  bool r;
  if (argc != 1) return rl_arity_error(interp, "raylib::is_sound_playing", 1, argc);
  if (rl_get_Sound(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::is_sound_playing", 1, "sound", "Sound");
  r = IsSoundPlaying(a0);
  *out = lcl_int_new((long)r);
  return LCL_RC_OK;
}

/* SetSoundVolume: Set volume for a sound (1.0 is max level) */
static int rl_fn_SetSoundVolume(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Sound a0;
  double a1;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::set_sound_volume", 2, argc);
  if (rl_get_Sound(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::set_sound_volume", 1, "sound", "Sound");
  if (rl_get_float(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::set_sound_volume", 2, "volume", "float");
  SetSoundVolume(a0, (float)a1);
  return LCL_RC_OK;
}

/* SetSoundPitch: Set pitch for a sound (1.0 is base level) */
static int rl_fn_SetSoundPitch(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Sound a0;
  double a1;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::set_sound_pitch", 2, argc);
  if (rl_get_Sound(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::set_sound_pitch", 1, "sound", "Sound");
  if (rl_get_float(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::set_sound_pitch", 2, "pitch", "float");
  SetSoundPitch(a0, (float)a1);
  return LCL_RC_OK;
}

/* SetSoundPan: Set pan for a sound (-1.0 left, 0.0 center, 1.0 right) */
static int rl_fn_SetSoundPan(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Sound a0;
  double a1;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::set_sound_pan", 2, argc);
  if (rl_get_Sound(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::set_sound_pan", 1, "sound", "Sound");
  if (rl_get_float(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::set_sound_pan", 2, "pan", "float");
  SetSoundPan(a0, (float)a1);
  return LCL_RC_OK;
}

/* WaveCopy: Copy a wave to a new wave */
static int rl_fn_WaveCopy(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Wave a0;
  Wave r;
  if (argc != 1) return rl_arity_error(interp, "raylib::wave_copy", 1, argc);
  if (rl_get_Wave(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::wave_copy", 1, "wave", "Wave");
  r = WaveCopy(a0);
  *out = rl_new_Wave(r);
  return LCL_RC_OK;
}

/* WaveCrop: Crop a wave to defined frames range */
static int rl_fn_WaveCrop(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Wave *a0;
  long a1;
  long a2;
  (void)out;
  if (argc != 3) return rl_arity_error(interp, "raylib::wave_crop", 3, argc);
  if (rl_ptr_Wave(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::wave_crop", 1, "wave", "Wave");
  if (rl_get_int(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::wave_crop", 2, "initFrame", "int");
  if (rl_get_int(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::wave_crop", 3, "finalFrame", "int");
  WaveCrop(a0, (int)a1, (int)a2);
  return LCL_RC_OK;
}

/* WaveFormat: Convert wave data to desired format */
static int rl_fn_WaveFormat(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Wave *a0;
  long a1;
  long a2;
  long a3;
  (void)out;
  if (argc != 4) return rl_arity_error(interp, "raylib::wave_format", 4, argc);
  if (rl_ptr_Wave(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::wave_format", 1, "wave", "Wave");
  if (rl_get_int(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::wave_format", 2, "sampleRate", "int");
  if (rl_get_int(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::wave_format", 3, "sampleSize", "int");
  if (rl_get_int(interp, argv[3], &a3) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::wave_format", 4, "channels", "int");
  WaveFormat(a0, (int)a1, (int)a2, (int)a3);
  return LCL_RC_OK;
}

/* LoadMusicStream: Load music stream from file */
static int rl_fn_LoadMusicStream(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  const char *a0;
  Music r;
  if (argc != 1) return rl_arity_error(interp, "raylib::load_music_stream", 1, argc);
  if (rl_get_string(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::load_music_stream", 1, "fileName", "string");
  r = LoadMusicStream(a0);
  *out = rl_new_Music(r);
  return LCL_RC_OK;
}

/* IsMusicValid: Checks if a music stream is valid (context and buffers initialized) */
static int rl_fn_IsMusicValid(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Music a0;
  bool r;
  if (argc != 1) return rl_arity_error(interp, "raylib::is_music_valid", 1, argc);
  if (rl_get_Music(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::is_music_valid", 1, "music", "Music");
  r = IsMusicValid(a0);
  *out = lcl_int_new((long)r);
  return LCL_RC_OK;
}

/* UnloadMusicStream: Unload music stream */
static int rl_fn_UnloadMusicStream(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Music a0;
  (void)out;
  if (argc != 1) return rl_arity_error(interp, "raylib::unload_music_stream", 1, argc);
  if (rl_get_Music(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::unload_music_stream", 1, "music", "Music");
  UnloadMusicStream(a0);
  return LCL_RC_OK;
}

/* PlayMusicStream: Start music playing */
static int rl_fn_PlayMusicStream(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Music a0;
  (void)out;
  if (argc != 1) return rl_arity_error(interp, "raylib::play_music_stream", 1, argc);
  if (rl_get_Music(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::play_music_stream", 1, "music", "Music");
  PlayMusicStream(a0);
  return LCL_RC_OK;
}

/* IsMusicStreamPlaying: Check if music is playing */
static int rl_fn_IsMusicStreamPlaying(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Music a0;
  bool r;
  if (argc != 1) return rl_arity_error(interp, "raylib::is_music_stream_playing", 1, argc);
  if (rl_get_Music(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::is_music_stream_playing", 1, "music", "Music");
  r = IsMusicStreamPlaying(a0);
  *out = lcl_int_new((long)r);
  return LCL_RC_OK;
}

/* UpdateMusicStream: Updates buffers for music streaming */
static int rl_fn_UpdateMusicStream(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Music a0;
  (void)out;
  if (argc != 1) return rl_arity_error(interp, "raylib::update_music_stream", 1, argc);
  if (rl_get_Music(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::update_music_stream", 1, "music", "Music");
  UpdateMusicStream(a0);
  return LCL_RC_OK;
}

/* StopMusicStream: Stop music playing */
static int rl_fn_StopMusicStream(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Music a0;
  (void)out;
  if (argc != 1) return rl_arity_error(interp, "raylib::stop_music_stream", 1, argc);
  if (rl_get_Music(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::stop_music_stream", 1, "music", "Music");
  StopMusicStream(a0);
  return LCL_RC_OK;
}

/* PauseMusicStream: Pause music playing */
static int rl_fn_PauseMusicStream(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Music a0;
  (void)out;
  if (argc != 1) return rl_arity_error(interp, "raylib::pause_music_stream", 1, argc);
  if (rl_get_Music(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::pause_music_stream", 1, "music", "Music");
  PauseMusicStream(a0);
  return LCL_RC_OK;
}

/* ResumeMusicStream: Resume playing paused music */
static int rl_fn_ResumeMusicStream(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Music a0;
  (void)out;
  if (argc != 1) return rl_arity_error(interp, "raylib::resume_music_stream", 1, argc);
  if (rl_get_Music(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::resume_music_stream", 1, "music", "Music");
  ResumeMusicStream(a0);
  return LCL_RC_OK;
}

/* SeekMusicStream: Seek music to a position (in seconds) */
static int rl_fn_SeekMusicStream(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Music a0;
  double a1;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::seek_music_stream", 2, argc);
  if (rl_get_Music(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::seek_music_stream", 1, "music", "Music");
  if (rl_get_float(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::seek_music_stream", 2, "position", "float");
  SeekMusicStream(a0, (float)a1);
  return LCL_RC_OK;
}

/* SetMusicVolume: Set volume for music (1.0 is max level) */
static int rl_fn_SetMusicVolume(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Music a0;
  double a1;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::set_music_volume", 2, argc);
  if (rl_get_Music(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::set_music_volume", 1, "music", "Music");
  if (rl_get_float(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::set_music_volume", 2, "volume", "float");
  SetMusicVolume(a0, (float)a1);
  return LCL_RC_OK;
}

/* SetMusicPitch: Set pitch for a music (1.0 is base level) */
static int rl_fn_SetMusicPitch(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Music a0;
  double a1;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::set_music_pitch", 2, argc);
  if (rl_get_Music(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::set_music_pitch", 1, "music", "Music");
  if (rl_get_float(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::set_music_pitch", 2, "pitch", "float");
  SetMusicPitch(a0, (float)a1);
  return LCL_RC_OK;
}

/* SetMusicPan: Set pan for a music (-1.0 left, 0.0 center, 1.0 right) */
static int rl_fn_SetMusicPan(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Music a0;
  double a1;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::set_music_pan", 2, argc);
  if (rl_get_Music(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::set_music_pan", 1, "music", "Music");
  if (rl_get_float(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::set_music_pan", 2, "pan", "float");
  SetMusicPan(a0, (float)a1);
  return LCL_RC_OK;
}

/* GetMusicTimeLength: Get music time length (in seconds) */
static int rl_fn_GetMusicTimeLength(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Music a0;
  float r;
  if (argc != 1) return rl_arity_error(interp, "raylib::get_music_time_length", 1, argc);
  if (rl_get_Music(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::get_music_time_length", 1, "music", "Music");
  r = GetMusicTimeLength(a0);
  *out = lcl_float_new((double)r);
  return LCL_RC_OK;
}

/* GetMusicTimePlayed: Get current music time played (in seconds) */
static int rl_fn_GetMusicTimePlayed(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  Music a0;
  float r;
  if (argc != 1) return rl_arity_error(interp, "raylib::get_music_time_played", 1, argc);
  if (rl_get_Music(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::get_music_time_played", 1, "music", "Music");
  r = GetMusicTimePlayed(a0);
  *out = lcl_float_new((double)r);
  return LCL_RC_OK;
}

/* LoadAudioStream: Load audio stream (to stream raw audio pcm data) */
static int rl_fn_LoadAudioStream(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  long a0;
  long a1;
  long a2;
  AudioStream r;
  if (argc != 3) return rl_arity_error(interp, "raylib::load_audio_stream", 3, argc);
  if (rl_get_int(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::load_audio_stream", 1, "sampleRate", "int");
  if (rl_get_int(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::load_audio_stream", 2, "sampleSize", "int");
  if (rl_get_int(interp, argv[2], &a2) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::load_audio_stream", 3, "channels", "int");
  r = LoadAudioStream((unsigned int)a0, (unsigned int)a1, (unsigned int)a2);
  *out = rl_new_AudioStream(r);
  return LCL_RC_OK;
}

/* IsAudioStreamValid: Checks if an audio stream is valid (buffers initialized) */
static int rl_fn_IsAudioStreamValid(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  AudioStream a0;
  bool r;
  if (argc != 1) return rl_arity_error(interp, "raylib::is_audio_stream_valid", 1, argc);
  if (rl_get_AudioStream(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::is_audio_stream_valid", 1, "stream", "AudioStream");
  r = IsAudioStreamValid(a0);
  *out = lcl_int_new((long)r);
  return LCL_RC_OK;
}

/* UnloadAudioStream: Unload audio stream and free memory */
static int rl_fn_UnloadAudioStream(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  AudioStream a0;
  (void)out;
  if (argc != 1) return rl_arity_error(interp, "raylib::unload_audio_stream", 1, argc);
  if (rl_get_AudioStream(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::unload_audio_stream", 1, "stream", "AudioStream");
  UnloadAudioStream(a0);
  return LCL_RC_OK;
}

/* IsAudioStreamProcessed: Check if any audio stream buffers requires refill */
static int rl_fn_IsAudioStreamProcessed(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  AudioStream a0;
  bool r;
  if (argc != 1) return rl_arity_error(interp, "raylib::is_audio_stream_processed", 1, argc);
  if (rl_get_AudioStream(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::is_audio_stream_processed", 1, "stream", "AudioStream");
  r = IsAudioStreamProcessed(a0);
  *out = lcl_int_new((long)r);
  return LCL_RC_OK;
}

/* PlayAudioStream: Play audio stream */
static int rl_fn_PlayAudioStream(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  AudioStream a0;
  (void)out;
  if (argc != 1) return rl_arity_error(interp, "raylib::play_audio_stream", 1, argc);
  if (rl_get_AudioStream(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::play_audio_stream", 1, "stream", "AudioStream");
  PlayAudioStream(a0);
  return LCL_RC_OK;
}

/* PauseAudioStream: Pause audio stream */
static int rl_fn_PauseAudioStream(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  AudioStream a0;
  (void)out;
  if (argc != 1) return rl_arity_error(interp, "raylib::pause_audio_stream", 1, argc);
  if (rl_get_AudioStream(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::pause_audio_stream", 1, "stream", "AudioStream");
  PauseAudioStream(a0);
  return LCL_RC_OK;
}

/* ResumeAudioStream: Resume audio stream */
static int rl_fn_ResumeAudioStream(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  AudioStream a0;
  (void)out;
  if (argc != 1) return rl_arity_error(interp, "raylib::resume_audio_stream", 1, argc);
  if (rl_get_AudioStream(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::resume_audio_stream", 1, "stream", "AudioStream");
  ResumeAudioStream(a0);
  return LCL_RC_OK;
}

/* IsAudioStreamPlaying: Check if audio stream is playing */
static int rl_fn_IsAudioStreamPlaying(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  AudioStream a0;
  bool r;
  if (argc != 1) return rl_arity_error(interp, "raylib::is_audio_stream_playing", 1, argc);
  if (rl_get_AudioStream(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::is_audio_stream_playing", 1, "stream", "AudioStream");
  r = IsAudioStreamPlaying(a0);
  *out = lcl_int_new((long)r);
  return LCL_RC_OK;
}

/* StopAudioStream: Stop audio stream */
static int rl_fn_StopAudioStream(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  AudioStream a0;
  (void)out;
  if (argc != 1) return rl_arity_error(interp, "raylib::stop_audio_stream", 1, argc);
  if (rl_get_AudioStream(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::stop_audio_stream", 1, "stream", "AudioStream");
  StopAudioStream(a0);
  return LCL_RC_OK;
}

/* SetAudioStreamVolume: Set volume for audio stream (1.0 is max level) */
static int rl_fn_SetAudioStreamVolume(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  AudioStream a0;
  double a1;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::set_audio_stream_volume", 2, argc);
  if (rl_get_AudioStream(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::set_audio_stream_volume", 1, "stream", "AudioStream");
  if (rl_get_float(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::set_audio_stream_volume", 2, "volume", "float");
  SetAudioStreamVolume(a0, (float)a1);
  return LCL_RC_OK;
}

/* SetAudioStreamPitch: Set pitch for audio stream (1.0 is base level) */
static int rl_fn_SetAudioStreamPitch(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  AudioStream a0;
  double a1;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::set_audio_stream_pitch", 2, argc);
  if (rl_get_AudioStream(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::set_audio_stream_pitch", 1, "stream", "AudioStream");
  if (rl_get_float(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::set_audio_stream_pitch", 2, "pitch", "float");
  SetAudioStreamPitch(a0, (float)a1);
  return LCL_RC_OK;
}

/* SetAudioStreamPan: Set pan for audio stream (-1.0 to 1.0 range, 0.0 is centered) */
static int rl_fn_SetAudioStreamPan(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  AudioStream a0;
  double a1;
  (void)out;
  if (argc != 2) return rl_arity_error(interp, "raylib::set_audio_stream_pan", 2, argc);
  if (rl_get_AudioStream(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::set_audio_stream_pan", 1, "stream", "AudioStream");
  if (rl_get_float(interp, argv[1], &a1) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::set_audio_stream_pan", 2, "pan", "float");
  SetAudioStreamPan(a0, (float)a1);
  return LCL_RC_OK;
}

/* SetAudioStreamBufferSizeDefault: Default size for new audio streams */
static int rl_fn_SetAudioStreamBufferSizeDefault(lcl_interp *interp, int argc, lcl_value **argv, lcl_value **out) {
  long a0;
  (void)out;
  if (argc != 1) return rl_arity_error(interp, "raylib::set_audio_stream_buffer_size_default", 1, argc);
  if (rl_get_int(interp, argv[0], &a0) != LCL_RC_OK) return RL_ARG_ERR(interp, "raylib::set_audio_stream_buffer_size_default", 1, "size", "int");
  SetAudioStreamBufferSizeDefault((int)a0);
  return LCL_RC_OK;
}

void lcl_raylib_register_generated(lcl_interp *interp, lcl_value *ns) {
  (void)interp;
  lcl_ns_def(ns, "vector2", lcl_c_proc_new("raylib::vector2", rl_ctor_Vector2));
  lcl_ns_def(ns, "vector2_x", lcl_c_proc_new("raylib::vector2_x", rl_get_Vector2_x));
  lcl_ns_def(ns, "vector2_set_x", lcl_c_proc_new("raylib::vector2_set_x", rl_set_Vector2_x));
  lcl_ns_def(ns, "vector2_y", lcl_c_proc_new("raylib::vector2_y", rl_get_Vector2_y));
  lcl_ns_def(ns, "vector2_set_y", lcl_c_proc_new("raylib::vector2_set_y", rl_set_Vector2_y));
  lcl_ns_def(ns, "vector3", lcl_c_proc_new("raylib::vector3", rl_ctor_Vector3));
  lcl_ns_def(ns, "vector3_x", lcl_c_proc_new("raylib::vector3_x", rl_get_Vector3_x));
  lcl_ns_def(ns, "vector3_set_x", lcl_c_proc_new("raylib::vector3_set_x", rl_set_Vector3_x));
  lcl_ns_def(ns, "vector3_y", lcl_c_proc_new("raylib::vector3_y", rl_get_Vector3_y));
  lcl_ns_def(ns, "vector3_set_y", lcl_c_proc_new("raylib::vector3_set_y", rl_set_Vector3_y));
  lcl_ns_def(ns, "vector3_z", lcl_c_proc_new("raylib::vector3_z", rl_get_Vector3_z));
  lcl_ns_def(ns, "vector3_set_z", lcl_c_proc_new("raylib::vector3_set_z", rl_set_Vector3_z));
  lcl_ns_def(ns, "vector4", lcl_c_proc_new("raylib::vector4", rl_ctor_Vector4));
  lcl_ns_def(ns, "vector4_x", lcl_c_proc_new("raylib::vector4_x", rl_get_Vector4_x));
  lcl_ns_def(ns, "vector4_set_x", lcl_c_proc_new("raylib::vector4_set_x", rl_set_Vector4_x));
  lcl_ns_def(ns, "vector4_y", lcl_c_proc_new("raylib::vector4_y", rl_get_Vector4_y));
  lcl_ns_def(ns, "vector4_set_y", lcl_c_proc_new("raylib::vector4_set_y", rl_set_Vector4_y));
  lcl_ns_def(ns, "vector4_z", lcl_c_proc_new("raylib::vector4_z", rl_get_Vector4_z));
  lcl_ns_def(ns, "vector4_set_z", lcl_c_proc_new("raylib::vector4_set_z", rl_set_Vector4_z));
  lcl_ns_def(ns, "vector4_w", lcl_c_proc_new("raylib::vector4_w", rl_get_Vector4_w));
  lcl_ns_def(ns, "vector4_set_w", lcl_c_proc_new("raylib::vector4_set_w", rl_set_Vector4_w));
  lcl_ns_def(ns, "matrix", lcl_c_proc_new("raylib::matrix", rl_ctor_Matrix));
  lcl_ns_def(ns, "matrix_m0", lcl_c_proc_new("raylib::matrix_m0", rl_get_Matrix_m0));
  lcl_ns_def(ns, "matrix_set_m0", lcl_c_proc_new("raylib::matrix_set_m0", rl_set_Matrix_m0));
  lcl_ns_def(ns, "matrix_m4", lcl_c_proc_new("raylib::matrix_m4", rl_get_Matrix_m4));
  lcl_ns_def(ns, "matrix_set_m4", lcl_c_proc_new("raylib::matrix_set_m4", rl_set_Matrix_m4));
  lcl_ns_def(ns, "matrix_m8", lcl_c_proc_new("raylib::matrix_m8", rl_get_Matrix_m8));
  lcl_ns_def(ns, "matrix_set_m8", lcl_c_proc_new("raylib::matrix_set_m8", rl_set_Matrix_m8));
  lcl_ns_def(ns, "matrix_m12", lcl_c_proc_new("raylib::matrix_m12", rl_get_Matrix_m12));
  lcl_ns_def(ns, "matrix_set_m12", lcl_c_proc_new("raylib::matrix_set_m12", rl_set_Matrix_m12));
  lcl_ns_def(ns, "matrix_m1", lcl_c_proc_new("raylib::matrix_m1", rl_get_Matrix_m1));
  lcl_ns_def(ns, "matrix_set_m1", lcl_c_proc_new("raylib::matrix_set_m1", rl_set_Matrix_m1));
  lcl_ns_def(ns, "matrix_m5", lcl_c_proc_new("raylib::matrix_m5", rl_get_Matrix_m5));
  lcl_ns_def(ns, "matrix_set_m5", lcl_c_proc_new("raylib::matrix_set_m5", rl_set_Matrix_m5));
  lcl_ns_def(ns, "matrix_m9", lcl_c_proc_new("raylib::matrix_m9", rl_get_Matrix_m9));
  lcl_ns_def(ns, "matrix_set_m9", lcl_c_proc_new("raylib::matrix_set_m9", rl_set_Matrix_m9));
  lcl_ns_def(ns, "matrix_m13", lcl_c_proc_new("raylib::matrix_m13", rl_get_Matrix_m13));
  lcl_ns_def(ns, "matrix_set_m13", lcl_c_proc_new("raylib::matrix_set_m13", rl_set_Matrix_m13));
  lcl_ns_def(ns, "matrix_m2", lcl_c_proc_new("raylib::matrix_m2", rl_get_Matrix_m2));
  lcl_ns_def(ns, "matrix_set_m2", lcl_c_proc_new("raylib::matrix_set_m2", rl_set_Matrix_m2));
  lcl_ns_def(ns, "matrix_m6", lcl_c_proc_new("raylib::matrix_m6", rl_get_Matrix_m6));
  lcl_ns_def(ns, "matrix_set_m6", lcl_c_proc_new("raylib::matrix_set_m6", rl_set_Matrix_m6));
  lcl_ns_def(ns, "matrix_m10", lcl_c_proc_new("raylib::matrix_m10", rl_get_Matrix_m10));
  lcl_ns_def(ns, "matrix_set_m10", lcl_c_proc_new("raylib::matrix_set_m10", rl_set_Matrix_m10));
  lcl_ns_def(ns, "matrix_m14", lcl_c_proc_new("raylib::matrix_m14", rl_get_Matrix_m14));
  lcl_ns_def(ns, "matrix_set_m14", lcl_c_proc_new("raylib::matrix_set_m14", rl_set_Matrix_m14));
  lcl_ns_def(ns, "matrix_m3", lcl_c_proc_new("raylib::matrix_m3", rl_get_Matrix_m3));
  lcl_ns_def(ns, "matrix_set_m3", lcl_c_proc_new("raylib::matrix_set_m3", rl_set_Matrix_m3));
  lcl_ns_def(ns, "matrix_m7", lcl_c_proc_new("raylib::matrix_m7", rl_get_Matrix_m7));
  lcl_ns_def(ns, "matrix_set_m7", lcl_c_proc_new("raylib::matrix_set_m7", rl_set_Matrix_m7));
  lcl_ns_def(ns, "matrix_m11", lcl_c_proc_new("raylib::matrix_m11", rl_get_Matrix_m11));
  lcl_ns_def(ns, "matrix_set_m11", lcl_c_proc_new("raylib::matrix_set_m11", rl_set_Matrix_m11));
  lcl_ns_def(ns, "matrix_m15", lcl_c_proc_new("raylib::matrix_m15", rl_get_Matrix_m15));
  lcl_ns_def(ns, "matrix_set_m15", lcl_c_proc_new("raylib::matrix_set_m15", rl_set_Matrix_m15));
  lcl_ns_def(ns, "color", lcl_c_proc_new("raylib::color", rl_ctor_Color));
  lcl_ns_def(ns, "color_r", lcl_c_proc_new("raylib::color_r", rl_get_Color_r));
  lcl_ns_def(ns, "color_set_r", lcl_c_proc_new("raylib::color_set_r", rl_set_Color_r));
  lcl_ns_def(ns, "color_g", lcl_c_proc_new("raylib::color_g", rl_get_Color_g));
  lcl_ns_def(ns, "color_set_g", lcl_c_proc_new("raylib::color_set_g", rl_set_Color_g));
  lcl_ns_def(ns, "color_b", lcl_c_proc_new("raylib::color_b", rl_get_Color_b));
  lcl_ns_def(ns, "color_set_b", lcl_c_proc_new("raylib::color_set_b", rl_set_Color_b));
  lcl_ns_def(ns, "color_a", lcl_c_proc_new("raylib::color_a", rl_get_Color_a));
  lcl_ns_def(ns, "color_set_a", lcl_c_proc_new("raylib::color_set_a", rl_set_Color_a));
  lcl_ns_def(ns, "rectangle", lcl_c_proc_new("raylib::rectangle", rl_ctor_Rectangle));
  lcl_ns_def(ns, "rectangle_x", lcl_c_proc_new("raylib::rectangle_x", rl_get_Rectangle_x));
  lcl_ns_def(ns, "rectangle_set_x", lcl_c_proc_new("raylib::rectangle_set_x", rl_set_Rectangle_x));
  lcl_ns_def(ns, "rectangle_y", lcl_c_proc_new("raylib::rectangle_y", rl_get_Rectangle_y));
  lcl_ns_def(ns, "rectangle_set_y", lcl_c_proc_new("raylib::rectangle_set_y", rl_set_Rectangle_y));
  lcl_ns_def(ns, "rectangle_width", lcl_c_proc_new("raylib::rectangle_width", rl_get_Rectangle_width));
  lcl_ns_def(ns, "rectangle_set_width", lcl_c_proc_new("raylib::rectangle_set_width", rl_set_Rectangle_width));
  lcl_ns_def(ns, "rectangle_height", lcl_c_proc_new("raylib::rectangle_height", rl_get_Rectangle_height));
  lcl_ns_def(ns, "rectangle_set_height", lcl_c_proc_new("raylib::rectangle_set_height", rl_set_Rectangle_height));
  lcl_ns_def(ns, "image_width", lcl_c_proc_new("raylib::image_width", rl_get_Image_width));
  lcl_ns_def(ns, "image_set_width", lcl_c_proc_new("raylib::image_set_width", rl_set_Image_width));
  lcl_ns_def(ns, "image_height", lcl_c_proc_new("raylib::image_height", rl_get_Image_height));
  lcl_ns_def(ns, "image_set_height", lcl_c_proc_new("raylib::image_set_height", rl_set_Image_height));
  lcl_ns_def(ns, "image_mipmaps", lcl_c_proc_new("raylib::image_mipmaps", rl_get_Image_mipmaps));
  lcl_ns_def(ns, "image_set_mipmaps", lcl_c_proc_new("raylib::image_set_mipmaps", rl_set_Image_mipmaps));
  lcl_ns_def(ns, "image_format", lcl_c_proc_new("raylib::image_format", rl_get_Image_format));
  lcl_ns_def(ns, "image_set_format", lcl_c_proc_new("raylib::image_set_format", rl_set_Image_format));
  lcl_ns_def(ns, "texture", lcl_c_proc_new("raylib::texture", rl_ctor_Texture));
  lcl_ns_def(ns, "texture_id", lcl_c_proc_new("raylib::texture_id", rl_get_Texture_id));
  lcl_ns_def(ns, "texture_set_id", lcl_c_proc_new("raylib::texture_set_id", rl_set_Texture_id));
  lcl_ns_def(ns, "texture_width", lcl_c_proc_new("raylib::texture_width", rl_get_Texture_width));
  lcl_ns_def(ns, "texture_set_width", lcl_c_proc_new("raylib::texture_set_width", rl_set_Texture_width));
  lcl_ns_def(ns, "texture_height", lcl_c_proc_new("raylib::texture_height", rl_get_Texture_height));
  lcl_ns_def(ns, "texture_set_height", lcl_c_proc_new("raylib::texture_set_height", rl_set_Texture_height));
  lcl_ns_def(ns, "texture_mipmaps", lcl_c_proc_new("raylib::texture_mipmaps", rl_get_Texture_mipmaps));
  lcl_ns_def(ns, "texture_set_mipmaps", lcl_c_proc_new("raylib::texture_set_mipmaps", rl_set_Texture_mipmaps));
  lcl_ns_def(ns, "texture_format", lcl_c_proc_new("raylib::texture_format", rl_get_Texture_format));
  lcl_ns_def(ns, "texture_set_format", lcl_c_proc_new("raylib::texture_set_format", rl_set_Texture_format));
  lcl_ns_def(ns, "render_texture", lcl_c_proc_new("raylib::render_texture", rl_ctor_RenderTexture));
  lcl_ns_def(ns, "render_texture_id", lcl_c_proc_new("raylib::render_texture_id", rl_get_RenderTexture_id));
  lcl_ns_def(ns, "render_texture_set_id", lcl_c_proc_new("raylib::render_texture_set_id", rl_set_RenderTexture_id));
  lcl_ns_def(ns, "render_texture_texture", lcl_c_proc_new("raylib::render_texture_texture", rl_get_RenderTexture_texture));
  lcl_ns_def(ns, "render_texture_set_texture", lcl_c_proc_new("raylib::render_texture_set_texture", rl_set_RenderTexture_texture));
  lcl_ns_def(ns, "render_texture_depth", lcl_c_proc_new("raylib::render_texture_depth", rl_get_RenderTexture_depth));
  lcl_ns_def(ns, "render_texture_set_depth", lcl_c_proc_new("raylib::render_texture_set_depth", rl_set_RenderTexture_depth));
  lcl_ns_def(ns, "npatch_info", lcl_c_proc_new("raylib::npatch_info", rl_ctor_NPatchInfo));
  lcl_ns_def(ns, "npatch_info_source", lcl_c_proc_new("raylib::npatch_info_source", rl_get_NPatchInfo_source));
  lcl_ns_def(ns, "npatch_info_set_source", lcl_c_proc_new("raylib::npatch_info_set_source", rl_set_NPatchInfo_source));
  lcl_ns_def(ns, "npatch_info_left", lcl_c_proc_new("raylib::npatch_info_left", rl_get_NPatchInfo_left));
  lcl_ns_def(ns, "npatch_info_set_left", lcl_c_proc_new("raylib::npatch_info_set_left", rl_set_NPatchInfo_left));
  lcl_ns_def(ns, "npatch_info_top", lcl_c_proc_new("raylib::npatch_info_top", rl_get_NPatchInfo_top));
  lcl_ns_def(ns, "npatch_info_set_top", lcl_c_proc_new("raylib::npatch_info_set_top", rl_set_NPatchInfo_top));
  lcl_ns_def(ns, "npatch_info_right", lcl_c_proc_new("raylib::npatch_info_right", rl_get_NPatchInfo_right));
  lcl_ns_def(ns, "npatch_info_set_right", lcl_c_proc_new("raylib::npatch_info_set_right", rl_set_NPatchInfo_right));
  lcl_ns_def(ns, "npatch_info_bottom", lcl_c_proc_new("raylib::npatch_info_bottom", rl_get_NPatchInfo_bottom));
  lcl_ns_def(ns, "npatch_info_set_bottom", lcl_c_proc_new("raylib::npatch_info_set_bottom", rl_set_NPatchInfo_bottom));
  lcl_ns_def(ns, "npatch_info_layout", lcl_c_proc_new("raylib::npatch_info_layout", rl_get_NPatchInfo_layout));
  lcl_ns_def(ns, "npatch_info_set_layout", lcl_c_proc_new("raylib::npatch_info_set_layout", rl_set_NPatchInfo_layout));
  lcl_ns_def(ns, "glyph_info_value", lcl_c_proc_new("raylib::glyph_info_value", rl_get_GlyphInfo_value));
  lcl_ns_def(ns, "glyph_info_set_value", lcl_c_proc_new("raylib::glyph_info_set_value", rl_set_GlyphInfo_value));
  lcl_ns_def(ns, "glyph_info_offset_x", lcl_c_proc_new("raylib::glyph_info_offset_x", rl_get_GlyphInfo_offsetX));
  lcl_ns_def(ns, "glyph_info_set_offset_x", lcl_c_proc_new("raylib::glyph_info_set_offset_x", rl_set_GlyphInfo_offsetX));
  lcl_ns_def(ns, "glyph_info_offset_y", lcl_c_proc_new("raylib::glyph_info_offset_y", rl_get_GlyphInfo_offsetY));
  lcl_ns_def(ns, "glyph_info_set_offset_y", lcl_c_proc_new("raylib::glyph_info_set_offset_y", rl_set_GlyphInfo_offsetY));
  lcl_ns_def(ns, "glyph_info_advance_x", lcl_c_proc_new("raylib::glyph_info_advance_x", rl_get_GlyphInfo_advanceX));
  lcl_ns_def(ns, "glyph_info_set_advance_x", lcl_c_proc_new("raylib::glyph_info_set_advance_x", rl_set_GlyphInfo_advanceX));
  lcl_ns_def(ns, "glyph_info_image", lcl_c_proc_new("raylib::glyph_info_image", rl_get_GlyphInfo_image));
  lcl_ns_def(ns, "glyph_info_set_image", lcl_c_proc_new("raylib::glyph_info_set_image", rl_set_GlyphInfo_image));
  lcl_ns_def(ns, "font_base_size", lcl_c_proc_new("raylib::font_base_size", rl_get_Font_baseSize));
  lcl_ns_def(ns, "font_set_base_size", lcl_c_proc_new("raylib::font_set_base_size", rl_set_Font_baseSize));
  lcl_ns_def(ns, "font_glyph_count", lcl_c_proc_new("raylib::font_glyph_count", rl_get_Font_glyphCount));
  lcl_ns_def(ns, "font_set_glyph_count", lcl_c_proc_new("raylib::font_set_glyph_count", rl_set_Font_glyphCount));
  lcl_ns_def(ns, "font_glyph_padding", lcl_c_proc_new("raylib::font_glyph_padding", rl_get_Font_glyphPadding));
  lcl_ns_def(ns, "font_set_glyph_padding", lcl_c_proc_new("raylib::font_set_glyph_padding", rl_set_Font_glyphPadding));
  lcl_ns_def(ns, "font_texture", lcl_c_proc_new("raylib::font_texture", rl_get_Font_texture));
  lcl_ns_def(ns, "font_set_texture", lcl_c_proc_new("raylib::font_set_texture", rl_set_Font_texture));
  lcl_ns_def(ns, "camera_3d", lcl_c_proc_new("raylib::camera_3d", rl_ctor_Camera3D));
  lcl_ns_def(ns, "camera_3d_position", lcl_c_proc_new("raylib::camera_3d_position", rl_get_Camera3D_position));
  lcl_ns_def(ns, "camera_3d_set_position", lcl_c_proc_new("raylib::camera_3d_set_position", rl_set_Camera3D_position));
  lcl_ns_def(ns, "camera_3d_target", lcl_c_proc_new("raylib::camera_3d_target", rl_get_Camera3D_target));
  lcl_ns_def(ns, "camera_3d_set_target", lcl_c_proc_new("raylib::camera_3d_set_target", rl_set_Camera3D_target));
  lcl_ns_def(ns, "camera_3d_up", lcl_c_proc_new("raylib::camera_3d_up", rl_get_Camera3D_up));
  lcl_ns_def(ns, "camera_3d_set_up", lcl_c_proc_new("raylib::camera_3d_set_up", rl_set_Camera3D_up));
  lcl_ns_def(ns, "camera_3d_fovy", lcl_c_proc_new("raylib::camera_3d_fovy", rl_get_Camera3D_fovy));
  lcl_ns_def(ns, "camera_3d_set_fovy", lcl_c_proc_new("raylib::camera_3d_set_fovy", rl_set_Camera3D_fovy));
  lcl_ns_def(ns, "camera_3d_projection", lcl_c_proc_new("raylib::camera_3d_projection", rl_get_Camera3D_projection));
  lcl_ns_def(ns, "camera_3d_set_projection", lcl_c_proc_new("raylib::camera_3d_set_projection", rl_set_Camera3D_projection));
  lcl_ns_def(ns, "camera_2d", lcl_c_proc_new("raylib::camera_2d", rl_ctor_Camera2D));
  lcl_ns_def(ns, "camera_2d_offset", lcl_c_proc_new("raylib::camera_2d_offset", rl_get_Camera2D_offset));
  lcl_ns_def(ns, "camera_2d_set_offset", lcl_c_proc_new("raylib::camera_2d_set_offset", rl_set_Camera2D_offset));
  lcl_ns_def(ns, "camera_2d_target", lcl_c_proc_new("raylib::camera_2d_target", rl_get_Camera2D_target));
  lcl_ns_def(ns, "camera_2d_set_target", lcl_c_proc_new("raylib::camera_2d_set_target", rl_set_Camera2D_target));
  lcl_ns_def(ns, "camera_2d_rotation", lcl_c_proc_new("raylib::camera_2d_rotation", rl_get_Camera2D_rotation));
  lcl_ns_def(ns, "camera_2d_set_rotation", lcl_c_proc_new("raylib::camera_2d_set_rotation", rl_set_Camera2D_rotation));
  lcl_ns_def(ns, "camera_2d_zoom", lcl_c_proc_new("raylib::camera_2d_zoom", rl_get_Camera2D_zoom));
  lcl_ns_def(ns, "camera_2d_set_zoom", lcl_c_proc_new("raylib::camera_2d_set_zoom", rl_set_Camera2D_zoom));
  lcl_ns_def(ns, "mesh_vertex_count", lcl_c_proc_new("raylib::mesh_vertex_count", rl_get_Mesh_vertexCount));
  lcl_ns_def(ns, "mesh_set_vertex_count", lcl_c_proc_new("raylib::mesh_set_vertex_count", rl_set_Mesh_vertexCount));
  lcl_ns_def(ns, "mesh_triangle_count", lcl_c_proc_new("raylib::mesh_triangle_count", rl_get_Mesh_triangleCount));
  lcl_ns_def(ns, "mesh_set_triangle_count", lcl_c_proc_new("raylib::mesh_set_triangle_count", rl_set_Mesh_triangleCount));
  lcl_ns_def(ns, "mesh_bone_count", lcl_c_proc_new("raylib::mesh_bone_count", rl_get_Mesh_boneCount));
  lcl_ns_def(ns, "mesh_set_bone_count", lcl_c_proc_new("raylib::mesh_set_bone_count", rl_set_Mesh_boneCount));
  lcl_ns_def(ns, "mesh_vao_id", lcl_c_proc_new("raylib::mesh_vao_id", rl_get_Mesh_vaoId));
  lcl_ns_def(ns, "mesh_set_vao_id", lcl_c_proc_new("raylib::mesh_set_vao_id", rl_set_Mesh_vaoId));
  lcl_ns_def(ns, "shader_id", lcl_c_proc_new("raylib::shader_id", rl_get_Shader_id));
  lcl_ns_def(ns, "shader_set_id", lcl_c_proc_new("raylib::shader_set_id", rl_set_Shader_id));
  lcl_ns_def(ns, "material_map", lcl_c_proc_new("raylib::material_map", rl_ctor_MaterialMap));
  lcl_ns_def(ns, "material_map_texture", lcl_c_proc_new("raylib::material_map_texture", rl_get_MaterialMap_texture));
  lcl_ns_def(ns, "material_map_set_texture", lcl_c_proc_new("raylib::material_map_set_texture", rl_set_MaterialMap_texture));
  lcl_ns_def(ns, "material_map_color", lcl_c_proc_new("raylib::material_map_color", rl_get_MaterialMap_color));
  lcl_ns_def(ns, "material_map_set_color", lcl_c_proc_new("raylib::material_map_set_color", rl_set_MaterialMap_color));
  lcl_ns_def(ns, "material_map_value", lcl_c_proc_new("raylib::material_map_value", rl_get_MaterialMap_value));
  lcl_ns_def(ns, "material_map_set_value", lcl_c_proc_new("raylib::material_map_set_value", rl_set_MaterialMap_value));
  lcl_ns_def(ns, "material_shader", lcl_c_proc_new("raylib::material_shader", rl_get_Material_shader));
  lcl_ns_def(ns, "material_set_shader", lcl_c_proc_new("raylib::material_set_shader", rl_set_Material_shader));
  lcl_ns_def(ns, "material_params", lcl_c_proc_new("raylib::material_params", rl_get_Material_params));
  lcl_ns_def(ns, "material_set_params", lcl_c_proc_new("raylib::material_set_params", rl_set_Material_params));
  lcl_ns_def(ns, "transform", lcl_c_proc_new("raylib::transform", rl_ctor_Transform));
  lcl_ns_def(ns, "transform_translation", lcl_c_proc_new("raylib::transform_translation", rl_get_Transform_translation));
  lcl_ns_def(ns, "transform_set_translation", lcl_c_proc_new("raylib::transform_set_translation", rl_set_Transform_translation));
  lcl_ns_def(ns, "transform_rotation", lcl_c_proc_new("raylib::transform_rotation", rl_get_Transform_rotation));
  lcl_ns_def(ns, "transform_set_rotation", lcl_c_proc_new("raylib::transform_set_rotation", rl_set_Transform_rotation));
  lcl_ns_def(ns, "transform_scale", lcl_c_proc_new("raylib::transform_scale", rl_get_Transform_scale));
  lcl_ns_def(ns, "transform_set_scale", lcl_c_proc_new("raylib::transform_set_scale", rl_set_Transform_scale));
  lcl_ns_def(ns, "bone_info_name", lcl_c_proc_new("raylib::bone_info_name", rl_get_BoneInfo_name));
  lcl_ns_def(ns, "bone_info_parent", lcl_c_proc_new("raylib::bone_info_parent", rl_get_BoneInfo_parent));
  lcl_ns_def(ns, "bone_info_set_parent", lcl_c_proc_new("raylib::bone_info_set_parent", rl_set_BoneInfo_parent));
  lcl_ns_def(ns, "model_skeleton_bone_count", lcl_c_proc_new("raylib::model_skeleton_bone_count", rl_get_ModelSkeleton_boneCount));
  lcl_ns_def(ns, "model_skeleton_set_bone_count", lcl_c_proc_new("raylib::model_skeleton_set_bone_count", rl_set_ModelSkeleton_boneCount));
  lcl_ns_def(ns, "model_transform", lcl_c_proc_new("raylib::model_transform", rl_get_Model_transform));
  lcl_ns_def(ns, "model_set_transform", lcl_c_proc_new("raylib::model_set_transform", rl_set_Model_transform));
  lcl_ns_def(ns, "model_mesh_count", lcl_c_proc_new("raylib::model_mesh_count", rl_get_Model_meshCount));
  lcl_ns_def(ns, "model_set_mesh_count", lcl_c_proc_new("raylib::model_set_mesh_count", rl_set_Model_meshCount));
  lcl_ns_def(ns, "model_material_count", lcl_c_proc_new("raylib::model_material_count", rl_get_Model_materialCount));
  lcl_ns_def(ns, "model_set_material_count", lcl_c_proc_new("raylib::model_set_material_count", rl_set_Model_materialCount));
  lcl_ns_def(ns, "model_skeleton", lcl_c_proc_new("raylib::model_skeleton", rl_get_Model_skeleton));
  lcl_ns_def(ns, "model_set_skeleton", lcl_c_proc_new("raylib::model_set_skeleton", rl_set_Model_skeleton));
  lcl_ns_def(ns, "model_animation_name", lcl_c_proc_new("raylib::model_animation_name", rl_get_ModelAnimation_name));
  lcl_ns_def(ns, "model_animation_bone_count", lcl_c_proc_new("raylib::model_animation_bone_count", rl_get_ModelAnimation_boneCount));
  lcl_ns_def(ns, "model_animation_set_bone_count", lcl_c_proc_new("raylib::model_animation_set_bone_count", rl_set_ModelAnimation_boneCount));
  lcl_ns_def(ns, "model_animation_keyframe_count", lcl_c_proc_new("raylib::model_animation_keyframe_count", rl_get_ModelAnimation_keyframeCount));
  lcl_ns_def(ns, "model_animation_set_keyframe_count", lcl_c_proc_new("raylib::model_animation_set_keyframe_count", rl_set_ModelAnimation_keyframeCount));
  lcl_ns_def(ns, "ray", lcl_c_proc_new("raylib::ray", rl_ctor_Ray));
  lcl_ns_def(ns, "ray_position", lcl_c_proc_new("raylib::ray_position", rl_get_Ray_position));
  lcl_ns_def(ns, "ray_set_position", lcl_c_proc_new("raylib::ray_set_position", rl_set_Ray_position));
  lcl_ns_def(ns, "ray_direction", lcl_c_proc_new("raylib::ray_direction", rl_get_Ray_direction));
  lcl_ns_def(ns, "ray_set_direction", lcl_c_proc_new("raylib::ray_set_direction", rl_set_Ray_direction));
  lcl_ns_def(ns, "ray_collision", lcl_c_proc_new("raylib::ray_collision", rl_ctor_RayCollision));
  lcl_ns_def(ns, "ray_collision_hit", lcl_c_proc_new("raylib::ray_collision_hit", rl_get_RayCollision_hit));
  lcl_ns_def(ns, "ray_collision_set_hit", lcl_c_proc_new("raylib::ray_collision_set_hit", rl_set_RayCollision_hit));
  lcl_ns_def(ns, "ray_collision_distance", lcl_c_proc_new("raylib::ray_collision_distance", rl_get_RayCollision_distance));
  lcl_ns_def(ns, "ray_collision_set_distance", lcl_c_proc_new("raylib::ray_collision_set_distance", rl_set_RayCollision_distance));
  lcl_ns_def(ns, "ray_collision_point", lcl_c_proc_new("raylib::ray_collision_point", rl_get_RayCollision_point));
  lcl_ns_def(ns, "ray_collision_set_point", lcl_c_proc_new("raylib::ray_collision_set_point", rl_set_RayCollision_point));
  lcl_ns_def(ns, "ray_collision_normal", lcl_c_proc_new("raylib::ray_collision_normal", rl_get_RayCollision_normal));
  lcl_ns_def(ns, "ray_collision_set_normal", lcl_c_proc_new("raylib::ray_collision_set_normal", rl_set_RayCollision_normal));
  lcl_ns_def(ns, "bounding_box", lcl_c_proc_new("raylib::bounding_box", rl_ctor_BoundingBox));
  lcl_ns_def(ns, "bounding_box_min", lcl_c_proc_new("raylib::bounding_box_min", rl_get_BoundingBox_min));
  lcl_ns_def(ns, "bounding_box_set_min", lcl_c_proc_new("raylib::bounding_box_set_min", rl_set_BoundingBox_min));
  lcl_ns_def(ns, "bounding_box_max", lcl_c_proc_new("raylib::bounding_box_max", rl_get_BoundingBox_max));
  lcl_ns_def(ns, "bounding_box_set_max", lcl_c_proc_new("raylib::bounding_box_set_max", rl_set_BoundingBox_max));
  lcl_ns_def(ns, "wave_frame_count", lcl_c_proc_new("raylib::wave_frame_count", rl_get_Wave_frameCount));
  lcl_ns_def(ns, "wave_set_frame_count", lcl_c_proc_new("raylib::wave_set_frame_count", rl_set_Wave_frameCount));
  lcl_ns_def(ns, "wave_sample_rate", lcl_c_proc_new("raylib::wave_sample_rate", rl_get_Wave_sampleRate));
  lcl_ns_def(ns, "wave_set_sample_rate", lcl_c_proc_new("raylib::wave_set_sample_rate", rl_set_Wave_sampleRate));
  lcl_ns_def(ns, "wave_sample_size", lcl_c_proc_new("raylib::wave_sample_size", rl_get_Wave_sampleSize));
  lcl_ns_def(ns, "wave_set_sample_size", lcl_c_proc_new("raylib::wave_set_sample_size", rl_set_Wave_sampleSize));
  lcl_ns_def(ns, "wave_channels", lcl_c_proc_new("raylib::wave_channels", rl_get_Wave_channels));
  lcl_ns_def(ns, "wave_set_channels", lcl_c_proc_new("raylib::wave_set_channels", rl_set_Wave_channels));
  lcl_ns_def(ns, "audio_stream_sample_rate", lcl_c_proc_new("raylib::audio_stream_sample_rate", rl_get_AudioStream_sampleRate));
  lcl_ns_def(ns, "audio_stream_set_sample_rate", lcl_c_proc_new("raylib::audio_stream_set_sample_rate", rl_set_AudioStream_sampleRate));
  lcl_ns_def(ns, "audio_stream_sample_size", lcl_c_proc_new("raylib::audio_stream_sample_size", rl_get_AudioStream_sampleSize));
  lcl_ns_def(ns, "audio_stream_set_sample_size", lcl_c_proc_new("raylib::audio_stream_set_sample_size", rl_set_AudioStream_sampleSize));
  lcl_ns_def(ns, "audio_stream_channels", lcl_c_proc_new("raylib::audio_stream_channels", rl_get_AudioStream_channels));
  lcl_ns_def(ns, "audio_stream_set_channels", lcl_c_proc_new("raylib::audio_stream_set_channels", rl_set_AudioStream_channels));
  lcl_ns_def(ns, "sound_stream", lcl_c_proc_new("raylib::sound_stream", rl_get_Sound_stream));
  lcl_ns_def(ns, "sound_set_stream", lcl_c_proc_new("raylib::sound_set_stream", rl_set_Sound_stream));
  lcl_ns_def(ns, "sound_frame_count", lcl_c_proc_new("raylib::sound_frame_count", rl_get_Sound_frameCount));
  lcl_ns_def(ns, "sound_set_frame_count", lcl_c_proc_new("raylib::sound_set_frame_count", rl_set_Sound_frameCount));
  lcl_ns_def(ns, "music_stream", lcl_c_proc_new("raylib::music_stream", rl_get_Music_stream));
  lcl_ns_def(ns, "music_set_stream", lcl_c_proc_new("raylib::music_set_stream", rl_set_Music_stream));
  lcl_ns_def(ns, "music_frame_count", lcl_c_proc_new("raylib::music_frame_count", rl_get_Music_frameCount));
  lcl_ns_def(ns, "music_set_frame_count", lcl_c_proc_new("raylib::music_set_frame_count", rl_set_Music_frameCount));
  lcl_ns_def(ns, "music_looping", lcl_c_proc_new("raylib::music_looping", rl_get_Music_looping));
  lcl_ns_def(ns, "music_set_looping", lcl_c_proc_new("raylib::music_set_looping", rl_set_Music_looping));
  lcl_ns_def(ns, "music_ctx_type", lcl_c_proc_new("raylib::music_ctx_type", rl_get_Music_ctxType));
  lcl_ns_def(ns, "music_set_ctx_type", lcl_c_proc_new("raylib::music_set_ctx_type", rl_set_Music_ctxType));
  lcl_ns_def(ns, "vr_device_info_h_resolution", lcl_c_proc_new("raylib::vr_device_info_h_resolution", rl_get_VrDeviceInfo_hResolution));
  lcl_ns_def(ns, "vr_device_info_set_h_resolution", lcl_c_proc_new("raylib::vr_device_info_set_h_resolution", rl_set_VrDeviceInfo_hResolution));
  lcl_ns_def(ns, "vr_device_info_v_resolution", lcl_c_proc_new("raylib::vr_device_info_v_resolution", rl_get_VrDeviceInfo_vResolution));
  lcl_ns_def(ns, "vr_device_info_set_v_resolution", lcl_c_proc_new("raylib::vr_device_info_set_v_resolution", rl_set_VrDeviceInfo_vResolution));
  lcl_ns_def(ns, "vr_device_info_h_screen_size", lcl_c_proc_new("raylib::vr_device_info_h_screen_size", rl_get_VrDeviceInfo_hScreenSize));
  lcl_ns_def(ns, "vr_device_info_set_h_screen_size", lcl_c_proc_new("raylib::vr_device_info_set_h_screen_size", rl_set_VrDeviceInfo_hScreenSize));
  lcl_ns_def(ns, "vr_device_info_v_screen_size", lcl_c_proc_new("raylib::vr_device_info_v_screen_size", rl_get_VrDeviceInfo_vScreenSize));
  lcl_ns_def(ns, "vr_device_info_set_v_screen_size", lcl_c_proc_new("raylib::vr_device_info_set_v_screen_size", rl_set_VrDeviceInfo_vScreenSize));
  lcl_ns_def(ns, "vr_device_info_eye_to_screen_distance", lcl_c_proc_new("raylib::vr_device_info_eye_to_screen_distance", rl_get_VrDeviceInfo_eyeToScreenDistance));
  lcl_ns_def(ns, "vr_device_info_set_eye_to_screen_distance", lcl_c_proc_new("raylib::vr_device_info_set_eye_to_screen_distance", rl_set_VrDeviceInfo_eyeToScreenDistance));
  lcl_ns_def(ns, "vr_device_info_lens_separation_distance", lcl_c_proc_new("raylib::vr_device_info_lens_separation_distance", rl_get_VrDeviceInfo_lensSeparationDistance));
  lcl_ns_def(ns, "vr_device_info_set_lens_separation_distance", lcl_c_proc_new("raylib::vr_device_info_set_lens_separation_distance", rl_set_VrDeviceInfo_lensSeparationDistance));
  lcl_ns_def(ns, "vr_device_info_interpupillary_distance", lcl_c_proc_new("raylib::vr_device_info_interpupillary_distance", rl_get_VrDeviceInfo_interpupillaryDistance));
  lcl_ns_def(ns, "vr_device_info_set_interpupillary_distance", lcl_c_proc_new("raylib::vr_device_info_set_interpupillary_distance", rl_set_VrDeviceInfo_interpupillaryDistance));
  lcl_ns_def(ns, "vr_device_info_lens_distortion_values", lcl_c_proc_new("raylib::vr_device_info_lens_distortion_values", rl_get_VrDeviceInfo_lensDistortionValues));
  lcl_ns_def(ns, "vr_device_info_set_lens_distortion_values", lcl_c_proc_new("raylib::vr_device_info_set_lens_distortion_values", rl_set_VrDeviceInfo_lensDistortionValues));
  lcl_ns_def(ns, "vr_device_info_chroma_ab_correction", lcl_c_proc_new("raylib::vr_device_info_chroma_ab_correction", rl_get_VrDeviceInfo_chromaAbCorrection));
  lcl_ns_def(ns, "vr_device_info_set_chroma_ab_correction", lcl_c_proc_new("raylib::vr_device_info_set_chroma_ab_correction", rl_set_VrDeviceInfo_chromaAbCorrection));
  lcl_ns_def(ns, "vr_stereo_config_left_lens_center", lcl_c_proc_new("raylib::vr_stereo_config_left_lens_center", rl_get_VrStereoConfig_leftLensCenter));
  lcl_ns_def(ns, "vr_stereo_config_set_left_lens_center", lcl_c_proc_new("raylib::vr_stereo_config_set_left_lens_center", rl_set_VrStereoConfig_leftLensCenter));
  lcl_ns_def(ns, "vr_stereo_config_right_lens_center", lcl_c_proc_new("raylib::vr_stereo_config_right_lens_center", rl_get_VrStereoConfig_rightLensCenter));
  lcl_ns_def(ns, "vr_stereo_config_set_right_lens_center", lcl_c_proc_new("raylib::vr_stereo_config_set_right_lens_center", rl_set_VrStereoConfig_rightLensCenter));
  lcl_ns_def(ns, "vr_stereo_config_left_screen_center", lcl_c_proc_new("raylib::vr_stereo_config_left_screen_center", rl_get_VrStereoConfig_leftScreenCenter));
  lcl_ns_def(ns, "vr_stereo_config_set_left_screen_center", lcl_c_proc_new("raylib::vr_stereo_config_set_left_screen_center", rl_set_VrStereoConfig_leftScreenCenter));
  lcl_ns_def(ns, "vr_stereo_config_right_screen_center", lcl_c_proc_new("raylib::vr_stereo_config_right_screen_center", rl_get_VrStereoConfig_rightScreenCenter));
  lcl_ns_def(ns, "vr_stereo_config_set_right_screen_center", lcl_c_proc_new("raylib::vr_stereo_config_set_right_screen_center", rl_set_VrStereoConfig_rightScreenCenter));
  lcl_ns_def(ns, "vr_stereo_config_scale", lcl_c_proc_new("raylib::vr_stereo_config_scale", rl_get_VrStereoConfig_scale));
  lcl_ns_def(ns, "vr_stereo_config_set_scale", lcl_c_proc_new("raylib::vr_stereo_config_set_scale", rl_set_VrStereoConfig_scale));
  lcl_ns_def(ns, "vr_stereo_config_scale_in", lcl_c_proc_new("raylib::vr_stereo_config_scale_in", rl_get_VrStereoConfig_scaleIn));
  lcl_ns_def(ns, "vr_stereo_config_set_scale_in", lcl_c_proc_new("raylib::vr_stereo_config_set_scale_in", rl_set_VrStereoConfig_scaleIn));
  lcl_ns_def(ns, "file_path_list_count", lcl_c_proc_new("raylib::file_path_list_count", rl_get_FilePathList_count));
  lcl_ns_def(ns, "file_path_list_set_count", lcl_c_proc_new("raylib::file_path_list_set_count", rl_set_FilePathList_count));
  lcl_ns_def(ns, "automation_event_frame", lcl_c_proc_new("raylib::automation_event_frame", rl_get_AutomationEvent_frame));
  lcl_ns_def(ns, "automation_event_set_frame", lcl_c_proc_new("raylib::automation_event_set_frame", rl_set_AutomationEvent_frame));
  lcl_ns_def(ns, "automation_event_type", lcl_c_proc_new("raylib::automation_event_type", rl_get_AutomationEvent_type));
  lcl_ns_def(ns, "automation_event_set_type", lcl_c_proc_new("raylib::automation_event_set_type", rl_set_AutomationEvent_type));
  lcl_ns_def(ns, "automation_event_params", lcl_c_proc_new("raylib::automation_event_params", rl_get_AutomationEvent_params));
  lcl_ns_def(ns, "automation_event_set_params", lcl_c_proc_new("raylib::automation_event_set_params", rl_set_AutomationEvent_params));
  lcl_ns_def(ns, "automation_event_list_capacity", lcl_c_proc_new("raylib::automation_event_list_capacity", rl_get_AutomationEventList_capacity));
  lcl_ns_def(ns, "automation_event_list_set_capacity", lcl_c_proc_new("raylib::automation_event_list_set_capacity", rl_set_AutomationEventList_capacity));
  lcl_ns_def(ns, "automation_event_list_count", lcl_c_proc_new("raylib::automation_event_list_count", rl_get_AutomationEventList_count));
  lcl_ns_def(ns, "automation_event_list_set_count", lcl_c_proc_new("raylib::automation_event_list_set_count", rl_set_AutomationEventList_count));
  lcl_ns_def(ns, "init_window", lcl_c_proc_new("raylib::init_window", rl_fn_InitWindow));
  lcl_ns_def(ns, "close_window", lcl_c_proc_new("raylib::close_window", rl_fn_CloseWindow));
  lcl_ns_def(ns, "window_should_close", lcl_c_proc_new("raylib::window_should_close", rl_fn_WindowShouldClose));
  lcl_ns_def(ns, "is_window_ready", lcl_c_proc_new("raylib::is_window_ready", rl_fn_IsWindowReady));
  lcl_ns_def(ns, "is_window_fullscreen", lcl_c_proc_new("raylib::is_window_fullscreen", rl_fn_IsWindowFullscreen));
  lcl_ns_def(ns, "is_window_hidden", lcl_c_proc_new("raylib::is_window_hidden", rl_fn_IsWindowHidden));
  lcl_ns_def(ns, "is_window_minimized", lcl_c_proc_new("raylib::is_window_minimized", rl_fn_IsWindowMinimized));
  lcl_ns_def(ns, "is_window_maximized", lcl_c_proc_new("raylib::is_window_maximized", rl_fn_IsWindowMaximized));
  lcl_ns_def(ns, "is_window_focused", lcl_c_proc_new("raylib::is_window_focused", rl_fn_IsWindowFocused));
  lcl_ns_def(ns, "is_window_resized", lcl_c_proc_new("raylib::is_window_resized", rl_fn_IsWindowResized));
  lcl_ns_def(ns, "is_window_state", lcl_c_proc_new("raylib::is_window_state", rl_fn_IsWindowState));
  lcl_ns_def(ns, "set_window_state", lcl_c_proc_new("raylib::set_window_state", rl_fn_SetWindowState));
  lcl_ns_def(ns, "clear_window_state", lcl_c_proc_new("raylib::clear_window_state", rl_fn_ClearWindowState));
  lcl_ns_def(ns, "toggle_fullscreen", lcl_c_proc_new("raylib::toggle_fullscreen", rl_fn_ToggleFullscreen));
  lcl_ns_def(ns, "toggle_borderless_windowed", lcl_c_proc_new("raylib::toggle_borderless_windowed", rl_fn_ToggleBorderlessWindowed));
  lcl_ns_def(ns, "maximize_window", lcl_c_proc_new("raylib::maximize_window", rl_fn_MaximizeWindow));
  lcl_ns_def(ns, "minimize_window", lcl_c_proc_new("raylib::minimize_window", rl_fn_MinimizeWindow));
  lcl_ns_def(ns, "restore_window", lcl_c_proc_new("raylib::restore_window", rl_fn_RestoreWindow));
  lcl_ns_def(ns, "set_window_icon", lcl_c_proc_new("raylib::set_window_icon", rl_fn_SetWindowIcon));
  lcl_ns_def(ns, "set_window_icons", lcl_c_proc_new("raylib::set_window_icons", rl_fn_SetWindowIcons));
  lcl_ns_def(ns, "set_window_title", lcl_c_proc_new("raylib::set_window_title", rl_fn_SetWindowTitle));
  lcl_ns_def(ns, "set_window_position", lcl_c_proc_new("raylib::set_window_position", rl_fn_SetWindowPosition));
  lcl_ns_def(ns, "set_window_monitor", lcl_c_proc_new("raylib::set_window_monitor", rl_fn_SetWindowMonitor));
  lcl_ns_def(ns, "set_window_min_size", lcl_c_proc_new("raylib::set_window_min_size", rl_fn_SetWindowMinSize));
  lcl_ns_def(ns, "set_window_max_size", lcl_c_proc_new("raylib::set_window_max_size", rl_fn_SetWindowMaxSize));
  lcl_ns_def(ns, "set_window_size", lcl_c_proc_new("raylib::set_window_size", rl_fn_SetWindowSize));
  lcl_ns_def(ns, "set_window_opacity", lcl_c_proc_new("raylib::set_window_opacity", rl_fn_SetWindowOpacity));
  lcl_ns_def(ns, "set_window_focused", lcl_c_proc_new("raylib::set_window_focused", rl_fn_SetWindowFocused));
  lcl_ns_def(ns, "get_screen_width", lcl_c_proc_new("raylib::get_screen_width", rl_fn_GetScreenWidth));
  lcl_ns_def(ns, "get_screen_height", lcl_c_proc_new("raylib::get_screen_height", rl_fn_GetScreenHeight));
  lcl_ns_def(ns, "get_render_width", lcl_c_proc_new("raylib::get_render_width", rl_fn_GetRenderWidth));
  lcl_ns_def(ns, "get_render_height", lcl_c_proc_new("raylib::get_render_height", rl_fn_GetRenderHeight));
  lcl_ns_def(ns, "get_monitor_count", lcl_c_proc_new("raylib::get_monitor_count", rl_fn_GetMonitorCount));
  lcl_ns_def(ns, "get_current_monitor", lcl_c_proc_new("raylib::get_current_monitor", rl_fn_GetCurrentMonitor));
  lcl_ns_def(ns, "get_monitor_position", lcl_c_proc_new("raylib::get_monitor_position", rl_fn_GetMonitorPosition));
  lcl_ns_def(ns, "get_monitor_width", lcl_c_proc_new("raylib::get_monitor_width", rl_fn_GetMonitorWidth));
  lcl_ns_def(ns, "get_monitor_height", lcl_c_proc_new("raylib::get_monitor_height", rl_fn_GetMonitorHeight));
  lcl_ns_def(ns, "get_monitor_physical_width", lcl_c_proc_new("raylib::get_monitor_physical_width", rl_fn_GetMonitorPhysicalWidth));
  lcl_ns_def(ns, "get_monitor_physical_height", lcl_c_proc_new("raylib::get_monitor_physical_height", rl_fn_GetMonitorPhysicalHeight));
  lcl_ns_def(ns, "get_monitor_refresh_rate", lcl_c_proc_new("raylib::get_monitor_refresh_rate", rl_fn_GetMonitorRefreshRate));
  lcl_ns_def(ns, "get_window_position", lcl_c_proc_new("raylib::get_window_position", rl_fn_GetWindowPosition));
  lcl_ns_def(ns, "get_window_scale_dpi", lcl_c_proc_new("raylib::get_window_scale_dpi", rl_fn_GetWindowScaleDPI));
  lcl_ns_def(ns, "get_monitor_name", lcl_c_proc_new("raylib::get_monitor_name", rl_fn_GetMonitorName));
  lcl_ns_def(ns, "set_clipboard_text", lcl_c_proc_new("raylib::set_clipboard_text", rl_fn_SetClipboardText));
  lcl_ns_def(ns, "get_clipboard_text", lcl_c_proc_new("raylib::get_clipboard_text", rl_fn_GetClipboardText));
  lcl_ns_def(ns, "get_clipboard_image", lcl_c_proc_new("raylib::get_clipboard_image", rl_fn_GetClipboardImage));
  lcl_ns_def(ns, "enable_event_waiting", lcl_c_proc_new("raylib::enable_event_waiting", rl_fn_EnableEventWaiting));
  lcl_ns_def(ns, "disable_event_waiting", lcl_c_proc_new("raylib::disable_event_waiting", rl_fn_DisableEventWaiting));
  lcl_ns_def(ns, "show_cursor", lcl_c_proc_new("raylib::show_cursor", rl_fn_ShowCursor));
  lcl_ns_def(ns, "hide_cursor", lcl_c_proc_new("raylib::hide_cursor", rl_fn_HideCursor));
  lcl_ns_def(ns, "is_cursor_hidden", lcl_c_proc_new("raylib::is_cursor_hidden", rl_fn_IsCursorHidden));
  lcl_ns_def(ns, "enable_cursor", lcl_c_proc_new("raylib::enable_cursor", rl_fn_EnableCursor));
  lcl_ns_def(ns, "disable_cursor", lcl_c_proc_new("raylib::disable_cursor", rl_fn_DisableCursor));
  lcl_ns_def(ns, "is_cursor_on_screen", lcl_c_proc_new("raylib::is_cursor_on_screen", rl_fn_IsCursorOnScreen));
  lcl_ns_def(ns, "clear_background", lcl_c_proc_new("raylib::clear_background", rl_fn_ClearBackground));
  lcl_ns_def(ns, "begin_drawing", lcl_c_proc_new("raylib::begin_drawing", rl_fn_BeginDrawing));
  lcl_ns_def(ns, "end_drawing", lcl_c_proc_new("raylib::end_drawing", rl_fn_EndDrawing));
  lcl_ns_def(ns, "begin_mode_2d", lcl_c_proc_new("raylib::begin_mode_2d", rl_fn_BeginMode2D));
  lcl_ns_def(ns, "end_mode_2d", lcl_c_proc_new("raylib::end_mode_2d", rl_fn_EndMode2D));
  lcl_ns_def(ns, "begin_mode_3d", lcl_c_proc_new("raylib::begin_mode_3d", rl_fn_BeginMode3D));
  lcl_ns_def(ns, "end_mode_3d", lcl_c_proc_new("raylib::end_mode_3d", rl_fn_EndMode3D));
  lcl_ns_def(ns, "begin_texture_mode", lcl_c_proc_new("raylib::begin_texture_mode", rl_fn_BeginTextureMode));
  lcl_ns_def(ns, "end_texture_mode", lcl_c_proc_new("raylib::end_texture_mode", rl_fn_EndTextureMode));
  lcl_ns_def(ns, "begin_shader_mode", lcl_c_proc_new("raylib::begin_shader_mode", rl_fn_BeginShaderMode));
  lcl_ns_def(ns, "end_shader_mode", lcl_c_proc_new("raylib::end_shader_mode", rl_fn_EndShaderMode));
  lcl_ns_def(ns, "begin_blend_mode", lcl_c_proc_new("raylib::begin_blend_mode", rl_fn_BeginBlendMode));
  lcl_ns_def(ns, "end_blend_mode", lcl_c_proc_new("raylib::end_blend_mode", rl_fn_EndBlendMode));
  lcl_ns_def(ns, "begin_scissor_mode", lcl_c_proc_new("raylib::begin_scissor_mode", rl_fn_BeginScissorMode));
  lcl_ns_def(ns, "end_scissor_mode", lcl_c_proc_new("raylib::end_scissor_mode", rl_fn_EndScissorMode));
  lcl_ns_def(ns, "begin_vr_stereo_mode", lcl_c_proc_new("raylib::begin_vr_stereo_mode", rl_fn_BeginVrStereoMode));
  lcl_ns_def(ns, "end_vr_stereo_mode", lcl_c_proc_new("raylib::end_vr_stereo_mode", rl_fn_EndVrStereoMode));
  lcl_ns_def(ns, "load_vr_stereo_config", lcl_c_proc_new("raylib::load_vr_stereo_config", rl_fn_LoadVrStereoConfig));
  lcl_ns_def(ns, "unload_vr_stereo_config", lcl_c_proc_new("raylib::unload_vr_stereo_config", rl_fn_UnloadVrStereoConfig));
  lcl_ns_def(ns, "load_shader", lcl_c_proc_new("raylib::load_shader", rl_fn_LoadShader));
  lcl_ns_def(ns, "load_shader_from_memory", lcl_c_proc_new("raylib::load_shader_from_memory", rl_fn_LoadShaderFromMemory));
  lcl_ns_def(ns, "is_shader_valid", lcl_c_proc_new("raylib::is_shader_valid", rl_fn_IsShaderValid));
  lcl_ns_def(ns, "get_shader_location", lcl_c_proc_new("raylib::get_shader_location", rl_fn_GetShaderLocation));
  lcl_ns_def(ns, "get_shader_location_attrib", lcl_c_proc_new("raylib::get_shader_location_attrib", rl_fn_GetShaderLocationAttrib));
  lcl_ns_def(ns, "set_shader_value_matrix", lcl_c_proc_new("raylib::set_shader_value_matrix", rl_fn_SetShaderValueMatrix));
  lcl_ns_def(ns, "set_shader_value_texture", lcl_c_proc_new("raylib::set_shader_value_texture", rl_fn_SetShaderValueTexture));
  lcl_ns_def(ns, "unload_shader", lcl_c_proc_new("raylib::unload_shader", rl_fn_UnloadShader));
  lcl_ns_def(ns, "get_screen_to_world_ray", lcl_c_proc_new("raylib::get_screen_to_world_ray", rl_fn_GetScreenToWorldRay));
  lcl_ns_def(ns, "get_screen_to_world_ray_ex", lcl_c_proc_new("raylib::get_screen_to_world_ray_ex", rl_fn_GetScreenToWorldRayEx));
  lcl_ns_def(ns, "get_world_to_screen", lcl_c_proc_new("raylib::get_world_to_screen", rl_fn_GetWorldToScreen));
  lcl_ns_def(ns, "get_world_to_screen_ex", lcl_c_proc_new("raylib::get_world_to_screen_ex", rl_fn_GetWorldToScreenEx));
  lcl_ns_def(ns, "get_world_to_screen_2d", lcl_c_proc_new("raylib::get_world_to_screen_2d", rl_fn_GetWorldToScreen2D));
  lcl_ns_def(ns, "get_screen_to_world_2d", lcl_c_proc_new("raylib::get_screen_to_world_2d", rl_fn_GetScreenToWorld2D));
  lcl_ns_def(ns, "get_camera_matrix", lcl_c_proc_new("raylib::get_camera_matrix", rl_fn_GetCameraMatrix));
  lcl_ns_def(ns, "get_camera_matrix_2d", lcl_c_proc_new("raylib::get_camera_matrix_2d", rl_fn_GetCameraMatrix2D));
  lcl_ns_def(ns, "set_target_fps", lcl_c_proc_new("raylib::set_target_fps", rl_fn_SetTargetFPS));
  lcl_ns_def(ns, "get_frame_time", lcl_c_proc_new("raylib::get_frame_time", rl_fn_GetFrameTime));
  lcl_ns_def(ns, "get_time", lcl_c_proc_new("raylib::get_time", rl_fn_GetTime));
  lcl_ns_def(ns, "get_fps", lcl_c_proc_new("raylib::get_fps", rl_fn_GetFPS));
  lcl_ns_def(ns, "swap_screen_buffer", lcl_c_proc_new("raylib::swap_screen_buffer", rl_fn_SwapScreenBuffer));
  lcl_ns_def(ns, "poll_input_events", lcl_c_proc_new("raylib::poll_input_events", rl_fn_PollInputEvents));
  lcl_ns_def(ns, "wait_time", lcl_c_proc_new("raylib::wait_time", rl_fn_WaitTime));
  lcl_ns_def(ns, "set_random_seed", lcl_c_proc_new("raylib::set_random_seed", rl_fn_SetRandomSeed));
  lcl_ns_def(ns, "get_random_value", lcl_c_proc_new("raylib::get_random_value", rl_fn_GetRandomValue));
  lcl_ns_def(ns, "take_screenshot", lcl_c_proc_new("raylib::take_screenshot", rl_fn_TakeScreenshot));
  lcl_ns_def(ns, "set_config_flags", lcl_c_proc_new("raylib::set_config_flags", rl_fn_SetConfigFlags));
  lcl_ns_def(ns, "open_url", lcl_c_proc_new("raylib::open_url", rl_fn_OpenURL));
  lcl_ns_def(ns, "set_trace_log_level", lcl_c_proc_new("raylib::set_trace_log_level", rl_fn_SetTraceLogLevel));
  lcl_ns_def(ns, "save_file_text", lcl_c_proc_new("raylib::save_file_text", rl_fn_SaveFileText));
  lcl_ns_def(ns, "file_rename", lcl_c_proc_new("raylib::file_rename", rl_fn_FileRename));
  lcl_ns_def(ns, "file_remove", lcl_c_proc_new("raylib::file_remove", rl_fn_FileRemove));
  lcl_ns_def(ns, "file_copy", lcl_c_proc_new("raylib::file_copy", rl_fn_FileCopy));
  lcl_ns_def(ns, "file_move", lcl_c_proc_new("raylib::file_move", rl_fn_FileMove));
  lcl_ns_def(ns, "file_text_replace", lcl_c_proc_new("raylib::file_text_replace", rl_fn_FileTextReplace));
  lcl_ns_def(ns, "file_text_find_index", lcl_c_proc_new("raylib::file_text_find_index", rl_fn_FileTextFindIndex));
  lcl_ns_def(ns, "file_exists", lcl_c_proc_new("raylib::file_exists", rl_fn_FileExists));
  lcl_ns_def(ns, "directory_exists", lcl_c_proc_new("raylib::directory_exists", rl_fn_DirectoryExists));
  lcl_ns_def(ns, "is_file_extension", lcl_c_proc_new("raylib::is_file_extension", rl_fn_IsFileExtension));
  lcl_ns_def(ns, "get_file_length", lcl_c_proc_new("raylib::get_file_length", rl_fn_GetFileLength));
  lcl_ns_def(ns, "get_file_mod_time", lcl_c_proc_new("raylib::get_file_mod_time", rl_fn_GetFileModTime));
  lcl_ns_def(ns, "get_file_extension", lcl_c_proc_new("raylib::get_file_extension", rl_fn_GetFileExtension));
  lcl_ns_def(ns, "get_file_name", lcl_c_proc_new("raylib::get_file_name", rl_fn_GetFileName));
  lcl_ns_def(ns, "get_file_name_without_ext", lcl_c_proc_new("raylib::get_file_name_without_ext", rl_fn_GetFileNameWithoutExt));
  lcl_ns_def(ns, "get_directory_path", lcl_c_proc_new("raylib::get_directory_path", rl_fn_GetDirectoryPath));
  lcl_ns_def(ns, "get_prev_directory_path", lcl_c_proc_new("raylib::get_prev_directory_path", rl_fn_GetPrevDirectoryPath));
  lcl_ns_def(ns, "get_working_directory", lcl_c_proc_new("raylib::get_working_directory", rl_fn_GetWorkingDirectory));
  lcl_ns_def(ns, "get_application_directory", lcl_c_proc_new("raylib::get_application_directory", rl_fn_GetApplicationDirectory));
  lcl_ns_def(ns, "make_directory", lcl_c_proc_new("raylib::make_directory", rl_fn_MakeDirectory));
  lcl_ns_def(ns, "change_directory", lcl_c_proc_new("raylib::change_directory", rl_fn_ChangeDirectory));
  lcl_ns_def(ns, "is_path_file", lcl_c_proc_new("raylib::is_path_file", rl_fn_IsPathFile));
  lcl_ns_def(ns, "is_file_name_valid", lcl_c_proc_new("raylib::is_file_name_valid", rl_fn_IsFileNameValid));
  lcl_ns_def(ns, "load_directory_files", lcl_c_proc_new("raylib::load_directory_files", rl_fn_LoadDirectoryFiles));
  lcl_ns_def(ns, "load_directory_files_ex", lcl_c_proc_new("raylib::load_directory_files_ex", rl_fn_LoadDirectoryFilesEx));
  lcl_ns_def(ns, "unload_directory_files", lcl_c_proc_new("raylib::unload_directory_files", rl_fn_UnloadDirectoryFiles));
  lcl_ns_def(ns, "is_file_dropped", lcl_c_proc_new("raylib::is_file_dropped", rl_fn_IsFileDropped));
  lcl_ns_def(ns, "load_dropped_files", lcl_c_proc_new("raylib::load_dropped_files", rl_fn_LoadDroppedFiles));
  lcl_ns_def(ns, "unload_dropped_files", lcl_c_proc_new("raylib::unload_dropped_files", rl_fn_UnloadDroppedFiles));
  lcl_ns_def(ns, "get_directory_file_count", lcl_c_proc_new("raylib::get_directory_file_count", rl_fn_GetDirectoryFileCount));
  lcl_ns_def(ns, "get_directory_file_count_ex", lcl_c_proc_new("raylib::get_directory_file_count_ex", rl_fn_GetDirectoryFileCountEx));
  lcl_ns_def(ns, "load_automation_event_list", lcl_c_proc_new("raylib::load_automation_event_list", rl_fn_LoadAutomationEventList));
  lcl_ns_def(ns, "unload_automation_event_list", lcl_c_proc_new("raylib::unload_automation_event_list", rl_fn_UnloadAutomationEventList));
  lcl_ns_def(ns, "export_automation_event_list", lcl_c_proc_new("raylib::export_automation_event_list", rl_fn_ExportAutomationEventList));
  lcl_ns_def(ns, "set_automation_event_list", lcl_c_proc_new("raylib::set_automation_event_list", rl_fn_SetAutomationEventList));
  lcl_ns_def(ns, "set_automation_event_base_frame", lcl_c_proc_new("raylib::set_automation_event_base_frame", rl_fn_SetAutomationEventBaseFrame));
  lcl_ns_def(ns, "start_automation_event_recording", lcl_c_proc_new("raylib::start_automation_event_recording", rl_fn_StartAutomationEventRecording));
  lcl_ns_def(ns, "stop_automation_event_recording", lcl_c_proc_new("raylib::stop_automation_event_recording", rl_fn_StopAutomationEventRecording));
  lcl_ns_def(ns, "play_automation_event", lcl_c_proc_new("raylib::play_automation_event", rl_fn_PlayAutomationEvent));
  lcl_ns_def(ns, "is_key_pressed", lcl_c_proc_new("raylib::is_key_pressed", rl_fn_IsKeyPressed));
  lcl_ns_def(ns, "is_key_pressed_repeat", lcl_c_proc_new("raylib::is_key_pressed_repeat", rl_fn_IsKeyPressedRepeat));
  lcl_ns_def(ns, "is_key_down", lcl_c_proc_new("raylib::is_key_down", rl_fn_IsKeyDown));
  lcl_ns_def(ns, "is_key_released", lcl_c_proc_new("raylib::is_key_released", rl_fn_IsKeyReleased));
  lcl_ns_def(ns, "is_key_up", lcl_c_proc_new("raylib::is_key_up", rl_fn_IsKeyUp));
  lcl_ns_def(ns, "get_key_pressed", lcl_c_proc_new("raylib::get_key_pressed", rl_fn_GetKeyPressed));
  lcl_ns_def(ns, "get_char_pressed", lcl_c_proc_new("raylib::get_char_pressed", rl_fn_GetCharPressed));
  lcl_ns_def(ns, "get_key_name", lcl_c_proc_new("raylib::get_key_name", rl_fn_GetKeyName));
  lcl_ns_def(ns, "set_exit_key", lcl_c_proc_new("raylib::set_exit_key", rl_fn_SetExitKey));
  lcl_ns_def(ns, "is_gamepad_available", lcl_c_proc_new("raylib::is_gamepad_available", rl_fn_IsGamepadAvailable));
  lcl_ns_def(ns, "get_gamepad_name", lcl_c_proc_new("raylib::get_gamepad_name", rl_fn_GetGamepadName));
  lcl_ns_def(ns, "is_gamepad_button_pressed", lcl_c_proc_new("raylib::is_gamepad_button_pressed", rl_fn_IsGamepadButtonPressed));
  lcl_ns_def(ns, "is_gamepad_button_down", lcl_c_proc_new("raylib::is_gamepad_button_down", rl_fn_IsGamepadButtonDown));
  lcl_ns_def(ns, "is_gamepad_button_released", lcl_c_proc_new("raylib::is_gamepad_button_released", rl_fn_IsGamepadButtonReleased));
  lcl_ns_def(ns, "is_gamepad_button_up", lcl_c_proc_new("raylib::is_gamepad_button_up", rl_fn_IsGamepadButtonUp));
  lcl_ns_def(ns, "get_gamepad_button_pressed", lcl_c_proc_new("raylib::get_gamepad_button_pressed", rl_fn_GetGamepadButtonPressed));
  lcl_ns_def(ns, "get_gamepad_axis_count", lcl_c_proc_new("raylib::get_gamepad_axis_count", rl_fn_GetGamepadAxisCount));
  lcl_ns_def(ns, "get_gamepad_axis_movement", lcl_c_proc_new("raylib::get_gamepad_axis_movement", rl_fn_GetGamepadAxisMovement));
  lcl_ns_def(ns, "set_gamepad_mappings", lcl_c_proc_new("raylib::set_gamepad_mappings", rl_fn_SetGamepadMappings));
  lcl_ns_def(ns, "set_gamepad_vibration", lcl_c_proc_new("raylib::set_gamepad_vibration", rl_fn_SetGamepadVibration));
  lcl_ns_def(ns, "is_mouse_button_pressed", lcl_c_proc_new("raylib::is_mouse_button_pressed", rl_fn_IsMouseButtonPressed));
  lcl_ns_def(ns, "is_mouse_button_down", lcl_c_proc_new("raylib::is_mouse_button_down", rl_fn_IsMouseButtonDown));
  lcl_ns_def(ns, "is_mouse_button_released", lcl_c_proc_new("raylib::is_mouse_button_released", rl_fn_IsMouseButtonReleased));
  lcl_ns_def(ns, "is_mouse_button_up", lcl_c_proc_new("raylib::is_mouse_button_up", rl_fn_IsMouseButtonUp));
  lcl_ns_def(ns, "get_mouse_x", lcl_c_proc_new("raylib::get_mouse_x", rl_fn_GetMouseX));
  lcl_ns_def(ns, "get_mouse_y", lcl_c_proc_new("raylib::get_mouse_y", rl_fn_GetMouseY));
  lcl_ns_def(ns, "get_mouse_position", lcl_c_proc_new("raylib::get_mouse_position", rl_fn_GetMousePosition));
  lcl_ns_def(ns, "get_mouse_delta", lcl_c_proc_new("raylib::get_mouse_delta", rl_fn_GetMouseDelta));
  lcl_ns_def(ns, "set_mouse_position", lcl_c_proc_new("raylib::set_mouse_position", rl_fn_SetMousePosition));
  lcl_ns_def(ns, "set_mouse_offset", lcl_c_proc_new("raylib::set_mouse_offset", rl_fn_SetMouseOffset));
  lcl_ns_def(ns, "set_mouse_scale", lcl_c_proc_new("raylib::set_mouse_scale", rl_fn_SetMouseScale));
  lcl_ns_def(ns, "get_mouse_wheel_move", lcl_c_proc_new("raylib::get_mouse_wheel_move", rl_fn_GetMouseWheelMove));
  lcl_ns_def(ns, "get_mouse_wheel_move_v", lcl_c_proc_new("raylib::get_mouse_wheel_move_v", rl_fn_GetMouseWheelMoveV));
  lcl_ns_def(ns, "set_mouse_cursor", lcl_c_proc_new("raylib::set_mouse_cursor", rl_fn_SetMouseCursor));
  lcl_ns_def(ns, "get_touch_x", lcl_c_proc_new("raylib::get_touch_x", rl_fn_GetTouchX));
  lcl_ns_def(ns, "get_touch_y", lcl_c_proc_new("raylib::get_touch_y", rl_fn_GetTouchY));
  lcl_ns_def(ns, "get_touch_position", lcl_c_proc_new("raylib::get_touch_position", rl_fn_GetTouchPosition));
  lcl_ns_def(ns, "get_touch_point_id", lcl_c_proc_new("raylib::get_touch_point_id", rl_fn_GetTouchPointId));
  lcl_ns_def(ns, "get_touch_point_count", lcl_c_proc_new("raylib::get_touch_point_count", rl_fn_GetTouchPointCount));
  lcl_ns_def(ns, "set_gestures_enabled", lcl_c_proc_new("raylib::set_gestures_enabled", rl_fn_SetGesturesEnabled));
  lcl_ns_def(ns, "is_gesture_detected", lcl_c_proc_new("raylib::is_gesture_detected", rl_fn_IsGestureDetected));
  lcl_ns_def(ns, "get_gesture_detected", lcl_c_proc_new("raylib::get_gesture_detected", rl_fn_GetGestureDetected));
  lcl_ns_def(ns, "get_gesture_hold_duration", lcl_c_proc_new("raylib::get_gesture_hold_duration", rl_fn_GetGestureHoldDuration));
  lcl_ns_def(ns, "get_gesture_drag_vector", lcl_c_proc_new("raylib::get_gesture_drag_vector", rl_fn_GetGestureDragVector));
  lcl_ns_def(ns, "get_gesture_drag_angle", lcl_c_proc_new("raylib::get_gesture_drag_angle", rl_fn_GetGestureDragAngle));
  lcl_ns_def(ns, "get_gesture_pinch_vector", lcl_c_proc_new("raylib::get_gesture_pinch_vector", rl_fn_GetGesturePinchVector));
  lcl_ns_def(ns, "get_gesture_pinch_angle", lcl_c_proc_new("raylib::get_gesture_pinch_angle", rl_fn_GetGesturePinchAngle));
  lcl_ns_def(ns, "update_camera", lcl_c_proc_new("raylib::update_camera", rl_fn_UpdateCamera));
  lcl_ns_def(ns, "update_camera_pro", lcl_c_proc_new("raylib::update_camera_pro", rl_fn_UpdateCameraPro));
  lcl_ns_def(ns, "set_shapes_texture", lcl_c_proc_new("raylib::set_shapes_texture", rl_fn_SetShapesTexture));
  lcl_ns_def(ns, "get_shapes_texture", lcl_c_proc_new("raylib::get_shapes_texture", rl_fn_GetShapesTexture));
  lcl_ns_def(ns, "get_shapes_texture_rectangle", lcl_c_proc_new("raylib::get_shapes_texture_rectangle", rl_fn_GetShapesTextureRectangle));
  lcl_ns_def(ns, "draw_pixel", lcl_c_proc_new("raylib::draw_pixel", rl_fn_DrawPixel));
  lcl_ns_def(ns, "draw_pixel_v", lcl_c_proc_new("raylib::draw_pixel_v", rl_fn_DrawPixelV));
  lcl_ns_def(ns, "draw_line", lcl_c_proc_new("raylib::draw_line", rl_fn_DrawLine));
  lcl_ns_def(ns, "draw_line_v", lcl_c_proc_new("raylib::draw_line_v", rl_fn_DrawLineV));
  lcl_ns_def(ns, "draw_line_ex", lcl_c_proc_new("raylib::draw_line_ex", rl_fn_DrawLineEx));
  lcl_ns_def(ns, "draw_line_strip", lcl_c_proc_new("raylib::draw_line_strip", rl_fn_DrawLineStrip));
  lcl_ns_def(ns, "draw_line_bezier", lcl_c_proc_new("raylib::draw_line_bezier", rl_fn_DrawLineBezier));
  lcl_ns_def(ns, "draw_line_dashed", lcl_c_proc_new("raylib::draw_line_dashed", rl_fn_DrawLineDashed));
  lcl_ns_def(ns, "draw_circle", lcl_c_proc_new("raylib::draw_circle", rl_fn_DrawCircle));
  lcl_ns_def(ns, "draw_circle_v", lcl_c_proc_new("raylib::draw_circle_v", rl_fn_DrawCircleV));
  lcl_ns_def(ns, "draw_circle_gradient", lcl_c_proc_new("raylib::draw_circle_gradient", rl_fn_DrawCircleGradient));
  lcl_ns_def(ns, "draw_circle_sector", lcl_c_proc_new("raylib::draw_circle_sector", rl_fn_DrawCircleSector));
  lcl_ns_def(ns, "draw_circle_sector_lines", lcl_c_proc_new("raylib::draw_circle_sector_lines", rl_fn_DrawCircleSectorLines));
  lcl_ns_def(ns, "draw_circle_lines", lcl_c_proc_new("raylib::draw_circle_lines", rl_fn_DrawCircleLines));
  lcl_ns_def(ns, "draw_circle_lines_v", lcl_c_proc_new("raylib::draw_circle_lines_v", rl_fn_DrawCircleLinesV));
  lcl_ns_def(ns, "draw_ellipse", lcl_c_proc_new("raylib::draw_ellipse", rl_fn_DrawEllipse));
  lcl_ns_def(ns, "draw_ellipse_v", lcl_c_proc_new("raylib::draw_ellipse_v", rl_fn_DrawEllipseV));
  lcl_ns_def(ns, "draw_ellipse_lines", lcl_c_proc_new("raylib::draw_ellipse_lines", rl_fn_DrawEllipseLines));
  lcl_ns_def(ns, "draw_ellipse_lines_v", lcl_c_proc_new("raylib::draw_ellipse_lines_v", rl_fn_DrawEllipseLinesV));
  lcl_ns_def(ns, "draw_ring", lcl_c_proc_new("raylib::draw_ring", rl_fn_DrawRing));
  lcl_ns_def(ns, "draw_ring_lines", lcl_c_proc_new("raylib::draw_ring_lines", rl_fn_DrawRingLines));
  lcl_ns_def(ns, "draw_rectangle", lcl_c_proc_new("raylib::draw_rectangle", rl_fn_DrawRectangle));
  lcl_ns_def(ns, "draw_rectangle_v", lcl_c_proc_new("raylib::draw_rectangle_v", rl_fn_DrawRectangleV));
  lcl_ns_def(ns, "draw_rectangle_rec", lcl_c_proc_new("raylib::draw_rectangle_rec", rl_fn_DrawRectangleRec));
  lcl_ns_def(ns, "draw_rectangle_pro", lcl_c_proc_new("raylib::draw_rectangle_pro", rl_fn_DrawRectanglePro));
  lcl_ns_def(ns, "draw_rectangle_gradient_v", lcl_c_proc_new("raylib::draw_rectangle_gradient_v", rl_fn_DrawRectangleGradientV));
  lcl_ns_def(ns, "draw_rectangle_gradient_h", lcl_c_proc_new("raylib::draw_rectangle_gradient_h", rl_fn_DrawRectangleGradientH));
  lcl_ns_def(ns, "draw_rectangle_gradient_ex", lcl_c_proc_new("raylib::draw_rectangle_gradient_ex", rl_fn_DrawRectangleGradientEx));
  lcl_ns_def(ns, "draw_rectangle_lines", lcl_c_proc_new("raylib::draw_rectangle_lines", rl_fn_DrawRectangleLines));
  lcl_ns_def(ns, "draw_rectangle_lines_ex", lcl_c_proc_new("raylib::draw_rectangle_lines_ex", rl_fn_DrawRectangleLinesEx));
  lcl_ns_def(ns, "draw_rectangle_rounded", lcl_c_proc_new("raylib::draw_rectangle_rounded", rl_fn_DrawRectangleRounded));
  lcl_ns_def(ns, "draw_rectangle_rounded_lines", lcl_c_proc_new("raylib::draw_rectangle_rounded_lines", rl_fn_DrawRectangleRoundedLines));
  lcl_ns_def(ns, "draw_rectangle_rounded_lines_ex", lcl_c_proc_new("raylib::draw_rectangle_rounded_lines_ex", rl_fn_DrawRectangleRoundedLinesEx));
  lcl_ns_def(ns, "draw_triangle", lcl_c_proc_new("raylib::draw_triangle", rl_fn_DrawTriangle));
  lcl_ns_def(ns, "draw_triangle_lines", lcl_c_proc_new("raylib::draw_triangle_lines", rl_fn_DrawTriangleLines));
  lcl_ns_def(ns, "draw_triangle_fan", lcl_c_proc_new("raylib::draw_triangle_fan", rl_fn_DrawTriangleFan));
  lcl_ns_def(ns, "draw_triangle_strip", lcl_c_proc_new("raylib::draw_triangle_strip", rl_fn_DrawTriangleStrip));
  lcl_ns_def(ns, "draw_poly", lcl_c_proc_new("raylib::draw_poly", rl_fn_DrawPoly));
  lcl_ns_def(ns, "draw_poly_lines", lcl_c_proc_new("raylib::draw_poly_lines", rl_fn_DrawPolyLines));
  lcl_ns_def(ns, "draw_poly_lines_ex", lcl_c_proc_new("raylib::draw_poly_lines_ex", rl_fn_DrawPolyLinesEx));
  lcl_ns_def(ns, "draw_spline_linear", lcl_c_proc_new("raylib::draw_spline_linear", rl_fn_DrawSplineLinear));
  lcl_ns_def(ns, "draw_spline_basis", lcl_c_proc_new("raylib::draw_spline_basis", rl_fn_DrawSplineBasis));
  lcl_ns_def(ns, "draw_spline_catmull_rom", lcl_c_proc_new("raylib::draw_spline_catmull_rom", rl_fn_DrawSplineCatmullRom));
  lcl_ns_def(ns, "draw_spline_bezier_quadratic", lcl_c_proc_new("raylib::draw_spline_bezier_quadratic", rl_fn_DrawSplineBezierQuadratic));
  lcl_ns_def(ns, "draw_spline_bezier_cubic", lcl_c_proc_new("raylib::draw_spline_bezier_cubic", rl_fn_DrawSplineBezierCubic));
  lcl_ns_def(ns, "draw_spline_segment_linear", lcl_c_proc_new("raylib::draw_spline_segment_linear", rl_fn_DrawSplineSegmentLinear));
  lcl_ns_def(ns, "draw_spline_segment_basis", lcl_c_proc_new("raylib::draw_spline_segment_basis", rl_fn_DrawSplineSegmentBasis));
  lcl_ns_def(ns, "draw_spline_segment_catmull_rom", lcl_c_proc_new("raylib::draw_spline_segment_catmull_rom", rl_fn_DrawSplineSegmentCatmullRom));
  lcl_ns_def(ns, "draw_spline_segment_bezier_quadratic", lcl_c_proc_new("raylib::draw_spline_segment_bezier_quadratic", rl_fn_DrawSplineSegmentBezierQuadratic));
  lcl_ns_def(ns, "draw_spline_segment_bezier_cubic", lcl_c_proc_new("raylib::draw_spline_segment_bezier_cubic", rl_fn_DrawSplineSegmentBezierCubic));
  lcl_ns_def(ns, "get_spline_point_linear", lcl_c_proc_new("raylib::get_spline_point_linear", rl_fn_GetSplinePointLinear));
  lcl_ns_def(ns, "get_spline_point_basis", lcl_c_proc_new("raylib::get_spline_point_basis", rl_fn_GetSplinePointBasis));
  lcl_ns_def(ns, "get_spline_point_catmull_rom", lcl_c_proc_new("raylib::get_spline_point_catmull_rom", rl_fn_GetSplinePointCatmullRom));
  lcl_ns_def(ns, "get_spline_point_bezier_quad", lcl_c_proc_new("raylib::get_spline_point_bezier_quad", rl_fn_GetSplinePointBezierQuad));
  lcl_ns_def(ns, "get_spline_point_bezier_cubic", lcl_c_proc_new("raylib::get_spline_point_bezier_cubic", rl_fn_GetSplinePointBezierCubic));
  lcl_ns_def(ns, "check_collision_recs", lcl_c_proc_new("raylib::check_collision_recs", rl_fn_CheckCollisionRecs));
  lcl_ns_def(ns, "check_collision_circles", lcl_c_proc_new("raylib::check_collision_circles", rl_fn_CheckCollisionCircles));
  lcl_ns_def(ns, "check_collision_circle_rec", lcl_c_proc_new("raylib::check_collision_circle_rec", rl_fn_CheckCollisionCircleRec));
  lcl_ns_def(ns, "check_collision_circle_line", lcl_c_proc_new("raylib::check_collision_circle_line", rl_fn_CheckCollisionCircleLine));
  lcl_ns_def(ns, "check_collision_point_rec", lcl_c_proc_new("raylib::check_collision_point_rec", rl_fn_CheckCollisionPointRec));
  lcl_ns_def(ns, "check_collision_point_circle", lcl_c_proc_new("raylib::check_collision_point_circle", rl_fn_CheckCollisionPointCircle));
  lcl_ns_def(ns, "check_collision_point_triangle", lcl_c_proc_new("raylib::check_collision_point_triangle", rl_fn_CheckCollisionPointTriangle));
  lcl_ns_def(ns, "check_collision_point_line", lcl_c_proc_new("raylib::check_collision_point_line", rl_fn_CheckCollisionPointLine));
  lcl_ns_def(ns, "check_collision_point_poly", lcl_c_proc_new("raylib::check_collision_point_poly", rl_fn_CheckCollisionPointPoly));
  lcl_ns_def(ns, "check_collision_lines", lcl_c_proc_new("raylib::check_collision_lines", rl_fn_CheckCollisionLines));
  lcl_ns_def(ns, "get_collision_rec", lcl_c_proc_new("raylib::get_collision_rec", rl_fn_GetCollisionRec));
  lcl_ns_def(ns, "load_image", lcl_c_proc_new("raylib::load_image", rl_fn_LoadImage));
  lcl_ns_def(ns, "load_image_raw", lcl_c_proc_new("raylib::load_image_raw", rl_fn_LoadImageRaw));
  lcl_ns_def(ns, "load_image_from_texture", lcl_c_proc_new("raylib::load_image_from_texture", rl_fn_LoadImageFromTexture));
  lcl_ns_def(ns, "load_image_from_screen", lcl_c_proc_new("raylib::load_image_from_screen", rl_fn_LoadImageFromScreen));
  lcl_ns_def(ns, "is_image_valid", lcl_c_proc_new("raylib::is_image_valid", rl_fn_IsImageValid));
  lcl_ns_def(ns, "unload_image", lcl_c_proc_new("raylib::unload_image", rl_fn_UnloadImage));
  lcl_ns_def(ns, "export_image", lcl_c_proc_new("raylib::export_image", rl_fn_ExportImage));
  lcl_ns_def(ns, "export_image_as_code", lcl_c_proc_new("raylib::export_image_as_code", rl_fn_ExportImageAsCode));
  lcl_ns_def(ns, "gen_image_color", lcl_c_proc_new("raylib::gen_image_color", rl_fn_GenImageColor));
  lcl_ns_def(ns, "gen_image_gradient_linear", lcl_c_proc_new("raylib::gen_image_gradient_linear", rl_fn_GenImageGradientLinear));
  lcl_ns_def(ns, "gen_image_gradient_radial", lcl_c_proc_new("raylib::gen_image_gradient_radial", rl_fn_GenImageGradientRadial));
  lcl_ns_def(ns, "gen_image_gradient_square", lcl_c_proc_new("raylib::gen_image_gradient_square", rl_fn_GenImageGradientSquare));
  lcl_ns_def(ns, "gen_image_checked", lcl_c_proc_new("raylib::gen_image_checked", rl_fn_GenImageChecked));
  lcl_ns_def(ns, "gen_image_white_noise", lcl_c_proc_new("raylib::gen_image_white_noise", rl_fn_GenImageWhiteNoise));
  lcl_ns_def(ns, "gen_image_perlin_noise", lcl_c_proc_new("raylib::gen_image_perlin_noise", rl_fn_GenImagePerlinNoise));
  lcl_ns_def(ns, "gen_image_cellular", lcl_c_proc_new("raylib::gen_image_cellular", rl_fn_GenImageCellular));
  lcl_ns_def(ns, "gen_image_text", lcl_c_proc_new("raylib::gen_image_text", rl_fn_GenImageText));
  lcl_ns_def(ns, "image_copy", lcl_c_proc_new("raylib::image_copy", rl_fn_ImageCopy));
  lcl_ns_def(ns, "image_from_image", lcl_c_proc_new("raylib::image_from_image", rl_fn_ImageFromImage));
  lcl_ns_def(ns, "image_from_channel", lcl_c_proc_new("raylib::image_from_channel", rl_fn_ImageFromChannel));
  lcl_ns_def(ns, "image_text", lcl_c_proc_new("raylib::image_text", rl_fn_ImageText));
  lcl_ns_def(ns, "image_text_ex", lcl_c_proc_new("raylib::image_text_ex", rl_fn_ImageTextEx));
  lcl_ns_def(ns, "image_format", lcl_c_proc_new("raylib::image_format", rl_fn_ImageFormat));
  lcl_ns_def(ns, "image_to_pot", lcl_c_proc_new("raylib::image_to_pot", rl_fn_ImageToPOT));
  lcl_ns_def(ns, "image_crop", lcl_c_proc_new("raylib::image_crop", rl_fn_ImageCrop));
  lcl_ns_def(ns, "image_alpha_crop", lcl_c_proc_new("raylib::image_alpha_crop", rl_fn_ImageAlphaCrop));
  lcl_ns_def(ns, "image_alpha_clear", lcl_c_proc_new("raylib::image_alpha_clear", rl_fn_ImageAlphaClear));
  lcl_ns_def(ns, "image_alpha_mask", lcl_c_proc_new("raylib::image_alpha_mask", rl_fn_ImageAlphaMask));
  lcl_ns_def(ns, "image_alpha_premultiply", lcl_c_proc_new("raylib::image_alpha_premultiply", rl_fn_ImageAlphaPremultiply));
  lcl_ns_def(ns, "image_blur_gaussian", lcl_c_proc_new("raylib::image_blur_gaussian", rl_fn_ImageBlurGaussian));
  lcl_ns_def(ns, "image_resize", lcl_c_proc_new("raylib::image_resize", rl_fn_ImageResize));
  lcl_ns_def(ns, "image_resize_nn", lcl_c_proc_new("raylib::image_resize_nn", rl_fn_ImageResizeNN));
  lcl_ns_def(ns, "image_resize_canvas", lcl_c_proc_new("raylib::image_resize_canvas", rl_fn_ImageResizeCanvas));
  lcl_ns_def(ns, "image_mipmaps", lcl_c_proc_new("raylib::image_mipmaps", rl_fn_ImageMipmaps));
  lcl_ns_def(ns, "image_dither", lcl_c_proc_new("raylib::image_dither", rl_fn_ImageDither));
  lcl_ns_def(ns, "image_flip_vertical", lcl_c_proc_new("raylib::image_flip_vertical", rl_fn_ImageFlipVertical));
  lcl_ns_def(ns, "image_flip_horizontal", lcl_c_proc_new("raylib::image_flip_horizontal", rl_fn_ImageFlipHorizontal));
  lcl_ns_def(ns, "image_rotate", lcl_c_proc_new("raylib::image_rotate", rl_fn_ImageRotate));
  lcl_ns_def(ns, "image_rotate_cw", lcl_c_proc_new("raylib::image_rotate_cw", rl_fn_ImageRotateCW));
  lcl_ns_def(ns, "image_rotate_ccw", lcl_c_proc_new("raylib::image_rotate_ccw", rl_fn_ImageRotateCCW));
  lcl_ns_def(ns, "image_color_tint", lcl_c_proc_new("raylib::image_color_tint", rl_fn_ImageColorTint));
  lcl_ns_def(ns, "image_color_invert", lcl_c_proc_new("raylib::image_color_invert", rl_fn_ImageColorInvert));
  lcl_ns_def(ns, "image_color_grayscale", lcl_c_proc_new("raylib::image_color_grayscale", rl_fn_ImageColorGrayscale));
  lcl_ns_def(ns, "image_color_contrast", lcl_c_proc_new("raylib::image_color_contrast", rl_fn_ImageColorContrast));
  lcl_ns_def(ns, "image_color_brightness", lcl_c_proc_new("raylib::image_color_brightness", rl_fn_ImageColorBrightness));
  lcl_ns_def(ns, "image_color_replace", lcl_c_proc_new("raylib::image_color_replace", rl_fn_ImageColorReplace));
  lcl_ns_def(ns, "unload_image_colors", lcl_c_proc_new("raylib::unload_image_colors", rl_fn_UnloadImageColors));
  lcl_ns_def(ns, "unload_image_palette", lcl_c_proc_new("raylib::unload_image_palette", rl_fn_UnloadImagePalette));
  lcl_ns_def(ns, "get_image_alpha_border", lcl_c_proc_new("raylib::get_image_alpha_border", rl_fn_GetImageAlphaBorder));
  lcl_ns_def(ns, "get_image_color", lcl_c_proc_new("raylib::get_image_color", rl_fn_GetImageColor));
  lcl_ns_def(ns, "image_clear_background", lcl_c_proc_new("raylib::image_clear_background", rl_fn_ImageClearBackground));
  lcl_ns_def(ns, "image_draw_pixel", lcl_c_proc_new("raylib::image_draw_pixel", rl_fn_ImageDrawPixel));
  lcl_ns_def(ns, "image_draw_pixel_v", lcl_c_proc_new("raylib::image_draw_pixel_v", rl_fn_ImageDrawPixelV));
  lcl_ns_def(ns, "image_draw_line", lcl_c_proc_new("raylib::image_draw_line", rl_fn_ImageDrawLine));
  lcl_ns_def(ns, "image_draw_line_v", lcl_c_proc_new("raylib::image_draw_line_v", rl_fn_ImageDrawLineV));
  lcl_ns_def(ns, "image_draw_line_ex", lcl_c_proc_new("raylib::image_draw_line_ex", rl_fn_ImageDrawLineEx));
  lcl_ns_def(ns, "image_draw_circle", lcl_c_proc_new("raylib::image_draw_circle", rl_fn_ImageDrawCircle));
  lcl_ns_def(ns, "image_draw_circle_v", lcl_c_proc_new("raylib::image_draw_circle_v", rl_fn_ImageDrawCircleV));
  lcl_ns_def(ns, "image_draw_circle_lines", lcl_c_proc_new("raylib::image_draw_circle_lines", rl_fn_ImageDrawCircleLines));
  lcl_ns_def(ns, "image_draw_circle_lines_v", lcl_c_proc_new("raylib::image_draw_circle_lines_v", rl_fn_ImageDrawCircleLinesV));
  lcl_ns_def(ns, "image_draw_rectangle", lcl_c_proc_new("raylib::image_draw_rectangle", rl_fn_ImageDrawRectangle));
  lcl_ns_def(ns, "image_draw_rectangle_v", lcl_c_proc_new("raylib::image_draw_rectangle_v", rl_fn_ImageDrawRectangleV));
  lcl_ns_def(ns, "image_draw_rectangle_rec", lcl_c_proc_new("raylib::image_draw_rectangle_rec", rl_fn_ImageDrawRectangleRec));
  lcl_ns_def(ns, "image_draw_rectangle_lines", lcl_c_proc_new("raylib::image_draw_rectangle_lines", rl_fn_ImageDrawRectangleLines));
  lcl_ns_def(ns, "image_draw_triangle", lcl_c_proc_new("raylib::image_draw_triangle", rl_fn_ImageDrawTriangle));
  lcl_ns_def(ns, "image_draw_triangle_ex", lcl_c_proc_new("raylib::image_draw_triangle_ex", rl_fn_ImageDrawTriangleEx));
  lcl_ns_def(ns, "image_draw_triangle_lines", lcl_c_proc_new("raylib::image_draw_triangle_lines", rl_fn_ImageDrawTriangleLines));
  lcl_ns_def(ns, "image_draw_triangle_fan", lcl_c_proc_new("raylib::image_draw_triangle_fan", rl_fn_ImageDrawTriangleFan));
  lcl_ns_def(ns, "image_draw_triangle_strip", lcl_c_proc_new("raylib::image_draw_triangle_strip", rl_fn_ImageDrawTriangleStrip));
  lcl_ns_def(ns, "image_draw", lcl_c_proc_new("raylib::image_draw", rl_fn_ImageDraw));
  lcl_ns_def(ns, "image_draw_text", lcl_c_proc_new("raylib::image_draw_text", rl_fn_ImageDrawText));
  lcl_ns_def(ns, "image_draw_text_ex", lcl_c_proc_new("raylib::image_draw_text_ex", rl_fn_ImageDrawTextEx));
  lcl_ns_def(ns, "load_texture", lcl_c_proc_new("raylib::load_texture", rl_fn_LoadTexture));
  lcl_ns_def(ns, "load_texture_from_image", lcl_c_proc_new("raylib::load_texture_from_image", rl_fn_LoadTextureFromImage));
  lcl_ns_def(ns, "load_texture_cubemap", lcl_c_proc_new("raylib::load_texture_cubemap", rl_fn_LoadTextureCubemap));
  lcl_ns_def(ns, "load_render_texture", lcl_c_proc_new("raylib::load_render_texture", rl_fn_LoadRenderTexture));
  lcl_ns_def(ns, "is_texture_valid", lcl_c_proc_new("raylib::is_texture_valid", rl_fn_IsTextureValid));
  lcl_ns_def(ns, "unload_texture", lcl_c_proc_new("raylib::unload_texture", rl_fn_UnloadTexture));
  lcl_ns_def(ns, "is_render_texture_valid", lcl_c_proc_new("raylib::is_render_texture_valid", rl_fn_IsRenderTextureValid));
  lcl_ns_def(ns, "unload_render_texture", lcl_c_proc_new("raylib::unload_render_texture", rl_fn_UnloadRenderTexture));
  lcl_ns_def(ns, "gen_texture_mipmaps", lcl_c_proc_new("raylib::gen_texture_mipmaps", rl_fn_GenTextureMipmaps));
  lcl_ns_def(ns, "set_texture_filter", lcl_c_proc_new("raylib::set_texture_filter", rl_fn_SetTextureFilter));
  lcl_ns_def(ns, "set_texture_wrap", lcl_c_proc_new("raylib::set_texture_wrap", rl_fn_SetTextureWrap));
  lcl_ns_def(ns, "draw_texture", lcl_c_proc_new("raylib::draw_texture", rl_fn_DrawTexture));
  lcl_ns_def(ns, "draw_texture_v", lcl_c_proc_new("raylib::draw_texture_v", rl_fn_DrawTextureV));
  lcl_ns_def(ns, "draw_texture_ex", lcl_c_proc_new("raylib::draw_texture_ex", rl_fn_DrawTextureEx));
  lcl_ns_def(ns, "draw_texture_rec", lcl_c_proc_new("raylib::draw_texture_rec", rl_fn_DrawTextureRec));
  lcl_ns_def(ns, "draw_texture_pro", lcl_c_proc_new("raylib::draw_texture_pro", rl_fn_DrawTexturePro));
  lcl_ns_def(ns, "draw_texture_npatch", lcl_c_proc_new("raylib::draw_texture_npatch", rl_fn_DrawTextureNPatch));
  lcl_ns_def(ns, "color_is_equal", lcl_c_proc_new("raylib::color_is_equal", rl_fn_ColorIsEqual));
  lcl_ns_def(ns, "fade", lcl_c_proc_new("raylib::fade", rl_fn_Fade));
  lcl_ns_def(ns, "color_to_int", lcl_c_proc_new("raylib::color_to_int", rl_fn_ColorToInt));
  lcl_ns_def(ns, "color_normalize", lcl_c_proc_new("raylib::color_normalize", rl_fn_ColorNormalize));
  lcl_ns_def(ns, "color_from_normalized", lcl_c_proc_new("raylib::color_from_normalized", rl_fn_ColorFromNormalized));
  lcl_ns_def(ns, "color_to_hsv", lcl_c_proc_new("raylib::color_to_hsv", rl_fn_ColorToHSV));
  lcl_ns_def(ns, "color_from_hsv", lcl_c_proc_new("raylib::color_from_hsv", rl_fn_ColorFromHSV));
  lcl_ns_def(ns, "color_tint", lcl_c_proc_new("raylib::color_tint", rl_fn_ColorTint));
  lcl_ns_def(ns, "color_brightness", lcl_c_proc_new("raylib::color_brightness", rl_fn_ColorBrightness));
  lcl_ns_def(ns, "color_contrast", lcl_c_proc_new("raylib::color_contrast", rl_fn_ColorContrast));
  lcl_ns_def(ns, "color_alpha", lcl_c_proc_new("raylib::color_alpha", rl_fn_ColorAlpha));
  lcl_ns_def(ns, "color_alpha_blend", lcl_c_proc_new("raylib::color_alpha_blend", rl_fn_ColorAlphaBlend));
  lcl_ns_def(ns, "color_lerp", lcl_c_proc_new("raylib::color_lerp", rl_fn_ColorLerp));
  lcl_ns_def(ns, "get_color", lcl_c_proc_new("raylib::get_color", rl_fn_GetColor));
  lcl_ns_def(ns, "get_pixel_data_size", lcl_c_proc_new("raylib::get_pixel_data_size", rl_fn_GetPixelDataSize));
  lcl_ns_def(ns, "get_font_default", lcl_c_proc_new("raylib::get_font_default", rl_fn_GetFontDefault));
  lcl_ns_def(ns, "load_font", lcl_c_proc_new("raylib::load_font", rl_fn_LoadFont));
  lcl_ns_def(ns, "load_font_ex", lcl_c_proc_new("raylib::load_font_ex", rl_fn_LoadFontEx));
  lcl_ns_def(ns, "load_font_from_image", lcl_c_proc_new("raylib::load_font_from_image", rl_fn_LoadFontFromImage));
  lcl_ns_def(ns, "is_font_valid", lcl_c_proc_new("raylib::is_font_valid", rl_fn_IsFontValid));
  lcl_ns_def(ns, "unload_font_data", lcl_c_proc_new("raylib::unload_font_data", rl_fn_UnloadFontData));
  lcl_ns_def(ns, "unload_font", lcl_c_proc_new("raylib::unload_font", rl_fn_UnloadFont));
  lcl_ns_def(ns, "export_font_as_code", lcl_c_proc_new("raylib::export_font_as_code", rl_fn_ExportFontAsCode));
  lcl_ns_def(ns, "draw_fps", lcl_c_proc_new("raylib::draw_fps", rl_fn_DrawFPS));
  lcl_ns_def(ns, "draw_text", lcl_c_proc_new("raylib::draw_text", rl_fn_DrawText));
  lcl_ns_def(ns, "draw_text_ex", lcl_c_proc_new("raylib::draw_text_ex", rl_fn_DrawTextEx));
  lcl_ns_def(ns, "draw_text_pro", lcl_c_proc_new("raylib::draw_text_pro", rl_fn_DrawTextPro));
  lcl_ns_def(ns, "draw_text_codepoint", lcl_c_proc_new("raylib::draw_text_codepoint", rl_fn_DrawTextCodepoint));
  lcl_ns_def(ns, "draw_text_codepoints", lcl_c_proc_new("raylib::draw_text_codepoints", rl_fn_DrawTextCodepoints));
  lcl_ns_def(ns, "set_text_line_spacing", lcl_c_proc_new("raylib::set_text_line_spacing", rl_fn_SetTextLineSpacing));
  lcl_ns_def(ns, "measure_text", lcl_c_proc_new("raylib::measure_text", rl_fn_MeasureText));
  lcl_ns_def(ns, "measure_text_ex", lcl_c_proc_new("raylib::measure_text_ex", rl_fn_MeasureTextEx));
  lcl_ns_def(ns, "get_glyph_index", lcl_c_proc_new("raylib::get_glyph_index", rl_fn_GetGlyphIndex));
  lcl_ns_def(ns, "get_glyph_info", lcl_c_proc_new("raylib::get_glyph_info", rl_fn_GetGlyphInfo));
  lcl_ns_def(ns, "get_glyph_atlas_rec", lcl_c_proc_new("raylib::get_glyph_atlas_rec", rl_fn_GetGlyphAtlasRec));
  lcl_ns_def(ns, "get_codepoint_count", lcl_c_proc_new("raylib::get_codepoint_count", rl_fn_GetCodepointCount));
  lcl_ns_def(ns, "text_is_equal", lcl_c_proc_new("raylib::text_is_equal", rl_fn_TextIsEqual));
  lcl_ns_def(ns, "text_length", lcl_c_proc_new("raylib::text_length", rl_fn_TextLength));
  lcl_ns_def(ns, "text_subtext", lcl_c_proc_new("raylib::text_subtext", rl_fn_TextSubtext));
  lcl_ns_def(ns, "text_remove_spaces", lcl_c_proc_new("raylib::text_remove_spaces", rl_fn_TextRemoveSpaces));
  lcl_ns_def(ns, "text_find_index", lcl_c_proc_new("raylib::text_find_index", rl_fn_TextFindIndex));
  lcl_ns_def(ns, "text_to_integer", lcl_c_proc_new("raylib::text_to_integer", rl_fn_TextToInteger));
  lcl_ns_def(ns, "text_to_float", lcl_c_proc_new("raylib::text_to_float", rl_fn_TextToFloat));
  lcl_ns_def(ns, "draw_line_3d", lcl_c_proc_new("raylib::draw_line_3d", rl_fn_DrawLine3D));
  lcl_ns_def(ns, "draw_point_3d", lcl_c_proc_new("raylib::draw_point_3d", rl_fn_DrawPoint3D));
  lcl_ns_def(ns, "draw_circle_3d", lcl_c_proc_new("raylib::draw_circle_3d", rl_fn_DrawCircle3D));
  lcl_ns_def(ns, "draw_triangle_3d", lcl_c_proc_new("raylib::draw_triangle_3d", rl_fn_DrawTriangle3D));
  lcl_ns_def(ns, "draw_triangle_strip_3d", lcl_c_proc_new("raylib::draw_triangle_strip_3d", rl_fn_DrawTriangleStrip3D));
  lcl_ns_def(ns, "draw_cube", lcl_c_proc_new("raylib::draw_cube", rl_fn_DrawCube));
  lcl_ns_def(ns, "draw_cube_v", lcl_c_proc_new("raylib::draw_cube_v", rl_fn_DrawCubeV));
  lcl_ns_def(ns, "draw_cube_wires", lcl_c_proc_new("raylib::draw_cube_wires", rl_fn_DrawCubeWires));
  lcl_ns_def(ns, "draw_cube_wires_v", lcl_c_proc_new("raylib::draw_cube_wires_v", rl_fn_DrawCubeWiresV));
  lcl_ns_def(ns, "draw_sphere", lcl_c_proc_new("raylib::draw_sphere", rl_fn_DrawSphere));
  lcl_ns_def(ns, "draw_sphere_ex", lcl_c_proc_new("raylib::draw_sphere_ex", rl_fn_DrawSphereEx));
  lcl_ns_def(ns, "draw_sphere_wires", lcl_c_proc_new("raylib::draw_sphere_wires", rl_fn_DrawSphereWires));
  lcl_ns_def(ns, "draw_cylinder", lcl_c_proc_new("raylib::draw_cylinder", rl_fn_DrawCylinder));
  lcl_ns_def(ns, "draw_cylinder_ex", lcl_c_proc_new("raylib::draw_cylinder_ex", rl_fn_DrawCylinderEx));
  lcl_ns_def(ns, "draw_cylinder_wires", lcl_c_proc_new("raylib::draw_cylinder_wires", rl_fn_DrawCylinderWires));
  lcl_ns_def(ns, "draw_cylinder_wires_ex", lcl_c_proc_new("raylib::draw_cylinder_wires_ex", rl_fn_DrawCylinderWiresEx));
  lcl_ns_def(ns, "draw_capsule", lcl_c_proc_new("raylib::draw_capsule", rl_fn_DrawCapsule));
  lcl_ns_def(ns, "draw_capsule_wires", lcl_c_proc_new("raylib::draw_capsule_wires", rl_fn_DrawCapsuleWires));
  lcl_ns_def(ns, "draw_plane", lcl_c_proc_new("raylib::draw_plane", rl_fn_DrawPlane));
  lcl_ns_def(ns, "draw_ray", lcl_c_proc_new("raylib::draw_ray", rl_fn_DrawRay));
  lcl_ns_def(ns, "draw_grid", lcl_c_proc_new("raylib::draw_grid", rl_fn_DrawGrid));
  lcl_ns_def(ns, "load_model", lcl_c_proc_new("raylib::load_model", rl_fn_LoadModel));
  lcl_ns_def(ns, "load_model_from_mesh", lcl_c_proc_new("raylib::load_model_from_mesh", rl_fn_LoadModelFromMesh));
  lcl_ns_def(ns, "is_model_valid", lcl_c_proc_new("raylib::is_model_valid", rl_fn_IsModelValid));
  lcl_ns_def(ns, "unload_model", lcl_c_proc_new("raylib::unload_model", rl_fn_UnloadModel));
  lcl_ns_def(ns, "get_model_bounding_box", lcl_c_proc_new("raylib::get_model_bounding_box", rl_fn_GetModelBoundingBox));
  lcl_ns_def(ns, "draw_model", lcl_c_proc_new("raylib::draw_model", rl_fn_DrawModel));
  lcl_ns_def(ns, "draw_model_ex", lcl_c_proc_new("raylib::draw_model_ex", rl_fn_DrawModelEx));
  lcl_ns_def(ns, "draw_model_wires", lcl_c_proc_new("raylib::draw_model_wires", rl_fn_DrawModelWires));
  lcl_ns_def(ns, "draw_model_wires_ex", lcl_c_proc_new("raylib::draw_model_wires_ex", rl_fn_DrawModelWiresEx));
  lcl_ns_def(ns, "draw_bounding_box", lcl_c_proc_new("raylib::draw_bounding_box", rl_fn_DrawBoundingBox));
  lcl_ns_def(ns, "draw_billboard", lcl_c_proc_new("raylib::draw_billboard", rl_fn_DrawBillboard));
  lcl_ns_def(ns, "draw_billboard_rec", lcl_c_proc_new("raylib::draw_billboard_rec", rl_fn_DrawBillboardRec));
  lcl_ns_def(ns, "draw_billboard_pro", lcl_c_proc_new("raylib::draw_billboard_pro", rl_fn_DrawBillboardPro));
  lcl_ns_def(ns, "upload_mesh", lcl_c_proc_new("raylib::upload_mesh", rl_fn_UploadMesh));
  lcl_ns_def(ns, "unload_mesh", lcl_c_proc_new("raylib::unload_mesh", rl_fn_UnloadMesh));
  lcl_ns_def(ns, "draw_mesh", lcl_c_proc_new("raylib::draw_mesh", rl_fn_DrawMesh));
  lcl_ns_def(ns, "draw_mesh_instanced", lcl_c_proc_new("raylib::draw_mesh_instanced", rl_fn_DrawMeshInstanced));
  lcl_ns_def(ns, "get_mesh_bounding_box", lcl_c_proc_new("raylib::get_mesh_bounding_box", rl_fn_GetMeshBoundingBox));
  lcl_ns_def(ns, "gen_mesh_tangents", lcl_c_proc_new("raylib::gen_mesh_tangents", rl_fn_GenMeshTangents));
  lcl_ns_def(ns, "export_mesh", lcl_c_proc_new("raylib::export_mesh", rl_fn_ExportMesh));
  lcl_ns_def(ns, "export_mesh_as_code", lcl_c_proc_new("raylib::export_mesh_as_code", rl_fn_ExportMeshAsCode));
  lcl_ns_def(ns, "gen_mesh_poly", lcl_c_proc_new("raylib::gen_mesh_poly", rl_fn_GenMeshPoly));
  lcl_ns_def(ns, "gen_mesh_plane", lcl_c_proc_new("raylib::gen_mesh_plane", rl_fn_GenMeshPlane));
  lcl_ns_def(ns, "gen_mesh_cube", lcl_c_proc_new("raylib::gen_mesh_cube", rl_fn_GenMeshCube));
  lcl_ns_def(ns, "gen_mesh_sphere", lcl_c_proc_new("raylib::gen_mesh_sphere", rl_fn_GenMeshSphere));
  lcl_ns_def(ns, "gen_mesh_hemi_sphere", lcl_c_proc_new("raylib::gen_mesh_hemi_sphere", rl_fn_GenMeshHemiSphere));
  lcl_ns_def(ns, "gen_mesh_cylinder", lcl_c_proc_new("raylib::gen_mesh_cylinder", rl_fn_GenMeshCylinder));
  lcl_ns_def(ns, "gen_mesh_cone", lcl_c_proc_new("raylib::gen_mesh_cone", rl_fn_GenMeshCone));
  lcl_ns_def(ns, "gen_mesh_torus", lcl_c_proc_new("raylib::gen_mesh_torus", rl_fn_GenMeshTorus));
  lcl_ns_def(ns, "gen_mesh_knot", lcl_c_proc_new("raylib::gen_mesh_knot", rl_fn_GenMeshKnot));
  lcl_ns_def(ns, "gen_mesh_heightmap", lcl_c_proc_new("raylib::gen_mesh_heightmap", rl_fn_GenMeshHeightmap));
  lcl_ns_def(ns, "gen_mesh_cubicmap", lcl_c_proc_new("raylib::gen_mesh_cubicmap", rl_fn_GenMeshCubicmap));
  lcl_ns_def(ns, "load_material_default", lcl_c_proc_new("raylib::load_material_default", rl_fn_LoadMaterialDefault));
  lcl_ns_def(ns, "is_material_valid", lcl_c_proc_new("raylib::is_material_valid", rl_fn_IsMaterialValid));
  lcl_ns_def(ns, "unload_material", lcl_c_proc_new("raylib::unload_material", rl_fn_UnloadMaterial));
  lcl_ns_def(ns, "set_material_texture", lcl_c_proc_new("raylib::set_material_texture", rl_fn_SetMaterialTexture));
  lcl_ns_def(ns, "set_model_mesh_material", lcl_c_proc_new("raylib::set_model_mesh_material", rl_fn_SetModelMeshMaterial));
  lcl_ns_def(ns, "update_model_animation", lcl_c_proc_new("raylib::update_model_animation", rl_fn_UpdateModelAnimation));
  lcl_ns_def(ns, "update_model_animation_ex", lcl_c_proc_new("raylib::update_model_animation_ex", rl_fn_UpdateModelAnimationEx));
  lcl_ns_def(ns, "unload_model_animations", lcl_c_proc_new("raylib::unload_model_animations", rl_fn_UnloadModelAnimations));
  lcl_ns_def(ns, "is_model_animation_valid", lcl_c_proc_new("raylib::is_model_animation_valid", rl_fn_IsModelAnimationValid));
  lcl_ns_def(ns, "check_collision_spheres", lcl_c_proc_new("raylib::check_collision_spheres", rl_fn_CheckCollisionSpheres));
  lcl_ns_def(ns, "check_collision_boxes", lcl_c_proc_new("raylib::check_collision_boxes", rl_fn_CheckCollisionBoxes));
  lcl_ns_def(ns, "check_collision_box_sphere", lcl_c_proc_new("raylib::check_collision_box_sphere", rl_fn_CheckCollisionBoxSphere));
  lcl_ns_def(ns, "get_ray_collision_sphere", lcl_c_proc_new("raylib::get_ray_collision_sphere", rl_fn_GetRayCollisionSphere));
  lcl_ns_def(ns, "get_ray_collision_box", lcl_c_proc_new("raylib::get_ray_collision_box", rl_fn_GetRayCollisionBox));
  lcl_ns_def(ns, "get_ray_collision_mesh", lcl_c_proc_new("raylib::get_ray_collision_mesh", rl_fn_GetRayCollisionMesh));
  lcl_ns_def(ns, "get_ray_collision_triangle", lcl_c_proc_new("raylib::get_ray_collision_triangle", rl_fn_GetRayCollisionTriangle));
  lcl_ns_def(ns, "get_ray_collision_quad", lcl_c_proc_new("raylib::get_ray_collision_quad", rl_fn_GetRayCollisionQuad));
  lcl_ns_def(ns, "init_audio_device", lcl_c_proc_new("raylib::init_audio_device", rl_fn_InitAudioDevice));
  lcl_ns_def(ns, "close_audio_device", lcl_c_proc_new("raylib::close_audio_device", rl_fn_CloseAudioDevice));
  lcl_ns_def(ns, "is_audio_device_ready", lcl_c_proc_new("raylib::is_audio_device_ready", rl_fn_IsAudioDeviceReady));
  lcl_ns_def(ns, "set_master_volume", lcl_c_proc_new("raylib::set_master_volume", rl_fn_SetMasterVolume));
  lcl_ns_def(ns, "get_master_volume", lcl_c_proc_new("raylib::get_master_volume", rl_fn_GetMasterVolume));
  lcl_ns_def(ns, "load_wave", lcl_c_proc_new("raylib::load_wave", rl_fn_LoadWave));
  lcl_ns_def(ns, "is_wave_valid", lcl_c_proc_new("raylib::is_wave_valid", rl_fn_IsWaveValid));
  lcl_ns_def(ns, "load_sound", lcl_c_proc_new("raylib::load_sound", rl_fn_LoadSound));
  lcl_ns_def(ns, "load_sound_from_wave", lcl_c_proc_new("raylib::load_sound_from_wave", rl_fn_LoadSoundFromWave));
  lcl_ns_def(ns, "load_sound_alias", lcl_c_proc_new("raylib::load_sound_alias", rl_fn_LoadSoundAlias));
  lcl_ns_def(ns, "is_sound_valid", lcl_c_proc_new("raylib::is_sound_valid", rl_fn_IsSoundValid));
  lcl_ns_def(ns, "unload_wave", lcl_c_proc_new("raylib::unload_wave", rl_fn_UnloadWave));
  lcl_ns_def(ns, "unload_sound", lcl_c_proc_new("raylib::unload_sound", rl_fn_UnloadSound));
  lcl_ns_def(ns, "unload_sound_alias", lcl_c_proc_new("raylib::unload_sound_alias", rl_fn_UnloadSoundAlias));
  lcl_ns_def(ns, "export_wave", lcl_c_proc_new("raylib::export_wave", rl_fn_ExportWave));
  lcl_ns_def(ns, "export_wave_as_code", lcl_c_proc_new("raylib::export_wave_as_code", rl_fn_ExportWaveAsCode));
  lcl_ns_def(ns, "play_sound", lcl_c_proc_new("raylib::play_sound", rl_fn_PlaySound));
  lcl_ns_def(ns, "stop_sound", lcl_c_proc_new("raylib::stop_sound", rl_fn_StopSound));
  lcl_ns_def(ns, "pause_sound", lcl_c_proc_new("raylib::pause_sound", rl_fn_PauseSound));
  lcl_ns_def(ns, "resume_sound", lcl_c_proc_new("raylib::resume_sound", rl_fn_ResumeSound));
  lcl_ns_def(ns, "is_sound_playing", lcl_c_proc_new("raylib::is_sound_playing", rl_fn_IsSoundPlaying));
  lcl_ns_def(ns, "set_sound_volume", lcl_c_proc_new("raylib::set_sound_volume", rl_fn_SetSoundVolume));
  lcl_ns_def(ns, "set_sound_pitch", lcl_c_proc_new("raylib::set_sound_pitch", rl_fn_SetSoundPitch));
  lcl_ns_def(ns, "set_sound_pan", lcl_c_proc_new("raylib::set_sound_pan", rl_fn_SetSoundPan));
  lcl_ns_def(ns, "wave_copy", lcl_c_proc_new("raylib::wave_copy", rl_fn_WaveCopy));
  lcl_ns_def(ns, "wave_crop", lcl_c_proc_new("raylib::wave_crop", rl_fn_WaveCrop));
  lcl_ns_def(ns, "wave_format", lcl_c_proc_new("raylib::wave_format", rl_fn_WaveFormat));
  lcl_ns_def(ns, "load_music_stream", lcl_c_proc_new("raylib::load_music_stream", rl_fn_LoadMusicStream));
  lcl_ns_def(ns, "is_music_valid", lcl_c_proc_new("raylib::is_music_valid", rl_fn_IsMusicValid));
  lcl_ns_def(ns, "unload_music_stream", lcl_c_proc_new("raylib::unload_music_stream", rl_fn_UnloadMusicStream));
  lcl_ns_def(ns, "play_music_stream", lcl_c_proc_new("raylib::play_music_stream", rl_fn_PlayMusicStream));
  lcl_ns_def(ns, "is_music_stream_playing", lcl_c_proc_new("raylib::is_music_stream_playing", rl_fn_IsMusicStreamPlaying));
  lcl_ns_def(ns, "update_music_stream", lcl_c_proc_new("raylib::update_music_stream", rl_fn_UpdateMusicStream));
  lcl_ns_def(ns, "stop_music_stream", lcl_c_proc_new("raylib::stop_music_stream", rl_fn_StopMusicStream));
  lcl_ns_def(ns, "pause_music_stream", lcl_c_proc_new("raylib::pause_music_stream", rl_fn_PauseMusicStream));
  lcl_ns_def(ns, "resume_music_stream", lcl_c_proc_new("raylib::resume_music_stream", rl_fn_ResumeMusicStream));
  lcl_ns_def(ns, "seek_music_stream", lcl_c_proc_new("raylib::seek_music_stream", rl_fn_SeekMusicStream));
  lcl_ns_def(ns, "set_music_volume", lcl_c_proc_new("raylib::set_music_volume", rl_fn_SetMusicVolume));
  lcl_ns_def(ns, "set_music_pitch", lcl_c_proc_new("raylib::set_music_pitch", rl_fn_SetMusicPitch));
  lcl_ns_def(ns, "set_music_pan", lcl_c_proc_new("raylib::set_music_pan", rl_fn_SetMusicPan));
  lcl_ns_def(ns, "get_music_time_length", lcl_c_proc_new("raylib::get_music_time_length", rl_fn_GetMusicTimeLength));
  lcl_ns_def(ns, "get_music_time_played", lcl_c_proc_new("raylib::get_music_time_played", rl_fn_GetMusicTimePlayed));
  lcl_ns_def(ns, "load_audio_stream", lcl_c_proc_new("raylib::load_audio_stream", rl_fn_LoadAudioStream));
  lcl_ns_def(ns, "is_audio_stream_valid", lcl_c_proc_new("raylib::is_audio_stream_valid", rl_fn_IsAudioStreamValid));
  lcl_ns_def(ns, "unload_audio_stream", lcl_c_proc_new("raylib::unload_audio_stream", rl_fn_UnloadAudioStream));
  lcl_ns_def(ns, "is_audio_stream_processed", lcl_c_proc_new("raylib::is_audio_stream_processed", rl_fn_IsAudioStreamProcessed));
  lcl_ns_def(ns, "play_audio_stream", lcl_c_proc_new("raylib::play_audio_stream", rl_fn_PlayAudioStream));
  lcl_ns_def(ns, "pause_audio_stream", lcl_c_proc_new("raylib::pause_audio_stream", rl_fn_PauseAudioStream));
  lcl_ns_def(ns, "resume_audio_stream", lcl_c_proc_new("raylib::resume_audio_stream", rl_fn_ResumeAudioStream));
  lcl_ns_def(ns, "is_audio_stream_playing", lcl_c_proc_new("raylib::is_audio_stream_playing", rl_fn_IsAudioStreamPlaying));
  lcl_ns_def(ns, "stop_audio_stream", lcl_c_proc_new("raylib::stop_audio_stream", rl_fn_StopAudioStream));
  lcl_ns_def(ns, "set_audio_stream_volume", lcl_c_proc_new("raylib::set_audio_stream_volume", rl_fn_SetAudioStreamVolume));
  lcl_ns_def(ns, "set_audio_stream_pitch", lcl_c_proc_new("raylib::set_audio_stream_pitch", rl_fn_SetAudioStreamPitch));
  lcl_ns_def(ns, "set_audio_stream_pan", lcl_c_proc_new("raylib::set_audio_stream_pan", rl_fn_SetAudioStreamPan));
  lcl_ns_def(ns, "set_audio_stream_buffer_size_default", lcl_c_proc_new("raylib::set_audio_stream_buffer_size_default", rl_fn_SetAudioStreamBufferSizeDefault));
  lcl_ns_def(ns, "FLAG_VSYNC_HINT", lcl_int_new(64L));
  lcl_ns_def(ns, "FLAG_FULLSCREEN_MODE", lcl_int_new(2L));
  lcl_ns_def(ns, "FLAG_WINDOW_RESIZABLE", lcl_int_new(4L));
  lcl_ns_def(ns, "FLAG_WINDOW_UNDECORATED", lcl_int_new(8L));
  lcl_ns_def(ns, "FLAG_WINDOW_HIDDEN", lcl_int_new(128L));
  lcl_ns_def(ns, "FLAG_WINDOW_MINIMIZED", lcl_int_new(512L));
  lcl_ns_def(ns, "FLAG_WINDOW_MAXIMIZED", lcl_int_new(1024L));
  lcl_ns_def(ns, "FLAG_WINDOW_UNFOCUSED", lcl_int_new(2048L));
  lcl_ns_def(ns, "FLAG_WINDOW_TOPMOST", lcl_int_new(4096L));
  lcl_ns_def(ns, "FLAG_WINDOW_ALWAYS_RUN", lcl_int_new(256L));
  lcl_ns_def(ns, "FLAG_WINDOW_TRANSPARENT", lcl_int_new(16L));
  lcl_ns_def(ns, "FLAG_WINDOW_HIGHDPI", lcl_int_new(8192L));
  lcl_ns_def(ns, "FLAG_WINDOW_MOUSE_PASSTHROUGH", lcl_int_new(16384L));
  lcl_ns_def(ns, "FLAG_BORDERLESS_WINDOWED_MODE", lcl_int_new(32768L));
  lcl_ns_def(ns, "FLAG_MSAA_4X_HINT", lcl_int_new(32L));
  lcl_ns_def(ns, "FLAG_INTERLACED_HINT", lcl_int_new(65536L));
  lcl_ns_def(ns, "LOG_ALL", lcl_int_new(0L));
  lcl_ns_def(ns, "LOG_TRACE", lcl_int_new(1L));
  lcl_ns_def(ns, "LOG_DEBUG", lcl_int_new(2L));
  lcl_ns_def(ns, "LOG_INFO", lcl_int_new(3L));
  lcl_ns_def(ns, "LOG_WARNING", lcl_int_new(4L));
  lcl_ns_def(ns, "LOG_ERROR", lcl_int_new(5L));
  lcl_ns_def(ns, "LOG_FATAL", lcl_int_new(6L));
  lcl_ns_def(ns, "LOG_NONE", lcl_int_new(7L));
  lcl_ns_def(ns, "KEY_NULL", lcl_int_new(0L));
  lcl_ns_def(ns, "KEY_APOSTROPHE", lcl_int_new(39L));
  lcl_ns_def(ns, "KEY_COMMA", lcl_int_new(44L));
  lcl_ns_def(ns, "KEY_MINUS", lcl_int_new(45L));
  lcl_ns_def(ns, "KEY_PERIOD", lcl_int_new(46L));
  lcl_ns_def(ns, "KEY_SLASH", lcl_int_new(47L));
  lcl_ns_def(ns, "KEY_ZERO", lcl_int_new(48L));
  lcl_ns_def(ns, "KEY_ONE", lcl_int_new(49L));
  lcl_ns_def(ns, "KEY_TWO", lcl_int_new(50L));
  lcl_ns_def(ns, "KEY_THREE", lcl_int_new(51L));
  lcl_ns_def(ns, "KEY_FOUR", lcl_int_new(52L));
  lcl_ns_def(ns, "KEY_FIVE", lcl_int_new(53L));
  lcl_ns_def(ns, "KEY_SIX", lcl_int_new(54L));
  lcl_ns_def(ns, "KEY_SEVEN", lcl_int_new(55L));
  lcl_ns_def(ns, "KEY_EIGHT", lcl_int_new(56L));
  lcl_ns_def(ns, "KEY_NINE", lcl_int_new(57L));
  lcl_ns_def(ns, "KEY_SEMICOLON", lcl_int_new(59L));
  lcl_ns_def(ns, "KEY_EQUAL", lcl_int_new(61L));
  lcl_ns_def(ns, "KEY_A", lcl_int_new(65L));
  lcl_ns_def(ns, "KEY_B", lcl_int_new(66L));
  lcl_ns_def(ns, "KEY_C", lcl_int_new(67L));
  lcl_ns_def(ns, "KEY_D", lcl_int_new(68L));
  lcl_ns_def(ns, "KEY_E", lcl_int_new(69L));
  lcl_ns_def(ns, "KEY_F", lcl_int_new(70L));
  lcl_ns_def(ns, "KEY_G", lcl_int_new(71L));
  lcl_ns_def(ns, "KEY_H", lcl_int_new(72L));
  lcl_ns_def(ns, "KEY_I", lcl_int_new(73L));
  lcl_ns_def(ns, "KEY_J", lcl_int_new(74L));
  lcl_ns_def(ns, "KEY_K", lcl_int_new(75L));
  lcl_ns_def(ns, "KEY_L", lcl_int_new(76L));
  lcl_ns_def(ns, "KEY_M", lcl_int_new(77L));
  lcl_ns_def(ns, "KEY_N", lcl_int_new(78L));
  lcl_ns_def(ns, "KEY_O", lcl_int_new(79L));
  lcl_ns_def(ns, "KEY_P", lcl_int_new(80L));
  lcl_ns_def(ns, "KEY_Q", lcl_int_new(81L));
  lcl_ns_def(ns, "KEY_R", lcl_int_new(82L));
  lcl_ns_def(ns, "KEY_S", lcl_int_new(83L));
  lcl_ns_def(ns, "KEY_T", lcl_int_new(84L));
  lcl_ns_def(ns, "KEY_U", lcl_int_new(85L));
  lcl_ns_def(ns, "KEY_V", lcl_int_new(86L));
  lcl_ns_def(ns, "KEY_W", lcl_int_new(87L));
  lcl_ns_def(ns, "KEY_X", lcl_int_new(88L));
  lcl_ns_def(ns, "KEY_Y", lcl_int_new(89L));
  lcl_ns_def(ns, "KEY_Z", lcl_int_new(90L));
  lcl_ns_def(ns, "KEY_LEFT_BRACKET", lcl_int_new(91L));
  lcl_ns_def(ns, "KEY_BACKSLASH", lcl_int_new(92L));
  lcl_ns_def(ns, "KEY_RIGHT_BRACKET", lcl_int_new(93L));
  lcl_ns_def(ns, "KEY_GRAVE", lcl_int_new(96L));
  lcl_ns_def(ns, "KEY_SPACE", lcl_int_new(32L));
  lcl_ns_def(ns, "KEY_ESCAPE", lcl_int_new(256L));
  lcl_ns_def(ns, "KEY_ENTER", lcl_int_new(257L));
  lcl_ns_def(ns, "KEY_TAB", lcl_int_new(258L));
  lcl_ns_def(ns, "KEY_BACKSPACE", lcl_int_new(259L));
  lcl_ns_def(ns, "KEY_INSERT", lcl_int_new(260L));
  lcl_ns_def(ns, "KEY_DELETE", lcl_int_new(261L));
  lcl_ns_def(ns, "KEY_RIGHT", lcl_int_new(262L));
  lcl_ns_def(ns, "KEY_LEFT", lcl_int_new(263L));
  lcl_ns_def(ns, "KEY_DOWN", lcl_int_new(264L));
  lcl_ns_def(ns, "KEY_UP", lcl_int_new(265L));
  lcl_ns_def(ns, "KEY_PAGE_UP", lcl_int_new(266L));
  lcl_ns_def(ns, "KEY_PAGE_DOWN", lcl_int_new(267L));
  lcl_ns_def(ns, "KEY_HOME", lcl_int_new(268L));
  lcl_ns_def(ns, "KEY_END", lcl_int_new(269L));
  lcl_ns_def(ns, "KEY_CAPS_LOCK", lcl_int_new(280L));
  lcl_ns_def(ns, "KEY_SCROLL_LOCK", lcl_int_new(281L));
  lcl_ns_def(ns, "KEY_NUM_LOCK", lcl_int_new(282L));
  lcl_ns_def(ns, "KEY_PRINT_SCREEN", lcl_int_new(283L));
  lcl_ns_def(ns, "KEY_PAUSE", lcl_int_new(284L));
  lcl_ns_def(ns, "KEY_F1", lcl_int_new(290L));
  lcl_ns_def(ns, "KEY_F2", lcl_int_new(291L));
  lcl_ns_def(ns, "KEY_F3", lcl_int_new(292L));
  lcl_ns_def(ns, "KEY_F4", lcl_int_new(293L));
  lcl_ns_def(ns, "KEY_F5", lcl_int_new(294L));
  lcl_ns_def(ns, "KEY_F6", lcl_int_new(295L));
  lcl_ns_def(ns, "KEY_F7", lcl_int_new(296L));
  lcl_ns_def(ns, "KEY_F8", lcl_int_new(297L));
  lcl_ns_def(ns, "KEY_F9", lcl_int_new(298L));
  lcl_ns_def(ns, "KEY_F10", lcl_int_new(299L));
  lcl_ns_def(ns, "KEY_F11", lcl_int_new(300L));
  lcl_ns_def(ns, "KEY_F12", lcl_int_new(301L));
  lcl_ns_def(ns, "KEY_LEFT_SHIFT", lcl_int_new(340L));
  lcl_ns_def(ns, "KEY_LEFT_CONTROL", lcl_int_new(341L));
  lcl_ns_def(ns, "KEY_LEFT_ALT", lcl_int_new(342L));
  lcl_ns_def(ns, "KEY_LEFT_SUPER", lcl_int_new(343L));
  lcl_ns_def(ns, "KEY_RIGHT_SHIFT", lcl_int_new(344L));
  lcl_ns_def(ns, "KEY_RIGHT_CONTROL", lcl_int_new(345L));
  lcl_ns_def(ns, "KEY_RIGHT_ALT", lcl_int_new(346L));
  lcl_ns_def(ns, "KEY_RIGHT_SUPER", lcl_int_new(347L));
  lcl_ns_def(ns, "KEY_KB_MENU", lcl_int_new(348L));
  lcl_ns_def(ns, "KEY_KP_0", lcl_int_new(320L));
  lcl_ns_def(ns, "KEY_KP_1", lcl_int_new(321L));
  lcl_ns_def(ns, "KEY_KP_2", lcl_int_new(322L));
  lcl_ns_def(ns, "KEY_KP_3", lcl_int_new(323L));
  lcl_ns_def(ns, "KEY_KP_4", lcl_int_new(324L));
  lcl_ns_def(ns, "KEY_KP_5", lcl_int_new(325L));
  lcl_ns_def(ns, "KEY_KP_6", lcl_int_new(326L));
  lcl_ns_def(ns, "KEY_KP_7", lcl_int_new(327L));
  lcl_ns_def(ns, "KEY_KP_8", lcl_int_new(328L));
  lcl_ns_def(ns, "KEY_KP_9", lcl_int_new(329L));
  lcl_ns_def(ns, "KEY_KP_DECIMAL", lcl_int_new(330L));
  lcl_ns_def(ns, "KEY_KP_DIVIDE", lcl_int_new(331L));
  lcl_ns_def(ns, "KEY_KP_MULTIPLY", lcl_int_new(332L));
  lcl_ns_def(ns, "KEY_KP_SUBTRACT", lcl_int_new(333L));
  lcl_ns_def(ns, "KEY_KP_ADD", lcl_int_new(334L));
  lcl_ns_def(ns, "KEY_KP_ENTER", lcl_int_new(335L));
  lcl_ns_def(ns, "KEY_KP_EQUAL", lcl_int_new(336L));
  lcl_ns_def(ns, "KEY_BACK", lcl_int_new(4L));
  lcl_ns_def(ns, "KEY_MENU", lcl_int_new(5L));
  lcl_ns_def(ns, "KEY_VOLUME_UP", lcl_int_new(24L));
  lcl_ns_def(ns, "KEY_VOLUME_DOWN", lcl_int_new(25L));
  lcl_ns_def(ns, "MOUSE_BUTTON_LEFT", lcl_int_new(0L));
  lcl_ns_def(ns, "MOUSE_BUTTON_RIGHT", lcl_int_new(1L));
  lcl_ns_def(ns, "MOUSE_BUTTON_MIDDLE", lcl_int_new(2L));
  lcl_ns_def(ns, "MOUSE_BUTTON_SIDE", lcl_int_new(3L));
  lcl_ns_def(ns, "MOUSE_BUTTON_EXTRA", lcl_int_new(4L));
  lcl_ns_def(ns, "MOUSE_BUTTON_FORWARD", lcl_int_new(5L));
  lcl_ns_def(ns, "MOUSE_BUTTON_BACK", lcl_int_new(6L));
  lcl_ns_def(ns, "MOUSE_CURSOR_DEFAULT", lcl_int_new(0L));
  lcl_ns_def(ns, "MOUSE_CURSOR_ARROW", lcl_int_new(1L));
  lcl_ns_def(ns, "MOUSE_CURSOR_IBEAM", lcl_int_new(2L));
  lcl_ns_def(ns, "MOUSE_CURSOR_CROSSHAIR", lcl_int_new(3L));
  lcl_ns_def(ns, "MOUSE_CURSOR_POINTING_HAND", lcl_int_new(4L));
  lcl_ns_def(ns, "MOUSE_CURSOR_RESIZE_EW", lcl_int_new(5L));
  lcl_ns_def(ns, "MOUSE_CURSOR_RESIZE_NS", lcl_int_new(6L));
  lcl_ns_def(ns, "MOUSE_CURSOR_RESIZE_NWSE", lcl_int_new(7L));
  lcl_ns_def(ns, "MOUSE_CURSOR_RESIZE_NESW", lcl_int_new(8L));
  lcl_ns_def(ns, "MOUSE_CURSOR_RESIZE_ALL", lcl_int_new(9L));
  lcl_ns_def(ns, "MOUSE_CURSOR_NOT_ALLOWED", lcl_int_new(10L));
  lcl_ns_def(ns, "GAMEPAD_BUTTON_UNKNOWN", lcl_int_new(0L));
  lcl_ns_def(ns, "GAMEPAD_BUTTON_LEFT_FACE_UP", lcl_int_new(1L));
  lcl_ns_def(ns, "GAMEPAD_BUTTON_LEFT_FACE_RIGHT", lcl_int_new(2L));
  lcl_ns_def(ns, "GAMEPAD_BUTTON_LEFT_FACE_DOWN", lcl_int_new(3L));
  lcl_ns_def(ns, "GAMEPAD_BUTTON_LEFT_FACE_LEFT", lcl_int_new(4L));
  lcl_ns_def(ns, "GAMEPAD_BUTTON_RIGHT_FACE_UP", lcl_int_new(5L));
  lcl_ns_def(ns, "GAMEPAD_BUTTON_RIGHT_FACE_RIGHT", lcl_int_new(6L));
  lcl_ns_def(ns, "GAMEPAD_BUTTON_RIGHT_FACE_DOWN", lcl_int_new(7L));
  lcl_ns_def(ns, "GAMEPAD_BUTTON_RIGHT_FACE_LEFT", lcl_int_new(8L));
  lcl_ns_def(ns, "GAMEPAD_BUTTON_LEFT_TRIGGER_1", lcl_int_new(9L));
  lcl_ns_def(ns, "GAMEPAD_BUTTON_LEFT_TRIGGER_2", lcl_int_new(10L));
  lcl_ns_def(ns, "GAMEPAD_BUTTON_RIGHT_TRIGGER_1", lcl_int_new(11L));
  lcl_ns_def(ns, "GAMEPAD_BUTTON_RIGHT_TRIGGER_2", lcl_int_new(12L));
  lcl_ns_def(ns, "GAMEPAD_BUTTON_MIDDLE_LEFT", lcl_int_new(13L));
  lcl_ns_def(ns, "GAMEPAD_BUTTON_MIDDLE", lcl_int_new(14L));
  lcl_ns_def(ns, "GAMEPAD_BUTTON_MIDDLE_RIGHT", lcl_int_new(15L));
  lcl_ns_def(ns, "GAMEPAD_BUTTON_LEFT_THUMB", lcl_int_new(16L));
  lcl_ns_def(ns, "GAMEPAD_BUTTON_RIGHT_THUMB", lcl_int_new(17L));
  lcl_ns_def(ns, "GAMEPAD_AXIS_LEFT_X", lcl_int_new(0L));
  lcl_ns_def(ns, "GAMEPAD_AXIS_LEFT_Y", lcl_int_new(1L));
  lcl_ns_def(ns, "GAMEPAD_AXIS_RIGHT_X", lcl_int_new(2L));
  lcl_ns_def(ns, "GAMEPAD_AXIS_RIGHT_Y", lcl_int_new(3L));
  lcl_ns_def(ns, "GAMEPAD_AXIS_LEFT_TRIGGER", lcl_int_new(4L));
  lcl_ns_def(ns, "GAMEPAD_AXIS_RIGHT_TRIGGER", lcl_int_new(5L));
  lcl_ns_def(ns, "MATERIAL_MAP_ALBEDO", lcl_int_new(0L));
  lcl_ns_def(ns, "MATERIAL_MAP_METALNESS", lcl_int_new(1L));
  lcl_ns_def(ns, "MATERIAL_MAP_NORMAL", lcl_int_new(2L));
  lcl_ns_def(ns, "MATERIAL_MAP_ROUGHNESS", lcl_int_new(3L));
  lcl_ns_def(ns, "MATERIAL_MAP_OCCLUSION", lcl_int_new(4L));
  lcl_ns_def(ns, "MATERIAL_MAP_EMISSION", lcl_int_new(5L));
  lcl_ns_def(ns, "MATERIAL_MAP_HEIGHT", lcl_int_new(6L));
  lcl_ns_def(ns, "MATERIAL_MAP_CUBEMAP", lcl_int_new(7L));
  lcl_ns_def(ns, "MATERIAL_MAP_IRRADIANCE", lcl_int_new(8L));
  lcl_ns_def(ns, "MATERIAL_MAP_PREFILTER", lcl_int_new(9L));
  lcl_ns_def(ns, "MATERIAL_MAP_BRDF", lcl_int_new(10L));
  lcl_ns_def(ns, "SHADER_LOC_VERTEX_POSITION", lcl_int_new(0L));
  lcl_ns_def(ns, "SHADER_LOC_VERTEX_TEXCOORD01", lcl_int_new(1L));
  lcl_ns_def(ns, "SHADER_LOC_VERTEX_TEXCOORD02", lcl_int_new(2L));
  lcl_ns_def(ns, "SHADER_LOC_VERTEX_NORMAL", lcl_int_new(3L));
  lcl_ns_def(ns, "SHADER_LOC_VERTEX_TANGENT", lcl_int_new(4L));
  lcl_ns_def(ns, "SHADER_LOC_VERTEX_COLOR", lcl_int_new(5L));
  lcl_ns_def(ns, "SHADER_LOC_MATRIX_MVP", lcl_int_new(6L));
  lcl_ns_def(ns, "SHADER_LOC_MATRIX_VIEW", lcl_int_new(7L));
  lcl_ns_def(ns, "SHADER_LOC_MATRIX_PROJECTION", lcl_int_new(8L));
  lcl_ns_def(ns, "SHADER_LOC_MATRIX_MODEL", lcl_int_new(9L));
  lcl_ns_def(ns, "SHADER_LOC_MATRIX_NORMAL", lcl_int_new(10L));
  lcl_ns_def(ns, "SHADER_LOC_VECTOR_VIEW", lcl_int_new(11L));
  lcl_ns_def(ns, "SHADER_LOC_COLOR_DIFFUSE", lcl_int_new(12L));
  lcl_ns_def(ns, "SHADER_LOC_COLOR_SPECULAR", lcl_int_new(13L));
  lcl_ns_def(ns, "SHADER_LOC_COLOR_AMBIENT", lcl_int_new(14L));
  lcl_ns_def(ns, "SHADER_LOC_MAP_ALBEDO", lcl_int_new(15L));
  lcl_ns_def(ns, "SHADER_LOC_MAP_METALNESS", lcl_int_new(16L));
  lcl_ns_def(ns, "SHADER_LOC_MAP_NORMAL", lcl_int_new(17L));
  lcl_ns_def(ns, "SHADER_LOC_MAP_ROUGHNESS", lcl_int_new(18L));
  lcl_ns_def(ns, "SHADER_LOC_MAP_OCCLUSION", lcl_int_new(19L));
  lcl_ns_def(ns, "SHADER_LOC_MAP_EMISSION", lcl_int_new(20L));
  lcl_ns_def(ns, "SHADER_LOC_MAP_HEIGHT", lcl_int_new(21L));
  lcl_ns_def(ns, "SHADER_LOC_MAP_CUBEMAP", lcl_int_new(22L));
  lcl_ns_def(ns, "SHADER_LOC_MAP_IRRADIANCE", lcl_int_new(23L));
  lcl_ns_def(ns, "SHADER_LOC_MAP_PREFILTER", lcl_int_new(24L));
  lcl_ns_def(ns, "SHADER_LOC_MAP_BRDF", lcl_int_new(25L));
  lcl_ns_def(ns, "SHADER_LOC_VERTEX_BONEIDS", lcl_int_new(26L));
  lcl_ns_def(ns, "SHADER_LOC_VERTEX_BONEWEIGHTS", lcl_int_new(27L));
  lcl_ns_def(ns, "SHADER_LOC_MATRIX_BONETRANSFORMS", lcl_int_new(28L));
  lcl_ns_def(ns, "SHADER_LOC_VERTEX_INSTANCETRANSFORM", lcl_int_new(29L));
  lcl_ns_def(ns, "SHADER_UNIFORM_FLOAT", lcl_int_new(0L));
  lcl_ns_def(ns, "SHADER_UNIFORM_VEC2", lcl_int_new(1L));
  lcl_ns_def(ns, "SHADER_UNIFORM_VEC3", lcl_int_new(2L));
  lcl_ns_def(ns, "SHADER_UNIFORM_VEC4", lcl_int_new(3L));
  lcl_ns_def(ns, "SHADER_UNIFORM_INT", lcl_int_new(4L));
  lcl_ns_def(ns, "SHADER_UNIFORM_IVEC2", lcl_int_new(5L));
  lcl_ns_def(ns, "SHADER_UNIFORM_IVEC3", lcl_int_new(6L));
  lcl_ns_def(ns, "SHADER_UNIFORM_IVEC4", lcl_int_new(7L));
  lcl_ns_def(ns, "SHADER_UNIFORM_UINT", lcl_int_new(8L));
  lcl_ns_def(ns, "SHADER_UNIFORM_UIVEC2", lcl_int_new(9L));
  lcl_ns_def(ns, "SHADER_UNIFORM_UIVEC3", lcl_int_new(10L));
  lcl_ns_def(ns, "SHADER_UNIFORM_UIVEC4", lcl_int_new(11L));
  lcl_ns_def(ns, "SHADER_UNIFORM_SAMPLER2D", lcl_int_new(12L));
  lcl_ns_def(ns, "SHADER_ATTRIB_FLOAT", lcl_int_new(0L));
  lcl_ns_def(ns, "SHADER_ATTRIB_VEC2", lcl_int_new(1L));
  lcl_ns_def(ns, "SHADER_ATTRIB_VEC3", lcl_int_new(2L));
  lcl_ns_def(ns, "SHADER_ATTRIB_VEC4", lcl_int_new(3L));
  lcl_ns_def(ns, "PIXELFORMAT_UNCOMPRESSED_GRAYSCALE", lcl_int_new(1L));
  lcl_ns_def(ns, "PIXELFORMAT_UNCOMPRESSED_GRAY_ALPHA", lcl_int_new(2L));
  lcl_ns_def(ns, "PIXELFORMAT_UNCOMPRESSED_R5G6B5", lcl_int_new(3L));
  lcl_ns_def(ns, "PIXELFORMAT_UNCOMPRESSED_R8G8B8", lcl_int_new(4L));
  lcl_ns_def(ns, "PIXELFORMAT_UNCOMPRESSED_R5G5B5A1", lcl_int_new(5L));
  lcl_ns_def(ns, "PIXELFORMAT_UNCOMPRESSED_R4G4B4A4", lcl_int_new(6L));
  lcl_ns_def(ns, "PIXELFORMAT_UNCOMPRESSED_R8G8B8A8", lcl_int_new(7L));
  lcl_ns_def(ns, "PIXELFORMAT_UNCOMPRESSED_R32", lcl_int_new(8L));
  lcl_ns_def(ns, "PIXELFORMAT_UNCOMPRESSED_R32G32B32", lcl_int_new(9L));
  lcl_ns_def(ns, "PIXELFORMAT_UNCOMPRESSED_R32G32B32A32", lcl_int_new(10L));
  lcl_ns_def(ns, "PIXELFORMAT_UNCOMPRESSED_R16", lcl_int_new(11L));
  lcl_ns_def(ns, "PIXELFORMAT_UNCOMPRESSED_R16G16B16", lcl_int_new(12L));
  lcl_ns_def(ns, "PIXELFORMAT_UNCOMPRESSED_R16G16B16A16", lcl_int_new(13L));
  lcl_ns_def(ns, "PIXELFORMAT_COMPRESSED_DXT1_RGB", lcl_int_new(14L));
  lcl_ns_def(ns, "PIXELFORMAT_COMPRESSED_DXT1_RGBA", lcl_int_new(15L));
  lcl_ns_def(ns, "PIXELFORMAT_COMPRESSED_DXT3_RGBA", lcl_int_new(16L));
  lcl_ns_def(ns, "PIXELFORMAT_COMPRESSED_DXT5_RGBA", lcl_int_new(17L));
  lcl_ns_def(ns, "PIXELFORMAT_COMPRESSED_ETC1_RGB", lcl_int_new(18L));
  lcl_ns_def(ns, "PIXELFORMAT_COMPRESSED_ETC2_RGB", lcl_int_new(19L));
  lcl_ns_def(ns, "PIXELFORMAT_COMPRESSED_ETC2_EAC_RGBA", lcl_int_new(20L));
  lcl_ns_def(ns, "PIXELFORMAT_COMPRESSED_PVRT_RGB", lcl_int_new(21L));
  lcl_ns_def(ns, "PIXELFORMAT_COMPRESSED_PVRT_RGBA", lcl_int_new(22L));
  lcl_ns_def(ns, "PIXELFORMAT_COMPRESSED_ASTC_4x4_RGBA", lcl_int_new(23L));
  lcl_ns_def(ns, "PIXELFORMAT_COMPRESSED_ASTC_8x8_RGBA", lcl_int_new(24L));
  lcl_ns_def(ns, "TEXTURE_FILTER_POINT", lcl_int_new(0L));
  lcl_ns_def(ns, "TEXTURE_FILTER_BILINEAR", lcl_int_new(1L));
  lcl_ns_def(ns, "TEXTURE_FILTER_TRILINEAR", lcl_int_new(2L));
  lcl_ns_def(ns, "TEXTURE_FILTER_ANISOTROPIC_4X", lcl_int_new(3L));
  lcl_ns_def(ns, "TEXTURE_FILTER_ANISOTROPIC_8X", lcl_int_new(4L));
  lcl_ns_def(ns, "TEXTURE_FILTER_ANISOTROPIC_16X", lcl_int_new(5L));
  lcl_ns_def(ns, "TEXTURE_WRAP_REPEAT", lcl_int_new(0L));
  lcl_ns_def(ns, "TEXTURE_WRAP_CLAMP", lcl_int_new(1L));
  lcl_ns_def(ns, "TEXTURE_WRAP_MIRROR_REPEAT", lcl_int_new(2L));
  lcl_ns_def(ns, "TEXTURE_WRAP_MIRROR_CLAMP", lcl_int_new(3L));
  lcl_ns_def(ns, "CUBEMAP_LAYOUT_AUTO_DETECT", lcl_int_new(0L));
  lcl_ns_def(ns, "CUBEMAP_LAYOUT_LINE_VERTICAL", lcl_int_new(1L));
  lcl_ns_def(ns, "CUBEMAP_LAYOUT_LINE_HORIZONTAL", lcl_int_new(2L));
  lcl_ns_def(ns, "CUBEMAP_LAYOUT_CROSS_THREE_BY_FOUR", lcl_int_new(3L));
  lcl_ns_def(ns, "CUBEMAP_LAYOUT_CROSS_FOUR_BY_THREE", lcl_int_new(4L));
  lcl_ns_def(ns, "FONT_DEFAULT", lcl_int_new(0L));
  lcl_ns_def(ns, "FONT_BITMAP", lcl_int_new(1L));
  lcl_ns_def(ns, "FONT_SDF", lcl_int_new(2L));
  lcl_ns_def(ns, "BLEND_ALPHA", lcl_int_new(0L));
  lcl_ns_def(ns, "BLEND_ADDITIVE", lcl_int_new(1L));
  lcl_ns_def(ns, "BLEND_MULTIPLIED", lcl_int_new(2L));
  lcl_ns_def(ns, "BLEND_ADD_COLORS", lcl_int_new(3L));
  lcl_ns_def(ns, "BLEND_SUBTRACT_COLORS", lcl_int_new(4L));
  lcl_ns_def(ns, "BLEND_ALPHA_PREMULTIPLY", lcl_int_new(5L));
  lcl_ns_def(ns, "BLEND_CUSTOM", lcl_int_new(6L));
  lcl_ns_def(ns, "BLEND_CUSTOM_SEPARATE", lcl_int_new(7L));
  lcl_ns_def(ns, "GESTURE_NONE", lcl_int_new(0L));
  lcl_ns_def(ns, "GESTURE_TAP", lcl_int_new(1L));
  lcl_ns_def(ns, "GESTURE_DOUBLETAP", lcl_int_new(2L));
  lcl_ns_def(ns, "GESTURE_HOLD", lcl_int_new(4L));
  lcl_ns_def(ns, "GESTURE_DRAG", lcl_int_new(8L));
  lcl_ns_def(ns, "GESTURE_SWIPE_RIGHT", lcl_int_new(16L));
  lcl_ns_def(ns, "GESTURE_SWIPE_LEFT", lcl_int_new(32L));
  lcl_ns_def(ns, "GESTURE_SWIPE_UP", lcl_int_new(64L));
  lcl_ns_def(ns, "GESTURE_SWIPE_DOWN", lcl_int_new(128L));
  lcl_ns_def(ns, "GESTURE_PINCH_IN", lcl_int_new(256L));
  lcl_ns_def(ns, "GESTURE_PINCH_OUT", lcl_int_new(512L));
  lcl_ns_def(ns, "CAMERA_CUSTOM", lcl_int_new(0L));
  lcl_ns_def(ns, "CAMERA_FREE", lcl_int_new(1L));
  lcl_ns_def(ns, "CAMERA_ORBITAL", lcl_int_new(2L));
  lcl_ns_def(ns, "CAMERA_FIRST_PERSON", lcl_int_new(3L));
  lcl_ns_def(ns, "CAMERA_THIRD_PERSON", lcl_int_new(4L));
  lcl_ns_def(ns, "CAMERA_PERSPECTIVE", lcl_int_new(0L));
  lcl_ns_def(ns, "CAMERA_ORTHOGRAPHIC", lcl_int_new(1L));
  lcl_ns_def(ns, "NPATCH_NINE_PATCH", lcl_int_new(0L));
  lcl_ns_def(ns, "NPATCH_THREE_PATCH_VERTICAL", lcl_int_new(1L));
  lcl_ns_def(ns, "NPATCH_THREE_PATCH_HORIZONTAL", lcl_int_new(2L));
  lcl_ns_def(ns, "RAYLIB_VERSION_MAJOR", lcl_int_new((long)(RAYLIB_VERSION_MAJOR)));
  lcl_ns_def(ns, "RAYLIB_VERSION_MINOR", lcl_int_new((long)(RAYLIB_VERSION_MINOR)));
  lcl_ns_def(ns, "RAYLIB_VERSION_PATCH", lcl_int_new((long)(RAYLIB_VERSION_PATCH)));
  lcl_ns_def(ns, "RAYLIB_VERSION", lcl_string_new(RAYLIB_VERSION));
  lcl_ns_def(ns, "PI", lcl_float_new((double)(PI)));
  lcl_ns_def(ns, "DEG2RAD", lcl_float_new((double)(DEG2RAD)));
  lcl_ns_def(ns, "RAD2DEG", lcl_float_new((double)(RAD2DEG)));
  lcl_ns_def(ns, "LIGHTGRAY", rl_new_Color(LIGHTGRAY));
  lcl_ns_def(ns, "GRAY", rl_new_Color(GRAY));
  lcl_ns_def(ns, "DARKGRAY", rl_new_Color(DARKGRAY));
  lcl_ns_def(ns, "YELLOW", rl_new_Color(YELLOW));
  lcl_ns_def(ns, "GOLD", rl_new_Color(GOLD));
  lcl_ns_def(ns, "ORANGE", rl_new_Color(ORANGE));
  lcl_ns_def(ns, "PINK", rl_new_Color(PINK));
  lcl_ns_def(ns, "RED", rl_new_Color(RED));
  lcl_ns_def(ns, "MAROON", rl_new_Color(MAROON));
  lcl_ns_def(ns, "GREEN", rl_new_Color(GREEN));
  lcl_ns_def(ns, "LIME", rl_new_Color(LIME));
  lcl_ns_def(ns, "DARKGREEN", rl_new_Color(DARKGREEN));
  lcl_ns_def(ns, "SKYBLUE", rl_new_Color(SKYBLUE));
  lcl_ns_def(ns, "BLUE", rl_new_Color(BLUE));
  lcl_ns_def(ns, "DARKBLUE", rl_new_Color(DARKBLUE));
  lcl_ns_def(ns, "PURPLE", rl_new_Color(PURPLE));
  lcl_ns_def(ns, "VIOLET", rl_new_Color(VIOLET));
  lcl_ns_def(ns, "DARKPURPLE", rl_new_Color(DARKPURPLE));
  lcl_ns_def(ns, "BEIGE", rl_new_Color(BEIGE));
  lcl_ns_def(ns, "BROWN", rl_new_Color(BROWN));
  lcl_ns_def(ns, "DARKBROWN", rl_new_Color(DARKBROWN));
  lcl_ns_def(ns, "WHITE", rl_new_Color(WHITE));
  lcl_ns_def(ns, "BLACK", rl_new_Color(BLACK));
  lcl_ns_def(ns, "BLANK", rl_new_Color(BLANK));
  lcl_ns_def(ns, "MAGENTA", rl_new_Color(MAGENTA));
  lcl_ns_def(ns, "RAYWHITE", rl_new_Color(RAYWHITE));
}

/* Functions NOT bound by the generator (bind by hand if needed):
 *   GetWindowHandle                  returns void *
 *   SetShaderValue                   param const void * value
 *   SetShaderValueV                  param const void * value
 *   LoadRandomSequence               returns int *
 *   UnloadRandomSequence             param int * sequence
 *   TraceLog                         varargs
 *   SetTraceLogCallback              callback TraceLogCallback
 *   MemAlloc                         returns void *
 *   MemRealloc                       param void * ptr
 *   MemFree                          param void * ptr
 *   LoadFileData                     param int * dataSize
 *   UnloadFileData                   param unsigned char * data
 *   SaveFileData                     param void * data
 *   ExportDataAsCode                 param const unsigned char * data
 *   LoadFileText                     returns char *
 *   UnloadFileText                   param char * text
 *   SetLoadFileDataCallback          callback LoadFileDataCallback
 *   SetSaveFileDataCallback          callback SaveFileDataCallback
 *   SetLoadFileTextCallback          callback LoadFileTextCallback
 *   SetSaveFileTextCallback          callback SaveFileTextCallback
 *   CompressData                     param const unsigned char * data
 *   DecompressData                   param const unsigned char * compData
 *   EncodeDataBase64                 param const unsigned char * data
 *   DecodeDataBase64                 param int * outputSize
 *   ComputeCRC32                     param unsigned char * data
 *   ComputeMD5                       param unsigned char * data
 *   ComputeSHA1                      param unsigned char * data
 *   ComputeSHA256                    param unsigned char * data
 *   LoadImageAnim                    param int * frames
 *   LoadImageAnimFromMemory          param const unsigned char * fileData
 *   LoadImageFromMemory              param const unsigned char * fileData
 *   ExportImageToMemory              param int * fileSize
 *   ImageKernelConvolution           param const float * kernel
 *   LoadImageColors                  returns Color *
 *   LoadImagePalette                 param int * colorCount
 *   UpdateTexture                    param const void * pixels
 *   UpdateTextureRec                 param const void * pixels
 *   GetPixelColor                    param void * srcPtr
 *   SetPixelColor                    param void * dstPtr
 *   LoadFontFromMemory               param const unsigned char * fileData
 *   LoadFontData                     param const unsigned char * fileData
 *   GenImageFontAtlas                param const GlyphInfo * glyphs
 *   MeasureTextCodepoints            param const int * codepoints
 *   LoadUTF8                         param const int * codepoints
 *   UnloadUTF8                       param char * text
 *   LoadCodepoints                   param int * count
 *   UnloadCodepoints                 param int * codepoints
 *   GetCodepoint                     param int * codepointSize
 *   GetCodepointNext                 param int * codepointSize
 *   GetCodepointPrevious             param int * codepointSize
 *   CodepointToUTF8                  param int * utf8Size
 *   LoadTextLines                    param int * count
 *   UnloadTextLines                  param char ** text
 *   TextCopy                         param char * dst
 *   TextFormat                       varargs
 *   GetTextBetween                   returns char *
 *   TextReplace                      returns char *
 *   TextReplaceAlloc                 returns char *
 *   TextReplaceBetween               returns char *
 *   TextReplaceBetweenAlloc          returns char *
 *   TextInsert                       returns char *
 *   TextInsertAlloc                  returns char *
 *   TextJoin                         param char ** textList
 *   TextSplit                        param int * count
 *   TextAppend                       param char * text
 *   TextToUpper                      returns char *
 *   TextToLower                      returns char *
 *   TextToPascal                     returns char *
 *   TextToSnake                      returns char *
 *   TextToCamel                      returns char *
 *   UpdateMeshBuffer                 param const void * data
 *   LoadMaterials                    param int * materialCount
 *   LoadModelAnimations              param int * animCount
 *   LoadWaveFromMemory               param const unsigned char * fileData
 *   UpdateSound                      array of const void *
 *   LoadWaveSamples                  returns float *
 *   UnloadWaveSamples                param float * samples
 *   LoadMusicStreamFromMemory        param const unsigned char * data
 *   UpdateAudioStream                array of const void *
 *   SetAudioStreamCallback           callback AudioCallback
 *   AttachAudioStreamProcessor       callback AudioCallback
 *   DetachAudioStreamProcessor       callback AudioCallback
 *   AttachAudioMixedProcessor        callback AudioCallback
 *   DetachAudioMixedProcessor        callback AudioCallback
 */
