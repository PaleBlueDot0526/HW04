#include <iostream>
#include "BookManager.h";
using namespace std;

int main()
{
	BookManager manager;
	string searchWord;

	manager.addBook("ȥ�� �����ϴ� C���", "������");
	manager.addBook("���� C++ ���α׷���", "������");
	manager.addBook("Hello Coding ���α׷���", "Pope Kim");

	cout << "=== ���� ���� ��� ===\n";
	manager.displayAllBooks();

	cout << "[���� �˻�] --> ";
	getline(cin >> ws, searchWord);
	manager.searchByTitle(searchWord);

	cout << "[�۰� �˻�] --> ";
	getline(cin, searchWord);
	manager.searchByAuthor(searchWord);

	

	return 0;
}