//array operations
#include<iostream>
using namespace std;
int main()
{
	const int SIZE = 5;
	int arr[SIZE] = { 78,85,26,43,21 };
	//input elements to the array
	//3 conditions  - 1. start value  2. stop value  3. update value
	//array size is 5, index starts at 0,  ends at 4 
	// 1. start value =0  2. stop value = 4 3.update value is +1
	/*for (int counter = 0; counter <= 4; counter++)
	{
		cout << "Input element " << counter << ": ";
		cin >> arr[counter];
	}*/
	//output elements from array
	for (int counter = 0; counter <= 4; counter++)
	{
		cout << "Element at " << counter << ": ";
		cout << arr[counter]<<endl;
	}

	//find and display the max and the min element in the array.
	//assign the first element as the max value
	//loop through the array and compare each element with the max value
	//if the compared value is bigger, then swap the current value
	//to the max value
	int max = arr[0];
	int min = arr[0];
	for (int counter = 1; counter <= 4; counter++)
	{
		if (arr[counter] > max)
		{
			max = arr[counter];
		}
		if (arr[counter] < min)
		{
			min = arr[counter];
		}
	}
	cout << "Max value is: " << max << endl;
	cout << "Min value is: " << min << endl;

	//display the sum and average value of all elements in the array.
	int sum = 0, average = 0;
	for (int counter = 0; counter <= 4; counter++)
	{
		//accumulate and add the elements one by one
		//sum = sum + arr[counter];
		sum += arr[counter];
	}
	cout << "Sum of all elements: " << sum<<endl;
	average = sum / SIZE;
	cout << "Average of all elements: " << average<<endl;

	//identify and display all odd and even elements separately. 
	//number % 2 == 0 --even number
	cout << "Even numbers are: " << endl;
	for (int counter = 0; counter <= 4; counter++)
	{
		if (arr[counter] % 2 == 0)
		{
			cout << arr[counter] << " ";
		}
	}
	cout << endl;
	cout << "Odd numbers are: " << endl;
	for (int counter = 0; counter <= 4; counter++)
	{
		if (arr[counter] % 2 != 0)
		{
			cout << arr[counter] << " ";
		}
	}

	//sort the elements in the ascending order
	for (int i = 0; i <= 4; i++)
	{
		for (int j = i + 1; j <= 4; j++)
		{
			//compare the adjacent values
			if (arr[i] > arr[j])
			{
				//use temp variable to swap the values
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	cout << "Sorted array is: ";
	for (int counter = 0; counter <= 4; counter++)
	{
		cout << arr[counter] << " ";
	}
	return 0;
}