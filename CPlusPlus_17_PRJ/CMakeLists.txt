cmake_minimum_required(VERSION 3.10)
project(hello)

set(CMAKE_CXX_STANDARD 17)

add_executable(hello hello/main.cpp hello/memory-sub/CA.cpp hello/memory-sub/CA.h hello/TestRun.cpp hello/TestRun.h)
