#include<iostream>
#include<fstream>
using namespace std;
//declare a struct
struct Product
{
	int pID;
	string pName;
	double salesValue[4];//array inside struct --this array holds 4 sales values
};
int main()
{
	//create a text file
	ofstream outFile("products.txt");

	Product p[3];//an array to hold 3 products
	
	//input values
	for (int counter = 0; counter < 3; counter++)
	{
		cout << "Enter the product "<<counter+1<<" ID: ";
		cin >> p[counter].pID;
		cout << "Enter the product "<<counter+1<<" Name: ";
		cin >> p[counter].pName;
		//loop to input sales values -- 4 sales values 
		for (int salescounter = 0; salescounter < 4; salescounter++)
		{
			cout << "Enter the sales " << salescounter + 1 << " value: ";
			cin >> p[counter].salesValue[salescounter];//ATTENTION
		}
	}
	//output values
	for (int counter = 0; counter < 3; counter++)
	{
		outFile << "Product ID: " << p[counter].pID << endl;
		outFile << "Product Name: " << p[counter].pName << endl;
		//loop to output sales values
		double sum = 0.0, average = 0.0;
		for (int salescounter = 0; salescounter < 4; salescounter++)
		{
			//accumulate the sum of sales value 

			sum = sum + p[counter].salesValue[salescounter];//ATTENTION

			outFile << "Sale " << salescounter+1 << " value: ";
			outFile << p[counter].salesValue[salescounter] << "\t";//ATTENTION
		}
		//calculate average
		average = sum / 4;
		//display average
		outFile << "Average Sales value of Product " << counter + 1<< " is: " << average << endl;
		outFile << endl;
	}
	outFile.close();
	cout << "Data written to text" << endl;
	return 0;
}