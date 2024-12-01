#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
using namespace std;

class Employee {
private:
    int employeeID;    // Unique ID for the employee
    string name;       // Employee's name
    float basicSalary; // Basic salary

public:
    // Constructor to initialize employee details
    Employee(int employeeID, string name, float basicSalary);

    // Calculates gross salary (Basic + HRA + DA)
    float calculateGrossSalary();

    // Displays employee details and gross salary
    void displayDetails();
};

#endif // EMPLOYEE_H
