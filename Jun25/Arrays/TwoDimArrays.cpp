//2d arrays
#include<iostream>
using namespace std;
int main()
{
	//declare 2d array
	int sales[3][2] = { 0 };

	//input values using loop
	for (int salesPerson = 0; salesPerson <= 2; salesPerson++)
	{
		cout << "Input Salesperson " << salesPerson + 1 << " Sales Values: " << endl;
		for (int month = 0; month <= 1; month++)
		{
			cout << "Month " << month + 1 << ": ";
			cin >> sales[salesPerson][month];
		}
	}
	//display the values using loop
	for (int salesPerson = 0; salesPerson <= 2; salesPerson++)	//loop for salesperson
	{
		cout << "Salesperson " << salesPerson+1 << " sales Values: " << endl;
			for (int month = 0; month <= 1; month++)	//loop for months
		{
			cout << "Month "<<month+1<<": "<<sales[salesPerson][month]<<"\t";
		}
		cout << endl;
	}
	//calculate the average of each sales person's sales value 
	for (int salesPerson = 0; salesPerson <= 2; salesPerson++)
	{
		int sum = 0;
		for (int month = 0; month <= 1; month++)
		{
			sum += sales[salesPerson][month];
		}
		int average = sum / 2;
		cout << "Average Sales of " << salesPerson + 1 << ": " << average << endl;
	}
	return 0;
}