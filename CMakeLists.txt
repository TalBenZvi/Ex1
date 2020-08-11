cmake_minimum_required(VERSION 3.0.0)
project(Ex1 VERSION 0.1.0)

include(CTest)
enable_testing()

set(C_STANDARD C9)
add_executable(Ex1 main.c)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
