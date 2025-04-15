#include<iostream>
using namespace std;
int main()
{
	int arr[5] = { 10,20,30,40,50 };
	int* ptr = arr;

	cout << *ptr;//10 - displays first element
	cout << *(ptr + 1);//20 - displays second element
	cout << *(ptr + 2);//30 - displays third element

	//use loop to display the elements in the array
	for (int i = 0; i < 5; i++)
	{
		cout << "Element "<<i+1<<": " << *ptr << endl;
		cout << "Element " << i + 1 << "'s Address : " << ptr << endl;
		ptr++;//increment pointer value
	}
	//function call to find the highest element
	int highest = findHighest(arr);
	cout << "Highest element is: " << highest << endl;
	return 0;
}
//function to display the highest element in the array
int findHighest(int* arr)
{
	int highest = *arr;//assume the first element as the highest
	for (int i = 0; i < 5; i++)
	{
		if (*(arr + i) > highest)
			highest = *(arr + i);
	}
	return highest;
}