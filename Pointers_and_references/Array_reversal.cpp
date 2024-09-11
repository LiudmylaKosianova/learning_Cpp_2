/*
Exercise 3: Array Reversal Using Pointers

Write a C++ program that:

Declares an array of integers.
Implements a function that reverses the array in place using pointers.

Requirements:

The function should take two pointers: one pointing to the start of the array 
and the other pointing to the end of the array.
*/

#include <iostream>

void ArrReversal(int* start, int* end)
{
    while (start < end)
    {
        *start = *(start)^*(end);
        *end = *(end)^*(start);
        *start = *(start)^*(end);

        start++;
        end--;
    }
}

int main()
{
    int a[5] = {11, 22, 33, 44, 55};
    int* start = a;
    int* end = a + 4;

    

    return 0;
}