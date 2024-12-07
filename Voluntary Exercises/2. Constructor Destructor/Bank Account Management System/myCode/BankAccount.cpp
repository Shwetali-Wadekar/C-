#include "BankAccount.h"

BankAccount::BankAccount() :
		accountID(0), accountHolder("Unknown"), balance(0)
{
	// TODO Auto-generated constructor stub

}

BankAccount::BankAccount(int accountID, const string &accountHolder,
		float balance) :
		accountID(accountID), accountHolder(accountHolder), balance(balance)
{
}

BankAccount::BankAccount(const BankAccount &other) :
		accountID(other.accountID), accountHolder(other.accountHolder), balance(
				other.balance)
{
}

BankAccount::~BankAccount()
{
	// TODO Auto-generated destructor stub
	cout << "Bank Account with ID: " << accountID << " is being deleted."
			<< endl;
}

void BankAccount::deposit(float amount)
{
	balance += amount;
	std::cout << "Deposited $" << amount << " into Account " << accountID
			<< std::endl;
}

void BankAccount::withdraw(float amount)
{
	balance -= amount;
	std::cout << "Deposited $" << amount << " into Account " << accountID
			<< std::endl;
}

void BankAccount::displayDetails() const
{
	cout << "------Account Details--------" << endl;
	cout << "Account ID: " << accountID << endl;
	cout << "Account Holder: " << accountHolder << endl;
	cout << "Balance: $" << balance << endl;
}
