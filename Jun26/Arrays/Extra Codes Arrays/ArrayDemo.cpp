#include<iostream>
using namespace std;

int main()
{
	//declare an array and initialise with values
	int demo[10]={23, 56, 67, 44, 3, 5, 61, 45, 82,34};
	//display one element at a time
	cout<<"display one element at a time"<<endl;
	cout<<demo[2]<<endl;
	//use for loop to display all elements in an array
	cout<<"display using for loop"<<endl;
	for(int i=0;i<10;i++)
	{
		cout<<"Element at "<<i<<"is: "<< demo[i]<<endl;
	}

	system("pause");
}
