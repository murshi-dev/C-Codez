#include<iostream>
using namespace std;
int main()
{
	int marks = 0;
	int studentCounter = 1;//rule 1
	do{
		cout << "Input the marks of student " << studentCounter << ": ";
		cin >> marks;
		if (marks > 50)
			cout << "Student" << studentCounter << " is Pass";
		else
			cout << "Student" << studentCounter << " is Fail";
		studentCounter++; //rule 3
	} while (studentCounter <= 5); //rule 2
	return 0;
}



