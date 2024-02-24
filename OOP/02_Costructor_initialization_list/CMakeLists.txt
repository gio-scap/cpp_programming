cmake_minimum_required(VERSION 3.0.0)
project(Constructor_initi_list VERSION 0.1.0 LANGUAGES C CXX)

add_library(A STATIC src/A.cpp)
add_library(B STATIC src/B.cpp)
add_library(C STATIC src/C.cpp)

add_executable(exe01 main.cpp)
target_link_libraries(exe01  A B C)