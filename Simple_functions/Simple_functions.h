#pragma once

#include <iostream>

/*
Temperature Conversion Functions

Task: Write two functions: one to convert temperatures from Celsius to Fahrenheit, 
and another to convert Fahrenheit to Celsius. Your program should allow the user to input 
a temperature and select which conversion they want to perform.

Practice: Defining and calling functions, passing arguments, and returning values.
*/

int CelsToFahr(int cels)
{
    return 0;
}

int FahrToCels(int fahr)
{
    return 0;
}

void AskUser()
{
    std::cout << "\t\t======= Menu =======\n";
    std::cout << "\t1. Convert Fahrenheit to Celsius\n\t2. Convert Celsius to Fahrenheit\n";
    
    int operation = 0, userN;

    std::cin >> operation;
    std::cout << "Enter your number: ";
    std::cin >> userN;

}