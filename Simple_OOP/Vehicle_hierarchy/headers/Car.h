#pragma once

#include "Vehicle.h"

class Car : public Vehicle
{
    public:
    Car(string brand, string model);
    ~Car();

    void details()override;
};

