# lcl-raylib

[raylib](https://www.raylib.com/) bindings for the
[Lcl](https://github.com/bholten/lcl) scripting language.

> Pre-alpha. `raylib.h` is bound; `raymath.h`, `rcamera.h`,
> `rgestures.h` and `raygui.h` are planned.

```lcl
import raylib

init_window 640 480 "Hello, Raylib!"
set_target_fps 60

while {not [window_should_close]} {
    begin_drawing
    clear_background $RAYWHITE
    draw_text "Hello from Lcl!" 190 200 20 $LIGHTGRAY
    draw_circle_v (320 300) 40 $GOLD          ;; a list is a Vector2
    end_drawing
}

close_window
```

## The `Raylib::` layer (idiomatic API)

`lib/raylib/src/Raylib.lcl` is a pure-Lcl layer over the raw bindings
(embedded in the runner; `require lib/raylib/src/Raylib.lcl` from
other hosts). It owns the main loop, begin/end pairs and asset
unloading:

```lcl
import Raylib

app 800 600 "Bounce" {
    fps 60
    background "#1e1e2e"
    let ball [asset texture "ball.png"]        ;; unloaded automatically at exit
    var pos (400 300)
    var vel (120 90)

    on_update {dt} { set! pos [Vec::add $pos [Vec::scale $vel $dt]] }
    on_key_pressed space { set! vel [Vec::neg $vel] }
    on_draw {
        raylib::draw_texture_v $ball $pos ${raylib::WHITE}
        text "pos: $pos" 10 10 20 raywhite
    }
}
```

| | |
|---|---|
| loop | `app w h title {setup}`, `on_update {dt} {}`, `on_draw {}`, `on_key_pressed`/`on_key_down key {}`, `on_exit {}`, `quit!`, `fps`, `background` |
| hosted loop | `hosted!` makes `app` return after setup; the host calls `step!` per frame and `close!` (Emscripten model) |
| brackets | `draw {}`, `mode_2d $cam {}`, `mode_3d`, `texture_mode`, `shader`, `blend`, `scissor (x y w h) {}` — the end call always runs, errors re-raise |
| assets | `asset texture path` (`image font sound music wave model shader render_texture`), `track! kind value`, `unload_all!` |
| input | `key_down? space`, `key_pressed?`, `key_released?`, `mouse_down? left`, `mouse_pressed?`, `mouse_pos`, `key`, `mouse_button` |
| colours | `color red`, `color "#ff8000"`, `color "#ff800080"`, `color (r g b)`, `fade red 0.5` |
| math | `Vec::add sub mul scale dot length dist norm lerp neg clamp` on `(x y ...)` lists; `Rect::contains? overlaps? center around` |

Conventions: mutators end in `!`, predicates in `?`,
vectors/rects/colours are plain lists. Every proc has `;;;` docs; the
`Examples:` are doctests (`ctest --test-dir build`).

## Build

```sh
cmake -B build && cmake --build build
build/lcl-raylib examples/hello.lcl        # raw bindings
build/lcl-raylib examples/bounce.lcl       # Raylib:: layer
ctest --test-dir build                     # doctests for the Raylib:: layer
```

raylib 6.0 and lcl are fetched by CMake (source tarballs). To build against local checkouts:

```sh
cmake -B build -DFETCHCONTENT_SOURCE_DIR_LCL=$HOME/dev/lcl -DFETCHCONTENT_SOURCE_DIR_RAYLIB=$HOME/dev/raylib
```

Targets:

| target        | what                                                                                  |
|---------------|---------------------------------------------------------------------------------------|
| `lcl_raylib`  | static library (`lcl::raylib`); call `lcl_register_raylib(interp)` from your host    |
| `lcl-raylib`  | script runner: `lcl-raylib script.lcl [args]` or `lcl-raylib -c "code"` (core + math + raylib) |

## Embedding

```c
#include <lcl.h>
#include <lcl-raylib.h>

lcl_interp *interp = lcl_interp_new();
lcl_register_core(interp);
lcl_register_raylib(interp);
lcl_eval_file(interp, "game.lcl", NULL);
```

## Conventions

Everything lives in the `raylib` namespace (`import raylib` to drop the prefix).

| raylib                          | Lcl                                              |
|---------------------------------|--------------------------------------------------|
| `DrawCircleV(...)`              | `raylib::draw_circle_v ...`                      |
| `BeginMode2D`, `Camera3D`       | `begin_mode_2d`, `camera_3d`                     |
| `int`, `unsigned`, `bool`       | int (bools are `0`/`1`; ints also accept floats) |
| `float`, `double`               | float                                            |
| `const char *`                  | string                                           |
| `KEY_SPACE`, `FLAG_VSYNC_HINT`  | `$KEY_SPACE`, `$FLAG_VSYNC_HINT` (ints)          |
| `RAYWHITE`, `RED`, ...          | `$RAYWHITE`, `$RED` (Color values)               |
| `PI`, `DEG2RAD`, `RAYLIB_VERSION` | `$PI`, `$DEG2RAD`, `$RAYLIB_VERSION`           |

### Structs

Every raylib struct is an opaque Lcl value tagged `raylib::<Struct>`
(e.g. `raylib::Vector2`, `raylib::Texture`).  For each struct there
is:

```lcl
let v [vector2 10 20]           ;; constructor, positional fields (only for plain-data structs)
vector2_x $v                    ;; getter:  <struct>_<field>
vector2_set_x $v 42             ;; setter:  <struct>_set_<field>  (mutates in place)
```

Plain-data structs (`Vector2/3/4`, `Color`, `Rectangle`,
`Camera2D/3D`, `Ray`, `BoundingBox`, `Matrix`, ...)  may also be
written inline as a list, nested as needed, or as a string of numbers:

```lcl
draw_circle_v (320 240) 40 (255 0 0 255)
let cam [camera_3d (10 10 10) (0 0 0) (0 1 0) 45.0 $CAMERA_PERSPECTIVE]
let cam2 ((10 10 10) (0 0 0) (0 1 0) 45.0 0)     ;; same thing, as a nested list
draw_rectangle_rec "10 10 100 50" $BLUE
```

Functions taking a `T *` (e.g. `UpdateCamera(Camera *, int)`,
`ImageDraw*(Image *, ...)`) mutate the opaque you pass.  `const T
*items, int count` parameter pairs take a single Lcl list:
`draw_line_strip ((0 0) (10 10) (20 0)) $RED`.

Resource-owning structs (`Texture`, `Image`, `Font`, `Sound`, `Model`,
...) are *not* freed automatically; call the matching `unload_*` like
you would in C.

### Not bound (yet)

Functions dealing with raw byte buffers, out-parameters, callbacks and
varargs are not generated; the list is at the bottom of
`src/lcl-raylib-gen.c`. Some have hand-written Lcl-friendly versions
in `src/lcl-raylib.c` (`load_file_text`, `text_split`, `text_join`,
`load_codepoints`, `load_utf8`, `get_codepoint`, `trace_log`,
`load_image_colors`, `load_image_palette`, `load_random_sequence`,
`set_shader_value`, `file_path_list_paths`).

## Regenerating the bindings

`src/lcl-raylib-gen.c` and `src/lcl-raylib-internal.h` are generated
from `tools/raylib_api.json` (raylib's
`tools/rlparser/output/raylib_api.json`, with its unescaped-quote bugs
fixed) and are committed:

```sh
python3 tools/gen_bindings.py      # rewrites src/lcl-raylib-gen.c + src/lcl-raylib-internal.h
```
