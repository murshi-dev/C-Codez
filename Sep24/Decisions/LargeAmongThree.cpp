/*Input three numbers from user. Compare the three numbers and display the largest number among the both. 
Using logical operators check if the entered numbers are positive numbers. 
If the numbers are same display ‘same numbers entered’*/
#include<iostream>
using namespace std;
int main() {
    int num1, num2, num3;

    // Input three numbers
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    // Check if all numbers are positive
    if (num1 > 0 && num2 > 0 && num3 > 0) {
        // Check if all numbers are the same
        if (num1 == num2 && num2 == num3) {
            cout << "Same numbers entered" << endl;
        }
        // Find the largest number
        else {
            if (num1 >= num2 && num1 >= num3) {
                cout << "The largest number is " << num1 << endl;
            }
            else if (num2 >= num1 && num2 >= num3) {
                cout << "The largest number is " << num2 << endl;
            }
            else {
                cout << "The largest number is " << num3 << endl;
            }
        }
    }
    else {
        cout << "All numbers must be positive" << endl;
    }
    return 0;
}
