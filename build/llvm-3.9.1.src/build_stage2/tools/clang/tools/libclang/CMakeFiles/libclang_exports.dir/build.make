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
CMAKE_BINARY_DIR = /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage2

# Utility rule file for libclang_exports.

# Include the progress variables for this target.
include tools/clang/tools/libclang/CMakeFiles/libclang_exports.dir/progress.make

tools/clang/tools/libclang/CMakeFiles/libclang_exports: ../tools/clang/tools/libclang/libclang.exports


tools/clang/tools/libclang/libclang.exports: ../tools/clang/tools/libclang/libclang.exports
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage2/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Creating export file for libclang"
	cd /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage2/tools/clang/tools/libclang && echo { > libclang.exports
	cd /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage2/tools/clang/tools/libclang && grep -q [[:alnum:]] /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/tools/clang/tools/libclang/libclang.exports && echo "  global:" >> libclang.exports || :
	cd /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage2/tools/clang/tools/libclang && sed -e "s/\$$/;/" -e "s/^/    /" < /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/tools/clang/tools/libclang/libclang.exports >> libclang.exports
	cd /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage2/tools/clang/tools/libclang && echo "  local: *;" >> libclang.exports
	cd /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage2/tools/clang/tools/libclang && echo "};" >> libclang.exports

libclang_exports: tools/clang/tools/libclang/CMakeFiles/libclang_exports
libclang_exports: tools/clang/tools/libclang/libclang.exports
libclang_exports: tools/clang/tools/libclang/CMakeFiles/libclang_exports.dir/build.make

.PHONY : libclang_exports

# Rule to build all files generated by this target.
tools/clang/tools/libclang/CMakeFiles/libclang_exports.dir/build: libclang_exports

.PHONY : tools/clang/tools/libclang/CMakeFiles/libclang_exports.dir/build

tools/clang/tools/libclang/CMakeFiles/libclang_exports.dir/clean:
	cd /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage2/tools/clang/tools/libclang && $(CMAKE_COMMAND) -P CMakeFiles/libclang_exports.dir/cmake_clean.cmake
.PHONY : tools/clang/tools/libclang/CMakeFiles/libclang_exports.dir/clean

tools/clang/tools/libclang/CMakeFiles/libclang_exports.dir/depend:
	cd /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage2 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/anjan/github.com/osxcross/build/llvm-3.9.1.src /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/tools/clang/tools/libclang /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage2 /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage2/tools/clang/tools/libclang /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage2/tools/clang/tools/libclang/CMakeFiles/libclang_exports.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tools/clang/tools/libclang/CMakeFiles/libclang_exports.dir/depend
