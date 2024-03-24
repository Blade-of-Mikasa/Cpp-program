#include <iostream>
#include "fraction.h"
using namespace std;

void fraction::normalize()
{
    if(! this->den)    this->den = 1;
    if(this->den < 0)
    {
        this->num *= -1;
        this->den *= -1;
    }
    if(num && den)//gcd(0, anynum)==the num. 防止 num 为 0 时, gcd == den.
    {
        int gcdnum = gcd(this->num, this->den);
        this->num /= gcdnum;
        this->den /= gcdnum;
    }
}

int fraction::gcd(int a, int b)
{
    if(! b)  return a;
    return gcd(b, a % b);
}

fraction::fraction()
{
    num = 0;
    den = 1;
}

fraction::fraction(int num)
{
    this->num = num;
    den = 1;
}

fraction::fraction(int num, int den)
{
    this->num = num;
    this->den = den;
    normalize();
}

void fraction::setnum(int num)
{
    this->num = num;
    normalize();
}

void fraction::setden(int den)
{
    this->den = den;
    normalize();
}

int fraction::getnum()
{
    return num;
}

int fraction::getden()
{
    return den;
}

double fraction::getvalue()
{
    return (double) num / den;
}

void fraction::output()
{
    cout<<num<<'/'<<den;
}
