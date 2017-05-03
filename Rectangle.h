#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle
{
public:
    Rectangle(double = 1, double = 1);

    void setLength(double);

    void setWidth(double);

    double getLength();

    double getWidth();

    //display private variables
    void display();

    //calculate perimeter
    double perimeter();

    //calculate area
    double area();
    
private:
    double length;
    double width;

};      

#endif
