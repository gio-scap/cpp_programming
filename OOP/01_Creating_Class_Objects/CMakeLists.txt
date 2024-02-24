cmake_minimum_required(VERSION 3.22)
project(Creating_class)


add_library(accounts STATIC src/Accounts.cpp)
target_include_directories(accounts PUBLIC ${PROJECT_SOURCE_DIR}/include)

add_library(player STATIC src/Player.cpp)
target_include_directories(player PUBLIC ${PROJECT_SOURCE_DIR}/include)


add_executable(exe01 main.cpp)
target_link_libraries(exe01 PRIVATE accounts)

add_executable(exe02 main_Playerclass.cpp)
target_link_libraries(exe02 player)