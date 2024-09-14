
#include "../headers/CheckingAccoung.h"

CheckingAccount::CheckingAccount(int accountNumber, double balance, int limit) : Account(accountNumber, balance),
                                                                                transactionLimit(limit)
{
    std::cout << "Checking Account " << accountNumber << " created with transaction limit " << transactionLimit << std::endl;
}

CheckingAccount::~CheckingAccount()
{
    std::cout << "ChecingAccount " << accountNumber << " closed\n";
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

void CheckingAccount::displayAccount()
{
    std::cout << "Checking Account:";
    Account::displayAccount();
    std::cout << "Transaction Limit: " << transactionLimit << ", Transactions Made: " << transactions << std::endl;
    
}
