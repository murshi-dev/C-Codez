#include <iostream>
using namespace std;
int main()
{
    //declare and initialise the variables
    double weight = 0.0, waterIntake = 0.0;
    const double WATER_RATE = 0.033;

    //prompt and input
    cout << "Input the weight in kilograms: ";
    cin >> weight;

    //calculation
    waterIntake = weight * WATER_RATE;

    //output
    cout << "Recommended Daily Water Intake: "
        << waterIntake << " litres";

    return 0;
}