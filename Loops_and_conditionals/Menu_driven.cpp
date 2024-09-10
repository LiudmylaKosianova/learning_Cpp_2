/*
Menu-Driven Program

Task: Create a program that presents a menu to the user with options 
(e.g., 1. Addition, 2. Subtraction, 3. Multiplication, 4. Division, 5. Exit). 
The user selects an option and inputs two numbers, and the program performs the selected operation. 
The program should loop until the user selects "Exit."

Practice: Loops (for repeating the menu), conditionals (to check which option is selected), 
and basic arithmetic operations.
*/

#include <iostream>

int main()
{
    std::cout << "\t\t\t======= Menu =======\n";
    std::cout << "\t1. Addition\n\t2. Subtraction\n\t3. Multiplication\n\t4. Division\n\t5. Exit\n\n";

    int operation = 0, userN1, userN2;
    std::cout << "Operation to be performed: ";
    std::cin >> operation;

    return 0;
}