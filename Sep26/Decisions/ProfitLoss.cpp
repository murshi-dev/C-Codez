#include <iostream>
using namespace std;
int main()
{
    double costPrice, sellingPrice, difference;
    cout << "Enter cost price: RM";
    cin >> costPrice;
    cout << "Enter selling price: RM";
    cin >> sellingPrice;
    difference = sellingPrice - costPrice;
    if (sellingPrice > costPrice)
    {
        cout << "Profit: RM" << difference << endl;
    }
    else if (sellingPrice < costPrice)
    {
        cout << "Loss: RM" << difference << endl;
    }
    else
    {
        cout << "No Profit, No Loss" << endl;
    }
    return 0;
}
