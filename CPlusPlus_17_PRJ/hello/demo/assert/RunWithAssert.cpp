//
// Created by Administrator on 9/10/2018.
//

#include <iostream>
#include <assert.h>
#include "RunWithAssert.h"

RunWithAssert::RunWithAssert(int id):_id(id) {
    std::cout<<"-> RunWithAssert construct: id="<< _id << std::endl;
    assert(id > 0);
}

RunWithAssert::~RunWithAssert() {
    std::cout<<"~ RunWithAssert destruct: id="<< _id << std::endl;
}