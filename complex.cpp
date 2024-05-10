#include <iostream>
#include <math.h>
#include "complex.h"
#define PAI (atan(-1))
using namespace std;

Complex::Complex(double r, double i)
{
    real = r;
    image = i;
}

void Complex::setValue(double real, double image)
{
    this->real = real;
    this->image = image;
}

double Complex::getReal() const
{
    return real;
}

double Complex::getImage() const
{
    return image;
}

double Complex::getDistance() const
{
    return sqrt(real * real + image * image);
}

double Complex::getarg() const
{
    double buf = atan(real/image);
    if(real >= 0 && image >= 0)
        return buf;
    else if(real < 0)
        return PAI + buf;
    else
        return 2 * PAI + buf;
}
/*
void Complex::output() const
{
    if(image >= 0)
        cout<<real<<'+'<<image<<'i';
    else
        cout<<real<<image<<'i';
}*/

Complex Complex::operator +(const Complex & c)const
{
    return Complex((real + c.real), (image + c.image));
}

Complex Complex::operator -(const Complex & c)const
{
    return Complex((real - c.real), (image - c.image));
}

Complex Complex::operator *(const Complex & c)const
{
    return Complex((real * c.real) - (image * c.image), (real * c.image) + (image * c.real));
}

Complex Complex::operator /(const Complex & c)const
{
    double Modulus = c.getDistance();
    double r = ((real * c.real) + (image * c.image)) / Modulus;
    double i = ((real * c.image) - (image * c.real)) / Modulus;
    return Complex(r, i);
}

Complex & Complex::operator +=(const Complex & c)
{
    real += c.real;
    image += c.image;
    return *this;
}

Complex & Complex::operator -=(const Complex & c)
{
    real -= c.real;
    image -= c.image;
    return *this;
}

Complex & Complex::operator *=(const Complex & c)
{
    double tempReal = (real * c.real) - (image * c.image);
    double tempImage = (real * c.image) + (image * c.real);
    real = tempReal;
    image = tempImage;
    return *this;
}

Complex & Complex::operator /=(const Complex & c)
{
    double Modulus = c.getDistance() * c.getDistance();// c的模的平方
    double tempReal = (real * c.real) + (image * c.image);
    double tempImage = -(real * c.image) + (image * c.real);
    real = tempReal / Modulus;
    image = tempImage / Modulus;
    return *this;
}

Complex & Complex::operator ++()
{
    ++ real;
    return *this;
}

Complex Complex::operator ++(int)
{
    real ++;
    return *this;
}

std::ostream & operator <<(std::ostream & out, const Complex & c)
{
    if(c.image >= 0)
        cout<<c.real<<'+'<<c.image<<'i';
    else
        cout<<c.real<<c.image<<'i';
    return out;
}

/*std::istream & operator >>(std::istream & in, const Complex & c)
{
    double r, i;
    cin>>r>>i;
    c.real = r;
    c.image = i;
    return in;
}*/

Complex operator -(const Complex & c1, const Complex & c2)
{
    return Complex((c1.real - c2.real), (c1.image - c2.image));
}

/*Complex Complex::add(const Complex & c) const
{
    //int a = this->real + c.real;
    //int b = this->image + c.image;
    Complex c0;
    c0.real = this->real + c.real;
    c0.image = this->image + c.image;
    return c0;
}

Complex Complex::multiply(const Complex & c)const
{
    Complex c0;
    c0.real =(this->real * c.real) - (this->image * c.image);
    c0.image =(this->real * c.image) + (this->image * c.real);
    return c0;
}*/

/*友元函数版
Complex operator + (const Complex & c1, const Complex & c2)
{
    return Complex(c1.real + c2.real, c1.image + c2.image);
}

Complex operator - (const Complex & c1, const Complex & c2)
{
    return Complex(c1.real - c2.real, c1.image - c2.image);
}

Complex operator * (const Complex & c1, const Complex & c2)
{
    return Complex((c1.real * c2.real) - (c1.image * c2.image), (c1.real * c2.image) + (c1.image * c2.real));
}

Complex operator / (const Complex & c1, const Complex & c2)
{
    double Modulus = c2.getDistance();
    double real = ((c1.real * c2.real) + (c1.image * c2.image)) / Modulus;
    double image = ((c1.real * c2.image) - (c1.image * c2.real)) / Modulus;
    return Complex(real, image);
}

Complex Complex::operator += (Complex & c1, const Complex & c2)
{
    c1.rea1 = c1.real + c2.real;
    c1.image = c1.image + c2.image;
    return c1;
}


Complex & operator ++ ()
{
    real = real + 1;
    return *this;
}

Complex operator ++ (int)
{
    real = real + 1;
    Complex temp(real, image);
    return temp;
}*/
