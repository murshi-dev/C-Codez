#include<iostream>
#include<ctime>
using namespace std;
//generate random number using rand() and fill in an array
//then arrange them using bubble sort
	int temp=0;
	void bubbleSort(int arr[]);
int main()
{
	int random[5]={0};
		cout<<"Array with Random numbers between 1 to 100"<<endl;
	//srand modifies the rand values by adding system's time
	srand(time(0));
	//fill with random numbers
	for(int i=0;i<5;i++)
	{
		random[i]=(rand()%100)+1;
	}
	//display array
	for(int i=0;i<5;i++)
	{
		cout<<"Random Element "<<i+1<<"is :"<< random[i]<<endl;
	}
	cout<<"Arranged Array is: "<<endl;
	bubbleSort(random);
	
	system("pause");
	return 0;
}
void bubbleSort(int arr[5])
	{
		int i,j;
		//for loop used for pass/rounds each time
		for(i=0;i<5;i++)
		{
			//for loop for comparing adjacent elements
			for(j=0;j<5-i-1;j++)
			{
				if(arr[j]>arr[j+1])
				{
					//swap/interchange elemnts
					temp=arr[j];
					arr[j]=arr[j+1];
					arr[j+1]=temp;
				}
			}


		}
		//display arranged array
		for(int i=0;i<5;i++)
	{
		cout<<"Arranged Element "<<i+1<<"is :"<< arr[i]<<endl;
	}

}
