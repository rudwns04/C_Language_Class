#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	int cnt = 0;
	cout << "���ڿ� �Է� >>";
	getline(cin, str, '\n');
	int index;
	for (int i = 0; i < str.size(); i++) {
		if (str.at(i) == 'a')
			cnt++;
	}
	cout << "���� a�� " << cnt << "�� �ֽ��ϴ�." << endl;
}