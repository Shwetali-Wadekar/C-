// Standard (system) header files
#include <iostream>
#include <cstdlib>
#include "BankAccount.h"
#include <string>
using namespace std;

// Main program
int main ()
{
    // TODO: Add your program code here
	cout << "-----Bank Account Management----" << endl << endl;


	BankAccount account;
	account.displayDetails();

	BankAccount account1(12345, "Thomas", 1200.0f);
	account1.displayDetails();
	account1.deposit(200);
	account1.withdraw(300);
	return 0;
}
