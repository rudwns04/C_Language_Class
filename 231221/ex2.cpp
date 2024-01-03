#include <iostream>
using namespace std;

int main() {
	for (int j = 1; j <= 9; j++) {
		for (int i = 1; i <= 9; i++) {
			int a = i * j;
			cout << j << "X" << i <<"=" << a;

			if (i % 9 == 0) // 10의 배수인 경우
				cout << endl;
			else
				cout << '\t';
		}
	}
}