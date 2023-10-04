/*Write a program to display the grade ‘P’ when the score
is 60 and greater value otherwise display ‘F’.
Repeat the program 3 times using for loop.
*/
#include <iostream>
using namespace std;
int main()
{
	//1.set initial value
	//2.set the condition
	//3.update loop variable - counter
	for (int counter=1;counter <= 3;counter++)
	{
		int score = 0;
		cout << "Enter score " << counter << ": ";
		cin >> score;
		if (score > 60)
		{
			cout << score << " is PASS" << endl;
		}
		else
		{
			cout << score << " is FAIL" << endl;
		}
	}
	return 0;
}