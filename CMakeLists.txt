cmake_minimum_required(VERSION 3.16)
project (cpperrors)
add_executable(cpperrors compiler.cpp linker.cpp linker2.cpp preprocessor.cpp compiler.h cpperrors.h linker.h preprocessor.h)
