#ifndef RECTANGLE_H
#define RECTANGLE_H
#include <iostream>

using namespace std;

class Rectangle
{
private:
    double width;
    double height;
public:
    Rectangle();
    Rectangle(double,double);
    void setWidth(double newWidth);
    void setHeight(double newHeight);
    double getArea();
    double getCircum();
    ~Rectangle();
};

#endif // RECTANGLE_H
