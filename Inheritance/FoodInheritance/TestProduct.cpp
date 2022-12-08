#include "PackagedFood.h"
#include "WeighedFood.h"
#include <iostream>
using namespace std;
int main()
{
	//declare local variables
	int bc;
	string pname;
	double ppp, weight, ppk;
	//prompt user input and accept
	cout << "Enter product barcode:";
	cin >> bc;
	cout << "Enter product name:";
	cin >> pname;
	cout << "Enter price per pack:";
	cin >> ppp;

	//create object 
	PackagedFood food1;
	//call the setters
	food1.setBarCode(bc);
	food1.setProductName(pname);
	food1.setPricePerPack(ppp);
	//call the getters
	cout << "Barcode: "<<food1.getBarCode()<<endl;
	cout << "Product Name: " << food1.getProductName() << endl;
	cout << "Price Per Pack: " << food1.getPricePerPack() << endl;

	
	//prompt user input and accept
	cout << "Enter product barcode:";
	cin >> bc;
	cout << "Enter product name:";
	cin >> pname;
	cout << "Enter weight of product:";
	cin >> weight;
	cout << "Enter price per kilo:";
	cin >> ppk;

	//create object 
	WeighedFood food2;
	//call the setters
	food2.setBarCode(bc);
	food2.setProductName(pname);
	food2.setWeight(weight);
	food2.setPricePerKilo(ppk);
	//call the getters
	cout << "Barcode: " << food2.getBarCode() << endl;
	cout << "Product Name: " << food2.getProductName() << endl;
	cout << "Weight of Product: " << food2.getWeight() << endl;
	cout << "Price Per Kilo: " << food2.getPricePerKilo() << endl;

	return 0;
}