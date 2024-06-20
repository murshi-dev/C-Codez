/*Create a multiplication table for an entered number a shown below:
1 * 4 = 4
2 * 4 = 8
3 * 4 = 12
.
.
.
10	* 4 = 40
*/
#include <iostream>
using namespace std;

int main() {
    int number;

    // Prompt the user to enter a number
    cout << "Enter a number to generate its multiplication table: ";
    cin >> number;

    // Display the multiplication table
    for (int i = 1; i <= 10; ++i) {
        cout << i << " * " << number << " = " << i * number << endl;
    }

    return 0;
}
