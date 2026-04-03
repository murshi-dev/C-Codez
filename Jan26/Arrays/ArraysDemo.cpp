#include<iostream>
using namespace std;
int main()
{
	//declare and initialise an array
	int studentMarks[5] = { 0 };
	//input the marks -- 78    85    35   80   55
	cout << "Input student 1 marks: ";
	cin >> studentMarks[0];//78 
	cout << "Input student 2 marks: ";
	cin >> studentMarks[1];//85
	cout << "Input student 3 marks: ";
	cin >> studentMarks[2];//35 
	cout << "Input student 4 marks: ";
	cin >> studentMarks[3];//80 
	cout << "Input student 5 marks: ";
	cin >> studentMarks[4];//55

	//display the marks
	cout << "Student 1 marks: " << studentMarks[0] << endl;//78
	cout << "Student 2 marks: " << studentMarks[1] << endl;//85
	cout << "Student 3 marks: " << studentMarks[2] << endl;//35
	cout << "Student 4 marks: " << studentMarks[3] << endl;//80
	cout << "Student 5 marks: " << studentMarks[4] << endl;//55

	return 0;
}