#pragma once

#include "Shape.h"

class Circle : public Shape
{
    protected:
    double radius;

    public:
    Circle(double radius);
    ~Circle();

    void area() override;
};