#include <iostream>
#include <string>
using namespace std;

char& find(char a[], char c, bool& success) {
	for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++) // 배열의 길이만큼 for문 돌도록 설정
	{
		if (a[i] == c)
		{
			success = true; // 원하는 char를 찾았을 때 true로 변경
		}
		return a[i]; // 찾은 배열 값 반환
	}
}

int main() {
	char s[] = "Mike";
	bool b = false;
	char& loc = find(s, 'M', b); // 포인터 변수에 찾은 배열 값을 대입
	if (b == false)
	{
		cout << "M을 발견할 수 없다" << endl;
		return 0;
	}
	loc = 'm';
	cout << s << endl;
}