//
// Created by Administrator on 9/6/2018.
//

#ifndef HELLO_CA_H
#define HELLO_CA_H


class CA {
public:
    CA(int a = 0);
    ~CA(void);

    void TestCopy(CA copy);
    void TestThisCopy() const;

private:
    int _id;
};


#endif //HELLO_CA_H
