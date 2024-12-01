/*
 * Book.cpp
 *
 *  Created on: 18-Nov-2024
 *      Author: Shwetali Wadekar
 */

#include "Book.h"
#include <iostream>
using namespace std;

Book::~Book()
{
	// TODO Auto-generated destructor stub
}

Book::Book(int bookID, string title, float price, int quantity) :
		bookID(bookID), title(title), price(price), quantity(quantity)
{
}

void Book::updateQuantity(int amount)
{
	quantity += amount;
}

float Book::calculateCost(int numBooks)
{
	float cost = 0.0f;
	cost = price * numBooks;
	cout << "Total cost for " << numBooks << " books: $" << cost << endl << endl;
	return cost;
}

void Book::displayDetails()
{
	cout << " -----------Book Inventory Details--------\n";
	 cout << "Book ID: " << bookID << endl;
	 cout << "Title: " << title << endl;
	 cout << "Price: $" << price << endl;
	 cout << "Number of books available in the inventory (Quantity): " << quantity << endl;

}
