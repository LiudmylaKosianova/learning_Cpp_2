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
    
    return (cels * (9/5)) + 32;
}

float FahrToCels(float fahr)
{
    return (fahr - 32) * (5/9);
}

int AskUserOperation()
{
    std::cout << "\t\t======= Menu =======\n";
    std::cout << "\t1. Convert Fahrenheit to Celsius\n\t2. Convert Celsius to Fahrenheit\n";
    
    int operation = 0;

    std::cin >> operation;
    return operation;    
}

int AskUserNumber()
{
    int userN = 0; 
    std::cout << "Enter your number: ";
    std::cin >> userN;
    return userN;
}