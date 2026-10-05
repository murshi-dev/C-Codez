#include <iostream>
using namespace std;
int main() {
    int plan=0, months=0;
    double monthlyPrice=0.0;
    string planName="";
    cout << "Enter your plan: ";
    cin >> plan;
    cout << "Enter number of months: ";
    cin >> months;
    //switch case structure
    switch (plan) {
    case 1:
        planName = "Basic";
        monthlyPrice = 30;
        break;
    case 2:
        planName = "Standard";
        monthlyPrice = 50;
        break;
    case 3:
        planName = "Premium";
        monthlyPrice = 80;
        break;
    default:
        cout << "Invalid plan";
        return 0;
    }
    double totalCost = monthlyPrice * months;
    cout << "Plan: " << planName << endl;
    cout << "Monthly Price: RM" << monthlyPrice << endl;
    cout << "Number of Months: " << months << endl;
    cout << "Total Cost: RM" << totalCost << endl;
    return 0;
}
