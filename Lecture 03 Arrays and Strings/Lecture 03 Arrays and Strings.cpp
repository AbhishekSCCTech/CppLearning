#include "DynamicArray.h"
using namespace std;

int main() {
    int n, value, index;
    cout << "Enter array size: ";
    cin >> n;

    DynamicArray arr(n);

    for (int i = 0; i < n; ++i) {
        cout << "Enter value for index " << i << ": ";
        cin >> value;
        arr.add(i, value);
    }

    cout << "Array contents: ";
    arr.display();

    cout << "Remove element at index: ";
    cin >> index;
    arr.remove(index);

    cout << "Array after removal: ";
    arr.display();

    return 0;
}
