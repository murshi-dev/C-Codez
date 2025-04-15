/*Running on a particular treadmill you burn 3.9 calories per minute. 
Using a loop display the number of calories burned after 10, 15, 20, 25, and 30 minutes.*/
#include<iostream>
using namespace std;
int main() 
{
    const double caloriesPerMinute = 3.9;
    
    // Loop through each time interval: 10, 15, 20, 25, and 30 minutes
    for (int minutes = 10; minutes <= 30; minutes += 5) 
    {
        double caloriesBurned = minutes * caloriesPerMinute;
        cout << "Calories burned after " << minutes << " minutes: " << caloriesBurned << endl;
    }
    return 0;
}





