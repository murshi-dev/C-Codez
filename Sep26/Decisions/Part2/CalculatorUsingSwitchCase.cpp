#include<iostream>
using namespace std;
int main()
{
	int n1 = 0, n2 = 0;
	char option = ' ';
	cout << "Enter any two numbers: ";
	cin >> n1 >> n2;
	cout << "A. Addition\nB.Subtraction\nC.Multiplication\nD. Division" << endl;
	cout << "Enter an option: ";
	cin >> option;
	//switch case structure
	switch (option)
	{
	case 'A':
		cout << "Added value is: " << (n1 + n2) << endl;
		break;
	case 'B':
		cout << "Subtracted value is: " << (n1 - n2) << endl;
		break;
	case 'C':
		cout << "Multiplied value is: " << (n1 * n2) << endl;
		break;
	case 'D':
		cout << "Divided value is: " << (n1 / n2) << endl;
		break;
	default:
		cout << "Enter 1 / 2 / 3 / 4 only";
		break;
	}
	return 0;
}