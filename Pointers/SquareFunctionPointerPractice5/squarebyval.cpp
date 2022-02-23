//find the square of anumber using functions
//1.by value
//2.by reference
//3.by pointers
#include<iostream>
using namespace std;
int square(int num);
void main()
{
	//1. by value
	int num=5;
	//function call
	cout<<"Square of "<<num<<"is: "<<square(num)<<endl;//25
	cout<<"new value of num: "<<num<<endl;//5
	system("pause");
}
//write a function to find square
int square(int num)
{
	num= num * num;//to calculate square
	return num;
}
