#include <iostream>
#include "fraction.h"
using namespace std;

int fraction::gcd(int a, int b)
{
    if (!b) return a;
    return gcd (b, a % b);
}

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

fraction::fraction(int num, int den)
{
    this->num = num;
    this->den = den;
    normalize();
}

void fraction::setValue(int num, int den)
{
    this->num = num;
    this->den = den;
    normalize();
}

int fraction::getnum()const
{
    return num;
}

int fraction::getden()const
{
    return den;
}

double fraction::getvalue()const
{
    return (double) num / den;
}

void fraction::output()const
{
    cout<<num<<'/'<<den;
}
fraction operator + (const fraction & f1, const fraction & f2)
{
    return fraction((f1.num * f2.den) + (f1.den * f2.num), f1.den * f2.num);
}

fraction operator - (const fraction & f1, const fraction & f2)
{
    return fraction((f1.num * f2.den) - (f1.den * f2.num), f1.den * f2.num);
}

fraction operator * (const fraction & f1, const fraction & f2)
{
    return fraction(f1.num * f2.num, f1.den * f2.den);
}

fraction operator / (const fraction & f1, const fraction & f2)
{
    return fraction(f1.num * f2.den, f1.den * f2.num);
}

fraction operator -(const fraction & f)
{
    return fraction(-f.num, f.den);
}

fraction::operator double()const
{
    return (double)num/den;
}
