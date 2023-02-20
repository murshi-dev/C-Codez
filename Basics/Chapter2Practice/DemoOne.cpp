//include the input output stream library to 
//recognise the cout<< and cin>>
#include<iostream>
using namespace std;//common namespace used instead of std:: near cout and cin
//enclose entire code inside main() function - its return type is int
//while ending the code return value 0 is used
int main()
{
	//declare and initialise variables
	//datatype is 'int' variable is n1,n2,n3
	int n1 = 0, n2 = 0, n3 = 0, total = 0;
	//prompt for input
	cout << "Enter 3 whole numbers to add";
	//accept input
	cin >> n1 >> n2 >> n3;
	//calculation
	total = n1 + n2 + n3;
	//display the result
	cout << "Total: " << total;

	return 0;
}


