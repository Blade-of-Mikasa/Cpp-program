#include "biginteger.h"
#include <vector>
#include <string>
#include <iostream>
using namespace std;

BigInteger::BigInteger()
{
    this->p = new short int [digit + 5]();
    size = 0;
    //cout<<"location:"<<this->p<<endl;
    //sign = true;
}

void BigInteger::setValue(string a)
{
    int asize = a.size();
    if(asize >= digit)
    {
        cout<<"error : too large"<<endl;
        return;
    }
    this->size = asize;
    for(int i = 0; i < asize; ++ i)
    {
        *(p + i) = (a[asize - i - 1] - '0');
    }
    return;
}

/*
bool BigInteger::getsign()
{    return sign;    }
*/
int BigInteger::getsize()const
{    return size;    }

void BigInteger::output()const
{
    for(int i = size; i > 0; -- i)
        cout<<*(p + i - 1)<<' ';
}

BigInteger BigInteger::operator +(const BigInteger & a)const
{
    BigInteger temp;
    int MaxSize = max(size, a.size);
    temp.size = MaxSize;
    for(int i = 0; i < MaxSize; ++ i)
    {
        *(temp.p + i) = *(p + i) + *(a.p + i);
        cout<<*(temp.p + i)<<' ';
        *(temp.p + i + 1) += (*(temp.p + i) / 10);
        *(temp.p + i + 1) %= 10;
    }
    temp.size = MaxSize;
    if(*(temp.p + temp.size + 1) > 0)
        ++ temp.size;
    return temp;
}

/*
BigInteger BigInteger::operator -(const BigInteger & a)const
{


}
BigInteger BigInteger::operator *(const BigInteger & a)const

BigInteger BigInteger::operator /(const BigInteger & a)const

BigInteger BigInteger::operator /(const BigInteger & a)const
*/


/*
BigInteger BigInteger::operator +(const BigInteger & a)const
{
    BigInteger temp;
    int size = temp.size;
    int size =
}

BigInteger BigInteger::operator -(const BigInteger & a)const

BigInteger BigInteger::operator *(const BigInteger)
*/
