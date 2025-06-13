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
			cout << "제목: " << b.getTitle() << ", 작가: " << b.getAuthor() << endl;
	}

	void searchByTitle(string title)
	{
		for (const Book& b : books)
		{
			if (b.getTitle() == title)
			{
				cout << "[제목 검색 결과] 제목: " << b.getTitle() << ", 작가: " << b.getAuthor() << endl;
				return;
			}
		}
		cout << "[제목 검색 실패] 해당 제목의 책을 찾을 수 없습니다.\n";
	}

	void searchByAuthor(string author)
	{
		for (const Book& b : books)
		{
			if (b.getAuthor() == author)
			{
				cout << "[작가 검색 결과] 제목: " << b.getTitle() << ", 작가: " << b.getAuthor() << endl;
				return;
			}
		}
		cout << "[작가 검색 실패] 해당 작가의 책을 찾을 수 없습니다.\n";
	}
};