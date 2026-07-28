#include<iostream>
using namespace std;
//get user input for 5 subject marks in an array
//calculate average
int main()
{
	//declare an array and initialise it with 0
	int marks[5]={0};
	int sum=0;
	int average=0;

	//use for loop to accept user input
	for(int i=0;i<5;i++)
	{
		cout<<"Enter value "<<i<<": ";
		cin>>marks[i];
		sum+=marks[i];//sum=sum+marks[i]
	}
	average=sum/5;
	//use for loop to display all elements in the array
	cout<<"Entered marks are: "<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<"Mark "<<i<<"is: "<< marks[i]<<endl;
	}
	cout<<"Average is: "<<average;
	system("pause");
}
