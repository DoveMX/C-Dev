//
// Created by ian on 2018/7/23.
//

#include <iostream>
using namespace std;


struct Copyable {
    Copyable() {
        std::cout << "init" << std::endl;
    }
    Copyable(const Copyable &o) {
        cout << "It's a copied" << endl;
    }
};

Copyable ReturnRvalue() { return Copyable();}
void AcceptVal(Copyable) {}
void AcceptRef(const Copyable &) {}


int main() {
    cout << "Pass by value" << endl;
    AcceptVal(ReturnRvalue());

    const Copyable & r = ReturnRvalue();
    AcceptRef(r);
}