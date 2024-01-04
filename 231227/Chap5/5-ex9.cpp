#include <iostream>
#include <string>
using namespace std;

class Accumulator
{
	int value;
public:
	Accumulator(int value) { this->value = value; }
	Accumulator& add(int n) { //���� ���� �Լ�?
		value += n;
		return *this;  //���� �� �ڽſ��� ���� ��ȯ
	}
	int get() { return value; }
};

int main() {
	Accumulator acc(10);
	acc.add(5).add(6).add(7);
	cout << acc.get();
}