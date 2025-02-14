# Step 1: Build and Run

## Exercise 1: Building a Basic Project
> More info: [here](https://cmake.org/cmake/help/latest/manual/cmake.1.html#generate-a-project-buildsystem)

### Step by step
1. Generate `makefile`
```
cmake -B build -S step1_build_and_run
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
main.exe
```

### All in one
```
cmake -B build -S step1_build_and_run; cmake --build build; clear; build\Debug\main.exe
```

## Exercise 2 - Specifying the C++ Standard
```cmake
# other cmake config ...
# ...
# ...
# ...

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED true)

# set c++ version above this line
add_executable(main main.cpp)
```

### How to run
1. _Skip to the compilation steps._
2. Run.
```
build\Debug\main.exe 25
```