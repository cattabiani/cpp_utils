cmake_minimum_required(VERSION 3.10)
project(cpp_template)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Globbing source files
file(GLOB SOURCES src/*.cpp)
file(GLOB TESTS test/*.cpp)  # Fix to search in the 'test' folder for test files

# Create the main executable
add_executable(cpp_template ${SOURCES})

# Add Google Test
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

# Create an executable for testing
add_executable(cpp_template_test ${TESTS})

# Link the testing executable with Google Test libraries
target_link_libraries(cpp_template_test PRIVATE ${GTEST_BOTH_LIBRARIES} pthread)

# Register tests
gtest_discover_tests(cpp_template_test)
