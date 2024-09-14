#pragma once

#include "Shape.h"

class Rectangle : public Shape
{
    protected:
    double length;
    double width;

    public:
    Rectangle(double length, double width);
    ~Rectangle();

    void area() override;
};