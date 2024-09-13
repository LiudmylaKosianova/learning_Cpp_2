#pragma once

#include "Account.h"

class SavingsAccount : public Account
{
    private:
    double interestRate;

    public:
    SavingsAccount(int accountNumber, double balance, double rate);
    ~SavingsAccount();
    
    void applyInterest();
    void withdraw(double amount)override;
    void displayAccount()override;
};