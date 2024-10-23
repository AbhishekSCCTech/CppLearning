#include "PointerConverter.h"

PointerConverter::PointerConverter() {
    cout << "PointerConverter Created" << endl;
}

void PointerConverter::ConvertToSmart() {
    int* rawPtr = new int(10);   
    cout << "Raw Pointer Value: " << *rawPtr << endl;

    unique_ptr<int> smartPtr(rawPtr);   
    cout << "Smart Pointer Value: " << *smartPtr << endl;
    // Raw pointer is automatically deleted when smartPtr goes out of scope
}
