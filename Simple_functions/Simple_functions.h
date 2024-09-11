#pragma once

#include <iostream>

/*
Temperature Conversion Functions

Task: Write two functions: one to convert temperatures from Celsius to Fahrenheit, 
and another to convert Fahrenheit to Celsius. Your program should allow the user to input 
a temperature and select which conversion they want to perform.

Practice: Defining and calling functions, passing arguments, and returning values.
*/

float CelsToFahr(float cels)
{    
    return (cels * (9.0/5.0)) + 32;
}

float FahrToCels(float fahr)
{
    return (fahr - 32) * (5.0/9.0);
}

int AskUserOperation()
{
    std::cout << "\t\t======= Menu =======\n";
    std::cout << "\t1. Convert Fahrenheit to Celsius\n\t2. Convert Celsius to Fahrenheit\n";
    
    int operation = 0;

    std::cin >> operation;
    return operation;    
}

float AskUserTemp()
{
    float userN = 0; 
    std::cout << "Enter the temperature: ";
    std::cin >> userN;
    return userN;
}