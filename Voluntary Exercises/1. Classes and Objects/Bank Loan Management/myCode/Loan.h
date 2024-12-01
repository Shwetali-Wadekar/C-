#ifndef LOAN_H
#define LOAN_H

#include <string>
using namespace std;

class Loan {
private:
    int loanID;           // Unique loan ID
    string borrowerName;  // Borrower's name
    float loanAmount;     // Loan amount
    float interestRate;   // Annual interest rate

public:
    // Constructor to initialize loan details
    Loan(int loanID, string borrowerName, float loanAmount, float interestRate);

    // Calculates EMI based on loan tenure in years
    void calculateEMI(int tenureInYears);

    // Displays loan details and EMI
    void displayDetails();

    ~Loan();
};

#endif // LOAN_H
