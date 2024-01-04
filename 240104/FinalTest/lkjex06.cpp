#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "원하는 구구단의 단수를 입력하시오." << endl;  //원하는 구구단 단수를 입력
	cin >> n;
	if (n > 0 && n < 10) {   //1~9 사이의 숫자만 입력할 수 있도록 조건
		for (int i = 1; i < 10; i++)
			cout << n << "x" << i << "=" << n * i << '\n';
		cout << endl;
	}
	else
		cout << "1~9 사이의 수를 입력하시오. " << endl;

	return 0;
}