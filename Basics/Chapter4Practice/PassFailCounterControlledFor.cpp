/*Write a program to display the grade ‘P’ when the score is 60 and greater value otherwise display ‘F’. 
Assume the calculation is to be done for FIVE students in a class.
Use For Repetition structure
*/
#include<iostream>
using namespace std;
int main()
{
	int score = 0;
	//for loop
	//has three parts separated by semicolon ;
	//1.initial value 2. condition 3. increment/decrement
	for (int counter = 1; counter <= 5; counter++)
	{
		cout << "Enter score "<< counter <<" : " << endl;
		cin >> score;
		if (score >= 60)
		{
			cout << "Grade for " << score << " is P" << endl;
		}//close if
		else
		{
			cout << "Grade for " << score << " is F" << endl;
		}//close else
	}
	return 0;
}