# C++ Template Project

This is a simple C++ template project that you can use as a starting point for your C++ projects. It provides a basic project structure and CMake configuration to help you get started quickly.

## Project Structure

- **src**: Place your C++ source and header files here.
- **build**: Output directory for build artifacts.

## Building the Project

To build the project, you can use CMake and Ninja:

```bash
mkdir build
cd build
cmake ..
make
```

## Git pre-commit

In order to make git auto-format when you push you need to link the pre-commit in the .git folder:

```bash
ln -s pre-commit .git/hooks/pre-commit
```
