#ifndef LIBRARY_H
#define LIBRARY_H

#include <string>
#include <iostream>
using namespace std;

class Library {
private:
    int bookID;         // Unique book ID
    string* title;      // Dynamically allocated string for the title
    string author;      // Author of the book
    float price;        // Price of the book

public:
    /**
     * Default Constructor
     * Initializes book details with default values.
     */
    Library();

    /**
     * Parameterized Constructor
     * Initializes book details with specific values.
     *
     * @param bookID Unique book ID.
     * @param title Title of the book.
     * @param author Author's name.
     * @param price Price of the book.
     */
    Library(int bookID, const string& title, const string& author, float price);

    /**
     * Copy Constructor
     * Performs a deep copy to ensure correct handling of dynamic memory.
     *
     * @param other The Library object to copy from.
     */
    Library(const Library& other);

    /**
     * Destructor
     * Releases dynamically allocated memory.
     */
    ~Library();

    /**
     * Updates book details.
     * Demonstrates the use of the `this` pointer.
     *
     * @param bookID Unique book ID.
     * @param title Title of the book.
     * @param author Author's name.
     * @param price Price of the book.
     */
    void setDetails(int bookID, const string& title, const string& author, float price);

    /**
     * Displays book details.
     * Constant member function that does not modify the object.
     */
    void displayDetails() const;
};

#endif // LIBRARY_H
