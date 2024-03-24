#ifndef FRACTION_H
#define FRACTION_H

class fraction
{
public:
    fraction();
    fraction(int num);
    fraction(int num, int den);
    void setnum(int num);
    void setden(int den);
    int getnum();
    int getden();
    double getvalue();
    void output();
private:
    int num;
    int den;
    void normalize();
    int gcd(int num, int den);
};

#endif // FRACTION_H
