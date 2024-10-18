#include "DynamicArray.h"

int main() {
    DynamicArray arr;
    arr.add(10);
    arr.add(20);
    arr.add(30);

    cout << "Array elements:" << endl;
    for (int i = 0; i < arr.getSize(); ++i) {
        cout << arr.get(i) << " ";
    }
    cout << endl;

    arr.remove();
    cout << "After removal, array size: " << arr.getSize() << endl;

    return 0;
}
