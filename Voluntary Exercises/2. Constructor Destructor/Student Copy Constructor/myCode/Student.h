
#ifndef STUDENT_H_
#define STUDENT_H_

#include <string>
using namespace std;

class Student {
private:
    int rollNumber;   // Roll number
    string name;      // Name of the student
    float marks;      // Marks obtained
    bool type;
public:


    // Parameterized constructor: Initializes student details
    Student(int rollNumber, string name, float marks);

    // Copy constructor: Initializes a new student object from another
    Student(const Student& other);

    // Displays student details
    void displayDetails();

    // Destructor: Announces when an object is destroyed
    ~Student();
};


#endif /* STUDENT_H_ */
