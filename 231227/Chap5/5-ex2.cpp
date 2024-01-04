#include <iostream>
#include <string>
using namespace std;

double half(double& n) // 참조연산자로 값을 받아와야함
{
	n = n / 2;
	return n;
}

int main() {
	double n = 30;
	half(n);
	cout << n;
}