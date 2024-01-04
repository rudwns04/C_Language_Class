#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Person {
	char* name;
	int id;
public:
	Person(int id, const char* name);
	~Person();
	void changeName(const char *name);
	void show() { cout << id << ',' << name << endl; }
};

Person::Person(int id, const char* name) {
	this->id = id;
	int len = strlen(name);
	this->name = new char[len + 1];
	strcpy(this->name, name);
}

Person::~Person() {
	if (name)
		delete[] name;
}

void Person::changeName(const char* name) {
	if (strlen(name) > strlen(this->name))
		return;
	strcpy(this->name, name);
}

int main() {
	Person father(1, "Kitae");
	Person daugther(father);

	cout << "daugther ��ü ���� ���� ----" << endl;
	father.show();
	daugther.show();

	daugther.changeName("Grace");
	cout << "daugther �̸��� Grace�� ������ �� ----" << endl;
	father.show();
	daugther.show();

	return 0;
}