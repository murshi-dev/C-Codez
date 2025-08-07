/*Write a program for a college admissions office. The user enters a numeric high school grade point average (for example, 3.2), and an admission test score. Print the message “Accept” if the student meets either of the following requirements:
-	A grade point average of 3.0 or above and an admission test score of at least 60
-	A grade point average below 3.0 and an admission test score of at least 80
If the student does not meet either of the qualification criteria, print “Reject”. 
*/
#include<iostream>
using namespace std;
int main() 
{
    float gpa;
    int testScore;

    // Input GPA and admission test score
    cout << "Enter the high school grade point average (GPA): ";
    cin >> gpa;
    cout << "Enter the admission test score: ";
    cin >> testScore;

    // Check if the student meets the criteria for acceptance
    if ((gpa >= 3.0 && testScore >= 60) || (gpa < 3.0 && testScore >= 80)) 
    {
        cout << "Accept" << endl;
    }
    else {
        cout << "Reject" << endl;
    }

    return 0;
}

