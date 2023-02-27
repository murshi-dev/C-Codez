//code to do addition or subtraction on users choice

#include<iostream>
using namespace std;
int main()
{
	//declare and initialise variable
	double n1 = 0.0, n2 = 0.0;
	char choice = 'A';
	//prompt and accept input from user
	cout << "Enter two  numbers: ";
	cin >> n1 >> n2;
	//prompt and accept user choice
	cout << "A. Addition S. Subtraction \n Enter Choice: ";
	//  \n brings text to new line
	cin >> choice;

	//write if condition with boolean expression
	if (choice=='A') //use modulo operator, use double equal to
	{
		cout << n1+n2;
	}
	else
	{
		cout << n1-n2;
	}
	return 0;
}