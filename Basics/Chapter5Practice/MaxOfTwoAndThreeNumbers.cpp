#include<iostream>
using namespace std;
//prototype
double larger(double x, double y);
double largest(double x, double y, double z);
int main()
{
	double n1 = 0.0, n2 = 0.0, n3=0.0, result = 0.0;
	int choice = 0; // to select using 'switch'
	char again = 'Y';// to repeat using 'while'
	while (again == 'Y')
	{
		cout << "1.Find Largest of 2 numbers \n 2.Find Largest of 3 numbers \n Enter your choice: " << endl;
		cin >> choice;
		switch (choice)
		{
		case 1:
			cout << "Enter two numbers: ";
			cin >> n1 >> n2;
			//call the function 'larger' to compare the entered values n1 and n2
			result = larger(n1, n2);
			//display the result(max value)
			cout << "Larger number is: " << result << endl;
			break;
		case 2:
			cout << "Enter three numbers: ";
			cin >> n1 >> n2 >> n3;
			result = largest(n1, n2, n3);
			cout << "Largest number is:" << result << endl;
			break;
		default:
			cout << "please enter either 1 or 2 " << endl;
			break;
		}//close switch
		cout << "Continue (Y/N): ";
		cin >> again;
	}//close while
	
	return 0;
}//close main
//function definition to compare 2 numbers
double larger(double x, double y)
{
	double max;
	//write the logic to compare two numbers using 'if'
	if (x > y)
		max = x;
	else
		max = y;
	//return the max value
	return max;
}
//function definition to compare 3 numbers
double largest(double x, double y,double z)
{
	double max;
	//write the logic to compare two numbers using 'if'
	if (x > y)
		if (x > z)
			max = x;
		else
			max = z;
	else
		if (y > z)
			max = y;
		else
			max = z;
	//return the max value
	return max;
}