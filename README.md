# C++ Utils

Useful collection of free functions

## Project Structure

- **src**: Place your C++ source and header files here.
- **build**: Output directory for build artifacts.

## Building the Tests

For building and running the tests use CMake and Ninja:

```bash
cmake -S . -B build -G Ninja && cmake --build build && ./build/cpp_utils_test
```


