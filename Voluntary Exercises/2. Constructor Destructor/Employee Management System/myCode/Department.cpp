
#include "Department.h"


Department::Department():departmentID(0),departmentName("Unknown")
{
	// TODO Auto-generated constructor stub

}

Department::Department(int departmentID, const string &departmentName)
{
	this->departmentID = departmentID;
	this ->departmentName = departmentName;
}

Department::~Department()
{
	// TODO Auto-generated destructor stub
	cout <<  "Department Deleted: " << departmentName << endl;
}

void Department::displayDepartment() const
{
	cout<< "Department Name: " << departmentName<<  ", Department ID: " << departmentID << endl;
}
