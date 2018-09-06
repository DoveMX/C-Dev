/**
 *
 * Modern C++
 * https://github.com/nlohmann/json
 */



#include <iostream>
using namespace std;


class SequenceClass
{
public:
    SequenceClass(std::initializer_list<int> list){};
};

struct IdString
{
    std::string name;
    int identifier;
};

IdString get_string()
{
    return {"foo", 42};
}

constexpr int get_five() {return 5;}


int add(int i, int j) {return i+j;}


enum Color {red, blue, green};


class Info {
public:
    Info(){}
    Info(int id): Info() {type = id;}

private:
    int type {1};
    char name {'a'};

};


int main() {
    std::cout << "Hello, World!" << std::endl;

    auto colors = {"red", "green", "blue", "yellow"};
    for(const auto& color : colors) {
        std::cout << color << std::endl;
    }

    int some_value[get_five()] = {get_five(),3,5};
    std::cout << some_value[0] << std::endl;
    for(const auto& x: some_value){
        std::cout << x << std::endl;
    }

    SequenceClass some_var = {1,3,4,5};
    IdString my_id = get_string();

    std::cout << my_id.name << std::endl;

    int my_array[5] = {1,2,3,4,5};
    for (auto& x: my_array) {
        x *=2;
    }


    decltype(add(5,6)) var = '1';

    int x = Color::blue;

    std::cout << __STDC_HOSTED__ << std::endl;

    return 0;
}