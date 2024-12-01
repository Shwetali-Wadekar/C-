#ifndef TRANSACTION_H
#define TRANSACTION_H

class Transaction {
public:
    // Default Constructor
    Transaction();

    // Parameterized Constructor
    Transaction(int transactionId, double amount);

    // Copy Constructor (Shallow Copy)
    Transaction(const Transaction& other);

    // Move Constructor
    Transaction(Transaction&& other) noexcept;

    // Destructor
    ~Transaction();

    // Copy Assignment Operator
    Transaction& operator=(const Transaction& other);

    // Move Assignment Operator
    Transaction& operator=(Transaction&& other) noexcept;

    // Friend function to display transaction details
    friend void displayTransaction(const Transaction& transaction);

private:
    int transactionId;
    double amount;
};

#endif // TRANSACTION_H
