/* GENERATED FILE - DO NOT EDIT. See tools/gen_bindings.py. */
#ifndef LCL_RAYLIB_INTERNAL_H
#define LCL_RAYLIB_INTERNAL_H
#include <lcl.h>
#include <raylib.h>

/* Shared helpers implemented in lcl-raylib.c */
int rl_get_int(lcl_interp *interp, lcl_value *v, long *out);
int rl_get_float(lcl_interp *interp, lcl_value *v, double *out);
int rl_get_string(lcl_interp *interp, lcl_value *v, const char **out);
int rl_arg_error(lcl_interp *interp, const char *fn, int idx, const char *pname, const char *expected);
int rl_arity_error(lcl_interp *interp, const char *fn, int expected, int got);
int rl_parse_numbers(const char *s, double *out, int n);
void lcl_raylib_register_generated(lcl_interp *interp, lcl_value *ns);

/* Opaque type tags and per-struct helpers (generated) */
#define RL_TAG_Vector2 "raylib::Vector2"
#define RL_TAG_Vector3 "raylib::Vector3"
#define RL_TAG_Vector4 "raylib::Vector4"
#define RL_TAG_Matrix "raylib::Matrix"
#define RL_TAG_Color "raylib::Color"
#define RL_TAG_Rectangle "raylib::Rectangle"
#define RL_TAG_Image "raylib::Image"
#define RL_TAG_Texture "raylib::Texture"
#define RL_TAG_RenderTexture "raylib::RenderTexture"
#define RL_TAG_NPatchInfo "raylib::NPatchInfo"
#define RL_TAG_GlyphInfo "raylib::GlyphInfo"
#define RL_TAG_Font "raylib::Font"
#define RL_TAG_Camera3D "raylib::Camera3D"
#define RL_TAG_Camera2D "raylib::Camera2D"
#define RL_TAG_Mesh "raylib::Mesh"
#define RL_TAG_Shader "raylib::Shader"
#define RL_TAG_MaterialMap "raylib::MaterialMap"
#define RL_TAG_Material "raylib::Material"
#define RL_TAG_Transform "raylib::Transform"
#define RL_TAG_BoneInfo "raylib::BoneInfo"
#define RL_TAG_ModelSkeleton "raylib::ModelSkeleton"
#define RL_TAG_Model "raylib::Model"
#define RL_TAG_ModelAnimation "raylib::ModelAnimation"
#define RL_TAG_Ray "raylib::Ray"
#define RL_TAG_RayCollision "raylib::RayCollision"
#define RL_TAG_BoundingBox "raylib::BoundingBox"
#define RL_TAG_Wave "raylib::Wave"
#define RL_TAG_AudioStream "raylib::AudioStream"
#define RL_TAG_Sound "raylib::Sound"
#define RL_TAG_Music "raylib::Music"
#define RL_TAG_VrDeviceInfo "raylib::VrDeviceInfo"
#define RL_TAG_VrStereoConfig "raylib::VrStereoConfig"
#define RL_TAG_FilePathList "raylib::FilePathList"
#define RL_TAG_AutomationEvent "raylib::AutomationEvent"
#define RL_TAG_AutomationEventList "raylib::AutomationEventList"

