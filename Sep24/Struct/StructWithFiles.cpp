#include<iostream>
#include<fstream>
#include<string>
using namespace std;
struct Product {
    int prodID;
    string prodName;
    double salesValue[4];
};
//function to write to the text file
void writeToFile(Product products[], int size)
{
    ofstream outFile("products.txt");
    if (!outFile)
    {
        cout << "Error Opening File";
        return;
    }
    for (int i = 0; i < size; i++)
    {
        outFile << products[i].prodID << endl;
        outFile << products[i].prodName<< endl;
        for (int j = 0; j < 4; j++)
        {
            outFile << products[i].salesValue[j] << endl;
        }
        //calculate total sales
        double totalSales = 0.0;
        for (int k = 0; k < 4; k++)
        {
            totalSales += products[i].salesValue[k];
        }
        //write the total to text file
        outFile << totalSales << endl;
        outFile << endl;
    }
    outFile.close();
    cout << "Data written to text file" << endl;
        
}
//function to get input from console
void inputData(Product products[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "Enter details for Product " << i + 1 << ": " << endl;
        cout << "Input Product ID: ";
        cin >> products[i].prodID;
        cout << "Input Product Name: ";
        cin >> products[i].prodName;
        for (int j = 0; j < 4; j++)
        {
            cout << "Enter sales " << j + 1 << " value " << ": ";
            cin >> products[i].salesValue[j];
        }
        cout << endl;
    }
}
//function to read from text file an display to console
void readFromFile()
{
    ifstream inFile("products.txt");
    if (!inFile)
    {
        cout << "Error Opening File";
        return;
    }
    Product product;
    while (inFile >> product.prodID)
    {
        inFile >> product.prodName;
        for (int j = 0; j < 4; j++)
        {
            inFile >> product.salesValue[j];
        }
        //read the total sales
        double totalSales;
        inFile >> totalSales;

        cout << "Product ID: " << product.prodID << endl;
        cout << "Product Name: " << product.prodName << endl;
        cout << "Sales for 4 Quarters: " << endl;
        for (int j = 0; j < 4; j++)
        {
            cout << product.salesValue[j] << " ";
        }
        cout << endl;
        cout << "Total Sales: " << totalSales << endl;
     }
    inFile.close();
 }

int main()
{
    int size = 0;
    cout << "Enter the number of products: ";
    cin >> size;
    
    const int MAX_SIZE = 50;
    Product products[MAX_SIZE];

    inputData(products, size);

    writeToFile(products, size);

    readFromFile();

	return 0;
}