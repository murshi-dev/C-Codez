#include <iostream>
using namespace std;

int main()
{
    double temperature;

    cout << "Enter today's temperature (°C): ";
    cin >> temperature;

    if (temperature < 20)
    {
        cout << "Cold day";
    }
    else if (temperature <= 30)
    {
        cout << "Warm day";
    }
    else
    {
        cout << "Hot day";
    }

    return 0;
}

