#include <iostream>
#include <fstream>
using namespace std;

int main() {
	ifstream fin("�ҽ�.cpp");

	if (!fin) {
		cout << "���� �б� ����" << endl;
		return 0;
	}

	int ch;
	while ((ch = fin.get()) != EOF) {
		if (ch == '/') {
			if ((ch = fin.get()) == '/') {
				fin.ignore(100, '\n'); // /�ڿ� �� /�� ������ �ּ����̹Ƿ� �Է¹���
				cout << endl; // �ٹٲޱ��� ignore�Լ��� ���� ���ŵǾ� �ٽ� �Է�
			}
			else cout << "/";
		}
		else cout << (char)ch;
	}

	fin.close();
}