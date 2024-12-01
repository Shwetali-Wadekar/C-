#include <iostream>
#include "BankAccount.h"
using namespace std;

int main() {
    // Create two BankAccount objects and demonstrate functionalities
    BankAccount account1(1001, "John Doe", 500.0f);
    BankAccount account2(1002, "Jane Smith", 1000.0f);

    // Perform operations on account1
    account1.deposit(200.0f);
    account1.withdraw(100.0f);
    account1.displayDetails();

    // Perform operations on account2
    account2.deposit(300.0f);
    account2.withdraw(1400.5f); // Check balance condition
    account2.displayDetails();

    return 0;
}
