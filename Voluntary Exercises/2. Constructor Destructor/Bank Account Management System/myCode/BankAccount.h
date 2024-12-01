
#ifndef BANKACCOUNT_H_
#define BANKACCOUNT_H_


#include <iostream>
#include <string>

 using namespace std;

// Forward declaration of Transaction class
class Transaction;

class BankAccount {
private:
    int accountID;                // Unique identifier for the account
    string accountHolder;         // Name of the account holder
    float balance;                // Account balance

public:
    // Default constructor
    BankAccount();

    // Parameterized constructor
    BankAccount(int accountID, const string &accountHolder, float balance);

    // Copy constructor (shallow copy)
    BankAccount(const BankAccount &other);

    // Destructor
    ~BankAccount();

    // Function to deposit money into the account
    void deposit(float amount);

    // Function to withdraw money from the account
    void withdraw(float amount);

    // Function to display account details
    void displayDetails() const;

    // Grant Transaction class friend access for internal manipulation
    friend class Transaction;
};

#endif /* BANKACCOUNT_H_ */
