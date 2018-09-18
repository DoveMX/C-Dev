///////////////////////////////////////////////////////////
//  TGoodStudent.cpp
//  Implementation of the Class TGoodStudent
//  Created on:      13-Sep-2018 11:00:09 PM
//  Original author: James
///////////////////////////////////////////////////////////

#include <iostream>
#include "TGoodStudent.h"

using System::TGoodStudent;


TGoodStudent::TGoodStudent():TStudent(){
    std::cout<<"-> TGoodStudent construct: name = "<< GetName()<< std::endl;
}



TGoodStudent::~TGoodStudent(){
    std::cout<<"-> TGoodStudent deconstruct: name = "<< GetName()<< std::endl;
}





const void TGoodStudent::Print() const {
    std::cout << "Call TGoodStudent::Print()" << std::endl;
}