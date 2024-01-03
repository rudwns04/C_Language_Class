#include <iostream>
using namespace std;

int main() {
	for (int i = 1; i <= 100; i++) {
		cout << i;
		if (i % 10 == 0) // 10ÀÇ ¹è¼öÀÎ °æ¿ì
			cout << endl;
		else
			cout << '\t';
	}
}
