/*Display ‘free home delivery’ if a sale in grocery store amounts to at least RM 300.
 If the customer lives within the local area code and sale total isn’t  RM 300 provide 
 ‘free home delivery’ as well.*/

#include <iostream>
using namespace std;

int main() {
    double saleAmount;
    int localAreaCode;

    // Input sale amount and local area code
    cout << "Enter the sale amount (in RM): ";
    cin >> saleAmount;
    cout << "Enter the local area code: ";
    cin >> localAreaCode;

    // Check if sale amount is at least RM 300 and customer is within local area code
    if (saleAmount >= 300 || localAreaCode == 11200) {
        cout << "Free home delivery" << endl;
    } else {
        cout << "Home delivery not available" << endl;
    }

    return 0;
}
