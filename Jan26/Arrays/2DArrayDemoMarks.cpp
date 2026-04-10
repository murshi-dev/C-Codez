#include<iostream>
using namespace std;
int main()
{
	//initialise 2d array
	//5 students, 2 subjects each
	int marks[5][2] = { {78,20},{85,56},{55,35},{40,65},{90,70} };
	//display the marks of each student
	cout << "Student 1: " << endl;
	cout << "Subject 1: " << marks[0][0] << "\t" 
			<< "Subject 2: " << marks[0][1] << endl;
	cout << "Student 2: " << endl;
	cout << "Subject 1: " << marks[1][0] << "\t"
		<< "Subject 2: " << marks[1][1] << endl;
	cout << "Student 3: " << endl;
	cout << "Subject 1: " << marks[2][0] << "\t"
		<< "Subject 2: " << marks[2][1] << endl;
	cout << "Student 4: " << endl;
	cout << "Subject 1: " << marks[3][0] << "\t"
		<< "Subject 2: " << marks[3][1] << endl;
	cout << "Student 5: " << endl;
	cout << "Subject 1: " << marks[4][0] << "\t"
		<< "Subject 2: " << marks[4][1] << endl;
	return 0;
}