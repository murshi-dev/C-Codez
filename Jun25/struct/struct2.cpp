#include <iostream>
#include <fstream>
using namespace std;
struct checkingAccount 
{
    string name;
    int accountNumber;
    double balance;
    double interestRate;
    double transactions[5];
};
int main() 
{
    checkingAccount accounts[3];
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter Account " << i + 1 << " details: "<<endl;
        cout << "Name: ";
        cin >> accounts[i].name;
        cout << "Account Number: ";
        cin >> accounts[i].accountNumber;
        cout << "Balance: ";
        cin >> accounts[i].balance;
        cout << "Interest Rate: ";
        cin >> accounts[i].interestRate;
        cout << "Enter the 5 transaction amounts: " << endl;
        for (int j = 0; j < 5; j++)
        {
            cout << "Transaction " << j + 1 << ": ";
            cin >> accounts[i].transactions[j];//TWO ARRAYS INVOLVED
        }
    }
    //calcultions and saving data to text file
    ofstream output("accounts.txt");
    //sum average and highest transaction amount
    for (int i = 0.; i < 3; i++)
    {
        double sum = 0, average = 0;
        //assume the first transaction is the highest for each user
        double highest = accounts[i].transactions[0];

        for (int j = 0; j < 5; j++)
        {
            //accumulate the sum of every transaction in each account
            sum = sum + accounts[i].transactions[j];
            //compare the first value with the sunsequent transaction value
            if (accounts[i].transactions[j] > highest)
                highest = accounts[i].transactions[j];
        }
        average = sum / 5;
        //write to text file
        output << "Account " << i + 1 << endl;
        output << "Name: " << accounts[i].name << endl;
        output << "Account Number: " << accounts[i].accountNumber << endl;
        output << "Balance: " << accounts[i].balance << endl;
        output << "Interest Rate: " << accounts[i].interestRate << endl;
        output << "Transcations: " << endl;
        for (int j = 0; j < 5; j++)
        {
            output << accounts[i].transactions[j]<<" ";
        }
        output << endl;
        output << "Sum of all transactions: " << sum << endl;
        output << "Average of all transactions: " << average << endl;
        output << "Highest of all transactions: " << highest << endl;
        output << "____________________________________________" << endl;
    }
    cout << "Data saved to text file";
    return 0;
}
