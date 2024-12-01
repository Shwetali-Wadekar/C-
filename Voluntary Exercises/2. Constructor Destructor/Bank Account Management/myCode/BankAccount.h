
#ifndef BANKACCOUNT_H_
#define BANKACCOUNT_H_

#include <string>
using namespace std;

class BankAccount {
private:
    int accountNumber;        // Account number
    string accountHolder;     // Name of account holder
    float balance;            // Account balance

public:
    // Default constructor: Initializes account details with default values
    BankAccount();

    // Parameterized constructor: Initializes account with given values
    BankAccount(int accountNumber, string accountHolder, float balance);

    // Deposits money into the account
    void deposit(float amount);

    // Withdraws money from the account
    void withdraw(float amount);

    // Displays account details
    void displayDetails();

    // Destructor: Announces when an object is destroyed
    ~BankAccount();
};
#endif /* BANKACCOUNT_H_ */
