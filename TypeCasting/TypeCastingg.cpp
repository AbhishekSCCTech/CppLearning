#include "TypeCastingg.h"

void TypeCasting::DemonstrateTypeCasting() {
    // Implicit Typecasting
    int intValue = 10;
    double doubleValue = intValue; 
    cout << "Implicit Typecasting: " << intValue << " to " << doubleValue << endl;

    // Explicit Typecasting
    double anotherDoubleValue = 9.99;
    int anotherIntValue = (int)anotherDoubleValue;
    cout << "Explicit Typecasting: " << anotherDoubleValue << " to " << anotherIntValue << endl;
}
