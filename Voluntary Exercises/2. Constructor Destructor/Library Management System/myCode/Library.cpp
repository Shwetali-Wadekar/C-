#include "Library.h"

Library::Library() :
		bookID(0), author("Unknown"), price(0.0)
{
	title = new string("Not set");
	// TODO Auto-generated constructor stub
	cout << "Default Constructor Called" << endl;
}

Library::Library(int bookID, const string &title, const string &author,
		float price) :
		bookID(bookID), author(author), price(price)
{
	this->title = new string(title); // Deep copy of title
}

Library::Library(const Library &other) :
		bookID(other.bookID), author(other.author), price(other.price)
{
	this->title = new string(*other.title);
}

Library::~Library()
{
	// TODO Auto-generated destructor stub
	delete title;
}

void Library::setDetails(int bookID, const string &title, const string &author,
		float price)
{
	this->bookID = bookID;
	*(this->title) = title;
	this->author = author;
	this->price = price;
}

void Library::displayDetails() const
{
	cout << "Book ID: " << bookID << endl;
	cout << "Title: " << *title << endl;
	cout << "Author: " << author << endl;
	cout << "Price: $" << price << endl;

}
