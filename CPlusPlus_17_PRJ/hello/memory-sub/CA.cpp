//
// Created by Administrator on 9/6/2018.
//

#include "CA.h"
#include <iostream>

CA::CA(int a):num(a)
{
    std::cout<<"ca construct"<<std::endl;
    std::cout<<num<<std::endl;
}

CA::~CA(void)
{
    std::cout<<"ca destruct"<<std::endl;

}