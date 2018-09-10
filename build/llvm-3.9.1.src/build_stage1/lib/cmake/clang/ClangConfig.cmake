# This file allows users to call find_package(Clang) and pick up our targets.

find_package(LLVM REQUIRED CONFIG)



set(CLANG_EXPORTED_TARGETS "clangBasic;clangLex;clangParse;clangAST;clangDynamicASTMatchers;clangASTMatchers;clangSema;clangCodeGen;clangAnalysis;clangEdit;clangRewrite;clangARCMigrate;clangDriver;clangSerialization;clangRewriteFrontend;clangFrontend;clangFrontendTool;clangToolingCore;clangTooling;clangIndex;clangStaticAnalyzerCore;clangStaticAnalyzerCheckers;clangStaticAnalyzerFrontend;clangFormat;libclang")
set(CLANG_CMAKE_DIR "/home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage1/lib/cmake/clang")

# Provide all our library targets to users.
include("/home/anjan/github.com/osxcross/build/llvm-3.9.1.src/build_stage1/lib/cmake/clang/ClangTargets.cmake")
