
#include "Employee.h"
#include "Department.h"

Employee::Employee():employeeID(0),name("Unknown"),salary(0.0f),department(nullptr)
{
	// TODO Auto-generated constructor stub

}

Employee::Employee(int employeeID, const string &name, float salary,
		Department *department):Employee()
{
	this->employeeID = employeeID;
	this ->name = name;
	this->salary = salary;
	this->department = department;
}

Employee::~Employee()
{
	// TODO Auto-generated destructor stub
	cout << "Employee deleted: " << name << endl;
}

void Employee::displayDetails() const
{
	cout<< "Employee ID: " << employeeID << endl;
	cout<< "Employee Created: " << name << endl << "Department Information: " << endl;
			department->displayDepartment();
	cout<< "Employee Salary: " << salary << endl << endl;
}
