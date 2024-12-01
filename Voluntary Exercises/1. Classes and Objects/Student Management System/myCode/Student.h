#ifndef STUDENT_H
#define STUDENT_H

#include <string>
using namespace std;

class Student {
private:
    int rollNumber;       // Unique roll number
    string name;          // Student's name
    float marks;          // Marks obtained

public:
    // Constructor: Initializes roll number, name, and marks
    Student(int rollNumber, string name, float marks);

    // Updates marks of the student
    void setMarks(float marks);

    // Returns the grade based on marks
    /* >= 90: A
     * >= 75: B
	 *	>= 50: C
	 *	< 50: F
     */
    char getGrade();

    // Displays student details and grade
    void displayDetails();

    ~Student();
};

#endif // STUDENT_H
