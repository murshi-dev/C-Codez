#include <iostream>

using namespace std;

int main() {
    char continueShopping ='y';

    while(continueShopping == 'y' || continueShopping == 'Y')
    {
        double totalBill;
        char payWithCreditCard;
        char liveInLocalArea;
        double discount = 0.0;

   
        cout << "Enter the total bill amount (RM): ";
        cin >> totalBill;


        cout << "Is the customer paying with a credit card? (y/n): ";
        cin >> payWithCreditCard;

 
        if (totalBill > 100) {
            discount += 0.10;
        }


        if (payWithCreditCard == 'y' || payWithCreditCard == 'Y') {
            discount += 0.05;
        }

       
        double finalBill = totalBill * (1 - discount);

     
        cout << "Does the customer live in the local area? (y/n): ";
        cin >> liveInLocalArea;

        // Determine if the customer gets free home delivery
        bool freeDelivery = false;
        if (finalBill >= 300) {
            freeDelivery = true;
        } else if ((liveInLocalArea == 'y' || liveInLocalArea == 'Y') && finalBill < 300) {
            freeDelivery = true;
        }

        // Display the final bill amount and free delivery status
        cout << "Final bill amount: RM " << finalBill << endl;
	//using conditional operator - ?:
        cout << "Free home delivery: " << (freeDelivery ? "Yes" : "No") << endl;

        // Ask if the user wants to continue
        cout << "Do you want to continue shopping? (y/n): ";
        cin >> continueShopping;

    } 

    return 0;
}
