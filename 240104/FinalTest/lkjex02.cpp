#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	const string searchString = "=";

	ifstream fin("c:\\temp\\php.ini");
	if (!fin) {
		cout << "열기 오류";
		return 1;
	}

	string line;
	string lineno;
	
	while (getline(fin, line)) { // 한 라인을 읽어들인다.
		size_t pos = line.find(searchString);
		if (pos != string::npos) {
			// '=' 문자 뒤의 문자열 추출
			std::string value = line.substr(pos + searchString.length());

			// 조건 검사 후 변경
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
		cout << "c:\\temp\\php.ini 열기 오류";
		return 1;
	}
	fout << lineno;
	fout.close();

	cout << "파일 수정이 완료되었습니다." << endl;
	return 0;
}