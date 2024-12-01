
#include "Transaction.h"


Transaction::Transaction(int transactionID, BankAccount *account,
		const string &type, float amount):transactionID(transactionID),account(account),type(type),amount(amount)
{
}

Transaction::Transaction(const Transaction &other):transactionID(other.transactionID),account(other.account),type(other.type),amount(other.amount)
{
}

Transaction::~Transaction()
{
	// TODO Auto-generated destructor stub
}

void Transaction::logTransaction()
{
}

void Transaction::displayTransaction() const
{
}
