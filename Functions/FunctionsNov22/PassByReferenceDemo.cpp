#include<iostream>
using namespace std;
//function prototype
void process(int& value);
int main()
{
	int someValue = 7;
	//function call
	process(someValue);
	return 0;
}
//function definition
void process(int& value)//'&' represents reference variable
//which points to the address of 'somevalue' variable
{
	cout << "value of variable is: " << value << endl;
	cout << "address/location of the variable 'value' is: " << &value << endl;
	//cout << "address/location of the variable 'someValue' is: " << &someValue << endl;
}