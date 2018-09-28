//
// Created by Administrator on 9/27/2018.
//

#ifndef HELLO_CQ007_H
#define HELLO_CQ007_H

#include <iostream>
#include <string>


namespace CQuestionsTest {

    struct Mem {
        Mem() {std::cout << "Mem default, num: " << num << std::endl;}
        Mem(int i): num(i) { std::cout << "Mem, num: " << num << std::endl;}

        int num = 2;  // 使用 = 初始化非静态成员
    };

    class Group {
    public:
        Group() {std::cout << "Group default. val: " << val << std::endl;}
        Group(int i): val('G'), a(i) {
            std::cout << "Group. val: " << val << std::endl;
        }
        void NumOfA() { std::cout << "number of A: " << a.num << std::endl;}
        void NumOfB() { std::cout << "number of B: " << b.num << std::endl;}

    private:
        char val{'g'};  // 使用{} 初始化非静态成员
        Mem a;
        Mem b{19};
    };


    class CQ007 {
    public:
        CQ007();

        virtual ~CQ007();

        void Run();

    private:
        void PrintLine() const;

        std::string _description;
        std::string _className;
    };
}


#endif //HELLO_CQ007_H
