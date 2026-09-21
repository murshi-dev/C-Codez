#include <iostream>

using namespace std;

int main()
{
    //declare and initialise the variables
    double originalPrice = 0.0, discount = 0.0,
        priceAfterDiscount = 0.0, salesTax = 0.0,
        totalAmount = 0.0;
  
    //declare and initialise the CONSTANTS
    const double DISCOUNT_RATE = 0.20;
    const double SALES_TAX_RATE = 0.06;

    //prompt and input
    cout << "Input the original price of Jeans: RM ";
    cin >> originalPrice;

    //calculation
    discount = originalPrice * DISCOUNT_RATE;
    priceAfterDiscount = originalPrice - discount;
    salesTax = priceAfterDiscount * SALES_TAX_RATE;
    totalAmount = priceAfterDiscount + salesTax;

    //output
    cout << "Discount: RM " << discount << endl;
    cout << "Price After Discount: RM " << priceAfterDiscount << endl;
    cout << "Sales Tax: RM " << salesTax << endl;
    cout << "Total Amount to be Paid: RM " << totalAmount;

    return 0;
}