# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.11

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/anjan/github.com/osxcross/build/llvm-3.9.1.src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage1

# Include any dependencies generated for this target.
include unittests/CodeGen/CMakeFiles/CodeGenTests.dir/depend.make

# Include the progress variables for this target.
include unittests/CodeGen/CMakeFiles/CodeGenTests.dir/progress.make

# Include the compile flags for this target's objects.
include unittests/CodeGen/CMakeFiles/CodeGenTests.dir/flags.make

unittests/CodeGen/CMakeFiles/CodeGenTests.dir/DIEHashTest.cpp.o: unittests/CodeGen/CMakeFiles/CodeGenTests.dir/flags.make
unittests/CodeGen/CMakeFiles/CodeGenTests.dir/DIEHashTest.cpp.o: ../unittests/CodeGen/DIEHashTest.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage1/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object unittests/CodeGen/CMakeFiles/CodeGenTests.dir/DIEHashTest.cpp.o"
	cd /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage1/unittests/CodeGen && /usr/lib64/ccache/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/CodeGenTests.dir/DIEHashTest.cpp.o -c /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/unittests/CodeGen/DIEHashTest.cpp

unittests/CodeGen/CMakeFiles/CodeGenTests.dir/DIEHashTest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CodeGenTests.dir/DIEHashTest.cpp.i"
	cd /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage1/unittests/CodeGen && /usr/lib64/ccache/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/unittests/CodeGen/DIEHashTest.cpp > CMakeFiles/CodeGenTests.dir/DIEHashTest.cpp.i

unittests/CodeGen/CMakeFiles/CodeGenTests.dir/DIEHashTest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CodeGenTests.dir/DIEHashTest.cpp.s"
	cd /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage1/unittests/CodeGen && /usr/lib64/ccache/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/unittests/CodeGen/DIEHashTest.cpp -o CMakeFiles/CodeGenTests.dir/DIEHashTest.cpp.s

# Object files for target CodeGenTests
CodeGenTests_OBJECTS = \
"CMakeFiles/CodeGenTests.dir/DIEHashTest.cpp.o"

# External object files for target CodeGenTests
CodeGenTests_EXTERNAL_OBJECTS =

unittests/CodeGen/CodeGenTests: unittests/CodeGen/CMakeFiles/CodeGenTests.dir/DIEHashTest.cpp.o
unittests/CodeGen/CodeGenTests: unittests/CodeGen/CMakeFiles/CodeGenTests.dir/build.make
unittests/CodeGen/CodeGenTests: lib/libLLVMAsmPrinter.a
unittests/CodeGen/CodeGenTests: lib/libLLVMSupport.a
unittests/CodeGen/CodeGenTests: lib/libLLVMSupport.a
unittests/CodeGen/CodeGenTests: lib/libgtest_main.a
unittests/CodeGen/CodeGenTests: lib/libgtest.a
unittests/CodeGen/CodeGenTests: lib/libLLVMCodeGen.a
unittests/CodeGen/CodeGenTests: lib/libLLVMBitReader.a
unittests/CodeGen/CodeGenTests: lib/libLLVMBitWriter.a
unittests/CodeGen/CodeGenTests: lib/libLLVMInstrumentation.a
unittests/CodeGen/CodeGenTests: lib/libLLVMScalarOpts.a
unittests/CodeGen/CodeGenTests: lib/libLLVMInstCombine.a
unittests/CodeGen/CodeGenTests: lib/libLLVMDebugInfoCodeView.a
unittests/CodeGen/CodeGenTests: lib/libLLVMMCParser.a
unittests/CodeGen/CodeGenTests: lib/libLLVMTarget.a
unittests/CodeGen/CodeGenTests: lib/libLLVMMC.a
unittests/CodeGen/CodeGenTests: lib/libLLVMTransformUtils.a
unittests/CodeGen/CodeGenTests: lib/libLLVMAnalysis.a
unittests/CodeGen/CodeGenTests: lib/libLLVMProfileData.a
unittests/CodeGen/CodeGenTests: lib/libLLVMCore.a
unittests/CodeGen/CodeGenTests: lib/libLLVMSupport.a
unittests/CodeGen/CodeGenTests: unittests/CodeGen/CMakeFiles/CodeGenTests.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage1/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable CodeGenTests"
	cd /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage1/unittests/CodeGen && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/CodeGenTests.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
unittests/CodeGen/CMakeFiles/CodeGenTests.dir/build: unittests/CodeGen/CodeGenTests

.PHONY : unittests/CodeGen/CMakeFiles/CodeGenTests.dir/build

unittests/CodeGen/CMakeFiles/CodeGenTests.dir/clean:
	cd /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage1/unittests/CodeGen && $(CMAKE_COMMAND) -P CMakeFiles/CodeGenTests.dir/cmake_clean.cmake
.PHONY : unittests/CodeGen/CMakeFiles/CodeGenTests.dir/clean

unittests/CodeGen/CMakeFiles/CodeGenTests.dir/depend:
	cd /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage1 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/anjan/github.com/osxcross/build/llvm-3.9.1.src /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/unittests/CodeGen /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage1 /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage1/unittests/CodeGen /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage1/unittests/CodeGen/CMakeFiles/CodeGenTests.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : unittests/CodeGen/CMakeFiles/CodeGenTests.dir/depend
