#include <iostream>
#include "TestRun.h"
#include "CQuestionsRun.h"


int Call_onExit_func() {
    std::cout << "----------- is call on exit function by _onexit register !!!" << std::endl;
    return 0;
}

int main() {

    std::cout << "--------------" << std::endl;
    std::cout << "Hello " << "from " << "GCC " <<__VERSION__ << std::endl;
    std::cout << "--------------" << std::endl;

    /// C++ 面试问题学习处理
    CQuestionsRun* cqr = new CQuestionsRun();
    cqr->Run();
    delete(cqr);


    /// 测试Run

    if (0) {
        TestRun* ts = new TestRun();
        ts->Run();
    }

    _onexit(Call_onExit_func);

    return 0;
}



