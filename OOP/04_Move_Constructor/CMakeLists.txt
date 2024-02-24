cmake_minimum_required(VERSION 3.16.0)

project(Move_cnst)
add_executable(r_ref main.cpp)
add_executable(main_copy_move main_copy_move.cpp)

add_library(lib STATIC 
    src/Move.cpp
    src/Copy.cpp)

target_link_libraries(main_copy_move PUBLIC lib)
