#include "Student.h"

int main() {
    Student student(5); // Create a Student object with 5 grades

    // Setting grades
    for (int i = 0; i < 5; ++i) {
        student.setGrade(i, (i + 1) * 10); // Assign grades
    }

    // Displaying grades
    student.displayGrades();
    return 0;
}
