//check if a student pass / fail in a subject
// repeat for 5 students -- use FOR loop
#include<iostream>
using namespace std;
int main()
{
	int marks = 0;
	//		rule1		  rule2		     rule3
	for (int counter = 1; counter <= 5; counter++)
	{
		cout << "Enter the marks of Student " << counter << ": ";
		cin >> marks;
		if (marks >= 50)
			cout << "Pass\n";
		else
			cout << "Fail" << endl;
	}
	return 0;
}