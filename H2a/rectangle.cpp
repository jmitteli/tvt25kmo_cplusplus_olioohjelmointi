#include "rectangle.h"

Rectangle::Rectangle(double width, double height)
{
    this->width=width;
    this->height=height;
}

void Rectangle::setWidth(double newWidth)
{
    width = newWidth;
}

void Rectangle::setHeight(double newHeight)
{
    height = newHeight;
}

double Rectangle::getArea()
{
    double area=width*height;
    return area;
}

double Rectangle::getCircum()
{
    double circum=2*(width+height);
    return circum;
}

Rectangle::~Rectangle()
{
    cout<<"Object rectangle was destroyed!"<<endl;
}

Rectangle::Rectangle() {}
