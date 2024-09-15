#pragma once


#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;

class Vehicle
{
    protected:
    string brand, model;

    public:
    Vehicle(string brand, string model);
    virtual ~Vehicle(){}

    virtual void details();

};