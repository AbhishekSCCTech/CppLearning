#include "ArrayReference.h"

int main() {
    ArrayReference arrayRef(5);
    arrayRef.Display();

    // Modify an element using reference
    int& element = arrayRef.GetElement(2);
    element = 100; // Change the value of the 3rd element (index 2)

    cout << "Modified array using reference: ";
    arrayRef.Display(); // Display modified array
    return 0;
}
