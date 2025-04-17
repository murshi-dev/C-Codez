//struct and functions
#include<iostream>
using namespace std;
struct Product {
    int prodID;
    string prodName;
    double salesValue[4];
};
//function to input product details
void inputProductDetails(Product& p)
{
    cout << "Input product id: ";
    cin >> p.prodID;
    cout << "Input product name: ";
    cin >> p.prodName;
    for (int i = 0; i < 4; i++)
    {
        cout << "Enter sales value " << i +1 << ": ";
        cin >> p.salesValue[i];
    }
}
//function to calc average sales
double calculateAverage(const double sales[], int size)
{
    double sum = 0.0;
    for (int i = 0; i < size; i++)
    {
        sum += sales[i];
    }
    return sum / size;
}
//function to display product details
void displayProductDetails(const Product& p)
{
    cout << "Product ID: " << p.prodID << endl;
    cout << "Product Name: " << p.prodName << endl;
    double average = calculateAverage(p.salesValue, 4);
    for (int i = 0; i < 4; i++)
    {
        cout << "Sales Value " << i + 1 << ": " << p.salesValue[i] << endl;
    }
   cout << "Sales Average" << average << endl;
}
int main1()
{
    Product product[3];
    //input 
    for (int i = 0; i < 3; i++)
    {
        cout << "Input Product " << i + 1 << " details\n";
        inputProductDetails(product[i]);//function call
    }
    //output
    for (int i = 0; i < 3; i++)
    {
        cout << "Product  " << i + 1 << " details\n";
        displayProductDetails(product[i]);//function call
    }
    return 0;
}