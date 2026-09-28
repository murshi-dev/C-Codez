#include<iostream>
using namespace std;
int main()
{
	int subject1 = 0, subject2 = 0, average = 0;
	cout << "Input the two subjects' marks: ";
	cin >> subject1 >> subject2;
	average = (subject1 + subject2) / 2;
	//check the pass/fail status using if else
	if (average >= 50)
		cout << average << " is PASS";
	else
		cout << average << " is FAIL";
	return 0;
}