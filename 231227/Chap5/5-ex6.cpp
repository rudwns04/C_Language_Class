#include <iostream>
#include <string>
using namespace std;

char& find(char a[], char c, bool& success) {
	for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++) // �迭�� ���̸�ŭ for�� ������ ����
	{
		if (a[i] == c)
		{
			success = true; // ���ϴ� char�� ã���� �� true�� ����
		}
		return a[i]; // ã�� �迭 �� ��ȯ
	}
}

int main() {
	char s[] = "Mike";
	bool b = false;
	char& loc = find(s, 'M', b); // ������ ������ ã�� �迭 ���� ����
	if (b == false)
	{
		cout << "M�� �߰��� �� ����" << endl;
		return 0;
	}
	loc = 'm';
	cout << s << endl;
}