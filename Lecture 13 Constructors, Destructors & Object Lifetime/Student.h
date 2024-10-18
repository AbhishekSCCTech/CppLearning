#pragma once
#include <iostream>
using namespace std;

class Student {
private:
    int* grades;
    int size;

public:
    Student(int s);
    ~Student();
    void setGrade(int index, int value);
    void displayGrades() const;
};
