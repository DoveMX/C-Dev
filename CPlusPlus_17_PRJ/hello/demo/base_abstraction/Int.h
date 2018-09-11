//
// Created by Administrator on 9/9/2018.
//

#ifndef HELLO_TInt_H
#define HELLO_TInt_H


class TInt {
public:
    TInt(int value);
    TInt(long mostSignificant, unsigned long leastSignificant);
    TInt(long value);
    TInt(short value);
    TInt();

    TInt(const TInt& copy);
    TInt& operator=(const TInt& assign);
    ~TInt();

    TInt operator+(const TInt& operand) const;
    TInt operator-(const TInt& operand) const;

    long GetMostSignificantPart() const;
    unsigned long GetLeastSignificantPart() const;

private:
    unsigned long _leastSignificantPart;
    long _mostSignificantPart;


};


#endif //HELLO_TInt_H
