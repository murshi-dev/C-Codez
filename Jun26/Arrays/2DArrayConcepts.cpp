//2D Array Concepts
#include<iostream>
using namespace std;
int main()
{
	//declare and initialise 2D array
	const int ROWSIZE = 3;
	const int COLSIZE = 2;
	int scores[ROWSIZE][COLSIZE] = { 0 };

	//input the marks of each student using FOR loop
	for (int rowCounter = 0; rowCounter < ROWSIZE; rowCounter++)
	{
		cout << "Student " << rowCounter + 1 << ":\n";
		for (int colCounter = 0; colCounter < COLSIZE; colCounter++)
		{
			cout << "Input marks of subject " << colCounter + 1 << ": ";
			cin >> scores[rowCounter][colCounter];
		}
	}

	//display the marks of each student using FOR loop
	for (int rowCounter = 0; rowCounter < ROWSIZE; rowCounter++)
	{
		cout << "Student " << rowCounter+1 << ":\t";
		for (int colCounter = 0; colCounter < COLSIZE; colCounter++)
		{
			cout << scores[rowCounter][colCounter] << "\t";
		}
		cout << endl;
	}

	//display the average of each students marks
	for (int rowCounter = 0; rowCounter < ROWSIZE; rowCounter++)
	{
		int total = 0;
		for (int colCounter = 0; colCounter < COLSIZE; colCounter++)
		{
			total += scores[rowCounter][colCounter];
		}
		int average = total / COLSIZE;
		cout << "Student " << rowCounter + 1 << " average: " << average << endl;
	}
	//display the average of each subjects marks
	for (int colCounter = 0; colCounter < COLSIZE; colCounter++)
	{
		int total = 0;
		for (int rowCounter = 0; rowCounter < ROWSIZE; rowCounter++)
		{
			total += scores[rowCounter][colCounter];
		}
		int average = total / ROWSIZE;
		cout << "Subject " << colCounter + 1 << " average: " << average << endl;
	}
	return 0;
}