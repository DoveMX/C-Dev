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

    const int* const getTmpID() const;

private:
    int _id;
    const unsigned long _birthData;
};


#endif //HELLO_CA_H
