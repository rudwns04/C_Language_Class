#include <iostream>
#include <fstream>
using namespace std;

int main() {
	ifstream fin("C:\\windows\\system.ini");
	ofstream fout("C:\\Users\\82107\\Documents\\��ǰCPP���α׷��ְ�����_�н��ڿ�20200814\\system.txt");

	if (!fin || !fout) {
		cout << "���� �б� ����" << endl;
		return 0;
	}

	int ch;
	while ((ch = fin.get()) != EOF) {
		fout << (char)toupper(ch);
	}

	fin.close();
	fout.close();
}