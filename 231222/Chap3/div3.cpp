#include <iostream>
using namespace std;

int big(int a, int b) {
	if(a>b) return a;
	else return b;
}
bool div3(int n) {
	if(n%3==0) return true;
	else return false;
}

int main(){
	int a,b,n;
	cout << "두 개의 정수를 입력하시오. >>";
	cin >> a >> b;
	n=big(a,b);
	cout << a << "중" << b << "중 큰 값은" << n << "입니다. \n";
	if(div(n))
		cout << n << "은 3의 배수 입니다.\n";
	else
		cout << n << "은 3의 배수가 아닙니다.\n";
}