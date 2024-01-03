#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char pw1[100];
	char pw2[100];

	cout << "새암호를 입력하시오. >> ";
	cin >> pw1;

	cout << "새암호를 다시 한 번 입력하시오. >> ";
	cin >> pw2;

	if (strcmp(pw1, pw2) == 0)
		cout << "같습니다. \n";
	else 
		cout << "같지 않습니다. \n";
}