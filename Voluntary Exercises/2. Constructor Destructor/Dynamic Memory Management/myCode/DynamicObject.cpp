
#include "DynamicObject.h"

DynamicObject::DynamicObject()
{
	// TODO Auto-generated constructor stub
	data = new int (0);
	cout << "Object Address:" << this << endl;
}

DynamicObject::DynamicObject(int value)
{
	data = new int (value);
	cout << "Object Address:" << this << endl;
}

void DynamicObject::display()
{
	cout << "Data: " << *data << endl;
	cout << "Data Address: " << data << endl << endl;
}

DynamicObject::~DynamicObject()
{
	// TODO Auto-generated destructor stub
	delete data;
	cout << "Destructor called. Releasing memory for data." << this << endl;
}

