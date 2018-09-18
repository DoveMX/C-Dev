///////////////////////////////////////////////////////////
//  TStudent.cpp
//  Implementation of the Class TStudent
//  Created on:      13-Sep-2018 2:01:46 AM
//  Original author: James
///////////////////////////////////////////////////////////

#include <iostream>
#include "TStudent.h"

using System::TStudent;
using System::TPerson;


TStudent::TStudent():TPerson("Hello", 1){
    std::cout<<"-> TStudent construct: name = "<< GetName()<< std::endl;
}



TStudent::~TStudent(){
    std::cout<<"-> TStudent deconstruct: name = "<< GetName()<< std::endl;
}

const void System::TStudent::Print() const {
    std::cout << "Call TStudent::Print()" << std::endl;
}
