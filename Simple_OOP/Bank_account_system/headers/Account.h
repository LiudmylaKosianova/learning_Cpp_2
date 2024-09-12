#pragma once

#include <iostream>

class Account
{
    protected:
    int accountNumber;
    double balance;

    public:
    Account(int accountNumber, double balance);
    virtual ~Account();

    void deposit(double amount);
    virtual void withdraw(double amount);
    virtual void displayAccount();

};