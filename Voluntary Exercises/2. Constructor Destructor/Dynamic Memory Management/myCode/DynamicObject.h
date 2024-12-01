#ifndef DYNAMICOBJECT_H_
#define DYNAMICOBJECT_H_

#include <iostream>
using namespace std;

class DynamicObject {
private:
    int* data; // Pointer to dynamically allocated data

public:
    // Default constructor: Allocates memory for data
    DynamicObject();

    // Parameterized constructor: Allocates memory and initializes data
    DynamicObject(int value);

    // Displays the value of data
    void display();

    // Destructor: Frees the allocated memory
    ~DynamicObject();
};

#endif /* DYNAMICOBJECT_H_ */
