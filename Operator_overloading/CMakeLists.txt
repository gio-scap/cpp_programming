cmake_minimum_required(VERSION 3.16.00)

project(operator_overloading VERSION 1.0.0)

add_executable(exe main.cpp)

add_subdirectory(src)

target_link_libraries(exe PUBLIC Mylib) 