#include "../headers/Account.h"
#include "../headers/CheckingAccoung.h"
#include "../headers/SavingsAccount.h"

using std::cout;
using std::endl;

int main()
{
    // SavingsAccount* a = new SavingsAccount(1, 221000.45, 3.3);
    // a->deposit(7.7);
    // a->displayAccount();
    // Create accounts using polymorphism
    Account* accounts[2];

    // Create a SavingsAccount
    accounts[0] = new SavingsAccount(12345, 1000.0, 5.0);  // 5% interest rate
    accounts[0]->deposit(500);
    dynamic_cast<SavingsAccount*>(accounts[0])->applyInterest();
    accounts[0]->withdraw(200);
    accounts[0]->displayAccount();

    cout << endl;

    // Create a CheckingAccount
    accounts[1] = new CheckingAccount(67890, 2000.0, 3);  // Limit of 3 transactions
    accounts[1]->deposit(300);
    accounts[1]->withdraw(100);
    accounts[1]->withdraw(100);
    accounts[1]->withdraw(100);  // This should reach the transaction limit
    accounts[1]->withdraw(100);  // Exceeds transaction limit
    accounts[1]->displayAccount();

    // Clean up (call destructors)
    delete accounts[0];
    delete accounts[1];

    return 0;

}