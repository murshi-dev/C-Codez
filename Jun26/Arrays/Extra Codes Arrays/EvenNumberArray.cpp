#include<iostream>
using namespace std;
//display even numbers between 1 to 20 in ana array

int main()
{
	int evennum[10];
	for(int i=0;i<10;i++)
	{
		evennum[i]=2+2*i;//to input element with multiple of 2
	}
	//display array 
	for(int i=0;i<10;i++)
	{
		cout<<"Array Elemnts are "<<evennum[i]<<endl;
	}

	system("pause");
	return 0;
}
