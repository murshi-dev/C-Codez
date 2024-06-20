/*Input three numbers from user. Compare the numbers and display the largest number among them. Using logical operators check if the entered numbers are positive numbers. Repeat the program for 5 sets of numbers. */
#include <iostream>
using namespace std;
int main() {
    const int NUM_SETS = 5;
    double num1, num2, num3;
    
    for (int i = 1; i <= NUM_SETS; ++i) {
        cout << "Enter three numbers for set " << i << ": ";
        cin >> num1 >> num2 >> num3;

        // Check if all numbers are positive
        if (num1 > 0 && num2 > 0 && num3 > 0) {
            // Find the largest number
            double largest = num1;
            if (num2 > largest) {
                largest = num2;
            }
            if (num3 > largest) {
                largest = num3;
            }

            // Display the largest number
            cout << "The largest number among the three is: " << largest << endl;
        } else {
            cout << "All numbers must be positive. Please enter a new set of numbers." << endl;
            // Decrement i to repeat the current set
            --i;
        }
    }

    return 0;
}
