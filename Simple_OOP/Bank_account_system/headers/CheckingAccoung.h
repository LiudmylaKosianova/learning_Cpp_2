#pragma once
#include "Account.h"

class CheckingAccount : public Account
{
    private:
    int transactionLimit;
    int transactions;

    public:
    CheckingAccount(int accountNumber, double balance, int limit);
    ~CheckingAccount();

    void withdraw(double amount) override;
    void displayAccount() override;
};

