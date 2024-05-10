#ifndef BIGINTEGER_H
#define BIGINTEGER_H
#include <string>
using namespace std;
//size of BigInteger is 10^10000
//storage order: [64731     ] means "一万三千七百六十一".
class BigInteger
{
public:
    BigInteger();
    void setValue(string a);
    int getsize()const;
    //bool getsign();
    void output()const;

    BigInteger operator +(const BigInteger & a)const;
    /*BigInteger operator -(const BigInteger & a)const;
    BigInteger operator *(const BigInteger & a)const;
    BigInteger operator /(const BigInteger & a)const;
    BigInteger operator %(const BigInteger & a)const;
    BigInteger operator =(const BigInteger & a);*/
private:
    const int digit = 10000;
    const int DigEnd = digit + 4;
    int size;
    //bool sign;
        //"True" indicates that this is a positive number, and "false" means a nogetive number.
        //delay it
    short int *p = nullptr;
};

#endif // BIGINTEGER_H
