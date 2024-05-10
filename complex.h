#ifndef COMPLEX_H
#define COMPLEX_H
//bug未解决 : Complex a(1, 1), b;     b = a + 1;      b.output();
class Complex
{
public:
    Complex(double r = 0, double i = 0);

    void setValue (double r, double i);
    double getReal() const;
    double getImage() const;
    double getDistance() const;
    double getarg()const;//返回幅角(弧度制）
    //void output()const;

    Complex operator + (const Complex & c)const;
    Complex operator - (const Complex & c)const;
    Complex operator * (const Complex & c)const;
    Complex operator / (const Complex & c)const;
    Complex & operator += (const Complex & c);
    Complex & operator -= (const Complex & c);
    Complex & operator *= (const Complex & c);
    Complex & operator /= (const Complex & c);
    Complex & operator ++();
    Complex operator ++(int);

    friend std::ostream & operator << (std::ostream & out, const Complex & c);
    //friend std::istream & operator >> (std::istream & in, const Complex & c);
    friend Complex operator -(const Complex & c1, const Complex & c2);

/*
    friend Complex operator + (const Complex & c1, const Complex & c2);
    friend Complex operator - (const Complex & c1, const Complex & c2);
    friend Complex operator * (const Complex & c1, const Complex & c2);
    friend Complex operator / (const Complex & c1, const Complex & c2);
    friend Complex operator += (Complex & c1, const Complex & c2);
    friend Complex operator -= (Complex & c1, const Complex & c2);
    friend Complex operator *= (Complex & c1, const Complex & c2);
    friend Complex operator /= (Complex & c1, const Complex & c2);
    friend Complex operator - (const Complex & c);
    //friend Complex & operator ++ ();
    //friend Complex operator ++ (int);
*/
private:
    double real;
    double image;
};

#endif // COMPLEX_H
