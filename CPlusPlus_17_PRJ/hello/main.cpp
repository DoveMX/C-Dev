#include <iostream>
#include "TestRun.h"
#include "CQuestionsRun.h"



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



    return 0;
}

