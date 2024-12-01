#include "Item.h"
#include<iostream>
Item::Item() :
		itemID(0), itemName("Unkown"), price(0.0f), quantity(0)
{
	// TODO Auto-generated constructor stub
	cout << "Default constructor called." << endl;
}

Item::Item(int itemID, string itemName) :
		itemID(itemID), itemName(itemName),price(0.0f),quantity(0)
{
	cout << "Constructor with ID and name called." << endl;
}

Item::Item(int itemID, string itemName, float price, int quantity):itemID(itemID), itemName(itemName),price(price),quantity(quantity)
{
	cout << "Constructor with all details called." << endl;
}

void Item::displayDetails()
{
	cout << "ID: " << itemID << endl;
			cout << "Name: " << itemName << endl;
			cout << "Price: $" << price << endl;
			cout << "Quantity: " << quantity << endl << endl;
}

Item::~Item()
{
	// TODO Auto-generated destructor stub
	if (itemID != 0){
		cout << "Destructor called for item " << itemID << endl;
	}else
		cout << "Destructor called for default item" << endl;

}

