cmake_minimum_required(VERSION 3.0.0)
project(Access VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()

add_library(Access Classes.cpp)
add_executable(exe main.cpp)

target_link_libraries(exe PUBLIC Access)
set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

