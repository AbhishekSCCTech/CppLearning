#include "Book.h"

// Constructor
SimpleBook::SimpleBook(const string& t, const string& a) : title(t), author(a) {}

// Copy Constructor
SimpleBook::SimpleBook(const SimpleBook& b) : title(b.title), author(b.author) {}

// Display method
void SimpleBook::display() const {
    cout << "Title: " << title << ", Author: " << author << endl;
}
