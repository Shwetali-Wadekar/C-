/*
 * Employee.h
 *
 *  Created on: 26-Nov-2024
 *      Author: Shwetali Wadekar
 */

#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_

#include <iostream>
#include <string>

using namespace std;
// Forward declaration of Department class
class Department;

class Employee {
private:
    int employeeID;            // Unique identifier for the employee
    string name;               // Employee's name
    float salary;              // Employee's salary
    Department *department;    // Pointer to the associated Department object

public:
    // Default constructor
    Employee();

    // Parameterized constructor (invokes the default constructor)
    Employee(int employeeID, const string &name, float salary, Department *department);

    // Destructor
    ~Employee();

    // Display employee details
    void displayDetails() const;
};


#endif /* EMPLOYEE_H_ */
