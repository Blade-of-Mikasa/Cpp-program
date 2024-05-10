#ifndef FRACTION_H
#define FRACTION_H

class fraction
{
public:
    fraction(int num = 0, int den = 1);

    void setValue(int num, int den);
    int getnum()const;
    int getden()const;
    double getvalue()const;
    void output()const;

    friend fraction operator + (const fraction & f1, const fraction & f2);
    friend fraction operator - (const fraction & f1, const fraction & f2);
    friend fraction operator * (const fraction & f1, const fraction & f2);
    friend fraction operator / (const fraction & f1, const fraction & f2);
    friend fraction operator - (const fraction & f);

    operator double()const;
private:
    int num;
    int den;
    void normalize();
    int gcd(int num, int den);
};

#endif // FRACTION_H
