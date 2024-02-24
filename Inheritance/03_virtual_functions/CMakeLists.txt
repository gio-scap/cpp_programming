cmake_minimum_required(VERSION 3.0.0)
project(AAA VERSION 0.1.0 LANGUAGES C CXX)




add_library(AAA 
            src/base.cpp
            src/derived.cpp)

target_include_directories(AAA PUBLIC ${CMAKE_SOURCE_DIR}/src)

add_executable(main main.cpp)
target_link_libraries(main AAA)