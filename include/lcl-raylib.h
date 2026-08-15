#ifndef LCL_RAYLIB_H
#define LCL_RAYLIB_H

#include <lcl.h>

#ifdef __cplusplus
extern "C" {
#endif

/*
 * Register the raylib.h bindings into `interp` as the `raylib` namespace
 * (e.g. raylib::init_window, raylib::draw_text, raylib::RAYWHITE, ...).
 *
 * Planned, not yet implemented: lcl_register_raymath, lcl_register_rcamera,
 * lcl_register_rgesture, lcl_register_raygui.
 */
void lcl_register_raylib(lcl_interp *interp);

#ifdef __cplusplus
}
#endif

#endif
