/*Write a program to display the grade ‘P’ when the score is 60 and 
greater value otherwise display ‘F’. 
Assume the calculation is to be done for FIVE students in a class.
*/
#include<iostream>
using namespace std;
int main()
{
	int score = 0;
	
	int counter = 1;//1.initial value
	while (counter <= 5)//2.check condition
	{
		cout << "Enter score "<<counter<<": ";
		cin >> score;
		if (score >= 60)
		{
			cout << "Grade for " << score << " is P" << endl;
		}
		else
		{
			cout << "Grade for " << score << " is F" << endl;
		}
		counter++;//3.increment counter value
	}
	return 0;
}