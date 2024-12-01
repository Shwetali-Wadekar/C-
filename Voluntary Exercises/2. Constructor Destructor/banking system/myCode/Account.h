#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <vector>
#include "Transaction.h"

class Transaction;

class Account {
public:
    // Default Constructor
    Account();

    // Parameterized Constructor
    Account(int accountNumber);

    // Copy Constructor (Deep Copy)
    Account(const Account& other);

    // Move Constructor
    Account(Account&& other) noexcept;

    // Destructor
    ~Account();

    // Copy Assignment Operator
    Account& operator=(const Account& other);

    // Move Assignment Operator
    Account& operator=(Account&& other) noexcept;

    // Add a transaction to the account
    void addTransaction(const Transaction& transaction);

    // Friend function to display account details
    friend void displayAccount(const Account& account);

private:
    int accountNumber;
    double balance;
    std::vector<Transaction> transactions;
};

#endif // ACCOUNT_H
