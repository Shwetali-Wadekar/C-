
#include "Car.h"
#include <iostream>


Car::Car(int carID, string model, float price):carID(carID),model(model),price(price)
{
}

void Car::applyDiscount(float percentage)
{
	cout << "Price after discount of " << percentage << "% is: " << price*((100-percentage)*0.01) << "$" << endl;
}

void Car::displayDetails()
{
	cout << "Car ID: " << carID << endl;
	cout << "Model: " << model << endl;
	cout << "Price($): " << price << endl;
}
