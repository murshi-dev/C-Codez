/*Input two numbers from user. Compare the two numbers and display the largest number among the both. 
Using logical operators check if the entered numbers are positive numbers. If the numbers are 
same display ‘same numbers entered’*/
#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    // Input two numbers
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    // Check if both numbers are positive
    if (num1 > 0 && num2 > 0) {
        // Check if the numbers are equal
        if (num1 == num2) {
            cout << "Same numbers entered." << endl;
        } else {
            // Compare the numbers
            if (num1 > num2) {
                cout << "The largest number is: " << num1 << endl;
            } else {
                cout << "The largest number is: " << num2 << endl;
            }
        }
    } else {
        cout << "Please enter positive numbers." << endl;
    }

    return 0;
}
