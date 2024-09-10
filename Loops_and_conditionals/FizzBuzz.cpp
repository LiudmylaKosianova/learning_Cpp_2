/*
FizzBuzz Program

Task: Write a program that prints numbers from 1 to 100. 
But for multiples of 3, print "Fizz" instead of the number, and for multiples of 5, print "Buzz". 
For numbers that are multiples of both 3 and 5, print "FizzBuzz".

Practice: Loops (e.g., for, while) and conditionals (if, else if, else).
*/

#include <iostream>

int main(){

    for(int i = 1; i < 101; i++)
    {
        if(i%3 == 0 && i%5 != 0)
        {
            std::cout << "Fizz\n";
        } 
        else if(i%5 == 0 && i%3 != 0)
        {
            std::cout << "Buzz\n";
        } 
        else if(i%3 == 0 && i%5 == 0)
        {
            std::cout << "FizzBuzz\n";
        }       
        else
        {        
            std::cout << i << std::endl;
        }
    }


    return 0;
}