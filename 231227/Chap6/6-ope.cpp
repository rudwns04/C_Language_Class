#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

class Person {
	string s[2];
	int n;
public:
	Person() { s[0] = "���μ�"; s[1] = "������"; n = -1; }
	string getName() {
		n++;
		if (n == 2) {
			n = 0;
			return s[n];
		}
		else return s[n];
	}
};

class UpAndDownGame {
	static int result;
	static int low, high;
public:
	UpAndDownGame() { srand((unsigned)time(0)); }
	static void Game();
};

int UpAndDownGame::high = 99;
int UpAndDownGame::low = 0;
int UpAndDownGame::result = 0;
void UpAndDownGame::Game() {
	int number; Person p;
	cout << "Up & Down ������ �����մϴ�." << endl;
	result = rand() % 100;
	while (1) {
		string name = p.getName();
		cout << "���� " << low << "�� " << high << "���̿� �ֽ��ϴ�." << endl;
		cout << name << ">>";
		cin >> number;

		if (number > result)
			high = number;
		else if (number < result)
			low = number;
		else {
			cout << name << "��(��) �̰���ϴ�!!" << endl;
			break;
		}
	}
}

int main() {
	UpAndDownGame gg;
	gg.Game();
}