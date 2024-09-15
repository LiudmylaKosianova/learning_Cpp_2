#pragma once

#include "Shape.h"

class Triangle : public Shape
{
    protected:
    double sideA, sideB, sideC;

    public:
    Triangle(double sideA, double sideB, double sideC);
    ~Triangle();

    void area() override;
};