#include <iostream>
#include <fstream>
using namespace std;

int main() {
	ifstream fin("C:\\windows\\system.ini");

	if (!fin) {
		cout << "파일 읽기 오류" << endl;
		return 0;
	}

	char buf[81];
	int count = 1;
	while (fin.getline(buf, 81)) {
		cout << count << " : " << buf << endl;
		count++;
	}

	fin.close();
}