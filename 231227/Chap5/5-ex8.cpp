#include <iostream>
#include <string>
using namespace std;

class MyIntStack
{
	int* p; //�ִ� 10���� ���� ����
	int size;
	int tos; // ������ ����⸦ ����Ű�� �ε���
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
	MyIntStack(const MyIntStack& s) {  //���� ���� ������ �����
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
	bool push(int n); //���� nǪ��. ���������� false, �ƴϸ� true ����
	bool pop(int& n); //���Ͽ� n�� ����. ������ ��������� false, �ƴϸ� true ����
};

bool MyIntStack::push(int n)
{
	p[tos] = n; // ���� ���� p�迭�� �����ϱ�
	if (tos >= 10) { //������ �� ���� �ʵ��� ���� ����;//������ ����� ���� tos�� ����
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
	cout << "���� a���� ���� �� : " << n << endl;
	b.pop(n);
	cout << "���� b���� ���� �� : " << n << endl;
}