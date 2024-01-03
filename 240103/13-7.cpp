#include <iostream>
using namespace std;

void MyStack::push(int n) {
	if(tos == 99) 
		throw "Stack Full";
	tos++;
	data[tos] = n;
}

int MyStack::pop() {
	if(tos == -1) 
		throw "Stack Empty";
	int rData = data[tos--];
	return rData;
}

int main() {
	MyStack intStack;
	try {
		intStack.push(100); // 100 푸시
		intStack.push(200); // 200 푸시
		cout << intStack.pop() << endl; // 팝 200
		cout << intStack.pop() << endl; // 팝 100
		cout << intStack.pop() << endl; // "Stack Empty" 예외 발생
	}
	catch(const char* s) {
		cout << "예외 발생 : " << s << endl;
	}
}