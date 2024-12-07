// Standard (system) header files
#include <iostream>
#include <cstdlib>
// Add more standard header files as required
// #include <string>
#include "Transaction.h"
#include "BankAccount.h"
using namespace std;

// Add your project's header files here
// #include "CFraction.h"

// Main program
int main ()
{
	// Create a Bank Account
	    BankAccount myAccount(1001, "John Doe", 500.0f);

	    // Display Account Details
	    	    myAccount.displayDetails();
	    	    BankAccount myAccount2 = myAccount;
	    // Create Deposits and Withdrawals
	    Transaction deposit1(1, &myAccount, "Deposit", 500.0f);
	    Transaction withdrawal1(2, &myAccount, "Withdrawal", 200.0f);
	    withdrawal1.logTransaction();
	    withdrawal1.displayTransaction();


	return 0;
}
