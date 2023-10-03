/*Display the item name and its price based on the item code entered. The item code and item price are listed below:
Item Code	Item Name and Price
B or b	Burger RM 8
F or f	Fries RM 3
N or n	Nuggets RM 6
W or w	Wrap RM 5
J or j	Juice RM 2
Display a message ‘invalid input’ if the user key in alphabet which is not listed in the table. */

#include <iostream>
using namespace std;

int main() {
    char choice=' ';
    // Input the choice
    cout << "Enter the choice (B/b, F/f, N/n, W/w, J/j): ";
    cin >> choice;

    // Use a switch statement to determine the menu and its price
    switch (choice) {
		//check both upper and lower case
        case 'B':
        case 'b':
            cout << "Item Name: Burger\nPrice: RM 8" << endl;
            break;
        case 'F':
        case 'f':
            cout << "Item Name: Fries\nPrice: RM 3" << endl;
            break;
        case 'N':
        case 'n':
            cout << "Item Name: Nuggets\nPrice: RM 6" << endl;
            break;
        case 'W':
        case 'w':
            cout << "Item Name: Wrap\nPrice: RM 5" << endl;
            break;
        case 'J':
        case 'j':
            cout << "Item Name: Juice\nPrice: RM 2" << endl;
            break;
        default:
            cout << "Invalid input" << endl;
    }

    return 0;
}
