#pragma once
#include <iostream>
using namespace std;

class Car {
private:
    string make;
    string model;
    int year;

public:
    Car(const string& m, const string& mdl, int y);
    void display() const;
};
