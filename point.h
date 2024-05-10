#ifndef POINT_H
#define POINT_H

class Point
{
public:
    Point(double newX = 0, double newY = 0);
    Point(const Point & p);
    void setValue(double newX, double newY);
    double getX()const;
    double getY()const;
    double getDistance(const Point & p)const;
    friend double getDistance(Point & p1,Point & p2);
private:
    double x;
    double y;
};

#endif // POINT_H
