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
		// ��� ���� Ȯ��
		if (stock.find(title) == stock.end())
		{
			cout << "[�˼��մϴ�.] \"" << title << "\" å�� ���� ������� �ʽ��ϴ�.\n";
			return; 
		}

		// ��� Ȯ�� �� �뿩
		if (stock[title] > 0) 
		{
			stock[title]--;
			cout << "[�뿩 �Ϸ�] \"" << title << "\" å�� �뿩�߽��ϴ�. (���� ����: " << stock[title] << ")\n";
		}
		else
		{
			cout << "[�뿩 �Ұ�] \"" << title << "\" å�� ��� �뿩 ���Դϴ�.\n";
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