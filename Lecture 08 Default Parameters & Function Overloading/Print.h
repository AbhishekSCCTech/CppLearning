#pragma once
#include <iostream>
#include <string>

using namespace std;

class Printer {
public:
    void printValue(int value);
    void printValue(double value);
    void printValue(const string& value);
};
