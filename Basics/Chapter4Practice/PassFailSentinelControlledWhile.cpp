/*Write a program to display the grade ‘P’ when the score is 60 and greater value otherwise display ‘F’. 
Assume the calculation is to be done for ‘n’ students in a class.
Here it is not sure for how many students calculation needs to be done. Hence we will use sentinel controlled loop
*/
#include<iostream>
using namespace std;
int main()
{
	int score = 0;
	char choice = 'Y';//1.initial value
	while (choice == 'Y')//2.check condition
	{
		cout << "Enter score:" << endl;
		cin >> score;
		if (score >= 60)
		{
			cout << "Grade for " << score << " is P" << endl;
		}//close if
		else
		{
			cout << "Grade for " << score << " is F" << endl;
		}//close else
		//3.increment/decrement - get users choice here
		cout << "Continue (Y/N): ";
		cin >> choice;
	}//close while
	return 0;
}//close main