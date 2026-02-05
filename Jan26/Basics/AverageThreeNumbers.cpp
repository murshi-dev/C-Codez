//add the iostram library which has the desc of cout<< and cin>>
#include<iostream>
using namespace std;
int main()//entry point of application, int refers to return type
{
	//declare and initialise variables
	double n1, n2, n3, average = 0.0;
	//prompt and input first number
	cout << "Enter the first number: ";
	cin >> n1;
	//prompt and input second number
	cout << "Enter the second number: ";
	cin >> n2;
	//prompt and input third number
	cout << "Enter the third number: ";
	cin >> n3;
	//calculate average
	average = (n1 + n2 + n3) / 3;
	//display the average
	cout << "Average is "<<average;
	return 0;//since main expects a return value
}
