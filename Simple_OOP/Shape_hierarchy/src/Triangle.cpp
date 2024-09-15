#include "../headers/Triangle.h"

Triangle::Triangle(double sideA, double sideB, double sideC):
sideA(sideA), sideB(sideC), sideC(sideC)
{
    cout << "Triangle: " << sideA << "x" <<
    sideB << "x" << sideC << " created\n";
}

Triangle::~Triangle()
{
    cout << "Triangle: " << sideA << "x" <<
    sideB << "x" << sideC << " deleted\n";
}

void Triangle::area()//Heron's formular 
{
    cout << "Triangle shape: " << sideA << "x" <<
    sideB << "x" << sideC << endl;
    double semiPerimeter = (sideA + sideB + sideC)/2;
    double area = sqrt(semiPerimeter * (semiPerimeter - sideA)*(semiPerimeter - sideB)*(semiPerimeter - sideC));
    cout << "Triangle area: " << area << endl;
}
