//
// Created by Administrator on 9/28/2018.
//

#include <iostream>
#include <initializer_list>
#include <typeinfo>
#include <type_traits>
#include <stdarg.h>

#include "CQ009.h"


namespace CQuestionsTest {
    /// 定义用户自定义“字面量”
    struct Watt {unsigned int v; };

    Watt operator "" _w(unsigned long long v) {
        return {(unsigned int) v};
    }


    /// 定义自定义初始化列表函数
    void Fun(std::initializer_list<int> iv) {

        std::cout << "Fun(std::initializer_list<int> iv)" << std::endl;
        std::cout << __func__ << std::endl;
    }

    /// 定义更高级的推导模板，使用auto、decltype
    template<typename T1, typename T2> // 加法
    auto Sum(const T1& t1, const T2& t2) -> decltype(t1 + t2) {
        return t1 + t2;
    }

    template<typename T1, typename T2> // 乘法
    auto Mul(const T1& t1, const T2& t2) -> decltype(t1 * t2) {
        return t1 * t2;
    }

    /// 定义变长参数函数
    double SumOfFloat(int count, ...) {
        va_list ap;
        double sum = 0;
        va_start(ap, count);
        for(int i = 0; i < count; i++) {
            sum += va_arg(ap, double);
        }
        va_end(ap);
        return sum;
    }


    /// 主要类函数
    CQ009::CQ009() : _className(__func__), _description("测试一些C++ 11 特性") {
        std::cout << _className << "\n" << _description << std::endl;
    }

    CQ009::~CQ009() {
        std::cout << _className << "::" << __func__ << std::endl;
    }

    void CQ009::PrintLine() const {
        std::cout << std::endl << "---////////////////////////////////////////-- \n" << std::endl;
    }

    void CQ009::Run() {
        std::cout << _className << "::" << __func__ << std::endl;
        ////////////////////////////////////////////////////////
        //TODO: Code here
        std::cout << "测试 - 自定义初始化列表" << std::endl;
        Fun({1,2});

        std::cout << "测试 - 自定义用户‘字面量'" << std::endl;
        Watt capacity = 1024_w;
        std::cout << capacity.v << std::endl;

        std::cout << "测试 - typeid的用法" << std::endl;
        std::cout << typeid(this).name() << std::endl;

        std::cout << "测试 - decltype的用法" << std::endl;
        int i_m;
        decltype(i_m) j_m = 0;

        float a_f = 0.0f;
        double b_d = 0.0f;
        decltype(a_f + b_d) c_m;
        std::cout << typeid(j_m).name() << std::endl;
        std::cout << typeid(c_m).name() << std::endl;


        std::cout << "测试 - 如何追踪及推导返回数据类型" << std::endl;
        auto a_auto = 3;
        auto b_auto = 4L;
        auto pi = 3.14;

        auto c_auto = Mul(Sum(a_auto, b_auto), pi);
        std::cout << typeid(c_auto).name() << " = " << c_auto << std::endl;


        ////////////////////////////////////////////////////////
        PrintLine();
    }
}
