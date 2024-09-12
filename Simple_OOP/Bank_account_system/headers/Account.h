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

};