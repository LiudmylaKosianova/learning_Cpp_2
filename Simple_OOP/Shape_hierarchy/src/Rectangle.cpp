#include "../headers/Rectangle.h"

Rectangle::Rectangle(double length, double width) :
    length(length), width(width)
{
    cout << "Rectangle " << length <<
    "x" << width << " created\n";
}

Rectangle::~Rectangle()
{
    cout << "Rectangle " << length << 
    "x" << width << " deleted\n";
}

void Rectangle::area()
{
    cout << "Rectangle shape: " << length << "x" << width << endl;
    cout << "Rectangle area: " << length*width << endl;
}