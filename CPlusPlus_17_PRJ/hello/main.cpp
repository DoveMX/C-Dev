#include <iostream>
#include "TestRun.h"



int main() {
    std::cout << "Hello, World!" << std::endl;

    TestRun* ts = new TestRun();

    /// 启动内存测试
    ts->run_memoery_new();

    return 0;
}

