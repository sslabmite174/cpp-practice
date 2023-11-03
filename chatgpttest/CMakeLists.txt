cmake_minimum_required(VERSION 3.10)
project(MyMathTest)

# Include Google Test
include(FetchContent)
FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG release-1.11.0
)
FetchContent_MakeAvailable(googletest)

# Add your source files
set(SOURCES
    math.cpp
    my_test_file.cpp
)

# Create the executable for your tests
add_executable(MyTests ${SOURCES})

# Link against Google Test
target_link_libraries(MyTests gtest gtest_main)

# Set the include directories
target_include_directories(MyTests PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})

# Register your tests as test cases
include(GoogleTest)
gtest_discover_tests(MyTests)
