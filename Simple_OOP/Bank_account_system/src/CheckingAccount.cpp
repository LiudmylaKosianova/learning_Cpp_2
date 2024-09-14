
#include "../headers/CheckingAccoung.h"

CheckingAccount::CheckingAccount(int accountNumber, double balance, int limit) : Account(accountNumber, balance),
                                                                                transactionLimit(limit)
{
    std::cout << "Checking Account " << accountNumber << " created with transaction limit " << transactionLimit << std::endl;
}

void CheckingAccount::withdraw(double amount)
{
    if (transactions >= transactionLimit) 
    {
        std::cout << "Transaction limit reached for account " << accountNumber << std::endl;
    } else 
    {
        Account::withdraw(amount);
        transactions++;
    }
}

