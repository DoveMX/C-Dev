cmake_minimum_required(VERSION 3.10)
project(hello)

set(CMAKE_CXX_STANDARD 17)

add_executable(hello hello/main.cpp hello/memory-sub/CA.cpp hello/memory-sub/CA.h hello/TestRun.cpp hello/TestRun.h hello/demo/base_abstraction/Int.cpp hello/demo/base_abstraction/Int.h hello/demo/assert/RunWithAssert.cpp hello/demo/assert/RunWithAssert.h hello/uml-model/code/TStudent.h hello/uml-model/code/TStudent.cpp hello/uml-model/code/TPerson.h hello/uml-model/code/TPerson.cpp hello/uml-model/code/TGoodStudent.h hello/uml-model/code/TGoodStudent.cpp hello/stl/SSTL.cpp hello/stl/SSTL.h)
