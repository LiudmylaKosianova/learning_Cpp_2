#include "../headers/Truck.h"

Truck::Truck(string brand, string model, int cap) :
Vehicle(brand, model), cargoCap(cap){}

Truck::~Truck()
{
    cout << "A truck is deleted\n";
}

void Truck::details()
{
    cout << "Information about the truck:\n";
    Vehicle::details();
    cout << "Cargo capacity: " << cargoCap << endl;
}