
#include "../headers/SavingsAccount.h"

SavingsAccount::SavingsAccount(int accountNumber, double balance, double rate):Account(accountNumber, balance),
                                                                                interestRate(rate)
{
    std::cout << "Savings Account " << accountNumber << " created with interests rate " << interestRate << std::endl;
}