# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.27

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /home/linuxbrew/.linuxbrew/Cellar/cmake/3.27.7/bin/cmake

# The command to remove a file.
RM = /home/linuxbrew/.linuxbrew/Cellar/cmake/3.27.7/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /workspace/cpp-practice/chatgpttest

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /workspace/cpp-practice/chatgpttest/build

# Include any dependencies generated for this target.
include CMakeFiles/MyTests.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/MyTests.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/MyTests.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/MyTests.dir/flags.make

CMakeFiles/MyTests.dir/math.cpp.o: CMakeFiles/MyTests.dir/flags.make
CMakeFiles/MyTests.dir/math.cpp.o: /workspace/cpp-practice/chatgpttest/math.cpp
CMakeFiles/MyTests.dir/math.cpp.o: CMakeFiles/MyTests.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/workspace/cpp-practice/chatgpttest/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/MyTests.dir/math.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/MyTests.dir/math.cpp.o -MF CMakeFiles/MyTests.dir/math.cpp.o.d -o CMakeFiles/MyTests.dir/math.cpp.o -c /workspace/cpp-practice/chatgpttest/math.cpp

CMakeFiles/MyTests.dir/math.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/MyTests.dir/math.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /workspace/cpp-practice/chatgpttest/math.cpp > CMakeFiles/MyTests.dir/math.cpp.i

CMakeFiles/MyTests.dir/math.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/MyTests.dir/math.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /workspace/cpp-practice/chatgpttest/math.cpp -o CMakeFiles/MyTests.dir/math.cpp.s

CMakeFiles/MyTests.dir/my_test_file.cpp.o: CMakeFiles/MyTests.dir/flags.make
CMakeFiles/MyTests.dir/my_test_file.cpp.o: /workspace/cpp-practice/chatgpttest/my_test_file.cpp
CMakeFiles/MyTests.dir/my_test_file.cpp.o: CMakeFiles/MyTests.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/workspace/cpp-practice/chatgpttest/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/MyTests.dir/my_test_file.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/MyTests.dir/my_test_file.cpp.o -MF CMakeFiles/MyTests.dir/my_test_file.cpp.o.d -o CMakeFiles/MyTests.dir/my_test_file.cpp.o -c /workspace/cpp-practice/chatgpttest/my_test_file.cpp

CMakeFiles/MyTests.dir/my_test_file.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/MyTests.dir/my_test_file.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /workspace/cpp-practice/chatgpttest/my_test_file.cpp > CMakeFiles/MyTests.dir/my_test_file.cpp.i

CMakeFiles/MyTests.dir/my_test_file.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/MyTests.dir/my_test_file.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /workspace/cpp-practice/chatgpttest/my_test_file.cpp -o CMakeFiles/MyTests.dir/my_test_file.cpp.s

# Object files for target MyTests
MyTests_OBJECTS = \
"CMakeFiles/MyTests.dir/math.cpp.o" \
"CMakeFiles/MyTests.dir/my_test_file.cpp.o"

# External object files for target MyTests
MyTests_EXTERNAL_OBJECTS =

MyTests: CMakeFiles/MyTests.dir/math.cpp.o
MyTests: CMakeFiles/MyTests.dir/my_test_file.cpp.o
MyTests: CMakeFiles/MyTests.dir/build.make
MyTests: lib/libgtest.a
MyTests: lib/libgtest_main.a
MyTests: lib/libgtest.a
MyTests: CMakeFiles/MyTests.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/workspace/cpp-practice/chatgpttest/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable MyTests"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/MyTests.dir/link.txt --verbose=$(VERBOSE)
	/home/linuxbrew/.linuxbrew/Cellar/cmake/3.27.7/bin/cmake -D TEST_TARGET=MyTests -D TEST_EXECUTABLE=/workspace/cpp-practice/chatgpttest/build/MyTests -D TEST_EXECUTOR= -D TEST_WORKING_DIR=/workspace/cpp-practice/chatgpttest/build -D TEST_EXTRA_ARGS= -D TEST_PROPERTIES= -D TEST_PREFIX= -D TEST_SUFFIX= -D TEST_FILTER= -D NO_PRETTY_TYPES=FALSE -D NO_PRETTY_VALUES=FALSE -D TEST_LIST=MyTests_TESTS -D CTEST_FILE=/workspace/cpp-practice/chatgpttest/build/MyTests[1]_tests.cmake -D TEST_DISCOVERY_TIMEOUT=5 -D TEST_XML_OUTPUT_DIR= -P /home/linuxbrew/.linuxbrew/Cellar/cmake/3.27.7/share/cmake/Modules/GoogleTestAddTests.cmake

# Rule to build all files generated by this target.
CMakeFiles/MyTests.dir/build: MyTests
.PHONY : CMakeFiles/MyTests.dir/build

CMakeFiles/MyTests.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/MyTests.dir/cmake_clean.cmake
.PHONY : CMakeFiles/MyTests.dir/clean

CMakeFiles/MyTests.dir/depend:
	cd /workspace/cpp-practice/chatgpttest/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /workspace/cpp-practice/chatgpttest /workspace/cpp-practice/chatgpttest /workspace/cpp-practice/chatgpttest/build /workspace/cpp-practice/chatgpttest/build /workspace/cpp-practice/chatgpttest/build/CMakeFiles/MyTests.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/MyTests.dir/depend

