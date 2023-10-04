/*Write a program to display the grade ‘P’ when the score
is 60 and greater value otherwise display ‘F’.
Repeat the program 3 times.
*/
#include <iostream>
using namespace std;
int main()
{
	//1.set initial value
	int counter=1;
	//2.set the condition
	while (counter<=3)
	{
		int score = 0;
		cout << "Enter score " <<counter<<": ";
		cin >> score;
		if (score > 60)
		{
			cout << score << " is PASS" << endl;
		}
		else
		{
			cout << score << " is FAIL" << endl;
		}
		//3.update loop variable - counter
		//counter = counter + 1;
		//can be written using increment operator
		counter++;
	}
	return 0;
}