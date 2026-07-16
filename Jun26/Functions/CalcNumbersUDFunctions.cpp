//demo user defined functions
#include<iostream>
using namespace std;
//function prototype
int addNumbers(int, int);
int diffNumbers(int, int);
int mulNumbers(int, int);
int main()
{
	int n1 = 0, n2 = 0;
	char option = ' ';
	cout << "Input two numbers: ";
	cin >> n1 >> n2;
	cout << "A. Addition\nB. Subtraction\nC. Multiplication" << endl;
	cout << "Enter an option: ";
	cin >> option;
	switch (option)
	{
	case 'A':
		//function call
		cout << "Added value is: " << addNumbers(n1, n2);//n1,n2-->actual parameters
		break;
	case 'B':
		cout << "Difference value is : " << diffNumbers(n1, n2);
		break;
	case 'C':

		cout << "Product value is: " << mulNumbers(n1, n2);
		break;
	default:
		cout << "Enter only A/B/C";
	}
	return 0;
}
//function definition
int addNumbers(int a, int b)//function heading -- a, b --> formal parameters
{
	//function body
	int sum = a + b;
	return sum;
}
int diffNumbers(int a, int b)
{
	int diff = a - b;
	return diff;
}
int mulNumbers(int a, int b)
{
	int mul = a * b;
	return mul;
}