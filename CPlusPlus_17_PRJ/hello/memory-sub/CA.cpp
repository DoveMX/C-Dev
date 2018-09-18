//
// Created by Administrator on 9/6/2018.
//
#include <iostream>
#include "CA.h"


CA::CA(int a):_birthData(2010),_id(a)
{
    std::cout<<"-> CA construct: id="<< _id << std::endl;
}

CA::~CA(void)
{
    std::cout<<"~ CA destruct: id="<< _id << std::endl;
}

void CA::TestCopy(CA copy) {
    this->_id = 50;
    std::cout<<"--> test copy constructor "<< this->_id << " -- " << copy._id << std::endl;
}

void CA::TestThisCopy() const {
    std::cout<<"~ *this call copy constructor id="<< _id << std::endl;
    CA tmp_obj = *this;
    tmp_obj._id = 40;
    std::cout<<"~id="<< tmp_obj._id << std::endl;
}

const int* const CA::getTmpID() const {
    return nullptr;
}


/**
 * 测试const 限定符针对成员函数的意义
 */
//void CA::TestFunctionConst() const {
//    this->_num = 5; // const 声明后，内部对象的状态不允许改变
//
//}

/**
 * 测试const针对非成员函数（普通函数）的意义
 * 类的静态成员函数及普通函数是不能有const 限定符
 */
//void TestNormalFunctionConst() const {
//
//}