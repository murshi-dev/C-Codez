#include "Fiction.h"
#include "NonFiction.h"
#include<string>
#include<iostream>
using namespace std;
int main()
{
	string a = "", t = "";
	int p = 0;
	double l = 0.0;

	cout << "Input the fiction book title: ";
	cin >> t;
	cout << "Input the fiction book author: ";
	cin >> a;
	cout << "Input the fiction book reading level: ";
	cin >> l;

	Fiction fiction1;
	fiction1.setTitle(t);
	fiction1.setAuthor(a);
	fiction1.setReadLevel(l);

	cout << "Fiction Book Title: " << fiction1.getTitle() << endl;
	cout << "Fiction Book Author: " << fiction1.getAuthor() << endl;
	cout << "Fiction Book Reading Level: " << fiction1.getReadLevel() << endl;

	cout << "Input the non fiction book title: ";
	cin >> t;
	cout << "Input the non fiction book author: ";
	cin >> a;
	cout << "Input the non fiction number of pages: ";
	cin >> p;

	NonFiction nonfiction1;
	nonfiction1.setTitle(t);
	nonfiction1.setAuthor(a);
	nonfiction1.setNumPages(p);

	cout << "Non Fiction Book Title: " << nonfiction1.getTitle() << endl;
	cout << "Non Fiction Book Author: " << nonfiction1.getAuthor() << endl;
	cout << "Non Fiction Book Number of pages: " << nonfiction1.getNumPages() << endl;
	return 0;

}