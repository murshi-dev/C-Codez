#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ofstream output("city.txt", ios::app); // Appending mode
    if (!output) {
        cerr << "Error opening file for writing." << endl;
        return 1;
    }

    string city;
    cout << "Enter a city name (e exits input): ";
    while (getline(cin, city)) {
        if (city == "e") // Exit condition
            break;
        output << city << endl;
        cout << "Enter a city name (e exits input): ";
    }
    cout << "File created and data added." << endl;
    output.close();

    ifstream input("city.txt");
    if (!input) {
        cerr << "File does not exist or cannot be opened." << endl;
        return 1;
    }
    else {
        cout << "City names:" << endl;
        while (getline(input, city)) {
            cout << city << endl; // Print the city name
        }
    }
    input.close();

    return 0;
}
