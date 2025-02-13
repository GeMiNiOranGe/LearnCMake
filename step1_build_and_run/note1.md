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
