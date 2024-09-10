/*
Number Guessing Game

Task: Write a number guessing game where the program randomly selects a number between 1 and 100. 
The user has to guess the number, and the program gives hints like "too high" or "too low" after each guess. 
The loop continues until the user guesses the correct number.

Practice: Loops (for user input), conditionals (for comparison and feedback), and generating random numbers.
*/

#include <iostream>

int main()
{

    int secret_number, guess_attempt;
    secret_number = 7;

    while (secret_number != guess_attempt)
    {
        std::cout << "\nYour guess: ";
        std::cin >> guess_attempt;

        if(guess_attempt < secret_number)
        {
            std::cout << "...too low\n";
        }
        else if (guess_attempt > secret_number)
        {
            std::cout << "...too high\n";
        }
    }


    return 0;
}