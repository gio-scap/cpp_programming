cmake_minimum_required(VERSION 3.0.0)
project(03_copy_constr VERSION 0.1.0 LANGUAGES C CXX)


add_library(gatto_lib src/gatto.cpp)

add_executable(exe01 main.cpp)
add_library(shallow src/shallow.cpp)

target_link_libraries(exe01 gatto_lib )

add_executable(exe02 main_shallow.cpp)
target_link_libraries(exe02 shallow)

add_executable(exe03 main_deep.cpp)
add_library(deep src/deep.cpp)

target_link_libraries(exe03 deep)