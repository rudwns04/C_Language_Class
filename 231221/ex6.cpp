#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char pw1[100];
	char pw2[100];

	cout << "����ȣ�� �Է��Ͻÿ�. >> ";
	cin >> pw1;

	cout << "����ȣ�� �ٽ� �� �� �Է��Ͻÿ�. >> ";
	cin >> pw2;

	if (strcmp(pw1, pw2) == 0)
		cout << "�����ϴ�. \n";
	else 
		cout << "���� �ʽ��ϴ�. \n";
}