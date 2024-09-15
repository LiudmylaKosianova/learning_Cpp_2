#include "../headers/Bike.h"

Bike::Bike(string model, string brand, int wheels) :
Vehicle(model, brand), wheelsN(wheels){}

Bike::~Bike()
{
    cout << "A bike is deleted\n";
}

void Bike::details()
{
    cout << "\tInformation about the bike:\n";
    Vehicle::details();
    cout << "Number of wheels: " << wheelsN << endl;
}