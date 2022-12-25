#include<iostream>
#include <string>

using namespace std;

class bookType
{

public:
	void setInfo(string ISBN, string title, string publisher, string author, int bookCopies);
	string getISBN() const;
	string getTitle() const;
	bool checkTitle(string title);
	void checkIn();
	void checkOut();
	void updateNoCopies(int num);
	void setNoCopies(int num);
	int getNoCopies() const;
	void printInfo() const;
	bookType();
	bookType(string bISBN, string bTitle, string bPublisher, string bAuthor, int copies= 0);

private:
	string ISBNid;
	string bookTitle;
	string bookPublisher;
	string bookAuthor;
	int numCopies;

};
