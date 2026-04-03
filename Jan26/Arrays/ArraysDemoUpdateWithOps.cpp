#include<iostream>
using namespace std;
int main()
{
	//declare and initialise an array
	int studentMarks[5] = { 0 };
	//input the marks -- 78    85    35   80   55
	//loop --1. initial value (0) 2. end value (4) 3. update value (+1)
	for (int index = 0; index <= 4; index++)
	{
		cout << "Input marks for student " << index+1 << " :";
		cin >> studentMarks[index];

	}
	//display the marks usig loop
	for (int index = 0; index <= 4; index++)
	{
		cout << "Student " << index + 1 << "marks is: ";
		cout << studentMarks[index] << endl;
	}
	//calculate the total of all the marks
	int total = 0;//declare a varaible to hold the total value
	int average = 0;
	for (int index = 0; index <= 4; index++)
	{
		total = total + studentMarks[index];
	}//loop ends here
	cout << "Total of all the marks is: " << total << endl;
	average = total / 5;
	cout << "Average of all the marks is: " << average << endl;

	//display the highest marks 
	//assume the first element as the highest mark
	int highest = studentMarks[0];
	//display the lowest marks 
	//assume the first element as the lowest mark
	int lowest = studentMarks[0];
	for (int index = 0; index <= 4; index++)
	{
		//compare the highest with every element in the array
		if (studentMarks[index] > highest)
			//replace the highest with current element
			highest = studentMarks[index];
		//compare the lowest with every element in the array
		if (studentMarks[index] < lowest)
			//replace the highest with current element
			lowest = studentMarks[index];
	}//loop ends here
	cout << "Highest marks is " << highest << endl;
	cout << "Lowest marks is " << lowest << endl;
	return 0;
}