#ifndef POLYNOMIAL_H
#define POLYNOMIAL_H

//unfinished

class Polynomial
{
public:
    Polynomial(int HighestPower = 0);
    void Polynomialop(char op);//unfinished
    int getValue(int value);
    void setCoefficient(int sequence, int value);
    void output();
    //int size();
private:
    int HighestPower;
    int coefficient[1000] = {0};//should be optimize
};

#endif // POLYNOMIAL_H
