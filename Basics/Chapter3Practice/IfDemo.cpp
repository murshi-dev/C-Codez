//Selection Structure
//demo for if-else condition
//find the sum and difference of any two  numbers entered by the user.
//Provide options to choose the operation – addition or subtraction
//and then proceed with the calculation.

#include<iostream>
using namespace std;
int mainv()
{
	int num1 = 0, num2 = 0, operation = 0;
	cout << "Enter two numbers: " << endl;
	cin >> num1 >> num2;
	cout << "Enter the operation number: " << endl;
	cin >> operation;

	//use  switch-case for multi branch selection
	switch (operation)
	{
	case 1://start each option with a 'case' and an identifier expected to process --here it is '1'
		cout << "Added values of " << num1 << " and " << num2 << " is " << (num1 + num2) << endl;
		break;//end each case with a break
	case 2:
		cout << "Subtracted values of " << num1 << " and " << num2 << " is " << (num1 - num2) << endl;
		break;
	case 3:
		cout << "Multiplied values of " << num1 << " and " << num2 << " is " << (num1 * num2) << endl;
		break;
	case 4:
		cout << "Divide values of " << num1 << " and " << num2 << " is " << (num1 / num2) << endl;
		break;
	default://if user does not enter between 1 to 4 display error message here
		cout << "Please enter between 1 to 4" << endl;
		break;
	}

	return 0;
}