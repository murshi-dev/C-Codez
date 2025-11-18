//files and functions -- demo
//input data to text file
//output data from text file -- calculate total sales
#include<iostream>
#include<fstream>
using namespace std;
//function prototype
void saveSales();//to input data to text file
void displaySales();//output data from text file,
//and calculate total sales
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
	string name = "";
	double sales = 0.0;
	//open a text file --ofstream
	ofstream outFile("sales.txt", ios::app);
	//ios::app -->opens files in append mode 
	//new data gets added to the existing data
	
	//prompt and input data --name, salesamount--cout,cin
	cout << "Input the salesperson name: ";
	cin >> name;
	while (name != "x")
	{
		cout << "Input the salesperson sales amount: ";
		cin >> sales;
		//transfer these data to text file 
		outFile << name << " " << sales << endl;
		cout << "Input the salesperson name--(x to stop): ";
		cin >> name;//repeat loop
	}
	outFile.close();
}
void displaySales()
{
	string name = "";
	double sales = 0.0, total = 0.0;
	
	//open the file for reading
	ifstream inFile("sales.txt");

	//use loop to read line by line--name, amount
	//until end of file is reached -- eof(), fail()
	while (true)
	{
		inFile >> name;
		inFile >> sales;
		if (inFile.fail())//until the input stream is empty
			break;//then break the loop
		//accumulate sales value --total
		total = total + sales;
		//display name, amount
		cout << "SalesPerson Name: "<<name << " " 
			"Sale Amount: "<< sales << endl;
	}
	//display the total sales(accumulated)
	cout << "Total Sales: " << total << endl;
	//close the file
	inFile.close();
}