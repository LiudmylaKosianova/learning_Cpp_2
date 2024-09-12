/*
Exercise 5: Reference and Pointer Combination

Write a C++ program that:

Declares an integer variable.
Uses a reference to the integer.
Passes the reference to a function that accepts a pointer and modifies the original variable.

Requirements:

The function should take a pointer as a parameter, and the reference 
should be passed to this function (converted to a pointer).
*/

#include <iostream>

void ModInt(int* a)
{
    *a = 1;
}

int main()
{

    int a = 7;
    ModInt(&a);
    std::cout << a << std::endl;

    return 0;
}