/*Define a struct Student with attributes like name, rollNumber, and marks.
Create an array of 3 students and display the details of students
who scored more than 75 marks.*/

#include <iostream>
#include <string>
using namespace std;

// Define the struct
struct Student {
    string name;
    int rollNumber;
    double marks;
};

int main() {
    Student students[3];
    for (int i = 0; i < 3; i++) {
        cout << "Enter details for student " << (i + 1) << ":\n";
        cout << "Name: ";
        cin >> students[i].name;
        cout << "Roll Number: ";
        cin >> students[i].rollNumber;
        cout << "Marks: ";
        cin >> students[i].marks;
    }

    // Display details of students who scored more than 75 marks
    cout << "\nStudents scoring more than 75 marks:\n";
    for (int i = 0; i < 3; i++) {
        if (students[i].marks > 75) {
            cout << "Name: " << students[i].name 
                 << ", Roll Number: " << students[i].rollNumber 
                 << ", Marks: " << students[i].marks << endl;
        }
    }
    return 0;
}
