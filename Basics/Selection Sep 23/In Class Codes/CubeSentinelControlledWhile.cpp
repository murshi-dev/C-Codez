/*Calculate and display the cube of a number. Repeat the program until the user wishes to exit. Write Pseudocode, draw flow chart and C++ code using while loop*/
#include<iostream>
using namespace std;
int main()
{
	char option = 'y';
	while (option == 'y' || option == 'Y')
	{
		int number = 0, cube = 0;
		cout << "Enter any number: ";
		cin >> number;
		cube = number * number * number;
		cout << "Cube of " << number << " is " << cube;
		cout << "Continue(y/n): ";
		cin >> option;
	}
	return 0;
}
