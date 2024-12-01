#ifndef CAR_H
#define CAR_H

#include <string>
using namespace std;

class Car {
private:
    int carID;      // Unique identifier for each car
    string model;   // Model of the car
    float price;    // Price of the car

public:
    // Constructor to initialize car details
    Car(int carID, string model, float price);

    // Applies a discount to the price
    void applyDiscount(float percentage);

    // Displays car details
    void displayDetails();
};

#endif // CAR_H
