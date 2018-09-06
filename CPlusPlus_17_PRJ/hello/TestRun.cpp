//
// Created by Administrator on 9/6/2018.
//

#include <iostream>
#include "TestRun.h"
#include "memory-sub/CA.h"

TestRun::TestRun() {

}

TestRun::~TestRun() {

}

int TestRun::run_memoery_new() {
    /// STL 内部方式,C++中在指定的内存位置，调用构造函数
    CA* ca = (CA*)::operator new(sizeof(CA));
    ::new(ca) CA(2);
    delete ca;

    /// 在指定的内存地址上，创建新对象. 说明: 使用的new(地址) 方法
    CA* spec_adr = (CA*)malloc(sizeof(CA));
    CA* ca_2 = new(spec_adr) CA(3);
    delete ca_2;

    return 0;
}