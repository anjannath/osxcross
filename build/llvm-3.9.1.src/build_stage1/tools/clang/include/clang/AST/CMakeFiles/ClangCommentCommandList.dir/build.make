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

# Utility rule file for ClangCommentCommandList.

# Include the progress variables for this target.
include tools/clang/include/clang/AST/CMakeFiles/ClangCommentCommandList.dir/progress.make

tools/clang/include/clang/AST/CMakeFiles/ClangCommentCommandList: tools/clang/include/clang/AST/CommentCommandList.inc


tools/clang/include/clang/AST/CommentCommandList.inc: tools/clang/include/clang/AST/CommentCommandList.inc.tmp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage1/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Updating CommentCommandList.inc..."
	cd /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage1/tools/clang/include/clang/AST && /usr/bin/cmake -E copy_if_different /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage1/tools/clang/include/clang/AST/CommentCommandList.inc.tmp /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage1/tools/clang/include/clang/AST/CommentCommandList.inc

tools/clang/include/clang/AST/CommentCommandList.inc.tmp: bin/clang-tblgen
tools/clang/include/clang/AST/CommentCommandList.inc.tmp: ../tools/clang/include/clang/AST/CommentCommands.td
tools/clang/include/clang/AST/CommentCommandList.inc.tmp: ../tools/clang/include/clang/AST/CommentHTMLNamedCharacterReferences.td
tools/clang/include/clang/AST/CommentCommandList.inc.tmp: ../tools/clang/include/clang/AST/CommentHTMLTags.td
tools/clang/include/clang/AST/CommentCommandList.inc.tmp: ../include/llvm/CodeGen/ValueTypes.td
tools/clang/include/clang/AST/CommentCommandList.inc.tmp: ../include/llvm/IR/Attributes.td
tools/clang/include/clang/AST/CommentCommandList.inc.tmp: ../include/llvm/IR/Intrinsics.td
tools/clang/include/clang/AST/CommentCommandList.inc.tmp: ../include/llvm/IR/IntrinsicsAArch64.td
tools/clang/include/clang/AST/CommentCommandList.inc.tmp: ../include/llvm/IR/IntrinsicsAMDGPU.td
tools/clang/include/clang/AST/CommentCommandList.inc.tmp: ../include/llvm/IR/IntrinsicsARM.td
tools/clang/include/clang/AST/CommentCommandList.inc.tmp: ../include/llvm/IR/IntrinsicsBPF.td
tools/clang/include/clang/AST/CommentCommandList.inc.tmp: ../include/llvm/IR/IntrinsicsHexagon.td
tools/clang/include/clang/AST/CommentCommandList.inc.tmp: ../include/llvm/IR/IntrinsicsMips.td
tools/clang/include/clang/AST/CommentCommandList.inc.tmp: ../include/llvm/IR/IntrinsicsNVVM.td
tools/clang/include/clang/AST/CommentCommandList.inc.tmp: ../include/llvm/IR/IntrinsicsPowerPC.td
tools/clang/include/clang/AST/CommentCommandList.inc.tmp: ../include/llvm/IR/IntrinsicsSystemZ.td
tools/clang/include/clang/AST/CommentCommandList.inc.tmp: ../include/llvm/IR/IntrinsicsWebAssembly.td
tools/clang/include/clang/AST/CommentCommandList.inc.tmp: ../include/llvm/IR/IntrinsicsX86.td
tools/clang/include/clang/AST/CommentCommandList.inc.tmp: ../include/llvm/IR/IntrinsicsXCore.td
tools/clang/include/clang/AST/CommentCommandList.inc.tmp: ../include/llvm/Option/OptParser.td
tools/clang/include/clang/AST/CommentCommandList.inc.tmp: ../include/llvm/TableGen/SearchableTable.td
tools/clang/include/clang/AST/CommentCommandList.inc.tmp: ../include/llvm/Target/GenericOpcodes.td
tools/clang/include/clang/AST/CommentCommandList.inc.tmp: ../include/llvm/Target/Target.td
tools/clang/include/clang/AST/CommentCommandList.inc.tmp: ../include/llvm/Target/TargetCallingConv.td
tools/clang/include/clang/AST/CommentCommandList.inc.tmp: ../include/llvm/Target/TargetItinerary.td
tools/clang/include/clang/AST/CommentCommandList.inc.tmp: ../include/llvm/Target/TargetSchedule.td
tools/clang/include/clang/AST/CommentCommandList.inc.tmp: ../include/llvm/Target/TargetSelectionDAG.td
tools/clang/include/clang/AST/CommentCommandList.inc.tmp: ../tools/clang/include/clang/AST/CommentCommands.td
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage1/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CommentCommandList.inc..."
	cd /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage1/tools/clang/include/clang/AST && ../../../../../bin/clang-tblgen -gen-clang-comment-command-list -I /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/tools/clang/include/clang/AST -I /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/lib/Target -I /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/include /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/tools/clang/include/clang/AST/CommentCommands.td -o /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage1/tools/clang/include/clang/AST/CommentCommandList.inc.tmp

ClangCommentCommandList: tools/clang/include/clang/AST/CMakeFiles/ClangCommentCommandList
ClangCommentCommandList: tools/clang/include/clang/AST/CommentCommandList.inc
ClangCommentCommandList: tools/clang/include/clang/AST/CommentCommandList.inc.tmp
ClangCommentCommandList: tools/clang/include/clang/AST/CMakeFiles/ClangCommentCommandList.dir/build.make

.PHONY : ClangCommentCommandList

# Rule to build all files generated by this target.
tools/clang/include/clang/AST/CMakeFiles/ClangCommentCommandList.dir/build: ClangCommentCommandList

.PHONY : tools/clang/include/clang/AST/CMakeFiles/ClangCommentCommandList.dir/build

tools/clang/include/clang/AST/CMakeFiles/ClangCommentCommandList.dir/clean:
	cd /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage1/tools/clang/include/clang/AST && $(CMAKE_COMMAND) -P CMakeFiles/ClangCommentCommandList.dir/cmake_clean.cmake
.PHONY : tools/clang/include/clang/AST/CMakeFiles/ClangCommentCommandList.dir/clean

tools/clang/include/clang/AST/CMakeFiles/ClangCommentCommandList.dir/depend:
	cd /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage1 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/anjan/github.com/osxcross/build/llvm-3.9.1.src /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/tools/clang/include/clang/AST /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage1 /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage1/tools/clang/include/clang/AST /home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage1/tools/clang/include/clang/AST/CMakeFiles/ClangCommentCommandList.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tools/clang/include/clang/AST/CMakeFiles/ClangCommentCommandList.dir/depend

