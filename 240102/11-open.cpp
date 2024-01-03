#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

class AbstractPlayer {
	string name;
protected:
	string gbb[3];
public:
	AbstractPlayer(string name) {
		this->name = name;
		gbb[0] = "가위"; gbb[1] = "바위"; gbb[2] = "보";
	}
	virtual string turn() = 0;
	string getName() { return name; }
};

class Human : public AbstractPlayer {
public:
	Human(string name) : AbstractPlayer(name) { ; }
	string turn() {
		string gg;
		while (1) {
			cout << getName() << ">>";
			getline(cin, gg);
			if (gg == "가위" || gg == "바위" || gg == "보")
				return gg;
		}
	}
};

class Computer : public AbstractPlayer {
public:
	Computer() : AbstractPlayer("Computer") {
		srand((unsigned)time(0));
	}
	string turn() {
		int num = rand() % 3;
		return gbb[num];
	}
};

int main() {
	string name;

	cout << "***** 컴퓨터와 사람이 가위 바위 보 대결을 펼칩니다. *****" << endl;
	cout << "선수 이름을 입력하세요>>";
	getline(cin, name);

	Human h(name);
	Computer c;

	while (1) {
		string temp = h.turn();
		string com = c.turn();
		cout << c.getName() << ": " << com << endl;
		if (temp == com)
			cout << "the same" << endl;
		else if (temp == "바위") {
			if (com == "가위")
				cout << h.getName() << " is winner." << endl;
			else
				cout << c.getName() << " is winner." << endl;
		}
		else if (temp == "가위") {
			if (com == "보")
				cout << h.getName() << " is winner." << endl;
			else
				cout << c.getName() << " is winner." << endl;
		}
		else if (temp == "보") {
			if (com == "바위")
				cout << h.getName() << " is winner." << endl;
			else
				cout << c.getName() << " is winner." << endl;
		}
	}
}