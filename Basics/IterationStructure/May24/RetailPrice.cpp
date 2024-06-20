/*Calculate and display the retail price of a product with the following formula:  
Retail Price = Wholesale Cost * 2.5
Repeat the program for 5 times. */

#include <iostream>
using namespace std;

int main() {
    const int NUM_PRODUCTS = 5;
    double wholesaleCost, retailPrice;

    for (int i = 1; i <= NUM_PRODUCTS; ++i) {
        cout << "Enter the wholesale cost for product " << i << ": ";
        cin >> wholesaleCost;

        // Calculate the retail price
        retailPrice = wholesaleCost * 2.5;

        // Display the retail price
        cout << "The retail price for product " << i << " is: $" << retailPrice << endl;
    }

    return 0;
}
