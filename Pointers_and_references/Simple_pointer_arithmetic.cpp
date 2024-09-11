/*
Exercise 1: Simple Pointer Arithmetic

Write a C++ program that:

-Declares an integer array of size 5.
-Initializes the array with values {10, 20, 30, 40, 50}.
-Uses pointer arithmetic to iterate through the array and print each value.

Requirements:

Do not use array indexing (e.g., arr[i]), only use pointers.
*/

#include <iostream>

int main()
{
    int a[5] = {10, 20, 30, 40, 50};
    for(int i = 0; i < 5; i++)
    {
        std::cout << *(a + i) << " printed with a pointer\n";
    }

    return 0;
}