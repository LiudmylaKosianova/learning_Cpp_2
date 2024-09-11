/*
Exercise 2: Swapping Two Numbers Using Pointers

Write a C++ program that:

Takes two integers as input.
Uses a function to swap their values using pointers.

Requirements:

The function should take two integer pointers as parameters and swap the values they point to.
*/

#include <iostream>

void SwapTwo(int* a, int* b)
{
    *a = *(a)^*(b);
    *b = *(b)^*(a);
    *a = *(a)^*(b);
}

int main()
{

    int a = 0, b = 1;
    int* ptra = &a;
    int* ptrb = &b;
    SwapTwo(ptra, ptrb);
    std::cout << a << b << std::endl;
    return 0;
}