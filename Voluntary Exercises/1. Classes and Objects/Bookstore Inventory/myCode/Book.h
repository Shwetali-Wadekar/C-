#ifndef BOOK_H
#define BOOK_H

#include <string>
using namespace std;

class Book
{
private:
	int bookID;       // Unique identifier
	string title;     // Title of the book
	float price;      // Price of the book
	int quantity; // Refers to the total number of books currently available in the inventory (stock).
				  //Example: A bookstore might have 50 copies of a specific book in stock.

public:
	// Constructor to initialize book details
	Book(int bookID, string title, float price, int quantity);

	// Updates the quantity of the book
	/* amount (in updateQuantity): Refers to the change in stock, which can be positive (when new stock is added) or negative (when stock is removed, such as books being sold).
	 * Example: If 10 books are sold, amount = -10. If 20 new books are added, amount = 20.
	 *
	 */
	void updateQuantity(int amount);

	// Calculates the total cost for a given number of books
	/*Parameter: numBooks:
	 *Refers to the number of books a customer wants to buy. This doesn't affect
	 *the inventory directly; it is used to calculate the total cost for the given
	 *the number of books.
	 *Example: A customer wants to buy 3 copies of a book, so numBooks = 3
	 *
	 */
	float calculateCost(int numBooks);

	// Displays book details
	void displayDetails();

	~Book();
};

#endif // BOOK_H
