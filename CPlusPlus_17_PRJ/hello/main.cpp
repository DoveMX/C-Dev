#include <iostream>
#include "TestRun.h"



int main() {
    std::cout << "Hello, World!" << std::endl;

    TestRun* ts = new TestRun();

    /// 启动内存测试
    ts->run_memoery_new();

    /// 启动测试Assert断言
    ts->run_assert_test();

    return 0;
}

