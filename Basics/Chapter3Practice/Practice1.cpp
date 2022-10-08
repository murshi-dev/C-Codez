//Write a program to prompt the user to key in his/her age. 
//Display a message to user to notify he/she is eligible 
//to vote for general election or not.
#include<iostream>
using namespace std;
int main1()
{
	int age = 0;
	cout << "Enter the age to check for voter eligibility:" << endl;
	cin >> age;
	if (age >= 21)
	{
		cout << "You are eligible to vote!" << endl;
	}
	else
	{
		cout << "You are NOT eligible to vote!" << endl;
	}

	//ternary operator --  (condition)?truepart:falsepart

	string result = (age >= 21) ? "you are eligible to vote" : "NOT eleigible to vote";

	cout << result;

	return 0;
}
