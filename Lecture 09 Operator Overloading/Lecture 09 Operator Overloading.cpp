#include "Vector.h"

int main() {
    Vector v1(2.0, 3.0);
    Vector v2(4.0, 5.0);

    Vector sum = v1 + v2;  // Using overloaded + operator
    double dotProduct = v1 * v2; // Using overloaded * operator

    cout << "Vector 1: ";
    v1.display();

    cout << "Vector 2: ";
    v2.display();

    cout << "Sum: ";
    sum.display();

    cout << "Dot Product: " << dotProduct << endl;

    return 0;
}
