#include <iostream>
#include <fstream>
using namespace std;

int main() {
	ifstream fin("C:\\Users\\82107\\Documents\\명품CPP프로그래밍개정판_학습자용20200814\\test.txt");

	if (!fin) {
		cout << "파일 읽기 오류" << endl;
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