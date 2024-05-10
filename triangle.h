#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "point.h"

class Triangle
{
public:
    Triangle(const Point & p1, const Point & p2, const Point & p3);
    double getArea()const;
    double getPerimeter()const;
private:
    Point p1, p2, p3;
    bool isTriangle()const;//常量函数里不能调用同类的普通函数，但是类外的函数是可以的
};

#endif // TRIANGLE_H
