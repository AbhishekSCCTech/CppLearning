#include "Student.h"

Student::Student(int s) : size(s) {
    grades = new int[size]; // Dynamically allocate memory for grades
}

Student::~Student() {
    delete[] grades; // Deallocate memory in the destructor
}

void Student::setGrade(int index, int value) {
    if (index >= 0 && index < size) {
        grades[index] = value;
    }
}

void Student::displayGrades() const {
    for (int i = 0; i < size; ++i) {
        cout << "Grade " << i + 1 << ": " << grades[i] << endl;
    }
}
