#include<iostream>
using namespace std;
int main()
{
	int marks = 0;
	for (int studentCounter = 1; studentCounter <= 5; studentCounter++)
	{
		cout << "Input the marks of student " << studentCounter << ": ";
		cin >> marks;
		if (marks > 50)
			cout << "Student" << studentCounter << " is Pass";
		else
			cout << "Student" << studentCounter << " is Fail";
	}
	return 0;
}


