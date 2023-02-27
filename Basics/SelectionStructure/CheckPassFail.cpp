//code to check if an entered mark is pass or fail

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
	if (marks>60) //use modulo operator, use double equal to
	{
		cout << marks << " is PASS";
	}
	else
	{
		cout << marks << " is FAIL";
	}
	return 0;
}