#include "Car.h"

Car::Car(const string& m, const string& mdl, int y) : make(m), model(mdl), year(y) {}

void Car::display() const {
    cout << "Car Make: " << make << ", Model: " << model << ", Year: " << year << endl;
}
