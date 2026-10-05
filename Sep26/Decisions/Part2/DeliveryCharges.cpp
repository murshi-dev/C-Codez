#include <iostream>
using namespace std;
int main() {
    double amount=0.0;
    string member="";
    cout << "Enter order amount: RM";
    cin >> amount;
    if (amount >= 100) 
    {
        cout << "Are you a member? ";
        cin >> member;
        if (member == "yes" || member == "Yes")
            cout << "Free delivery with member benefit";
        else
            cout << "Free delivery";
    }
    else {
        cout << "Delivery fee applies";
    }
    return 0;
}


