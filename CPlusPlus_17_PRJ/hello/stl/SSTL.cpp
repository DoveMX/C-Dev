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
#include <functional>
#include <memory>

#include "SSTL.h"

template<typename T>
std::ostream& operator<<(std::ostream& os, const std::vector<T>& vec)
{
    for (auto& el : vec)
    {
        os << el << ' ';
    }
    return os;
}

void SSTL::RunTest() {

    Simple_stl_code();
    Istream_iterator_code_test();

    std::cout << "--------------" << std::endl;

    std::vector<std::string> vec_data = {
            "Hello", "from", "GCC", __VERSION__, "!"
    };

    // std::cout << std::accumulate(vec_data.begin(), vec_data.end(), std::string("")) << std::endl;

    std::cout << vec_data << std::endl;
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

struct FooDeleter {
    void operator() (Foo* p) {
        std::cout << "Calling delete for Foo object ... \n";
        delete p;
    }
};


class RootSqrt {
public:
    double operator() (double x) { return x*x; };
};


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

    /// 测试
    auto uptr = std::unique_ptr<Foo, FooDeleter>(new Foo(), FooDeleter());
    std::cout << "Replace owned Foo with a new Foo...\n";
    uptr.reset();


    /// 测试lambda 表达式
    auto cube = [] (double value) { return value*value*value;};
    std::cout << cube({2.5}) << std::endl;


    /// 测试Std Function
    RootSqrt rootSqrt;
    std::cout << "Square roots are:" << std::endl;
    std::transform(std::begin(data), std::end(data), std::ostream_iterator<double>(std::cout, " "), rootSqrt);
    std::cout << std::endl;


    /// 测试部分容器的函数 get
    std::array<std::string, 5> words {"one", "two", "three", "four", "five"};
    std::cout << "std::get<3>(words) = " << std::get<3>(words) << std::endl;
    std::cout << "word.at(3) = " << words.at(3) << std::endl;


    /// 测试vector的大小和容量. 容量最小等于大小，但是，容量是根据算法计算分配的
    std::vector<size_t> primes {2, 3, 5, 7, 11, 13, 17, 19, 23, 31, 37, 41, 43, 47, 55};
    std::cout << "The size is " << primes.size() << std::endl;
    std::cout << "The capacity is " << primes.capacity() << std::endl;
    primes.push_back(size_t {77});
    std::cout << "The size is " << primes.size() << std::endl;
    std::cout << "The capacity is " << primes.capacity() << std::endl;

    std::cout << "primes[0] = " << primes[0] << std::endl;
    primes.front() = 1;
    std::cout << "primes[0] = " << primes[0] << std::endl;

    /// 算法库中的copy函数
    std::copy(std::begin(primes), std::end(primes), std::ostream_iterator<size_t>(std::cout, " "));
    std::cout << std::endl;

    /// 使用高效的成员函数 emplace 插入新的元素
    primes.emplace(++std::begin(primes), 105);
    std::cout << "The size is " << primes.size() << std::endl;
    std::copy(std::begin(primes), std::end(primes), std::ostream_iterator<size_t>(std::cout, " "));
    std::cout << std::endl;
    std::cout << "The capacity is " << primes.capacity() << std::endl;


    /// 使用reserve
    primes.reserve(32);
    std::copy(std::begin(primes), std::end(primes), std::ostream_iterator<size_t>(std::cout, " "));
    std::cout << std::endl;
    std::cout << "The capacity is " << primes.capacity() << std::endl;
    std::cout << std::endl;

}