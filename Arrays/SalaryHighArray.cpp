#include<iostream>
using namespace std;
//display higher salry based on user input
int main()
{
	//declare an array and initialise it with salary
	int salary[10]={2300,5600,4800,2000,5040,6700,3400,4500,7800,8500};
	int searchFor=0;	//ask user for which salry to search for
	int counter=0; //to keep track of the higher salry TRUE results
	cout<<"Enter salary to search for"<<endl;
	cin>>searchFor;
	//start searching the loop using for
	for (int i=0;i<10;i++)
	{
		//compare each element
		if(salary[i]>searchFor)
		{
			//increment counter
			counter+=1;
		}
	}
	//display the total counter variable 
	cout<<"Number of employees with salry greater than "<<searchFor<<"is :"<<counter<<endl;
	system("pause");
	return 0;
}


