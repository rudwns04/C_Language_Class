#include <iostream>
#include <string>
using namespace std;

double half(double& n) // ���������ڷ� ���� �޾ƿ;���
{
	n = n / 2;
	return n;
}

int main() {
	double n = 30;
	half(n);
	cout << n;
}