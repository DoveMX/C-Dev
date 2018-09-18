///////////////////////////////////////////////////////////
//  TPerson.cpp
//  Implementation of the Class TPerson
//  Created on:      13-Sep-2018 2:01:44 AM
//  Original author: James
///////////////////////////////////////////////////////////


#include "TPerson.h"
#include <iostream>

using System::TPerson;


TPerson::TPerson(const char name[], unsigned long id): _name(name), _id(id){

}



TPerson::~TPerson(){

}


std::string TPerson::GetName(){
	return  _name;
}


const void TPerson::Print() const {
	std::cout << "Call TPerson::Print()" << std::endl;
}