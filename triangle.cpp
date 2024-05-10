#include "triangle.h"
#include <algorithm>
#include <math.h>
#include "point.h"

using namespace std;

bool Triangle::isTriangle()const
{
    double a = p1.getDistance(p2);
    double b = p1.getDistance(p3);
    double c = p2.getDistance(p3);

    double minEdge, midEdge, maxEdge;
    minEdge = min(a, min(b, c));
    maxEdge = max(a, max(b, c));
    midEdge = (a + b + c) - (maxEdge + minEdge);

    if(minEdge + midEdge <= maxEdge)
        return false;
    return true;
}

Triangle::Triangle(const Point &p1, const Point &p2, const Point &p3)
{
    this->p1 = p1;
    this->p2 = p2;
    this->p3 = p3;
    if(!isTriangle())
        exit(0);
}

double Triangle::getArea()const
{
    //nomal f cannot exist in const f!
    double a = p1.getDistance(p2);
    double b = p1.getDistance(p3);
    double c = p2.getDistance(p3);
    double p = (a + b + c) / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}

double Triangle::getPerimeter()const
{
    double a = p1.getDistance(p2);
    double b = p1.getDistance(p3);
    double c = p2.getDistance(p3);
    return a + b + c;
}
