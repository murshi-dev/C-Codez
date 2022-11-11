#include<iostream>
using namespace std;
int main()
{
	//declare and initialise array
	//marks--array name
	//5--array size
	//{78,88....}--elements inside array
	int marks[5] = { 78,88,85,33,21 };
	//display the array
	//use 'for' loop to display every single element one by one
	cout << "Contents of the 'marks' array are: " << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << marks[i]<<endl;
	}

	return 0;
}