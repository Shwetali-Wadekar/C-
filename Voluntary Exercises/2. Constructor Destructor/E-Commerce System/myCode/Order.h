/*
 * Order.h
 *
 *  Created on: 26-Nov-2024
 *      Author: Shwetali Wadekar
 */

#ifndef ORDER_H_
#define ORDER_H_

#include <iostream>
#include <string>

// Forward declaring the Product class
class Product;

using namespace std;

class Order {
private:
    int orderID;                // Unique identifier for the order
    string customerName;        // Name of the customer
    Product *product;           // Pointer to a Product object
    int quantity;               // Quantity of the product ordered

public:
    // Default constructor
    Order();

    // Parameterized constructor
    Order(int orderID, const string &customerName, Product *product, int quantity);

    // Copy constructor (Deep Copy)
    Order(const Order &other);

    // Destructor
    ~Order();

    // Display order details
    void displayOrderDetails() const;
};


#endif /* ORDER_H_ */
