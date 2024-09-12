#include "../headers/Account.h"

Account::Account(int accountNumber, double balance) : accountNumber(accountNumber), balance(balance)
{
    std::cout << "Created account number: " << accountNumber <<
            " with balance: " << balance << std::endl;
}

Account::~Account()
{
    std::cout << "Closed account number: " << accountNumber << std::endl;
}

void Account::deposit(double amount)
{
    balance+=amount;
    std::cout << amount << " added to the account " << accountNumber << std::endl;
}

void Account::withdraw(double amount)
{
    if (amount > balance) 
    {
        std::cout << "Insufficient funds in account " << accountNumber << std::endl;
    } 
    else 
    {
        balance -= amount;
        std::cout << "Withdrew $" << amount << " from account " << accountNumber << std::endl;
    }
}

void Account::displayAccount() 
{
    std::cout << "Account Number: " << accountNumber << ", Balance: $" << balance << std::endl;
}