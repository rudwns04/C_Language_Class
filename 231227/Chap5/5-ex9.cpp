#include <iostream>
#include <string>
using namespace std;

class Accumulator
{
	int value;
public:
	Accumulator(int value) { this->value = value; }
	Accumulator& add(int n) { //복사 참조 함수?
		value += n;
		return *this;  //값을 나 자신에게 참조 반환
	}
	int get() { return value; }
};

int main() {
	Accumulator acc(10);
	acc.add(5).add(6).add(7);
	cout << acc.get();
}