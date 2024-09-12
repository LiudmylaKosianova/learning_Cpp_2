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