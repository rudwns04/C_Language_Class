#include <iostream>
using namespace std;



template <class T>
T biggest(T x[5], int n) {
	T big = x[0];
	
	for (int i = 0; i < n; i++) {  // 2���� ���ڸ� ���Ͽ� ū ���� ����
		if (big < x[i])
			big = x[i];
	}
	return big;
}


int main() {
	int x[5];
	cout << "���� ���ϰ� ���� ���� 5�� �����ÿ�. " << endl;    //x�迭�� ���ϰ� ���� �� �Է�
	for (int i = 0; i < 5; i++) {
		cin >> x[i];
	}
	double y[] = { 1.1,2.25,5.15,5.3,6.6 };
	char z[] = { 'a','d','z','t','w' };
	cout << "�Է��� �� �߿� ���� ū ���� " << biggest(x, 5) << " �Դϴ�." << endl;
	cout << biggest(y, 5) << endl;
	cout << biggest(z, 5) << endl;
}