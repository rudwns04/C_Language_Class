#include <iostream>
#include <string>
using namespace std;

class MyIntStack
{
	int p[10]; //�ִ� 10���� ���� ����
	int tos; // ������ ����⸦ ����Ű�� �ε���
public:
	MyIntStack() {};
	bool push(int n); //���� nǪ��. ���������� false, �ƴϸ� true ����
	bool pop(int& n); //���Ͽ� n�� ����. ������ ��������� false, �ƴϸ� true ����
};

bool MyIntStack::push(int n)
{
	p[n] = n; // ���� ���� p�迭�� �����ϱ�
	if (n >= 10) { //������ �� ���� �ʵ��� ���� ����
		tos = n;//������ ����� ���� tos�� ����
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
		else cout << endl << i + 1 << " ��° stack full" << endl;
	}
	int n;
	for (int i = 0; i < 11; i++) {
		if (a.pop(n)) cout << n << ' ';
		else cout << endl << i + 1 << " ��° stack empty";
	}
	cout << endl;
}