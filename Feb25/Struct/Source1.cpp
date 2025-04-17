//struct , functions and file operations
#include<iostream>
#include <fstream>
using namespace std;
struct Product {
    int prodID;
    string prodName;
    double salesValue[4];
};
//function to write data to text file
void writeToFile(Product products[], int size)
{
    ofstream outFile("products.txt");
    if (!outFile)
    {
        cout << "error writing to file";
        return;
    }
    for (int i = 0; i < size; i++)
    {
        outFile << products[i].prodID << endl;
        outFile << products[i].prodName << endl;
        for (int j = 0; j < 4; j++)
        {
            outFile << products[i].salesValue[j] << endl;
        }
        // Calculate total sales for the product
        double totalSales = 0;
        for (int j = 0; j < 4; j++) {
            totalSales += products[i].salesValue[j];
        }
        // Write total sales to the file
        outFile << totalSales << endl;
        outFile << endl;
    }
    outFile.close();
    cout << "Data written to text file"<<endl;
}
//function to input data from console using a loop
void inputData(Product products[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "Input Product Details " << i + 1 << ": " << endl;
        cout << "Input Product ID: ";
        cin >> products[i].prodID;
        cout << "Input Product Name: ";
        cin >> products[i].prodName;
        cout << "Input 4 Sales Values: ";
        for (int j = 0; j < 4; j++)
        {
            cin >> products[i].salesValue[j];
        }
        cout << endl;
    }
}
//function to read from the text file and display in the console
void readFromFile()
{
    ifstream inFile("products.txt");
    if (!inFile)
    {
        cout << "error reading from file";
        return;
    }
    Product product;
    cout << "Data from the file: " << endl;
    while (inFile >> product.prodID)
    {
        inFile >> product.prodName;
        for (int i = 0; i < 4; i++)
        {
            inFile >> product.salesValue[i];
        }
        // Read total sales from the file
        double totalSales;
        inFile >> totalSales;
        //direct it to console
        cout << "Product ID: " << product.prodID << endl;
        cout << "Product Name: " << product.prodName << endl;
        cout << "Sales Values: " << endl;
        for (int i = 0; i < 4; i++)
        {
            cout << product.salesValue[i] << endl;
        }
        cout << "Total Sales: " << totalSales << endl;
        cout << endl;
    }
    inFile.close();
}
int main2()
{
    int size = 0;
    cout << "Enter the number of products: ";
    cin >> size;
    //create a fixed array of size say 50
    const int MAX_SIZE = 50;
    Product products[MAX_SIZE];
    //read from console
    inputData(products, size);
    //store in text file
    writeToFile(products, size);
    //read from text file, display to console
    readFromFile();

    return 0;
}