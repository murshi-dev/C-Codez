//comments - to add info about the code
//single line comment
/*multiple
lines 
of comments
*/
//code to caculate and display the average of three numbers

#include<iostream>//preprocessor directive with iostream header file
using namespace std;//declare the namespace to avoid writing together with the cin cout
int mainSample1()//code's entry point starts from the main function
{
	//declare and initialise the required variables
	int n1 = 0, n2 = 0, n3 = 0, average = 0;
	//prompt and input the numbers
	cout << "Enter the first number: ";
	cin >> n1;
	cout << "Enter the second number: ";
	cin >> n2;
	cout << "Enter the third number: ";
	cin >> n3;
	//calculate the average
	average = (n1 + n2 + n3) / 3;
	//dsiplay the output
	cout << "Average is "<<average;
	return 0;
}