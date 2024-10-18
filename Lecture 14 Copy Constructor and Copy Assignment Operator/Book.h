#pragma once
#include <iostream>

using namespace std;

class SimpleBook {
private:
    string title;
    string author;

public:
    SimpleBook(const string& t, const string& a); // Constructor
    SimpleBook(const SimpleBook& b); // Copy constructor
    void display() const; // Display method
};
