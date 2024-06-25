#include<iostream>
using namespace std;
int main()
{
	//declare an array
	const int SIZE = 5;
	int marks[SIZE] = { 0 };
	//this array has starting index 0 and ending index 4
	//meaning there are 5 elements
	
	//input values/elements to array
	cout << "Enter the first element: ";
	cin >> marks[0]; //marks[0] -indicates the subscript
	//accesing elements based on the index is called subscript
	cout << "Enter the second element: ";
	cin >> marks[1];
	cout << "Enter the third element: ";
	cin >> marks[2];
	cout << "Enter the fourth element: ";
	cin >> marks[3];
	cout << "Enter the fifth element: ";
	cin >> marks[4];

	//display the elements entered
	cout << "First element at Index 0: " << marks[0] << "\n";
	cout << "Second element at Index 1: " << marks[1] << "\n";
	cout << "Third element at Index 2: " << marks[2] << "\n";
	cout << "Fourth element at Index 3: " << marks[3] << "\n";
	cout << "Fifth element at Index 4: " << marks[4] << "\n";
	return 0;
}