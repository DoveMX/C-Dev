//
// Created by Administrator on 10/7/2018.
//

#include <iostream>
#include "CQ011.h"


namespace CQuestionsTest {
    namespace CQ011Private {
        //TODO: Code here

        class ConvType {
        public:
            ConvType(int i) {};
            ConvType(char c) = delete; // 删除 char 版本
        };

        void Func(ConvType ct) {
            int girls = 3, boys = 4;
            auto totalChild = [](int left, int right)->int{ return left+right; };
            auto totalChild_main = [=]()->int{return girls + boys; };
            std::cout << __func__ << std::endl << totalChild(girls, boys) << std::endl;
            std::cout << __func__ << std::endl << totalChild_main() << std::endl;

            /// \brief
            []{};
            int a = 3, b = 4;
            auto fun1 = [&](int c) {b = a + c;};
            auto fun2 = [=, &b](int c)->int { return b += a + c;};

        }
    };

    /////////////////////////////////////////////////////////
    //// 实现 CQ011
    /////////////////////////////////////////////////////////
    CQ011::CQ011() : _className(__func__), _description(" lambda 函数测试") {
        std::cout << _className << "\n" << _description << std::endl;
    }

    CQ011::~CQ011() {
        std::cout << _className << "::" << __func__ << std::endl;
    }

    void CQ011::PrintLine() const {
        std::cout << std::endl << "---////////////////////////////////////////-- \n" << std::endl;
    }

    void CQ011::Run() {
        std::cout << _className << "::" << __func__ << std::endl;
        ////////////////////////////////////////////////////////
        //TODO: Code here
        CQ011Private::Func(3);


        ////////////////////////////////////////////////////////
        PrintLine();
    }
}
