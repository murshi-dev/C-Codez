/*Write a program to display the grade ‘P’ when the score 
is 60 and greater value otherwise display ‘F’. 
Repeat the program until users chooses to exit.
*/
#include <iostream>
using namespace std;
int main()
{
	//1.set initial value
	char option = 'y';
	//2.set the condition
	while (option == 'y' || option == 'Y')
	{
		int score = 0;
		cout << "Enter score: ";
		cin >> score;
		if (score > 60)
		{
			cout << score << " is PASS" << endl;
		}
		else
		{
			cout << score << " is FAIL" << endl;
		}
		//3.update loop variable - option
		cout << "Continue (y/n): ";
		cin >> option;
	}
	return 0;
}