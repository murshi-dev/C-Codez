#include<iostream>
using namespace std;
int main()
{
	int n1, n2 = 0;
	char option = ' ';
	cout << "Enter any two numbers: ";
	cin >> n1 >> n2;
	// \t --tabspace  \n new line  endl endline
	cout << "A.Addition\tB.Subtraction\tC.Multiplication";
	cout<<"\nEnter an option : ";
	cin >> option;

	if (option == 'A' || option == 'a')
		cout << "Added value is: " << (n1 + n2);
	else if (option == 'B' || option == 'b')
		cout << "Subtracted value is: " << (n1 - n2);
	else if (option == 'C' || option == 'c')
		cout << "Multiplied value is: " << (n1 * n2);
	//if any alphabets except A/B/C entered,then this else is executed
	else
		cout << "Enter A/B/C only";
	return 0;
}