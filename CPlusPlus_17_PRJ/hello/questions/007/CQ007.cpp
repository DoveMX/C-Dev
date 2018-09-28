//
// Created by Administrator on 9/27/2018.
//

#include <iostream>
#include "CQ007.h"


namespace CQuestionsTest {
    CQ007::CQ007() : _className(__func__), _description("演示快速初始化成员变量") {
        std::cout << _className << "\n" << _description << std::endl;
    }

    CQ007::~CQ007() {
        std::cout << _className << "::" << __func__ << std::endl;
    }

    void CQ007::PrintLine() const {
        std::cout << std::endl << "---////////////////////////////////////////-- \n" << std::endl;
    }

    void CQ007::Run() {

        //Mem member;
        Group group(2);

        PrintLine();
    }
}
