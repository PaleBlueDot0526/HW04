#pragma once
#include <string>
using namespace std;

class Book
{
private:
	string title;
	string author;

public:
	Book(string t, string a) : title(t), author(a) {}

	string getTitle() const { return title; }
	string getAuthor() const { return author; }
};