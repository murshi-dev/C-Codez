/*Chris owns an auto repair business and has several employees. If an employee  
works over 40 hours in a week, Chris pays that employee 1.5 times his or her regular 
hourly pay rate (RM 50) for all hours over 40. Calculate and display the total pay.*/
#include <iostream>
using namespace std;

int main() 
{
	//given data declare as constants
    const double HOURLY_PAY_RATE = 50;
    const double OVERTIME_PAY_RATE = 1.5 * HOURLY_PAY_RATE;
    const int MAX_REGULAR_HOURS = 40;
    
	int hours_worked = 0;
    double total_pay = 0.0;
    
    cout << "Enter hours worked: ";
    cin >> hours_worked;
    
    if (hours_worked <= MAX_REGULAR_HOURS) 
    {
        total_pay = hours_worked * HOURLY_PAY_RATE;
    } 
    else 
    {
        total_pay = MAX_REGULAR_HOURS * HOURLY_PAY_RATE;
        int overtime_hours = hours_worked - MAX_REGULAR_HOURS;
        double overtimePay = overtime_hours * OVERTIME_PAY_RATE;
  total_pay = total_pay + overtimePay

    }
    
    cout << "Total Pay: " << total_pay << endl;
    return 0;
}
