#ifndef BANK_ACCOUNT_H
#define BANK_ACCOUNT_H

#include <string>
using namespace std;

/*
 * Class Name: BankAccount
 * Purpose: Represents a simple bank account with basic functionalities
 */
class BankAccount {
private:
    int accountNumber;        // Unique account number
    string accountHolderName; // Account holder's name
    float balance;            // Account balance

public:
    /*
     * Constructor: Initializes the bank account with an account number, name, and initial balance.
     * Parameters:
     *    - accNumber: Unique account number (integer)
     *    - accHolderName: Name of the account holder (string)
     *    - initialBalance: Initial deposit amount (float)
     */
    BankAccount(int accNumber, string accHolderName, float initialBalance);

    /*
     * Function: deposit
     * Purpose: Adds money to the account.
     * Parameters:
     *    - amount: Amount to be deposited (float)
     * Return: void
     */
    void deposit(float amount);

    /*
     * Function: withdraw
     * Purpose: Withdraws money from the account.
     * Parameters:
     *    - amount: Amount to be withdrawn (float)
     * Note: Ensure there is sufficient balance before allowing withdrawal.
     * Return: void
     */
    void withdraw(float amount);

    /*
     * Function: displayDetails
     * Purpose: Displays account details (account number, name, balance).
     * Return: void
     */
    void displayDetails();

    ~BankAccount();
};

#endif // BANK_ACCOUNT_H
