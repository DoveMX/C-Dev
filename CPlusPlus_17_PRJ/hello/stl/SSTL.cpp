//
// Created by Administrator on 9/18/2018.
//
#include <iostream>

/// 引用STL
#include <vector>
#include <iterator>
#include <sstream>
#include <string>
#include <numeric>
#include <algorithm>
#include <memory>

#include "SSTL.h"

void SSTL::RunTest() {
    Simple_stl_code();
    Istream_iterator_code_test();
}

void SSTL::Istream_iterator_code_test()  {
    std::vector<double> values;
    std::cout << "Enter values separated by one or more spaces. Enter Ctrl+z to end;\n";
    values.insert(begin(values), std::istream_iterator<double>(std::cin), std::istream_iterator<double>());

    std::cout << "The average is"
              << (accumulate(begin(values), end(values), 0.0) / values.size())
              << std::endl;
}

struct Foo {
    Foo() { std::cout << "Foo ... \n"; }
    ~Foo() { std::cout << "~Foo ... \n"; }
};

struct FooDelter {
    void operator() (Foo* p) {
        std::cout << "Calling delete for Foo object ... \n";
        delete p;
    }
};

template<typename T>
std::ostream& operator<<(std::ostream& os, const std::vector<T>& vec)
{
    for (auto& el : vec)
    {
        os << el << ' ';
    }
    return os;
}

void SSTL::Simple_stl_code()  {

    /// 测试基础数据结构和迭代算法
    double data[] {2.5, 4.5, 6.5, 5.5, 8.5};
    std::cout << "The array contains: \n";
    for (auto iter = std::begin(data); iter != std::end(data); ++iter) {
        std::cout << *iter << " ";
    }

    auto total = std::accumulate(std::begin(data), std::end(data), 0.0);
    std::cout << "\nThe sum of the array elements is " << total << std::endl;


    /// 测试移动算法
    auto iter = std::begin(data);
    std::advance(iter, 3);
    std::cout << "Furth element is " << *iter << std::endl;

    /// 测试unique_ptr指针
    auto pname = std::make_unique<std::string>("Algernon");
    std::cout << *pname << std::endl;
    pname.reset();

    ///
    auto uptr = std::unique_ptr<Foo, FooDelter>(new Foo(), FooDelter());
    std::cout << "Replace owned Foo with a new Foo...\n";
    uptr.reset();

    std::cout << "--------------" << std::endl;


    std::vector<std::string> vec_data = {
            "Hello", "from", "GCC", __VERSION__, "!"
    };

    // std::cout << std::accumulate(vec_data.begin(), vec_data.end(), std::string("")) << std::endl;

    std::cout << vec_data << std::endl;
}