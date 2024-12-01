#include "BankAccount.h"
#include<iostream>


BankAccount::BankAccount() :
		accountNumber(0), accountHolder("Unknown"), balance(0.0f)
{
	cout << "Default constructor called" << endl;
	// TODO Auto-generated constructor stub

}

BankAccount::BankAccount(int accountNumber, string accountHolder, float balance) :
		accountNumber(accountNumber), accountHolder(accountHolder), balance(
				balance)
{
	cout << "Parameterized constructor called" << endl;
}

void BankAccount::deposit(float amount)
{
	cout << "Depositing: $" << amount << endl;
	balance += amount;
	cout << "Balance: $" << balance << endl;
}

void BankAccount::withdraw(float amount)
{
	cout << "Withdrawing: $" << amount << endl;
	balance -= amount;
	cout << "Balance: $" << balance << endl;
}

void BankAccount::displayDetails()
{
	cout << "------Account Details--------" << endl;
	cout << "Account Number: " << accountNumber << endl;
	cout << "Account Holder: " << accountHolder << endl;
	cout << "Balance: $" << balance << endl;

}

BankAccount::~BankAccount()
{
	if (accountNumber != 0){
		cout << "Destructor called for " << accountNumber << endl;
	}else
		cout << "Destructor called for default account" <<  endl;
	// TODO Auto-generated destructor stub
}

