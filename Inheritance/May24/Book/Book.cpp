#include"Book.h"
Book::Book()
{
	title = author = "";
}
void Book::setTitle(string topic)
{
	title = topic;
}
void Book::setAuthor(string auth)
{
	author = auth;
}
string Book::getTitle()
{
	return title;
}
string Book::getAuthor()
{
	return author;
}