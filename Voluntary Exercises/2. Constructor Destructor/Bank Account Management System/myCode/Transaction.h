
#ifndef TRANSACTION_H_
#define TRANSACTION_H_

#include <iostream>
#include <string>
#include "BankAccount.h"

using namespace std;

class Transaction {
private:
    int transactionID;            // Unique identifier for the transaction
    BankAccount *account;         // Pointer to the associated BankAccount
    string type;                  // Type of transaction: "Deposit" or "Withdrawal"
    float amount;                 // Transaction amount

public:
    // Parameterized constructor
    Transaction(int transactionID, BankAccount *account, const string &type, float amount);

    // Copy constructor (deep copy to manage pointer association)
    Transaction(const Transaction &other);

    // Destructor
    ~Transaction();

    // Function to log a transaction
    void logTransaction();

    // Function to display transaction details
    void displayTransaction() const;
};

#endif /* TRANSACTION_H_ */
