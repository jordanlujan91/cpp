cmake_minimum_required(VERSION 3.9)
project(cpp)

set(CMAKE_CXX_STANDARD 11)

add_executable(2-1.cpp cmake-build-debug/3-1.h cmake-build-debug/3-1.cpp 3-1.cpp 3-2.cpp 3-3.cpp)

add_executable(2-2.cpp)

add_executable(3-1 3-1.cpp)