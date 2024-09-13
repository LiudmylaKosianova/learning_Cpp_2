
#include "../headers/SavingsAccount.h"

SavingsAccount::SavingsAccount(int accountNumber, double balance, double rate):Account(accountNumber, balance),
                                                                                interestRate(rate)
{
    std::cout << "Savings Account " << accountNumber << " created with interests rate " << interestRate << std::endl;
}

void SavingsAccount::applyInterest()
{
    double interest = balance * (interestRate / 100);
    deposit(interest);
}

void SavingsAccount::withdraw(double amount)
{
    if((balance - amount) < 20) // minimum balance is 20
        std::cout << "Not possible to this amount\n";
    else
        Account::withdraw(amount);
}

void SavingsAccount::displayAccount()
{
    std::cout << "Savings Account: ";
    Account::displayAccount();
    std::cout << "Interest rate: " << interestRate << std::endl;   
}
SavingsAccount::~SavingsAccount()
{
    std::cout << accountNumber << " Savings account is closed\n";
}