//arrays
#include<iostream>
using namespace std;
int main()
{
	//declare an array of size 5 and initialise with 0
	int studentMarks[5] = { 0 };
	//prompt and user input the marks for 5 students using loop
	//for loop --1. start value(0) 2. stop value(4) 3. update value(+1)
	for (int counter = 0; counter <= 4; counter++)
	{
		cout << "Enter the Student "<<counter+1<<" Marks: ";
		cin >> studentMarks[counter];
	}
	//display the marks using loop
	for (int counter = 0; counter <= 4; counter++)
	{
		cout << "Student " << counter+1 << " Marks: " 
			<< studentMarks[counter] << endl;
	}
	//calculate the sum(total) of all the marks
	int sum = 0;
	int average = 0;
	for (int counter = 0; counter <= 4; counter++)
	{
		//sum = sum + studentMarks[counter];
		sum += studentMarks[counter];
	}
	cout << "Sum of all the marks is: " << sum << endl;
	average = sum / 5;
	cout << "Average of all the marks is: " << average << endl;

	//find the highest and lowest marks among the 5 students
	int max = studentMarks[0];//assume the first element as the highest
	int min = studentMarks[0];//assume the first element as the lowest
	for (int counter = 1; counter <= 4; counter++)
	{
		//compare max with every subsequent array value
		if (studentMarks[counter] > max)
			//replace max with current array value
			max = studentMarks[counter];

		//compare min with every subsequent array value
		if (studentMarks[counter] < min)
			//replace min with current array value
			min = studentMarks[counter];
	}
	cout << "Highest marks is " << max << endl;
	cout << "Lowest marks is " << min << endl;
	return 0;
}