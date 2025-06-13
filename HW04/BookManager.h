#pragma once
#include <vector>
#include <iostream>
#include "Book.h";


class BookManager
{
private: 
	
	vector<Book> books;

public:
	
	void addBook(string title, string author)
	{
		books.push_back(Book(title, author));
	}
	
	void displayAllBooks()
	{
		for (const Book& b : books)
			cout << "����: " << b.getTitle() << ", �۰�: " << b.getAuthor() << endl;
	}

	void searchByTitle(string title)
	{
		for (const Book& b : books)
		{
			if (b.getTitle() == title)
			{
				cout << "[���� �˻� ���] ����: " << b.getTitle() << ", �۰�: " << b.getAuthor() << endl;
				return;
			}
		}
		cout << "[���� �˻� ����] �ش� ������ å�� ã�� �� �����ϴ�.\n";
	}

	void searchByAuthor(string author)
	{
		for (const Book& b : books)
		{
			if (b.getAuthor() == author)
			{
				cout << "[�۰� �˻� ���] ����: " << b.getTitle() << ", �۰�: " << b.getAuthor() << endl;
				return;
			}
		}
		cout << "[�۰� �˻� ����] �ش� �۰��� å�� ã�� �� �����ϴ�.\n";
	}
};