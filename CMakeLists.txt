cmake_minimum_required(VERSION 3.13)

project(learn_cmake VERSION 0.0.1.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# print project version
message(STATUS "")
message(STATUS "==============================================")
message(STATUS "learn_cmake version: ${PROJECT_VERSION}")
message(STATUS "==============================================")
message(STATUS "")

if (MSVC)
    add_compile_options(/Zc:__cplusplus)
endif()

configure_file(config.hpp.in config.hpp)

add_executable(${PROJECT_NAME} main.cpp)

target_include_directories(${PROJECT_NAME} PUBLIC "${learn_cmake_BINARY_DIR}")

# print binary dir
# message(STATUS "")
# message(STATUS "PROJECT(Main) bin dir: ${PROJECT_BINARY_DIR}")
# message(STATUS "learn_cmake(Sub) bin dir: ${learn_cmake_BINARY_DIR}")
# message(STATUS "")
