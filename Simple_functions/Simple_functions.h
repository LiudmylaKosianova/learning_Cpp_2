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

/*
Find Maximum and Minimum

Task: Write a function that takes three integers as parameters 
and returns the maximum and minimum of those numbers. 
Use this function in a program that asks the user for three numbers and prints the maximum and minimum.

Practice: Function parameters, return values, and conditional statements inside functions.
*/

void UserNumbers(int* a)
{
    
    std::cout << "Enter 3 integers.\nFirst integer: ";
    std::cin >> a[0];
    std::cout << "Second integer: ";
    std::cin >> a[1];
    std::cout << "Third integer: ";
    std::cin >> a[2]; 

}

void MaxMin(int a, int b, int c)
{
     
    int max, min;
    if(a > b)
    {
        max = a;
        min = b;
    }
    else
    {
        max = b;
        min = a;
    }
    if(c > max){max = c;}
    if(c < min){min = c;}

    std::cout << "Your integers: " << a << ", " 
            << b << ", " 
            << c << std::endl;
    std::cout << "Minimun: " << min << std::endl;
    std::cout << "Maximum: " << max << std::endl;
     
}

/*
Prime Number Checker

Task: Write a function isPrime(int num) that returns true if the number is prime and false otherwise. 
Use this function in a program that asks the user to input a number and tells them if it's a prime number or not.

Practice: Function returns, conditionals, and loops inside a function.
*/

bool isPrime(int num)
{
    if(num >= 1 && num <= 3) return true;
    for(int i = num-1; i > 1; i--)
    {
        if(num % i == 0) return false;
    }
    
    return true;
}

/*
Recursive Factorial Function

Task: Write a recursive function that calculates the factorial of a number. 
The function should call itself with decremented values until it reaches 1. 
Test the function in a program where the user inputs a number.

Practice: Writing recursive functions, understanding base and recursive cases, and recursion flow.
*/

int FactorialRe(int number)
{
    if (number == 0) return 1;
    else
    return number * FactorialRe(number-1);
}