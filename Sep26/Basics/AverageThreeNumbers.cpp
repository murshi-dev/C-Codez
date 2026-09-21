//average of three numbers
#include<iostream>
using namespace std;
int main()
{
	//declare and initialise the variables
	int n1 = 0, n2 = 0, n3 = 0, average = 0;
	cout << "Enter the first number: ";//line1
	cin >> n1;//line2
	cout << "Enter the second number: ";//line3
	cin >> n2;//line4
	cout << "Enter the third number: ";//line5
	cin >> n3;//line6
	average = (n1 + n2 + n3) / 3;//line7
	cout << "Average is: "<<average;//line8
	return 0;
}


