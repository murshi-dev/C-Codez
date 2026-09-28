#include <iostream>
using namespace std;
int main()
{
    double purchaseAmount, finalAmount;
    cout << "Enter purchase amount: RM";
    cin >> purchaseAmount;
    if (purchaseAmount >= 150)
    {
        cout << "Free Delivery" << endl;
        finalAmount = purchaseAmount;
    }
    else
    {
        cout << "Delivery Charge: RM10" << endl;
        finalAmount = purchaseAmount + 10;
    }
    cout << "Final Amount: RM" << finalAmount << endl;
    return 0;
}
