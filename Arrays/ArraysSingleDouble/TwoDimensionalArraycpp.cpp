//two dimensional array - program to initialise and display using for loop
#include<iostream>
using namespace std;
int main()
{
	//create two dim array
	double sales[2][3] = { 0 };

	//initialise with user input
	//for loop for filling in row
	for (int i = 0; i < 2; i++)
	{
		cout << "Filling in Row " << i + 1 << endl;
		//for loop for filling column
		for (int j = 0; j < 3; j++)
		{
			cout << "Filling in column " << j + 1 << endl;
			cin >> sales[i][j];
		}
	}
	//display the two dim array
	for (int k = 0; k < 2; k++)
	{
		for (int m = 0; m < 3; m++)
		{
			cout << sales[k][m]<<"  ";
		}
		cout << endl;
	}


	return 0;
}