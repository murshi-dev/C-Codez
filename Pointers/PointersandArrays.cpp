//Pointer and Arrays
#include<iostream>
using namespace std;
void main()
{
	//declare an array and initialise with values
	int arr[]={53,42,61,73,37};
	//display the contents of array using POINTERS
	//declare a pointer
	int *ptr;
	//assign the array address to pointer
	ptr=arr;//directly initialise arr value to pointer
	//Note!array has lot of contents inside and each content 
	//has an index with an address

	//to display use for loop
	for(int i=0;i<5;i++)
	{
		cout<<*ptr<<endl;//displays values
		cout<<ptr<<endl;//displays address
		//increment the pointer to move to the 
		//next element of the array
		ptr++;
	}

	system("pause");
}