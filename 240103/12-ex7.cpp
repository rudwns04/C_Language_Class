#include <iostream>
#include <fstream>
using namespace std;

int main() {
	ifstream fin("/home/myunggi/.nanorc", ios::in | ios::binary);
	ofstream fout("nanorc1.txt", ios::out | ios::binary);

	if (!fin || !fout) {
		cout << "���� ���� ����" << endl;
		return 0;
	}

	fin.seekg(0, ios::end);
	int fileSize = fin.tellg();

	int ch;
	for (int i = 0; i < fileSize; i++) {
		fin.seekg(fileSize - i - 1, ios::beg);
		ch = fin.get();
		fout.put(ch);
	}
}