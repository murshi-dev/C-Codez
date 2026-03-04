//check if a student pass / fail in a subject
// repeat for 5 students
#include<iostream>
using namespace std;
int main()
{
	int marks = 0;
	//rule 1 --set initial value
	int counter = 1;
	//rule 2 -- set end value
	while (counter <= 5)//loop starts here
	{
		cout << "Enter the marks of Student "<<counter<<": ";
		cin >> marks;
		if (marks >= 50)
			cout << "Pass\n";
		else
			cout << "Fail"<<endl;
		//rule 3 --set update value
		counter = counter + 1;
	}//loop ends here
	return 0;
}