lcl_value *rl_new_Vector2(Vector2 v);
int rl_get_Vector2(lcl_interp *interp, lcl_value *v, Vector2 *out);
int rl_ptr_Vector2(lcl_interp *interp, lcl_value *v, Vector2 **out);
lcl_value *rl_new_Vector3(Vector3 v);
int rl_get_Vector3(lcl_interp *interp, lcl_value *v, Vector3 *out);
int rl_ptr_Vector3(lcl_interp *interp, lcl_value *v, Vector3 **out);
lcl_value *rl_new_Vector4(Vector4 v);
int rl_get_Vector4(lcl_interp *interp, lcl_value *v, Vector4 *out);
int rl_ptr_Vector4(lcl_interp *interp, lcl_value *v, Vector4 **out);
lcl_value *rl_new_Matrix(Matrix v);
int rl_get_Matrix(lcl_interp *interp, lcl_value *v, Matrix *out);
int rl_ptr_Matrix(lcl_interp *interp, lcl_value *v, Matrix **out);
lcl_value *rl_new_Color(Color v);
int rl_get_Color(lcl_interp *interp, lcl_value *v, Color *out);
int rl_ptr_Color(lcl_interp *interp, lcl_value *v, Color **out);
lcl_value *rl_new_Rectangle(Rectangle v);
int rl_get_Rectangle(lcl_interp *interp, lcl_value *v, Rectangle *out);
int rl_ptr_Rectangle(lcl_interp *interp, lcl_value *v, Rectangle **out);
lcl_value *rl_new_Image(Image v);
int rl_get_Image(lcl_interp *interp, lcl_value *v, Image *out);
int rl_ptr_Image(lcl_interp *interp, lcl_value *v, Image **out);
lcl_value *rl_new_Texture(Texture v);
int rl_get_Texture(lcl_interp *interp, lcl_value *v, Texture *out);
int rl_ptr_Texture(lcl_interp *interp, lcl_value *v, Texture **out);
lcl_value *rl_new_RenderTexture(RenderTexture v);
int rl_get_RenderTexture(lcl_interp *interp, lcl_value *v, RenderTexture *out);
int rl_ptr_RenderTexture(lcl_interp *interp, lcl_value *v, RenderTexture **out);
lcl_value *rl_new_NPatchInfo(NPatchInfo v);
int rl_get_NPatchInfo(lcl_interp *interp, lcl_value *v, NPatchInfo *out);
int rl_ptr_NPatchInfo(lcl_interp *interp, lcl_value *v, NPatchInfo **out);
lcl_value *rl_new_GlyphInfo(GlyphInfo v);
int rl_get_GlyphInfo(lcl_interp *interp, lcl_value *v, GlyphInfo *out);
int rl_ptr_GlyphInfo(lcl_interp *interp, lcl_value *v, GlyphInfo **out);
lcl_value *rl_new_Font(Font v);
int rl_get_Font(lcl_interp *interp, lcl_value *v, Font *out);
int rl_ptr_Font(lcl_interp *interp, lcl_value *v, Font **out);
lcl_value *rl_new_Camera3D(Camera3D v);
int rl_get_Camera3D(lcl_interp *interp, lcl_value *v, Camera3D *out);
int rl_ptr_Camera3D(lcl_interp *interp, lcl_value *v, Camera3D **out);
lcl_value *rl_new_Camera2D(Camera2D v);
int rl_get_Camera2D(lcl_interp *interp, lcl_value *v, Camera2D *out);
int rl_ptr_Camera2D(lcl_interp *interp, lcl_value *v, Camera2D **out);
lcl_value *rl_new_Mesh(Mesh v);
int rl_get_Mesh(lcl_interp *interp, lcl_value *v, Mesh *out);
int rl_ptr_Mesh(lcl_interp *interp, lcl_value *v, Mesh **out);
lcl_value *rl_new_Shader(Shader v);
int rl_get_Shader(lcl_interp *interp, lcl_value *v, Shader *out);
int rl_ptr_Shader(lcl_interp *interp, lcl_value *v, Shader **out);
lcl_value *rl_new_MaterialMap(MaterialMap v);
int rl_get_MaterialMap(lcl_interp *interp, lcl_value *v, MaterialMap *out);
int rl_ptr_MaterialMap(lcl_interp *interp, lcl_value *v, MaterialMap **out);
lcl_value *rl_new_Material(Material v);
int rl_get_Material(lcl_interp *interp, lcl_value *v, Material *out);
int rl_ptr_Material(lcl_interp *interp, lcl_value *v, Material **out);
lcl_value *rl_new_Transform(Transform v);
int rl_get_Transform(lcl_interp *interp, lcl_value *v, Transform *out);
int rl_ptr_Transform(lcl_interp *interp, lcl_value *v, Transform **out);
lcl_value *rl_new_BoneInfo(BoneInfo v);
int rl_get_BoneInfo(lcl_interp *interp, lcl_value *v, BoneInfo *out);
int rl_ptr_BoneInfo(lcl_interp *interp, lcl_value *v, BoneInfo **out);
lcl_value *rl_new_ModelSkeleton(ModelSkeleton v);
int rl_get_ModelSkeleton(lcl_interp *interp, lcl_value *v, ModelSkeleton *out);
int rl_ptr_ModelSkeleton(lcl_interp *interp, lcl_value *v, ModelSkeleton **out);
lcl_value *rl_new_Model(Model v);
int rl_get_Model(lcl_interp *interp, lcl_value *v, Model *out);
int rl_ptr_Model(lcl_interp *interp, lcl_value *v, Model **out);
lcl_value *rl_new_ModelAnimation(ModelAnimation v);
int rl_get_ModelAnimation(lcl_interp *interp, lcl_value *v, ModelAnimation *out);
int rl_ptr_ModelAnimation(lcl_interp *interp, lcl_value *v, ModelAnimation **out);
lcl_value *rl_new_Ray(Ray v);
int rl_get_Ray(lcl_interp *interp, lcl_value *v, Ray *out);
int rl_ptr_Ray(lcl_interp *interp, lcl_value *v, Ray **out);
lcl_value *rl_new_RayCollision(RayCollision v);
int rl_get_RayCollision(lcl_interp *interp, lcl_value *v, RayCollision *out);
int rl_ptr_RayCollision(lcl_interp *interp, lcl_value *v, RayCollision **out);
lcl_value *rl_new_BoundingBox(BoundingBox v);
int rl_get_BoundingBox(lcl_interp *interp, lcl_value *v, BoundingBox *out);
int rl_ptr_BoundingBox(lcl_interp *interp, lcl_value *v, BoundingBox **out);
lcl_value *rl_new_Wave(Wave v);
int rl_get_Wave(lcl_interp *interp, lcl_value *v, Wave *out);
int rl_ptr_Wave(lcl_interp *interp, lcl_value *v, Wave **out);
lcl_value *rl_new_AudioStream(AudioStream v);
int rl_get_AudioStream(lcl_interp *interp, lcl_value *v, AudioStream *out);
int rl_ptr_AudioStream(lcl_interp *interp, lcl_value *v, AudioStream **out);
lcl_value *rl_new_Sound(Sound v);
int rl_get_Sound(lcl_interp *interp, lcl_value *v, Sound *out);
int rl_ptr_Sound(lcl_interp *interp, lcl_value *v, Sound **out);
lcl_value *rl_new_Music(Music v);
int rl_get_Music(lcl_interp *interp, lcl_value *v, Music *out);
int rl_ptr_Music(lcl_interp *interp, lcl_value *v, Music **out);
lcl_value *rl_new_VrDeviceInfo(VrDeviceInfo v);
int rl_get_VrDeviceInfo(lcl_interp *interp, lcl_value *v, VrDeviceInfo *out);
int rl_ptr_VrDeviceInfo(lcl_interp *interp, lcl_value *v, VrDeviceInfo **out);
lcl_value *rl_new_VrStereoConfig(VrStereoConfig v);
int rl_get_VrStereoConfig(lcl_interp *interp, lcl_value *v, VrStereoConfig *out);
int rl_ptr_VrStereoConfig(lcl_interp *interp, lcl_value *v, VrStereoConfig **out);
lcl_value *rl_new_FilePathList(FilePathList v);
int rl_get_FilePathList(lcl_interp *interp, lcl_value *v, FilePathList *out);
int rl_ptr_FilePathList(lcl_interp *interp, lcl_value *v, FilePathList **out);
lcl_value *rl_new_AutomationEvent(AutomationEvent v);
int rl_get_AutomationEvent(lcl_interp *interp, lcl_value *v, AutomationEvent *out);
int rl_ptr_AutomationEvent(lcl_interp *interp, lcl_value *v, AutomationEvent **out);
lcl_value *rl_new_AutomationEventList(AutomationEventList v);
int rl_get_AutomationEventList(lcl_interp *interp, lcl_value *v, AutomationEventList *out);
int rl_ptr_AutomationEventList(lcl_interp *interp, lcl_value *v, AutomationEventList **out);

#endif
