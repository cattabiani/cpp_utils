cmake_minimum_required(VERSION 3.10)
project(cpp_utils)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Set include directories
include_directories(include) # Assuming your header files are in 'include' directory

# No need for file globbing or add_library(), since the library consists only of headers

# Add Google Test
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

# Globbing test files
file(GLOB TESTS test/*.cpp)

# Create an executable for testing
add_executable(cpp_utils_test ${TESTS})

# Link the testing executable with Google Test libraries
target_link_libraries(cpp_utils_test PRIVATE ${GTEST_BOTH_LIBRARIES} pthread)

# Register tests
gtest_discover_tests(cpp_utils_test)

# cmake -S . -B build -G Ninja && cmake --build build && ./build/cpp_utils_test
