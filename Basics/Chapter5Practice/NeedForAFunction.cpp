#include<iostream>
using namespace std;
//function prototyping--tells the compiler 
//that these functions will be defined later in the program
int getInput1();
int getInput2();
int main()
{
	int num1 = 0, num2 = 0;

	//Addition
	num1 = getInput1();//function call/invoke for first function
	num2 = getInput2();//function call/invoke for second function

	//add and display the added value
	cout << "Added Value is: " << num1 + num2;

	//Subtraction
	num1 = getInput1();
	num2 = getInput2();
	cout << "Subtracted Value is: " << num1 - num2;

	//Multiplication
	num1 = getInput1();
	num2 = getInput2();
	cout << "Multiplied Value is: " << num1 * num2;

	return 0;
}//main closed here
//write a function definition to accept input 1
int getInput1()
{
	int a;
	cout << "Enter the first number";
	cin >> a;
	return a;
}
//write a function definition to accept input 2
int getInput2()
{
	int b;
	cout << "Enter the second number";
	cin >> b;
	return b;
}