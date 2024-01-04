#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	const string searchString = "=";

	ifstream fin("c:\\temp\\php.ini");
	if (!fin) {
		cout << "���� ����";
		return 1;
	}

	string line;
	string lineno;
	
	while (getline(fin, line)) { // �� ������ �о���δ�.
		size_t pos = line.find(searchString);
		if (pos != string::npos) {
			// '=' ���� ���� ���ڿ� ����
			std::string value = line.substr(pos + searchString.length());

			// ���� �˻� �� ����
			if (value == "1521") {
				line.replace(pos + searchString.length(), value.length(), "3306");
			}
			else if (value == "3306") {
				line.replace(pos + searchString.length(), value.length(), "1521");
			}
		}

		lineno += line + "\n";
	}
	fin.close();

	ofstream fout("c:\\temp\\php.ini");
	if (!fout) {
		cout << "c:\\temp\\php.ini ���� ����";
		return 1;
	}
	fout << lineno;
	fout.close();

	cout << "���� ������ �Ϸ�Ǿ����ϴ�." << endl;
	return 0;
}