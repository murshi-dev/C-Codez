#include<iostream>
using namespace std;
//get input sales for five regions and display them

//function prototype
void displayArray(int sales[], int numOfElements);
int main()
{
	//declare an array and initialise it with 0
	int sales[5]={0};

	//use for loop to accept user input
	for(int i=0;i<5;i++)
	{
		cout<<"Enter sales for region "<<i+1<<": ";
		cin>>sales[i];
	}
	//function call
	displayArray(sales,5);
	
	
	system("pause");
	return 0;
}
//function definition to display the array
//takes two parameters
//1.datatype and name of array
//2.size of array--number of elements
void displayArray(int sales[], int numOfElements)
{
	//use for loop to display all elements in the array
	cout<<"Entered sales are: "<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<"Sales "<<i+1<<"is: "<< sales[i]<<endl;
	}
}

