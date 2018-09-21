//
// 主要用来演示如何解决 000 两个变量交换值 的方式
//    不使用第三方变量交换两个变量的值(c#)2009-07-22 16:47这需要进行位操作,必较麻烦的,
//    在学习程序语言和进行程序设计的时候，交换两个变量的值是经常要使用的。通常我们的做法是（尤其是在学习阶段）：定义一个新的变量，借助它完成交换。代码如下：
//    int a,b;
//    a=10; b=15;
//    int t;
//    t=a; a=b; b=t;
//    这种算法易于理解，特别适合帮助初学者了解计算机程序的特点，是赋值语句的经典应用。在实际软件开发当中，此算法简单明了，不会产生歧义，便于程序员之间的交流，一般情况下碰到交换变量值的问题，都应采用此算法（以下称为标准算法）。
//
// Created by Administrator on 9/20/2018.
//

#ifndef HELLO_CQ000_H
#define HELLO_CQ000_H

#include <string>

namespace CQuestionsTest {
    class CQ000 {
    public:
        CQ000();
        virtual ~CQ000();
        void Run();

    private:
        void PrintLine() const;
        void RunWithOnlySwapChange();
        void RunWithPointSwapChange();
        void RunWithPosMoveSwapChange();

        std::string _description;

    };
}



#endif //HELLO_CQ000_H
