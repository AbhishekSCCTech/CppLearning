#include "Book.h"

int main() {
    SimpleBook book1("The Catcher in the Rye", "J.D. Salinger"); // Create a SimpleBook object
    SimpleBook book2 = book1; // Use the copy constructor

    // Displaying details
    book1.display();
    book2.display(); // Display copied book details

    return 0;
}
