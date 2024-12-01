#include "BankAccount.h"
#include <iostream>
#include <iomanip>
using namespace std;

// Constructor implementation
BankAccount::BankAccount(int accNumber, string accHolderName,
		float initialBalance) :
		accountNumber(accNumber), accountHolderName(accHolderName), balance(
				initialBalance)
{
	// Initialize data members here

}

// Deposit function implementation
void BankAccount::deposit(float amount)
{
	// Add the deposit amount to balance
	balance += amount;
}

// Withdraw function implementation
void BankAccount::withdraw(float amount)
{
	// Check if balance is sufficient, then deduct the amount
	if (balance > amount)
	{
		balance -= amount;
	}
	else
		std::cerr << "Insufficient balance for withdrawal." << endl;
}

// Display details function implementation
void BankAccount::displayDetails()
{
	// Print account number, holder's name, and balance
	cout << "Account Number:  " << accountNumber << endl;
	cout << "Account Holder Name:  " << accountHolderName << endl;
	std::cout << std::fixed             // fix the number of decimal digits
			<< std::setprecision(2);
	cout << "Account Balance:  " << std::setw(5) << balance << endl;
	cout << endl;

	/*The setprecision() function is used to change the number of significant digits.
	 * Adding the fixed manipulator changes the precision setting to apply
	 * specifically to the number of decimal places after the decimal point.
	 * Lastly, the setw() function sets the minimum width of a field and adds
	 * extra padding when necessary.
	 */
}

BankAccount::~BankAccount()
{
	// TODO Auto-generated destructor stub
}

