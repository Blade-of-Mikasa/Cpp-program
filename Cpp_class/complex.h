#ifndef COMPLEX_H
#define COMPLEX_H
//通过测试
class Complex
{
public:
    Complex();
    Complex(double r);
    Complex(double r, double i);
    void setValue (double r, double i);
    double getReal();
    double getImage();
    double getDistance();
    void output();
private:
    double real;
    double image;
};

#endif // COMPLEX_H
