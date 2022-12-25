#include<iostream>
#include<fstream>
#include <string>
#include "bookType.h"

using namespace std;

struct nodeType 
{
	int info;
	nodeType* link;
};

nodeType* first;
nodeType* buildLinkedList();
void display(nodeType*);

int main()
{

	fstream myFile;
	myFile.open("bookTypeProj.txt", ios::in);//opens file to read
	if (myFile.is_open())
	{
        string line;

		while (getline(myFile, line))
		{

			cout << line << endl;

		}
		myFile.close();

	}

	system("pause>0");

}
nodeType* buildLinkedList()
{

	string isbn, title, publisher, author;
	char boolean = 'n';

	nodeType* newNode;
	int num;
	first = new nodeType;

	first = nullptr;

	do 
	{

		cout << "Input the following variables: " << endl;
		cout << "------------------------" << endl;

		cout << "ISBN: " << endl;
		cin >> isbn;

		cout << "Book Title: " << endl;
		cin >> title;

		cout << "Publisher: " << endl;
		cin >> publisher;

		cout << "Book Author: " << endl;
		cin >> author;

		cout << "Number of copies: " << endl;
		cin >> num;

		newNode = new nodeType;
		newNode->info.setInfo(isbn, title, publisher, author, num);
		newNode->link = first; //put newNode at the beginning
		first = newNode;

		cout << "\nWould you like to input more books? (Y/N)" << endl;
		cin >> boolean;


	} while (boolean == 'y' || boolean == 'Y');



}