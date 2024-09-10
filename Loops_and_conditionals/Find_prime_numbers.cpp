/*
Find Prime Numbers

Task: Write a program that prints all prime numbers between 1 and 100. 
A prime number is a number greater than 1 that has no divisors other than 1 and itself.

Practice: Loops (nested loops for checking divisibility) and conditionals (for determining if a number is prime).
*/

#include <iostream>

int main()
{
    bool prime = true;

    for (int i = 2; i < 101; i++)
    {
        for(int j = 2; j < i; j++)
        {
            if(i%j == 0)
            {
                prime = false;
                break;
            }
        }
         
        if(prime){std::cout << i << " is prime\n";}
        prime = true;
    }

    return 0;
}