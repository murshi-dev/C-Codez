//initialise an array with numbers 2,4,6,8,...20
#include<iostream>
using namespace std;
int main()
{
	//declare array
	int evenNumbers[10] = { 0 };
	//use for loop to initialise with even numbers
	for (int i = 0; i < 10; i++)
	{
		evenNumbers[i] = 2 + 2 * i;//all numbers will be initialised
	}

	//display array
	for (int j = 0; j < 10; j++)
	{
		cout << evenNumbers[j] << endl;
	}

	return 0;
}