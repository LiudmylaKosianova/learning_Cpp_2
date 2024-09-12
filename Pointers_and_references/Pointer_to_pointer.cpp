/*
Exercise 4: Pointer to Pointer

Write a C++ program that:

Declares an integer variable.
Declares a pointer to the integer.
Declares a pointer to the pointer of the integer.
Modifies the value of the integer using the pointer to the pointer.

Requirements:

Print the original and modified values of the integer.
*/

#include <iostream>

int main()
{
    int a = 720;
    int* ptr1 = &a;
    int** ptr2 = &ptr1;
    std::cout << "Original: " << a << std::endl;

    *(*ptr2) = 0;
    std::cout << "Modified: " << a << std::endl;

    return 0;
}
    
