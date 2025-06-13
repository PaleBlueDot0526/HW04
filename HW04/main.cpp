#include <iostream>
#include "BookManager.h";
using namespace std;

int main()
{
	BookManager manager;
	string searchWord;

	manager.addBook("혼자 공부하는 C언어", "서현우");
	manager.addBook("열혈 C++ 프로그래밍", "윤성우");
	manager.addBook("Hello Coding 프로그래밍", "Pope Kim");

	cout << "=== 현재 도서 목록 ===\n";
	manager.displayAllBooks();

	cout << "[제목 검색] --> ";
	getline(cin >> ws, searchWord);
	manager.searchByTitle(searchWord);

	cout << "[작가 검색] --> ";
	getline(cin, searchWord);
	manager.searchByAuthor(searchWord);

	

	return 0;
}