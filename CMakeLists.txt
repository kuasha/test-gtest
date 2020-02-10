cmake_minimum_required(VERSION 3.10)

set(CMAKE_CXX_STANDARD 17)
set(PROJECT_NAME test-gtest)

project(${PROJECT_NAME})

enable_testing()

add_subdirectory(googletest)

add_library(${PROJECT_NAME} STATIC main.cpp)

add_subdirectory(tests)