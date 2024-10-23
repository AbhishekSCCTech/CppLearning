#include "print.h"

void Printer::printValue(int value) {
    cout << "Integer value: " << value << endl;
}

void Printer::printValue(double value) {
    cout << "Double value: " << value << endl;
}

void Printer::printValue(const string& value) {
    cout << "String value: " << value << endl;
}
