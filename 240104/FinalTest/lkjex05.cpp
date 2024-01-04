#include <iostream>
using namespace std;



template <class T>
T biggest(T x[5], int n) {
	T big = x[0];
	
	for (int i = 0; i < n; i++) {  // 2개의 숫자를 비교하여 큰 수만 저장
		if (big < x[i])
			big = x[i];
	}
	return big;
}


int main() {
	int x[5];
	cout << "값을 비교하고 싶은 수를 5개 넣으시오. " << endl;    //x배열에 비교하고 싶은 수 입력
	for (int i = 0; i < 5; i++) {
		cin >> x[i];
	}
	double y[] = { 1.1,2.25,5.15,5.3,6.6 };
	char z[] = { 'a','d','z','t','w' };
	cout << "입력한 수 중에 가장 큰 수는 " << biggest(x, 5) << " 입니다." << endl;
	cout << biggest(y, 5) << endl;
	cout << biggest(z, 5) << endl;
}