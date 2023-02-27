/*Write a program to find the sum, difference, product, and
division of any two  numbers entered by the user.  Provide options to choose the operation –
addition, subtraction, multiplication, or division and then proceed with the calculation*/
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
	cout << "A.Addition\nS.Subtraction\nM.Multiplication\nD.Division \n Enter Choice: ";
	//  \n brings text to new line
	cin >> choice;
	//open switch
	switch (choice)
	{
	case 'A':
		cout << "Added value is " << n1 + n2;
		break;
	case 'S':
		cout << "Subtracted value is " << n1 - n2;
		break;
	case 'M':
		cout << "Multiplied value is " << n1 * n2;
		break;
	case 'D':
		cout << "Divided value is " << n1 / n2;
		break;
	default:
		cout << "Only enter A S M or D " << n1 / n2;
		break;
	}

	return 0;
}