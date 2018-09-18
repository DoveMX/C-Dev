#include <iostream>
#include "TestRun.h"



int main() {

    std::cout << "--------------" << std::endl;
    std::cout << "Hello " << "from " << "GCC " <<__VERSION__ << std::endl;
    std::cout << "--------------" << std::endl;

    TestRun* ts = new TestRun();

    /// 启动内存测试
    ts->run_memoery_new();

    /// 启动测试Assert断言
    ts->run_assert_test();

    /// 启动测试const指针
    ts->run_const_ptr_test();

    /// 启动测试UML代码
    ts->run_test_uml_code();

    /// 启动测试STL代码
    ts->run_stl_test_code();


    return 0;
}

