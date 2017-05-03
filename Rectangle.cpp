#include "Rectangle.h"
#include <iostream>

using namespace std;

Rectangle::Rectangle(double L, double W)
{
    setLength(L);
    setWidth(W);
}

void Rectangle::setLength(double L)
{
    if (L > 0.0 && L < 20.0)
        length = L;
    else
        throw invalid_argument("Length must be larger than 0.0 and less than 20.0");
}

void Rectangle::setWidth(double W)
{
    if (W > 0.0 && W <20.0)
        width = W;
    else 
        throw invalid_argument("Width must be larger than 0.0 and less than 20.0");
}

double Rectangle::getLength()
{
    return length;
}

double Rectangle::getWidth()
{
    return width;
}

void Rectangle::display()
{
    cout << "length: " << length << endl;
    cout << "width: " << width << endl;
}

double Rectangle::perimeter()
{
    return 2*(length + width);
}

double Rectangle::area()
{
    return length*width;
}