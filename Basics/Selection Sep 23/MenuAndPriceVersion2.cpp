/*Display the item name and its price based on the item code entered. The item code and item price are listed below:
Item Code	Item Name and Price
B or b	Burger RM 8
F or f	Fries RM 3
N or n	Nuggets RM 6
W or w	Wrap RM 5
J or j	Juice RM 2
Display a message ‘invalid input’ if the user key in alphabet which is not listed in the table. */

//this version checks if the input entered is single alphabet or not
//initially get the input as string
//check the length using length()
//then convert the string to char data type since switch case accepts int or char types only

#include <iostream>
#include <string>
using namespace std;

int main() {
    string input="";

    // Input item code
    cout << "Enter the alphabet (B/b,F/f,N/n,W/w,J/j)to check the price: " ;
    cin >> input;

    // check if the input entered has one charecter only - use length() function
    if (input.length() == 1 )
    {
		//convert the string to char data type since switch case accepts int or char types only
        char itemCode = input[0];

        // Use a switch statement to determine the item and its price
        switch (itemCode) {
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
    }
    else {
        cout << "Invalid input. Please enter a single alphabet character." << endl;
    }

    return 0;
}
