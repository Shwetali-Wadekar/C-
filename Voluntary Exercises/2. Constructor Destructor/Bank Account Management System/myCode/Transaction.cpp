#include "Transaction.h"

Transaction::Transaction(int transactionID, BankAccount *account,
		const string &type, float amount) :
		transactionID(transactionID), account(new BankAccount(*account)), type(
				type), amount(amount)
{
}

Transaction::Transaction(const Transaction &other) :
		transactionID(other.transactionID), account(other.account), type(
				other.type), amount(other.amount)
{
}

Transaction::~Transaction()
{
	// TODO Auto-generated destructor stub
	delete account;
}

void Transaction::logTransaction()
{
	if (type == "Deposit"){
		account->deposit(amount);
	}else if (type == "Withdrawal"){
		account->withdraw(amount);
	}
}

void Transaction::displayTransaction() const
{
	cout << "Transaction Logged: " << type << " of $" << amount << endl;
}
