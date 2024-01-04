#include <iostream>
#include <string>
using namespace std;

class BankAccount {
	string name;
	int numid;
	int balance;
public:
	BankAccount(string n, int i, int bal);
	~BankAccount();
	void deposit(int money);
	int withdraw(int money);
	int inquiry();
	string getOwner() { return name; }
	int getNum() { return numid; }
};

BankAccount::BankAccount(string n, int i, int bal) {
	name = n;
	numid = i;
	balance = bal;
}

BankAccount::~BankAccount() {
	cout << "���°� �Ҹ�Ǿ����ϴ�." << endl;
}

void BankAccount::deposit(int money) {
	if (money > 0) {
		balance += money;
		cout << money << "���� �ԱݵǾ����ϴ�. ���ο� �ܾ�: " << balance << "��" << endl;
	}
	else {
		cout << "��ȿ���� ���� �Աݾ��Դϴ�." << endl;
	}
}

int BankAccount::withdraw(int money) {
	if (money > 0 && money <= balance) {
		balance -= money;
		cout << money << "���� ��ݵǾ����ϴ�. ���ο� �ܾ�: " << balance << "��" << endl;
	}
	else {
		cout << "��ȿ���� ���� ��ݾ��̰ų� �ܾ��� �����մϴ�." << endl;
	}
	return 0;
}

int BankAccount::inquiry() {
	return balance;
}

int main() {
	BankAccount a("kitae", 1, 5000); 	// id 1��, �ܾ� 5000��, �̸��� kitae�� ���� ����
	cout << "���¹�ȣ: " << a.getNum() << endl;
	cout << "������ �̸�: " << a.getOwner() << endl;
	cout << "���� �ܾ�: " << a.inquiry() << "��" << endl;
	a.deposit(50000);				// 20000�� ����
	cout << a.getOwner() << "�� �ܾ��� " << a.inquiry() << endl;
	int money = a.withdraw(20000);	// 20000�� ���. withdraw()�� ����� ���� �ݾ� ����
	cout << a.getOwner() << "�� �ܾ��� " << a.inquiry() << endl;
}