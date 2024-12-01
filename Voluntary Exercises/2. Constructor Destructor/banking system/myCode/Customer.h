#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>
#include "Account.h"

class Customer {
public:
    // Default Constructor
    Customer();

    // Parameterized Constructor
    Customer(const std::string& name);

    // Copy Constructor (Deep Copy)
    Customer(const Customer& other);

    // Move Constructor
    Customer(Customer&& other) noexcept;

    // Destructor
    ~Customer();

    // Copy Assignment Operator
    Customer& operator=(const Customer& other);

    // Move Assignment Operator
    Customer& operator=(Customer&& other) noexcept;

    // Friend function to display customer details
    friend void displayCustomer(const Customer& customer);

private:
    std::string name;
    Account* account;
};

#endif // CUSTOMER_H
