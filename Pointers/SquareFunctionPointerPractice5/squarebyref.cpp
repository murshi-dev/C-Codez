//find the square of anumber using functions
//1.by value
//2.by reference
//3.by pointers
#include<iostream>
using namespace std;
void square(int& num);
void main()
{
	//2. by reference
	int num=5;
	//function call
	square(num);
	cout<<"Square is: "<<num<<endl;//25
	cout<<"new value of num: "<<num<<endl;//25
	system("pause");
}
//write a function to find square
void square(int& num)
{
	num= num * num;//to calculate square

}
