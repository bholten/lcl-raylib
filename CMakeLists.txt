cmake_minimum_required(VERSION 3.14)

project(lcl-raylib
  VERSION 0.1.0
  DESCRIPTION "Raylib bindings for the Lcl programming language"
  LANGUAGES C
)

option(LCL_RAYLIB_BUILD_RUNNER "Build the lcl-raylib script runner executable" ON)
option(LCL_RAYLIB_ENABLE_CLANG_TIDY "Run clang-tidy alongside compilation" OFF)

if(LCL_RAYLIB_ENABLE_CLANG_TIDY)
  find_program(LCL_RAYLIB_CLANG_TIDY_EXE clang-tidy)
  if(NOT LCL_RAYLIB_CLANG_TIDY_EXE)
    message(FATAL_ERROR "LCL_RAYLIB_ENABLE_CLANG_TIDY=ON but clang-tidy not found")
  endif()
endif()

# ---------------------------------------------------------------------------
# Dependencies
#
# Both raylib and lcl are pulled in with FetchContent as source tarballs
# (much faster than a git clone).  To develop against a local checkout use
# the standard FetchContent override, e.g.
#   cmake -B build -DFETCHCONTENT_SOURCE_DIR_LCL=$HOME/dev/lcl
#   cmake -B build -DFETCHCONTENT_SOURCE_DIR_RAYLIB=$HOME/dev/raylib
# ---------------------------------------------------------------------------
include(FetchContent)
if(POLICY CMP0135)
  cmake_policy(SET CMP0135 NEW)
endif()

set(LCL_RAYLIB_RAYLIB_VERSION 6.0)
set(LCL_RAYLIB_LCL_COMMIT fedbe87d7508e6217559bbf6ebf2e3ce9fa6cbf9)

# raylib options must be set before the project is added
set(BUILD_EXAMPLES OFF CACHE BOOL "Build raylib examples" FORCE)
set(BUILD_GAMES OFF CACHE BOOL "Build raylib games" FORCE)

FetchContent_Declare(
  raylib
  URL https://github.com/raysan5/raylib/archive/refs/tags/${LCL_RAYLIB_RAYLIB_VERSION}.tar.gz
)

# lcl options must be set before the project is added
set(LCL_BUILD_SHARED OFF CACHE BOOL "" FORCE)
set(LCL_BUILD_STATIC ON CACHE BOOL "" FORCE)
set(LCL_BUILD_CLI OFF CACHE BOOL "" FORCE)
set(LCL_BUILD_TESTS OFF CACHE BOOL "" FORCE)
set(LCL_BUILD_MATH ON CACHE BOOL "" FORCE)

FetchContent_Declare(
  lcl
  URL https://github.com/bholten/lcl/archive/${LCL_RAYLIB_LCL_COMMIT}.tar.gz
)

FetchContent_MakeAvailable(raylib lcl)

# ---------------------------------------------------------------------------
# Library
# ---------------------------------------------------------------------------
set(LCL_RAYLIB_SOURCES
  src/lcl-raylib.c
  src/lcl-raylib-gen.c
)

add_library(lcl_raylib STATIC ${LCL_RAYLIB_SOURCES})
add_library(lcl::raylib ALIAS lcl_raylib)
set_target_properties(lcl_raylib PROPERTIES C_STANDARD 99 C_STANDARD_REQUIRED ON C_EXTENSIONS OFF)

target_include_directories(lcl_raylib
  PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>
  PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/src
)

target_compile_options(lcl_raylib PRIVATE -Wall -Wextra)

# raylib is PUBLIC so consumers linking lcl_raylib get libraylib (and its
# system deps: GL, m, pthread, dl, X11...) transitively.
target_link_libraries(lcl_raylib
  PUBLIC raylib
  PRIVATE lcl::lcl
)

if(LCL_RAYLIB_ENABLE_CLANG_TIDY)
  set_target_properties(lcl_raylib PROPERTIES C_CLANG_TIDY "${LCL_RAYLIB_CLANG_TIDY_EXE}")
endif()

# ---------------------------------------------------------------------------
# Runner: `lcl-raylib script.lcl` -- an Lcl interpreter with core + math +
# raylib registered, for playing with the bindings.
# ---------------------------------------------------------------------------
if(LCL_RAYLIB_BUILD_RUNNER)
  # Embed lib/raylib/src/Raylib.lcl (the idiomatic layer) so scripts get
  # the Raylib:: / Vec:: / Rect:: namespaces without a `require`.
  include(${lcl_SOURCE_DIR}/cmake/EmbedFile.cmake)
  lcl_embed_file(
    INPUT  lib/raylib/src/Raylib.lcl
    OUTPUT ${CMAKE_CURRENT_BINARY_DIR}/raylib-lib-data.h
    SYMBOL lib_raylib_src_Raylib_lcl
    TARGET generate_raylib_lib_data
  )

  add_executable(lcl-raylib src/main.c)
  add_dependencies(lcl-raylib generate_raylib_lib_data)
  target_include_directories(lcl-raylib PRIVATE ${CMAKE_CURRENT_BINARY_DIR})
  set_target_properties(lcl-raylib PROPERTIES C_STANDARD 99 C_STANDARD_REQUIRED ON C_EXTENSIONS OFF)
  target_compile_options(lcl-raylib PRIVATE -Wall -Wextra)
  target_link_libraries(lcl-raylib PRIVATE lcl_raylib lcl::lcl lcl_math)

  enable_testing()
  add_test(NAME doctest
    COMMAND lcl-raylib test/doctest.lcl ${lcl_SOURCE_DIR}/lib/doc/src/Doc.lcl
    WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
  )
endif()
