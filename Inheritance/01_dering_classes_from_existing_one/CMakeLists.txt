cmake_minimum_required(VERSION 3.0.0)
project(Inheritance VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()

add_executable(exe01 main.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

add_library(Account STATIC Account.cpp)
add_library(Service_Account STATIC Saving_Account.cpp)
target_link_libraries(exe01 PUBLIC 
                    Account
                    Service_Account)