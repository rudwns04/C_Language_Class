#include <iostream>
#include <fstream>
using namespace std;

int main() {
	ifstream fin("C:\\Users\\82107\\Documents\\��ǰCPP���α׷��ְ�����_�н��ڿ�20200814\\test.txt");

	if (!fin) {
		cout << "���� �б� ����" << endl;
		return 0;
	}
	int line1;
	char line2[20];

	fin >> line1;
	fin >> line2;

	cout << line1 << endl;
	cout << line2 << endl;

	fin.close();
}