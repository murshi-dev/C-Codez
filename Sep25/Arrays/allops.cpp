#include <iostream>
using namespace std;
int main() {
    int arr[10];

    // Task 1: Input and display array
    cout << "Enter 10 elements: ";
    for (int i = 0; i < 10; ++i) {
        cin >> arr[i];
    }
    cout << "Array elements: ";
    for (int i = 0; i < 10; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
    // Task 2: Find and display max and min element
    int max = arr[0];
    int min = arr[0];
    for (int i = 1; i < 10; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    cout << "Maximum element: " << max << endl;
    cout << "Minimum element: " << min << endl;

    // Task 3: Calculate and display sum and average
    int sum = 0;
    for (int i = 0; i < 10; i++) {
        sum += arr[i];
        //sum = sum + arr[i];
    }
    int average = sum / 10;
    cout << "Sum of elements: " << sum << endl;
    cout << "Average of elements: " << average << endl;

    // Task 4: Display odd and even elements
    cout << "Odd elements: ";
    for (int i = 0; i < 10; i++) {
        if (arr[i] % 2 != 0) 
        {
            cout << arr[i] << " ";
        }
    }
    cout << "Even elements: ";
    for (int i = 0; i < 10; i++) {
        if (arr[i] % 2 == 0) 
        {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
    //Task5: find the number of elements 
    //greater than the entered number(threshold)
    int thresholdNumber = 0;
    cout << "Input a threshold number: ";
    cin >> thresholdNumber;

    //count the number of elements in array
    //that are higher than the thresold value entered

    int counter = 0;
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] > thresholdNumber)
            counter++;
    }
    cout << "Number of elements higher than " << thresholdNumber
        << " is: " << counter << endl;
    return 0;
}