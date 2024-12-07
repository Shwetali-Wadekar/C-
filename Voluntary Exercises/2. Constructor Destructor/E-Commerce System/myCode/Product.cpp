
#include "Product.h"

Product::Product() :
		productID(0), productName("Unknown"), price(0.0f)
{
	// TODO Auto-generated constructor stub

}

Product::Product(int productID, const string &productName, float price) :
		productID(productID), productName(productName), price(price)
{
}


int Product::getProductID() const
{
	return productID;
}

string Product::getProductName() const
{
	return productName;
}

float Product::getPrice() const
{
	return price;
}

void Product::displayProduct() const
{
	cout << "Product ID: " << getProductID() << endl;
	cout << "Product Name: " << getProductName()<< endl;
	cout << "Price: " << getPrice()<< endl;
}
