#include <iostream>
#include <string>
using namespace std;

class MyIntStack
{
	int* p; //최대 10개의 정수 저장
	int size;
	int tos; // 스택의 꼭대기를 가리키는 인덱스
public:
	MyIntStack() {
		tos = 0;
		size = 1;
		p = new int[size];
	};
	MyIntStack(int size)
	{
		tos = 0;
		this->size = size;
		p = new int[size];
	};
	MyIntStack(const MyIntStack& s) {  //깊은 복사 생성자 만들기
		this->tos = s.tos;
		this->size = s.size;
		this->p = new int[s.size];
		for (int i = 0; i < s.tos; i++) {
			this->p[i] = s.p[i];
		}
	}
	~MyIntStack() {
		if (p)
			delete[]p;
	}
	bool push(int n); //정수 n푸시. 꽉차있으면 false, 아니면 true 리턴
	bool pop(int& n); //팝하여 n에 저장. 스택이 비어있으면 false, 아니면 true 리턴
};

bool MyIntStack::push(int n)
{
	p[tos] = n; // 들어온 값을 p배열에 대입하기
	if (tos >= 10) { //스택이 꽉 차지 않도록 값을 대입;//스택의 꼭대기 값을 tos에 저장
		return false;
	}
	else
	{
		tos++;
		return true;
	}
}
bool MyIntStack::pop(int& n)
{
	n = p[tos - 1];
	tos--;
	if (tos < 0) return false;
	else return true;

}

int main() {
	MyIntStack a(10);
	a.push(10);
	a.push(20);
	MyIntStack b = a;
	b.push(30);

	int n;
	a.pop(n);
	cout << "스택 a에서 팝한 값 : " << n << endl;
	b.pop(n);
	cout << "스택 b에서 팝한 값 : " << n << endl;
}