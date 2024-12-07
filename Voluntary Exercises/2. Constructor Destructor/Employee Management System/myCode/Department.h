

#ifndef DEPARTMENT_H_
#define DEPARTMENT_H_

#include <iostream>
#include <string>
using namespace std;

class Department {
private:
    int departmentID;          // Unique identifier for the department
    string departmentName;     // Name of the department

public:
    // Default constructor
    Department();

    // Parameterized constructor
    Department(int departmentID, const string &departmentName);

    // Destructor
    ~Department();

    // Display department details
    void displayDepartment() const;
};

#endif /* DEPARTMENT_H_ */
