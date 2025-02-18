# Step 2: Adding a Library
## Exercise 1 - Creating a Library
### How to use `add_subdirectory` in top level `CMakeList.txt`
```cmake
# other cmake config ...
# ...
# ...
# ...

add_subdirectory(MathFunctions)

# putting `add_subdirectory` above this line.
add_executable(${PROJECT_NAME} main.cpp)
```

### How to use `target_link_libraries` in top level `CMakeList.txt`
```cmake
# other cmake config ...
# ...
# ...
# ...

add_executable(${PROJECT_NAME} main.cpp)

# we should put `target_link_libraries` between `add_executable` and `target_include_directories`
target_link_libraries(${PROJECT_NAME} PUBLIC MathFunctions)

target_include_directories(
    ${PROJECT_NAME} PUBLIC
    "${PROJECT_BINARY_DIR}"
    "${PROJECT_SOURCE_DIR}/MathFunctions"
)
```
