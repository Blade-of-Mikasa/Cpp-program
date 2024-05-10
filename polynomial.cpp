#include <vector>;
#include <iostream>
#include "polynomial.h"
using namespace std;

Polynomial::Polynomial(int HighestPower)
{
    this->HighestPower = HighestPower;
    coefficient[0] = 0;
}

void Polynomial::Polynomialop(char op)
{
    return ;//unfinished
}

int Polynomial::getValue(int value)
{
    int ans = 0, valueN = value;
    for(int i = 0; i <= HighestPower; ++i)
    {
        ans+=(coefficient[i] * valueN);
        valueN *= valueN;
    }
    return ans;
}

void Polynomial::setCoefficient(int sequence, int value)
{
    coefficient[sequence] = value;
}

void Polynomial::output()
{
    if(!HighestPower)
    {
        cout<<coefficient[0];
        return;
    }
    for(int i = HighestPower; i > 1; --i)
    {
        cout<<coefficient[i]<<"x^"<<i<<'+';
    }
    cout<<coefficient[0];
}
