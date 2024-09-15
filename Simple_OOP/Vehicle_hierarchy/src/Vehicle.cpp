#include "../headers/Vehicle.h"

Vehicle::Vehicle(string brand, string model) :
brand(brand), model(model){}

void Vehicle::details()
{
    cout << "Brand: " << brand <<
    "\nModel: " << model << endl;
}