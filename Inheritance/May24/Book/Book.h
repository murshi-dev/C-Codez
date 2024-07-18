#pragma once
#include<string>
using namespace std;
class Book
{
protected:
	string title, author;
public:
	Book();
	void setTitle(string topic);
	void setAuthor(string auth);
	string getTitle();
	string getAuthor();
};
