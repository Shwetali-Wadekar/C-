#include "Product.h"
#include "Order.h"

Order::Order() :
		orderID(0), customerName("Unknown"), product(nullptr), quantity(0)
{
	// TODO Auto-generated constructor stub

}

Order::Order(int orderID, const string &customerName, Product *product,
		int quantity) :
		orderID(orderID), customerName(customerName), product(product), quantity(
				quantity)
{

}

Order::Order(const Order &other):orderID(other.orderID),customerName(other.customerName),product(new Product (*other.product)),quantity(other.quantity)
{
}

Order::~Order()
{
	delete product;
	// TODO Auto-generated destructor stub
	cout << "Order Deleted: Order ID - " << orderID << endl;
}

void Order::displayOrderDetails() const
{
	std::cout << "Order ID: " << orderID << std::endl;
	        std::cout << "Customer Name: " << customerName << std::endl;
	        std::cout << "Quantity: " << quantity << std::endl;
	        std::cout << "Product Details: " << std::endl;
	            product->displayProduct();
}
