//demo struct
#include<iostream>
using namespace std;
//declare a struct
struct Student
{
	//struct members
	int studentID;
	string studentName;
	double marks;
};
int main()
{
	//create a variable for the struct
	Student stud;
	//using this variable assign values
	//to the struct members
	stud.studentID = 101;
	stud.studentName = "Jane";
	stud.marks = 78;
	//display the struct member values to console
	cout << "StudentID: " << stud.studentID << endl;
	cout << "StudentName: " << stud.studentName << endl;
	cout << "StudentMarks: " << stud.marks << endl;
}