#pragma once
#include <iostream>
#include <unordered_map>
#include <string>
#include "Book.h"

using namespace std;

class BorrowManager
{
private:
	unordered_map<string, int> stock;

public:
	void initiallzeStock(Book book, int quantity = 3)
	{
		stock[book.getTitle()] = quantity;
	}

	void borrowBook(const string& title)
	{
		// 취급 여부 확인
		if (stock.find(title) == stock.end())
		{
			cout << "[죄송합니다.] \"" << title << "\" 책은 현재 취급하지 않습니다.\n";
			return; 
		}

		// 재고 확인 후 대여
		if (stock[title] > 0) 
		{
			stock[title]--;
			cout << "[대여 완료] \"" << title << "\" 책을 대여했습니다. (남은 수량: " << stock[title] << ")\n";
		}
		else
		{
			cout << "[대여 불가] \"" << title << "\" 책은 모두 대여 중입니다.\n";
		}

	}

	void borrowBookByAuthor(const string& author)
	{

	}

	void returnBook(string title)
	{

	}

	void displayStock const()
	{

	}
};