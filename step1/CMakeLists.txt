cmake_minimum_required(VERSION 3.13)

project(step1 VERSION 0.0.1.0)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED true)

configure_file(config.hpp.in config.hpp)

add_executable(main main.cpp)

target_include_directories(main PUBLIC "${step1_BINARY_DIR}")

# print binary dir
# message(STATUS "")
# message(STATUS "PROJECT(Main) bin dir: ${PROJECT_BINARY_DIR}")
# message(STATUS "step1(Sub) bin dir: ${step1_BINARY_DIR}")
# message(STATUS "")
