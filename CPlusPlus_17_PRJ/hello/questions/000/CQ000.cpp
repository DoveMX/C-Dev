//
// Created by Administrator on 9/20/2018.
//

#include <iostream>
#include "CQ000.h"

using CQuestionsTest::CQ000;

CQ000::CQ000(): _description("演示如何解决《两个变量交换值》 的方式") {
    std::cout << __func__ << "\n" << _description <<std::endl;
}

CQ000::~CQ000() {
    std::cout << __func__ << std::endl;
}

void CQ000::Run() {
    RunWithOnlySwapChange();
    RunWithPointSwapChange();
    RunWithPosMoveSwapChange();
}

void CQ000::PrintLine() const {
    std::cout << std::endl << "---////////////////////////////////////////-- \n" << std::endl;
}

/**
 * 仅仅使用值交换的处理来变换 a 和 b 的值
 * 1） 算术运算
简单来说，就是通过普通的+和-运算来实现。代码如下：
int a,b;
a=10;b=12;
a=b-a; //a=2;b=12
b=b-a; //a=2;b=10
a=b+a; //a=10;b=10
通过以上运算，a和b中的值就进行了交换。表面上看起来很简单，但是不容易想到，尤其是在习惯标准算法之后。
它的原理是：把a、b看做数轴上的点，围绕两点间的距离来进行计算。
具体过程：第一句“a=b-a”求出ab两点的距离，并且将其保存在a中；第二句“b=b-a”求出a到原点的距离（b到原点的距离与ab两点距离之差），并且将其保存在b中；第三句“a=b+a”求出b到原点的距离（a到原点距离与ab两点距离之和），并且将其保存在a中。完成交换。
此算法与标准算法相比，多了三个计算的过程，但是没有借助临时变量。（以下称为算术算法）
 */
void CQ000::RunWithOnlySwapChange() {
    const std::string _description {" :仅仅使用值交换的处理来变换 a 和 b 的值"};
    std::cout << __func__ << _description << std::endl;

    int a, b;
    a = 10; b = 35;

    std::cout << "(1). a = " << a << ", b = " << b << std::endl;

    /// 核心算法
    a = b - a;
    std::cout << "(2). a = " << a << ", b = " << b << std::endl;
    b = b - a;
    std::cout << "(3). a = " << a << ", b = " << b << std::endl;
    a = b + a;
    std::cout << "(4). a = " << a << ", b = " << b << std::endl;

    PrintLine();
}

/**
 * 2） 指针地址操作
 * 此算法同样没有使用第三变量就完成了值的交换，与算术算法比较它显得不好理解，但是它有它的优点即在交换很大的数据类型时，它的执行速度比算术算法快。
 * 因为它交换的时地址，而变量值在内存中是没有移动过的。（以下称为地址算法）
 */
void CQuestionsTest::CQ000::RunWithPointSwapChange() {
    const std::string _description {" :使用指针操作交换的处理来变换 a 和 b 的值"};
    std::cout << __func__ << _description << std::endl;

    size_t* a =  new size_t(10);
    size_t* b = new size_t(35);

    std::cout << "(1). *a = " << *a << ", *b = " << *b << std::endl;
    std::cout << "(1.1). a = " << a << ", b = " << b << std::endl;

    /// 核心算法
    if (a < b) {
        a = (size_t*)(b - a);
        std::cout << "(2). a = " << a << ", b = " << b << std::endl;
        b = (size_t*)(b - (size_t (a)&0xffffffff));
        std::cout << "(3). a = " << a << ", b = " << b << std::endl;
        a = (size_t*)(b + (size_t (a)&0xffffffff));
        std::cout << "(4). a = " << a << ", b = " << b << std::endl;

    } else {
        b = (size_t*)(a - b);
        std::cout << "(2). a = " << a << ", b = " << b << std::endl;
        a = (size_t*)(a - (size_t (b)&0xffffffff));
        std::cout << "(3). a = " << a << ", b = " << b << std::endl;
        b = (size_t*)(a + (size_t (b)&0xffffffff));
        std::cout << "(4). a = " << a << ", b = " << b << std::endl;
    }

    std::cout << "(5). *a = " << *a << ", *b = " << *b << std::endl;

    PrintLine();
}

/**
 * 3） 位运算
通过异或运算也能实现变量的交换，这也许是最为神奇的，请看以下代码：
int a=10,b=12; //a=1010^b=1100;
a=a^b; //a=0110^b=1100;
b=a^b; //a=0110^b=1010;
a=a^b; //a=1100=12;b=1010;
此算法能够实现是由异或运算的特点决定的，通过异或运算能够使数据中的某些位翻转，其他位不变。这就意味着任意一个数与任意一个给定的值连续异或两次，值不变。
即：a^b^b=a。将a=a^b代入b=a^b则得b=a^b^b=a;同理可以得到a=b^a^a=b;轻松完成交换。
 */
void CQuestionsTest::CQ000::RunWithPosMoveSwapChange() {
    const std::string _description {" :使用位移操作交换的处理来变换 a 和 b 的值"};
    std::cout << __func__ << _description << std::endl;

    int a = 10, b = 12;

    std::cout << "(1). a = " << a << ", b = " << b << std::endl;

    /// 核心算法
    a = a^b;
    std::cout << "(2). a = " << a << ", b = " << b << std::endl;
    b = a^b;
    std::cout << "(3). a = " << a << ", b = " << b << std::endl;
    a = a^b;
    std::cout << "(4). a = " << a << ", b = " << b << std::endl;

    PrintLine();
}


