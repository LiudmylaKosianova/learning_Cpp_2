#include "../headers/Shape.h"
#include "../headers/Circle.h"
#include "../headers/Rectangle.h"
#include "../headers/Triangle.h"

int main()
{
    Shape* shapes[3];
    
    shapes[0] =new Circle(5.0);                    // Circle with radius 5
    shapes[1] = new Rectangle(4.0, 6.0);            // Rectangle with width 4 and height 6
    shapes[2] = new Triangle(3.0, 4.0, 5.0);        // Triangle with sides 3, 4, and 5

    cout << "\tCalculating areas ...\n";
    for( const auto& shape : shapes)
    {
        shape->area();
        cout << "\n";
    }

    cout << "\tDeleting shapes ... \n";

    for( auto& shape : shapes)
    {
        delete shape;
    }

    return 0;
}

