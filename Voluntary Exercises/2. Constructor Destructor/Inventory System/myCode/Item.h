
#ifndef ITEM_H_
#define ITEM_H_

#include <string>
using namespace std;

class Item {
private:
    int itemID;        // Item identifier
    string itemName;   // Item name
    float price;       // Price of the item
    int quantity;      // Quantity available

public:
    // Default constructor: Initializes item with default values
    Item();

    // Constructor: Initializes item with ID and name
    Item(int itemID, string itemName);

    // Constructor: Initializes all item details
    Item(int itemID, string itemName, float price, int quantity);

    // Displays item details
    void displayDetails();

    // Destructor: Announces when an object is destroyed
    ~Item();
};

#endif /* ITEM_H_ */
