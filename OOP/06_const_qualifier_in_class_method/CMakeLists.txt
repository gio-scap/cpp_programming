cmake_minimum_required(VERSION 3.0.0)
project(const_proj VERSION 0.1.0 LANGUAGES C CXX)

add_executable(exe main.cpp)
add_library(class STATIC Myclass.cpp)

target_link_libraries(exe PUBLIC class)
