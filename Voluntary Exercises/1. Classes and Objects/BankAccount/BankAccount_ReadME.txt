BankAccount


Problem Statement:
Design a BankAccount class that models a simple bank account. The class should have:

Data Members (private):
accountNumber (integer): Stores the unique account number.
accountHolderName (string): Stores the name of the account holder.
balance (float): Stores the account balance.

Member Functions (public):
A constructor to initialize the account details.
A function deposit to add money to the account.
A function withdraw to withdraw money (ensure sufficient balance before withdrawal).
A function displayDetails to print the account details.

Task Instructions:
Complete the .cpp file based on the .h file provided.
Use proper access specifiers to ensure data encapsulation.
Create at least two objects of BankAccount in your main function and demonstrate the functionalities (deposit, withdraw, display details).

UML Diagram:

+----------------------+
|      BankAccount     |
+----------------------+
| - accountNumber: int |
| - accountHolderName: |
|    string            |
| - balance: float     |
+----------------------+
| + BankAccount(...)   |
| + deposit(amount:    |
|   float): void       |
| + withdraw(amount:   |
|   float): void       |
| + displayDetails():  |
|   void               |
+----------------------+


Expected Output (Sample):

Account Number: 1001
Account Holder Name: John Doe
Account Balance: 600.00

Account Number: 1002
Account Holder Name: Jane Smith
Account Balance: 100.00

