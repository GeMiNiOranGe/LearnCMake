cmake_minimum_required(VERSION 3.13)

project(LearnCMake VERSION 0.0.1.0)

# include cmake code
include(cmake/utilities.cmake)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# print project version
message(STATUS "")
message(STATUS "==============================================")
message(STATUS "${PROJECT_NAME} version: ${PROJECT_VERSION}")
message(STATUS "==============================================")
message(STATUS "")

if (MSVC)
    add_compile_options(/Zc:__cplusplus)
endif()

convert_pascalcase_to_uppercase_with_underscores(
    ${PROJECT_NAME}
    PROJECT_NAME_UPPERCASE_WITH_UNDERSCORE
)

configure_file(config.hpp.in config.hpp)

add_subdirectory(MathFunctions)

add_executable(${PROJECT_NAME} main.cpp)

target_link_libraries(${PROJECT_NAME} PUBLIC MathFunctions)

target_include_directories(
    ${PROJECT_NAME} PUBLIC
    "${PROJECT_BINARY_DIR}"
    "${PROJECT_SOURCE_DIR}/MathFunctions"
)

# print binary dir
# message(STATUS "")
# message(STATUS "PROJECT(Main) bin dir: ${PROJECT_BINARY_DIR}")
# message(STATUS "learn_cmake(Sub) bin dir: ${learn_cmake_BINARY_DIR}")
# message(STATUS "")
