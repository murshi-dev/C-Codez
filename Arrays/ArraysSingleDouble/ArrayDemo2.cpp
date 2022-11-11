//demo array to create, initialise and display
#include<iostream>
using namespace std;
int main()
{
	//declare an array and initialise with values
	int marks[5] = { 78,85,15,07,65 };
	//above line creates an array with the name 'marks' of data type 'int'
	//size of the array/number of elements it can hold is 5
	//78,85,15,07,65 indicates the values of each element.
	
	//display the contents of the array
	cout << "First element is: " << marks[0] << endl;//displays 78
	cout << "Second element is: " << marks[1] << endl;//displays 85
	cout << "Third element is: " << marks[2] << endl;//displays 15
	cout << "Fourth element is: " << marks[3] << endl;//displays 07
	cout << "Fifth element is: " << marks[4] << endl;//displays 65

	//use for loop to display contents of the array
	cout << "Contents didplayed using 'for' loop" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << "Value at index/position " << i << " is: " << marks[i] << endl;
	}

	return 0;
}