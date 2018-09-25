//
// Created by Administrator on 9/20/2018.
//
#include <iostream>
#include <string>

#include "CQ004.h"

using namespace std;

namespace CQuestionsTest {
    CQ004::CQ004(): _description("演示'结构体'与'联合'的区别") {
        std::cout << __func__ << "\n" << _description <<std::endl;
    }

    CQ004::~CQ004() {
        std::cout << __func__ << std::endl;
    }

    /// 定义一个联合体
    union U1{
        int n;
        char s[5];
        double d;
    };

    void CQ004::Run() {
        std::cout << __func__ << std::endl;

        U1 u1;
        std::cout<<sizeof(u1)<<'\t'<<std::endl;
        std::cout<<"u1各数据地址:\n"<<&u1<<"\t"<<&u1.d<<'\t'<<&u1.s<<'\t'<<&u1.n<<std::endl;

        std::cout<<"u1改变其中的一个值\n" <<std::endl;
        u1.n = 20;
        u1.s[0] = 'a';
        u1.s[1] = 'b';
        u1.s[2] = 'c';
        u1.s[3] = 'd';
        u1.s[4] = 'e';
        u1.d = 2004.343f;
        std::cout<<"u1各数据地址:\n"<<&u1<<"\t"<<&u1.d<<'\t'<<&u1.s<<'\t'<<&u1.n<<std::endl;

        cout<<"u1.n = "<<hex<<u1.n<<'\t'<<&u1.n<<endl;
        cout<<"u1.s[0] = "<<hex<<(int)u1.s[0]<<'\t'<<(void*)&u1.s[0]<<endl;
        cout<<"u1.s[1] = "<<hex<<(int)u1.s[1]<<'\t'<<(void*)&u1.s[1]<<endl;
        cout<<"u1.s[2] = "<<hex<<(int)u1.s[2]<<'\t'<<(void*)&u1.s[2]<<endl;
        cout<<"u1.s[3] = "<<hex<<(int)u1.s[3]<<'\t'<<(void*)&u1.s[3]<<endl;
        cout<<"u1.s[4] = "<<hex<<(int)u1.s[4]<<'\t'<<(void*)&u1.s[4]<<endl;
        std::cout<<"u1各数据地址:\n"<<&u1<<"\t"<<&u1.d<<'\t'<<&u1.s<<'\t'<<&u1.n<<std::endl;

        cout << "这说明，内存中数据低位字节存入低地址，高位字节存入高地址，而数据的地址采用它的低地址来表示。" << endl;


        PrintLine();
    }

    void CQ004::PrintLine() const {
        std::cout << std::endl << "---////////////////////////////////////////-- \n" << std::endl;
    }
}


