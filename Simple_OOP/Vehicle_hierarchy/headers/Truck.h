#pragma once

#include "Vehicle.h"

class Truck : public Vehicle
{
    protected:
    int cargoCap;

    public:
    Truck(string brand, string model, int cap);
    ~Truck()override;

    void details()override;
};