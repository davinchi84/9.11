// 9.11 ( Rectangle Class) Create a class Rectangle with attributes length and width , each of which
// defaults to 1. Provide member functions that calculate the perimeter and the area of the rectangle.
// Also, provide set and get functions for the length and width attributes. The set functions should ver-
// ify that length and width are each floating-point numbers larger than 0.0 and less than 20.0.
#include <iostream>
#include <stdexcept>
#include "Rectangle.h"

using namespace std;

int main()
{
    try
    {
        Rectangle a(2, 3);
        double perimeter;
        double area;

        perimeter = a.perimeter();
        area = a.area();

        a.display();

        cout << "area: " << area << endl;
        cout << "perimenter: " << perimeter << endl;
    }

    catch (invalid_argument &e)
    {
        cout << "Exception: " << e.what() << endl;
    }

    return 0;
}