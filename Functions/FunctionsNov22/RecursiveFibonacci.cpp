#include<iostream>
using namespace std;
//prototype
int fibonacci(int n);
int main()
{
	
	//display series of numbers - use repetition structure - for
	for (int i = 0; i <= 10; i++)
	{
		//function call
		cout<<fibonacci(i)<<endl;
	}
	return 0;
}
//function definition
int fibonacci(int n)
{
	if (n == 0 || n == 1)//check if number is not 1 or 0
		return n;
	else
		return (fibonacci(n - 1) + fibonacci(n - 2));//recursive function calls
}