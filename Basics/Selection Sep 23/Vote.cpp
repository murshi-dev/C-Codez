/*Display the voter eligibility based on the following criteria.

Message	Criteria
Applicant is too young to vote	Applicant is younger than 18 years old
Applicant can vote	Applicant is at least 18 years old and have registered to vote
Applicant must register to vote	Applicant is at least 18 years old and have not registered to vote
*/
#include<iostream>
using namespace std;
int main()
{
	int age = 0;
	char registration_status = 'Y';
	cout << "Enter age" << endl;
	cin >> age;
	if (age >= 18)
	{
		cout << "Enter Registration Status" << endl;
		cin >> registration_status;
		if (registration_status == 'Y')
		{
			cout << "Applicant eligible to vote" << endl;
		}
		else
		{
			cout << "Applicant must register to vote" << endl;
		}
	}
	else
	{
		cout << "Applicant is too young to vote" << endl;
	}
	return 0;
}
