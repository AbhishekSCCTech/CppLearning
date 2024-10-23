#include "Average.h"

int main() {
    int intAvg = Average(10, 20);
    double doubleAvg = Average(10.5, 20.5);
    float floatAvg = Average(10.0f, 20.0f);

    cout << "Average of integers: " << intAvg << endl;
    cout << "Average of doubles: " << doubleAvg << endl;
    cout << "Average of floats: " << floatAvg << endl;

    return 0;
}
