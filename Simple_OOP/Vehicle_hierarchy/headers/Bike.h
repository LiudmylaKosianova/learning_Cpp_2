#pragma once

#include "Vehicle.h"

class Bike : public Vehicle 
{
    protected:
    int wheelsN;
    
    public:
    Bike(string brand, string model, int wheels);
    ~Bike()override;

    void details()override;
};