#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Book {
	int year;
	string name;
	string writer;
public:
	void setInfo(int ye, string na, string wr) {
		year = ye;
		name = na;
		writer = wr;
	}
	int getYear() { return year; }
	string getWriter() { return writer; }
	void search() { cout << year << "년도, " << name << ", " << writer << endl; }
};

int main() {

	vector<Book> v;
	Book b;
	int year; string name, writer;

	cout << "입고할 책을 입력하세요. 년도에 -1를 입력하면 입고를 종료합니다." << endl;
	while (1) {
		
		cout << "년도>>"; cin >> year;
		if (year == -1) break;
		//fflush(stdin);
		while (getchar() != '\n');

		cout << "책이름>>"; getline(cin, name);
		cout << "저자>>"; getline(cin, writer);

		b.setInfo(year, name, writer);
		v.push_back(b);
	}
	int num = v.size();
	cout << "총 입고된 책은 " << num << "권입니다." << endl;
	cout << "검색하고자 하는 저자 이름을 입력하세요>>";
	//fflush(stdin);
	while (getchar() != '\n');
	getline(cin, writer);

	for (int i = 0; i< num; i++)
		if (v[i].getWriter() == writer) v[i].search();

	cout << "검색하고자 하는 년도를 입력하세요>>";
	cin >> year;

	for (int i = 0; i< num; i++)
		if (v[i].getYear() == year) v[i].search();
}