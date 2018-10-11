//
// Created by Administrator on 10/7/2018.
//

#include <iostream>
#include <cuchar>
#include <locale>
#include "CQ012.h"


namespace CQuestionsTest {
    namespace CQ012Private {
        //TODO: Code here
        static std::string p_description {"Unicode编码的处理"};

        void TestC() {
            std::setlocale(LC_ALL, "zh_CN.gb2312");
            char utf8[] = u8"\u4F60\u597D\u554A";
            char16_t utf16[] = u"hello";
            char32_t utf32[] = U"Hello equals \u4F60\u597D\u554A";

            std::cout << utf8 << std::endl;
            std::cout << utf16 << std::endl;
            std::cout << utf32 << std::endl;

            std::cout << sizeof(utf8) << std::endl;
            std::cout << sizeof(utf16) << std::endl;
            std::cout << sizeof(utf32) << std::endl;

            char mbr[sizeof(utf32)*2] = {0};
            mbstate_t s;
            for(char32_t c: utf32) {
                std::c32rtomb(mbr, c, &s);
                std::cout << mbr << std::endl;
            }
        }
    };

    /////////////////////////////////////////////////////////
    //// 实现 CQ012
    /////////////////////////////////////////////////////////
    void CQ012::PrintDescription() {
        std::cout << CQ012Private::p_description << std::endl;
    }

    CQ012::CQ012() : _className(__func__) {
        std::cout << _className << "\n" << CQ012Private::p_description << std::endl;
    }

    CQ012::~CQ012() {
        std::cout << _className << "::" << __func__ << std::endl;
    }

    void CQ012::PrintLine() const {
        std::cout << std::endl << "---////////////////////////////////////////-- \n" << std::endl;
    }

    void CQ012::Run() {
        std::cout << _className << "::" << __func__ << std::endl;
        ////////////////////////////////////////////////////////
        //TODO: Code here

        CQ012Private::TestC();









        ////////////////////////////////////////////////////////
        PrintLine();
    }


}
