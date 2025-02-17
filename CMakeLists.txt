cmake_minimum_required(VERSION 3.13)

project(LearnCMake VERSION 0.0.1.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# print project version
message(STATUS "")
message(STATUS "==============================================")
message(STATUS "LearnCMake version: ${PROJECT_VERSION}")
message(STATUS "==============================================")
message(STATUS "")

if (MSVC)
    add_compile_options(/Zc:__cplusplus)
endif()

configure_file(config.hpp.in config.hpp)

add_executable(main main.cpp)

target_include_directories(main PUBLIC "${LearnCMake_BINARY_DIR}")

# print binary dir
# message(STATUS "")
# message(STATUS "PROJECT(Main) bin dir: ${PROJECT_BINARY_DIR}")
# message(STATUS "LearnCMake(Sub) bin dir: ${LearnCMake_BINARY_DIR}")
# message(STATUS "")
