#pragma once
#include <iostream>
using namespace std;

class Vector {
private:
    double x, y;

public:
    Vector(double x = 0, double y = 0) : x(x), y(y) {}

    // Overload + operator
    Vector operator+(const Vector& other) {
        return Vector(this->x + other.x, this->y + other.y);
    }

    // Overload * operator for dot product
    double operator*(const Vector& other) {
        return (this->x * other.x) + (this->y * other.y);
    }

    void display() const {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};
