#include <iostream>
using namespace std;

class Calculator {
public:
	virtual int add(int a, int b) = 0; // �� ������ �� ����
	virtual int subtract(int a, int b) = 0; // �� ������ �� ����
	virtual int Multiply(int a, int b) = 0; // �� ������ ���� ����
	virtual int Divide(int a, int b) = 0; // �� ������ ������ ����
};

class GoodCalc : public Calculator {
public:
	int add(int a, int b) { return a + b; }
	int subtract(int a, int b) { return a - b; }
	int Multiply(int a, int b) { return a * b; }
	int Divide(int a, int b) { return a / b; }
};

int main() {
	int a[] = { 1,2,3,4,5 };
	Calculator* p = new GoodCalc();
	cout << p->add(4, 2) << endl;
	cout << p->subtract(4, 2) << endl;
	cout << p->Multiply(4, 2) << endl;
	cout << p->Divide(4, 2) << endl;
	delete p;
}