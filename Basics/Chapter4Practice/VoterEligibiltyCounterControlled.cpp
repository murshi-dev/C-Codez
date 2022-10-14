/*Write a program using nested if else structure to determine voter eligibility based on the following criteria. 
Assume the voter eligibility has to be checked for SEVEN people. Use counter controlled repetition structure
such that the program finds the voter eligibility for SEVEN people.

*/
#include<iostream>
using namespace std;
int main()
{
	int counter = 1;
	int age = 0;
	char regStatus;
	while (counter <= 7)
	{
		cout << "Enter age of Person " << counter << " : ";
		cin >> age;
		if (age >= 21)
		{
			cout << "Enter registrattion status:(Y/N)" << endl;
			cin >> regStatus;
			if (regStatus == 'Y')
			{
				cout << "Applicant can vote" << endl;
			}
			else
			{
				cout << "Applicant must register to vote" << endl;
			}
		}
		else
		{
			cout << "Applicant too young to vote" << endl;
		}
		counter++;
	}
	return 0;
}