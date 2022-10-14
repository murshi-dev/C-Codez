/*Write a program using for loop to print out the even numbers 
in the range of 40 to 80. Use for loop.
*/
#include<iostream>
using namespace std;
int main()
{
	for (int counter = 40; counter <= 80; counter+=2)
	{
		cout << counter << endl;
	}

	return 0;
}