cmake_minimum_required(VERSION 3.0.0)
project(Static VERSION 0.1.0 LANGUAGES C CXX)

add_library(Static Static.cpp)

add_executable(exe main.cpp)

target_link_libraries(exe  Static)

