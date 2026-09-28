#include <iostream>
using namespace std;
int main()
{
    double weight=0.0, shippingFee=0.0;
    cout << "Enter package weight (kg): ";
    cin >> weight;
    if (weight <= 2)
    {
        shippingFee = 5;
    }
    else if (weight <= 5)
    {
        shippingFee = 10;
    }
    else if (weight <= 10)
    {
        shippingFee = 20;
    }
    else
    {
        shippingFee = 30;
    }
    cout << "Shipping Fee: RM" << shippingFee << endl;
    return 0;
}
