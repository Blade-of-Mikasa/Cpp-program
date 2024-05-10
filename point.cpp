#include "point.h"
#include <iostream>
#include <math.h>
using namespace std;


Point::Point(double newX, double newY)
{
    x = newX;
    y = newY;
}

Point::Point(const Point &p)
{
    x = p.x;
    y = p.y;
}

double Point::getX()const
{
    return x;
}

double Point::getY()const
{
    return y;
}

void Point::setValue(double newX, double newY)
{
    x = newX;
    y = newY;
}

double Point::getDistance(const Point &p) const
{
    return sqrt((x - p.x) * (x - p.x) + (y - p.y) * (y - p.y));
}

double getDistance(Point & p1,Point & p2)
{
    int dx = p1.x - p2.x, dy = p1.y - p2.y;
    return sqrt(dx * dx + dy * dy);
}
