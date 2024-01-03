#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Circle {
	string name;
	int radius;
public:
	Circle(int radius, string name) {
		this->radius = radius; this->name = name;
	}
	double getArea() { return 3.14*radius*radius; }
	string getName() { return name; }
};

int main() {
	vector<Circle*> v;
	vector<Circle*>::iterator it;

	int num, radius;
	string name;
	bool exit = true;

	cout << "원을 삽입하고 삭제하는 프로그램입니다." << endl;
	while (exit) {
		cout << "삽입:1, 삭제:2, 모두보기:3, 종료:4 >> ";
		cin >> num;
		//fflush(stdin);
		while(getchar() != '\n');
		switch (num) {
		case 1:
			cout << "생성하고자 하는 원의 반지름과 이름은 >> ";
			cin >> radius >> name;
			v.push_back(new Circle(radius, name));
			break;
		case 2:
			cout << "삭제하고자 하는 원의 이름은 >> ";
			getline(cin, name);
			it = v.begin();
			while (it != v.end()) {
				Circle *c = *it;
				if (c->getName() == name) {
					it = v.erase(it);
					delete c;
				}
				else
					it++;
			}
			break;
		case 3:
			for (it = v.begin(); it != v.end(); it++)
				cout << (*it)->getName() << endl;
			cout << endl;
			break;
		case 4:
			exit = false;
			break;
		}
	}

}