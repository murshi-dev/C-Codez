#include<iostream>
#include<ctime>
using namespace std;
//generate random number using rand()
int main()
{
	cout<<"Random number"<<endl;
	cout<<rand()<<endl;
	//srand modifies the rand values by adding system's time
	srand(time(0));
	for(int i=0;i<5;i++)
	{
		cout<<(rand()%6)+1<<endl;
	}


	system("pause");
}
