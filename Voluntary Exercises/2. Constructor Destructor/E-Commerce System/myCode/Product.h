/*
 * Product.h
 *
 *  Created on: 26-Nov-2024
 *      Author: Shwetali Wadekar
 */

#ifndef PRODUCT_H_
#define PRODUCT_H_

#include <iostream>
#include <string>
using namespace std;

class Product {
private:
    int productID;              // Unique identifier for the product
    string productName;         // Name of the product
    float price;                // Price of the product

public:
    // Default constructor
    Product();

    // Parameterized constructor
    Product(int productID, const string &productName, float price);

    // Display product details
    void displayProduct() const;

    // Getter methods
    int getProductID() const;
    string getProductName() const ;
    float getPrice() const;
};

#endif /* PRODUCT_H_ */
