#include<iostream>
using namespace std;
int main()
{
	int n1, n2 = 0;
	char option = ' ';
	cout << "Enter any two numbers: ";
	cin >> n1 >> n2;
	cout << "A.Addition\tB.Subtraction\tC.Multiplication";
	cout << "\nEnter an option : ";
	cin >> option;
	switch (option)
	{
	case 'A':
	case 'a':
		cout << "Added value is: " << (n1 + n2);
		break;
	case 'B':
	case 'b':
		cout << "Subtracted value is: " << (n1 - n2);
		break;
	case 'C':
	case 'c':
		cout << "Multiplied value is: " << (n1 * n2);
		break;
	default:
		cout << "Enter only A/B/C";
	}//close switch
	return 0;
}