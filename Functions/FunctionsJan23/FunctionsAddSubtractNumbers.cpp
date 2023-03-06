//Function Demo to add two numbers and subtract two numbers
#include<iostream>
using namespace std;
//function prototype - informs the compiler that this 
//function is described later after the main() function
int getInput1(int);
int getInput2(int);
int main()
{
	//declare two local variables
	int n1 = 0, n2 = 0;
	//'function call' and store the result in local variables
	n1 = getInput1(n1);
	n2 = getInput2(n2);
	//calculate and display
	cout << "Added values is: " << (n1 + n2) << endl;

	//do subtraction
	n1 = getInput1(n1);
	n2 = getInput2(n2);
	cout << "Subtracted values is: " << (n1 - n2) << endl;

	return 0;
}//main ends here
//function to get the first number
//function definition
int getInput1(int n1)//function header
{
	//function body
	cout << "Enter the first number: ";
	cin >> n1;
	return n1;
}
int getInput2(int n2)//function header
{
	//function body
	cout << "Enter the second number: ";
	cin >> n2;
	return n2;
}