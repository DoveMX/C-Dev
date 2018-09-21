//
// Created by Administrator on 9/20/2018.
//
#include <iostream>
#include "CQ003.h"

using CQuestionsTest::CQ003;

namespace CQuestionsTest {
    class A {
    public:
        virtual void Print() const {
            std::cout << "Call A Print() Function ..." << std::endl;
        }
    };
    class B : public A {
    public:
        virtual void Print() const {
            std::cout << "Call B Print() Function ..." << std::endl;
        }
    };
    class C : public A {
        virtual void Print() const {
            std::cout << "Call C Print() Function ..." << std::endl;
        }
    };


    CQ003::CQ003() : _description("演示通过'引用'方式如何实现多态") {
        std::cout << __func__ << "\n" << _description <<std::endl;
    }

    CQ003::~CQ003() {
        std::cout << __func__ << std::endl;
    }

    void CQ003::Run() {
        std::cout << __func__ << std::endl;

        /// 核心代码
        C c;
        B b;
        A& ref_c = c;
        A& ref_b = b;
        ref_c.Print();
        ref_b.Print();


        PrintLine();
    }

    void CQ003::PrintLine() const {
        std::cout << std::endl << "---////////////////////////////////////////-- \n" << std::endl;
    }


}


