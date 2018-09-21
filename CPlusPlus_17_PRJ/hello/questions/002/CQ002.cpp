//
// Created by Administrator on 9/20/2018.
//

#include <iostream>
#include <string>

#include "CQ002.h"

using CQuestionsTest::CQ002;

CQ002::CQ002():_description("计算数值位移算法") {
    std::cout << __func__ << "\n" << _description <<std::endl;
}

CQ002::~CQ002() {
    std::cout << __func__ << std::endl;
}

void CQ002::PrintLine() const {
    std::cout << std::endl << "---////////////////////////////////////////-- \n" << std::endl;
}

/**
 * 打印 十进制转二进制
 * @param val
 */
void PrintBinary(const unsigned int val) {
    std::string str{};
    for (int i = 32; i >= 0; i --) {
        if (val & ( 1 << i)) {
            std::cout << "1";
        } else {
            std::cout << "0";
        }
    }

    std::cout << std::endl;
}

int func(int x) {
    int count_x = 0;
    while (x) {
        count_x ++;
        x = x&(x-1);
    }

    std::cout << "主要将十进制x 转换成二进制形式， 然后看含1的数量是多少" << std::endl;
    return count_x;
}

void CQ002::Run() {
    int x = 99999;
    std::cout << " x = " << x << std::endl;
    PrintBinary(x);

    int count_x = func(x);
    std::cout << " count_x = " << count_x << std::endl;


    PrintLine();
}


