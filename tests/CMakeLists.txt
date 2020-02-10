cmake_minimum_required(VERSION 3.10)

set(PROJECT_NAME test-gtest-tests)

project(${PROJECT_NAME})

add_executable(${PROJECT_NAME} testmain.cpp)

target_link_libraries(${PROJECT_NAME} PUBLIC
    gtest_main
    test-gtest
)

add_test(
    NAME ${PROJECT_NAME}
    COMMAND ${PROJECT_NAME}
)