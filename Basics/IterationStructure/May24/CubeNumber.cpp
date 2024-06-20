/*Calculate and display the cube of a number. Repeat the program until the user wishes to exit. */
#include <iostream>
using namespace std;

int main() {
    double number, cube;
    char choice = 'y';

    while (choice == 'y' || choice == 'Y') {
        cout << "Enter a number to calculate its cube: ";
        cin >> number;

        // Calculate the cube
        cube = number * number * number;

        // Display the cube
        cout << "The cube of " << number << " is: " << cube << endl;

        // Ask the user if they want to continue
        cout << "Do you want to calculate the cube of another number? (y/n): ";
        cin >> choice;
    }

    return 0;
}
