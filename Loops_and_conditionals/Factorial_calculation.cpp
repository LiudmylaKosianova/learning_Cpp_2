/*
Factorial Calculation

Task: Write a program that calculates the factorial of a given number (n!). 
The user should input a number, and the program calculates the factorial using a loop.

Practice: Loops (multiplying values in the factorial) and conditionals (checking valid input).
*/

#include <iostream>

int main()
{

    int userN, factorialN = 1;

    std::cout << "Give a number: ";
    std::cin >> userN;

    for(int i = userN; i > 1; i--)
    {
        factorialN *= i;
    }

    std::cout << "Factorial of number " << userN << ": " << factorialN << std::endl;



    return 0;
}