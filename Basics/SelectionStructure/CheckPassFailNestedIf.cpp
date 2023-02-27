//code to check if an entered mark is A B C D or F
#include<iostream>
using namespace std;
int main()
{
	//declare and initialise variable
	double marks = 0.0;
	//prompt and accept input from user
	cout << "Enter a mark to check pass or fail status: ";
	cin >> marks;
	//write if condition with boolean expression
	if (marks > 90)
	{
		cout << marks << " is 'A' ";
	}
	else if (marks > 80)
	{
		cout << marks << " is 'B' ";
	}
	else if (marks > 70)
	{
		cout << marks << " is 'C' ";
	}
	else if (marks > 60)
	{
		cout << marks << " is 'D' ";
	}
	else
	{
		cout << marks << " is 'F' ";
	}
	return 0;
}