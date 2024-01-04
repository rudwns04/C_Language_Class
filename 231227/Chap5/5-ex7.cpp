#include <iostream>
#include <string>
using namespace std;

class MyIntStack
{
	int p[10]; //최대 10개의 정수 저장
	int tos; // 스택의 꼭대기를 가리키는 인덱스
public:
	MyIntStack() {};
	bool push(int n); //정수 n푸시. 꽉차있으면 false, 아니면 true 리턴
	bool pop(int& n); //팝하여 n에 저장. 스택이 비어있으면 false, 아니면 true 리턴
};

bool MyIntStack::push(int n)
{
	p[n] = n; // 들어온 값을 p배열에 대입하기
	if (n >= 10) { //스택이 꽉 차지 않도록 값을 대입
		tos = n;//스택의 꼭대기 값을 tos에 저장
		return false;
	}
	else return true;
}
bool MyIntStack::pop(int& n)
{
	n = tos;
	tos--;
	if (tos < 0) return false;
	else return true;

}

int main() {
	MyIntStack a;
	for (int i = 0; i < 11; i++)
	{
		if (a.push(i)) cout << i << ' ';
		else cout << endl << i + 1 << " 번째 stack full" << endl;
	}
	int n;
	for (int i = 0; i < 11; i++) {
		if (a.pop(n)) cout << n << ' ';
		else cout << endl << i + 1 << " 번째 stack empty";
	}
	cout << endl;
}