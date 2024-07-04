#include<iostream>
using namespace std;
int main()
{
	//create and initialise 2d array
	double sales[3][2] = {0,0};
	
	//input the array using for loop
	for (int row = 0; row <= 2; row++)
	{
		cout << "Row " << row+1 << ": "<<endl;
		for (int col = 0; col <= 1; col++)
		{
			cout << "Input Column " << col+1 << " value: ";
			cin >> sales[row][col];
		}
	}

	//output the array using for loop
	for (int row = 0; row <= 2; row++)
	{
		cout << "Row " << row+1 << ":\n";
		for (int col = 0; col <= 1; col++)
		{
			cout << "Column " << col+1 << " value: ";
			cout << sales[row][col]<<"\t";
		}
		cout << endl;
	}
	//display the 2d array for char data type
	char initials[2][3];

}