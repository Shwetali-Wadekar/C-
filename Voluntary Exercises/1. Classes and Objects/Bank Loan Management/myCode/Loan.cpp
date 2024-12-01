#include "Loan.h"
#include <cmath>
#include <iostream>
Loan::Loan(int loanID, string borrowerName, float loanAmount,
		float interestRate) :
		loanID(loanID), borrowerName(borrowerName), loanAmount(loanAmount), interestRate(
				interestRate)
{
	// TODO Auto-generated constructor stub

}

Loan::~Loan()
{
	// TODO Auto-generated destructor stub
}

void Loan::calculateEMI(int tenureInYears)
{
	float emi;
	float num = pow((1 + interestRate), (tenureInYears * 12));
	emi = (loanAmount * interestRate * num) / (num - 1);
	cout << "Calculated Emi: " << emi << endl;
}

void Loan::displayDetails()
{
	// Print account number, holder's name, and balance
		cout << "Loan ID:  " << loanID << endl;
		cout << "Borrower Name:  " << borrowerName << endl;
		cout << "Loan Amount:  " << loanAmount << endl;

}
