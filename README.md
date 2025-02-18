# LearnCMake

Resource: [here](https://cmake.org/cmake/help/latest/guide/tutorial/index.html)

<details>
    <summary>Step 1: Build and Run</summary>

## Exercise 1 - Building a Basic Project
> More info: [here](https://cmake.org/cmake/help/latest/manual/cmake.1.html#generate-a-project-buildsystem)

### Step by step
1. Generate `makefile`
```
cmake -B build -S .
```

2. Compile
```
cmake --build build
```

3. Run
```
build\Debug\main.exe
```
Or
```
build\main.exe
```

### All in one
```
cmake -B build -S .; cmake --build build; clear; build\Debug\main.exe
```

## Exercise 2 - Specifying the C++ Standard
```cmake
# other cmake config ...
# ...
# ...
# ...

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# set c++ version above this line
add_executable(main main.cpp)
```

> **Note:** From Visual Studio 2022 ([`_MSC_VER`](https://learn.microsoft.com/en-us/cpp/overview/compiler-versions?view=msvc-170) >= 1930), the minimum `C++` standard is `C++14`. If we set `CMAKE_CXX_STANDARD = 11`, `__cplusplus` will still print `201402` instead of `201103`.

### How to run
1. _Skip to the compilation steps._
2. Run.
```
build\Debug\main.exe 25
```
Or
```
build\main.exe
```

## Exercise 3 - Adding a Version Number and Configured Header File
```cmake
# other cmake config ...
# ...
# ...
# ...

# set the 'include' directory for the 'main' target below this line
add_executable(main main.cpp)

target_include_directories(main PUBLIC "${learn_cmake_BINARY_DIR}")
```

</details>

<details>
    <summary>Step 2: Adding a Library</summary>

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

</details>
