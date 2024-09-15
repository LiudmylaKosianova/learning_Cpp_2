#include "../headers/Circle.h"

Circle::Circle(double radius) : radius(radius)
{
    cout << "Circle radius: " << radius << " created\n";
}

Circle::~Circle()
{
    cout << "Circle with radius: " << radius << " deleted\n";
}

void Circle::area()
{
    cout << "Circle radius: " << radius << endl;
    cout << "Circle area: " << pi * pow(radius, 2) << endl;
}