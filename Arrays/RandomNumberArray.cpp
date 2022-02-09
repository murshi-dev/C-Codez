#include<iostream>
#include<ctime>
using namespace std;
//generate random number using rand() and fill in an array
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
	system("pause");
}
