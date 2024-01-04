#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	int cnt = 0;
	cout << "문자열 입력 >>";
	getline(cin, str, '\n');
	int index;
	for (int i = 0; i < str.size(); i++) {
		if (str.at(i) == 'a')
			cnt++;
	}
	cout << "문자 a는 " << cnt << "개 있습니다." << endl;
}