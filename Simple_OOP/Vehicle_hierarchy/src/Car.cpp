#include "../headers/Car.h"

Car::Car(string brand, string model) :
Vehicle(brand, model){}

Car::~Car()
{
    cout << "A car is deleted\n";
}

void Car::details()
{
    cout << "\tThe information about the car:\n";
    Vehicle::details();
}