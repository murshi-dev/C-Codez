/*3.	Create an array of 10 elements with the following values: 23, 26, 34, 21, 54, 45, 36,80, 75, 34. 
Write a program to find the total number of entries higher than the entered number. */
#include<iostream>
using namespace std;
int main()
{
	int numbers[10] = { 23, 26, 34, 21, 54, 45, 36,80, 75, 34 };
	int search = 0, counter = 0;
	cout << "Enter the number to search for: ";
	cin >> search;
	for (int i = 0; i < 10; i++)
	{
		//compare 'search' value to every element in array
		if (numbers[i] > search)
			counter++;
	}
	cout << "Number of entries higher than " << search << "is: " << counter << endl;
	return 0;
}