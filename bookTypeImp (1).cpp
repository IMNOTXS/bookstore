#include<iostream>
#include <string>
#include "bookType.h"

using namespace std;

void bookType::setInfo(string ISBN, string title, string publisher, string author, int bookCopies)
{

	ISBNid = ISBN;
	bookTitle = title;
	bookPublisher = publisher;
	bookAuthor = author;
	numCopies = bookCopies;

}
string bookType::getISBN() const
{

	return ISBNid;

}
string bookType::getTitle() const
{

	return bookTitle;

}
bool bookType::checkTitle(string title)
{

	return(bookTitle == title);

}
void bookType::checkIn()
{

	numCopies++;

}
void bookType::checkOut()
{

	if (getNoCopies() > 0)
		numCopies--;
	else
		cout << "Out of stock" << endl;

}
void bookType::updateNoCopies(int num)
{

	numCopies += num;

}
void bookType::setNoCopies(int num)
{

	numCopies = num;

}
int bookType::getNoCopies() const
{

	return numCopies;

}
void bookType::printInfo() const
{

	cout << "ISBN ID: " << ISBNid << endl;
	cout << "Book Title: " << bookTitle << endl;
	cout << "Publisher: " << bookPublisher << endl;
	cout << "Book Author: " << bookAuthor << endl;
	cout << "Number of copies: " << numCopies << endl;

}
bookType::bookType()
{

	ISBNid = "Unknown";
	bookTitle = "Unkown";
	bookPublisher = "Unkown";
	bookAuthor = "Unkown";
	numCopies = 0;
}
bookType::bookType(string bISBN, string bTitle, string bPublisher, string bAuthor, int copies= 0)
{

	setInfo(bISBN, bTitle, bPublisher, bAuthor, copies);

}