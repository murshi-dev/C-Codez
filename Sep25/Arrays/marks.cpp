//demo arrays
#include<iostream>
using namespace std;
int main()
{
	//declare and initialise array
	int studentMarks[5] = { 0 };
	//prompt and input marks
	for (int counter = 0; counter <= 4; counter++)
	{
		cout << "Input student " << counter+1 <<" mark : ";
		cin >> studentMarks[counter];
	}

	//display the marks
	for (int counter = 0; counter <= 4; counter++)
	{
		cout << "Student " << counter + 1 << " mark : " 
			<< studentMarks[counter] << endl;
	}
	//how to sum(total) the marks 
	//total of all elements in the array
	int sum = 0;
	int average = 0;
	for (int counter = 0; counter <= 4; counter++)
	{
		//sum = sum + studentMarks[counter]; OR
		sum += studentMarks[counter];
	}
	cout << "Total of all Students Marks: " << sum << endl;
	average = sum / 5;
	cout << "Average of Student Marks: " << average << endl;

	//highest marks among the 5 students
	int max = studentMarks[0];//assume the first element as the max value
	int min = studentMarks[0];//assume the first element as the min value
	for (int counter = 1; counter <= 4; counter++)
	{
		//compare max with subsequent elements 
		if (studentMarks[counter] > max)
			//if higher than max --replace max with current element
			max = studentMarks[counter];
		//compare min with subsequent elements 
		if (studentMarks[counter] < min)
			//if lower than min --replace min with current element
			min = studentMarks[counter];
	}
	cout << "Highest Marks: " << max << endl;
	cout << "Lowest Marks: " << min << endl;
	return 0;

}
