#include <iostream>
#include "complex.h"
#include <math.h>
using namespace std;

Complex::Complex()
{
    real = 0;
    image = 0;
}
Complex::Complex(double real)
{
    this->real = real;
    image = 0;
}
Complex::Complex(double real, double image)
{
    this->real = real;
    this->image = image;
}

void Complex::setValue(double real, double image)
{
    this->real = real;
    this->image = image;
}

double Complex::getReal()
{
    return real;
}

double Complex::getImage()
{
    return image;
}

double Complex::getDistance()
{
    return sqrt(real * real + image * image);
}

void Complex::output()
{
    cout<<real<<'+'<<image<<'i';
}
