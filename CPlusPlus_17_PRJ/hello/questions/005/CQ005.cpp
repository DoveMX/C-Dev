//
// Created by Administrator on 9/21/2018.
//
#include <iostream>

#include "CQ005.h"

extern "C" {
    #include "c_cq005.h"
}

using namespace std;

namespace CQuestionsTest {

    CQ005::CQ005():_description("演示调用 c 语言 使用 extend 关键字") {
        std::cout << __func__ << "\n" << _description <<std::endl;
    }

    CQ005::~CQ005() {
        std::cout << __func__ << std::endl;
    }

    void CQ005::Run() {
        std::cout << __func__ << std::endl;

        int sum = add(100, 200);
        std::cout << "int sum = add(100, 200) = " << sum << std::endl;

        PrintLine();
    }

    void CQ005::PrintLine() const {
        std::cout << std::endl << "---////////////////////////////////////////-- \n" << std::endl;
    }
}