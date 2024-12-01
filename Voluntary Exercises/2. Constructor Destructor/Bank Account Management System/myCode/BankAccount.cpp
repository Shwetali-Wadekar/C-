/*
 * BankAccount.cpp
 *
 *  Created on: 26-Nov-2024
 *      Author: Shwetali Wadekar
 */

#include "BankAccount.h"

BankAccount::BankAccount():accountID(0),accountHolder("Unknown"),balance(0)
{
	// TODO Auto-generated constructor stub

}

BankAccount::BankAccount(int accountID, const string &accountHolder,
		float balance):accountID(accountID),accountHolder(accountHolder),balance(balance)
{
}

BankAccount::BankAccount(const BankAccount &other):accountID(other.accountID),accountHolder(other.accountHolder),balance(other.balance)
{
}

BankAccount::~BankAccount()
{
	// TODO Auto-generated destructor stub
}

void BankAccount::deposit(float amount)
{
	balance += amount;
}

void BankAccount::withdraw(float amount)
{
	balance -= amount;
}

void BankAccount::displayDetails() const
{
	cout << "------Account Details--------" << endl;
		cout << "Account ID: " << accountID << endl;
		cout << "Account Holder: " << accountHolder << endl;
		cout << "Balance: $" << balance << endl;
}
