//struct with files and functions
#include<iostream>
#include<fstream>
using namespace std;
void saveSales();
void displaySales();
//declare struct 
//groups name and sales data in one unit--SalesInfo
struct SalesInfo
{
	string name;
	double sales;
};
int main()
{
	int option = 0;
	while (option != 3)
	{
		cout << "1. Enter Sales Info" << endl;
		cout << "2. Display Sales Info" << endl;
		cout << "3. Exit" << endl;
		cout << "Enter an option: " << endl;
		cin >> option;
		if (option == 1)
			saveSales();
		else if (option == 2)
			displaySales();
	}
	return 0;
}
//function definition
void saveSales()
{
	//create a variable to represent the struct SalesInfo
	SalesInfo record;
	//open a text file --ofstream
	ofstream outFile("sales.txt", ios::app);

	//prompt and input data --name, salesamount--cout,cin
	cout << "Input the salesperson name: ";
	cin >> record.name;
	while (record.name != "x")
	{
		cout << "Input the salesperson sales amount: ";
		cin >> record.sales;
		//transfer these data to text file 
		outFile << record.name << " " << record.sales << endl;
		cout << "Input the salesperson name--(x to stop): ";
		cin >> record.name;//repeat loop
	}
	outFile.close();
}
void displaySales()
{
	SalesInfo record;
	double total = 0.0;

	//open the file for reading
	ifstream inFile("sales.txt");
	
	while (true)
	{
		inFile >> record.name;
		inFile >> record.sales;
		if (inFile.fail())
			break;
		total = total + record.sales;
		//display name, amount
		cout << "SalesPerson Name: " << record.name << " "
			"Sale Amount: " << record.sales << endl;
	}
	cout << "Total Sales: " << total << endl;
	inFile.close();
}