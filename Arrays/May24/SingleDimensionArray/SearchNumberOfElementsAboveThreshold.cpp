#include<iostream>
using namespace std;
int main()
{
	const int size = 10;
	int marks[size] = { 85,78,95,32,23,54,12,79,35,74 };
	int thresholdMark = 0;
	char option = 'Y';
	while (option == 'Y' || option == 'y')
	{
		//prompt for the marks threshold
		cout << "Enter the marks threshold: ";
		cin >> thresholdMark;

		//count the number of marks higher than the threshold
		//use loop
		int studentCounter = 0;
		for (int counter = 0; counter <= 9; counter++)
		{
			//use if condition to check each elemnt with the thresold value
			if (marks[counter] > thresholdMark)
			{
				//increment the studentCounter to 1
				//studentCounter = studentCounter + 1
				studentCounter++;
			}
		}
		cout << "Number of students higher than " << thresholdMark << " is " << studentCounter<<endl;
		cout << "Continue(Y/N): ";
		cin >> option;
	}
	return 0;
}

