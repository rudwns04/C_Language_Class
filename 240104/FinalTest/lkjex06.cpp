#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "���ϴ� �������� �ܼ��� �Է��Ͻÿ�." << endl;  //���ϴ� ������ �ܼ��� �Է�
	cin >> n;
	if (n > 0 && n < 10) {   //1~9 ������ ���ڸ� �Է��� �� �ֵ��� ����
		for (int i = 1; i < 10; i++)
			cout << n << "x" << i << "=" << n * i << '\n';
		cout << endl;
	}
	else
		cout << "1~9 ������ ���� �Է��Ͻÿ�. " << endl;

	return 0;
}