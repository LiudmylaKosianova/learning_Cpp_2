#pragma once

#include <cmath>
#include <iostream>
using std::cout;
using std::endl;

const double pi = 3.14159265358979323846;

class Shape
{
    public:
    Shape(){};
    virtual ~Shape(){};
    virtual void area(){};

};