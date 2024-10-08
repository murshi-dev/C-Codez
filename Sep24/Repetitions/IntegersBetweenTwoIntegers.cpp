/*Prompt the user to enter two integer numbers. Then display every integer between the two integers. 
Ensure the first number is lesser than the second number. 
Display a message if there are no integers between the entered values.*/
#include<iostream>
using namespace std;
int main() 
{
    int first, second;
    cout << "Enter first number: ";
    cin >> first;
    cout << "Enter second number number: ";
    cin >> second;
    // Ensure the first number is less than the second
    while (first >= second)
    {
        cout << "Invalid input. The first number must be less than the second. Repeat: ";
        cout << "Enter first number: ";
        cin >> first;
        cout << "Enter second number number: ";
        cin >> second;
    }
    //to check no integers between entered values
    if (second - first == 1)
    {
        cout << "There are no integers between " << first << " and " << second << "." << endl;
    }
    else
    {
        cout << "Integers between " << first << " and " << second << ": ";
        for (int i = first + 1; i <= second; i++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}






