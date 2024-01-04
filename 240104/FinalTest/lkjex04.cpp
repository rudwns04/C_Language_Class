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
	cout << "계좌가 소멸되었습니다." << endl;
}

void BankAccount::deposit(int money) {
	if (money > 0) {
		balance += money;
		cout << money << "원이 입금되었습니다. 새로운 잔액: " << balance << "원" << endl;
	}
	else {
		cout << "유효하지 않은 입금액입니다." << endl;
	}
}

int BankAccount::withdraw(int money) {
	if (money > 0 && money <= balance) {
		balance -= money;
		cout << money << "원이 출금되었습니다. 새로운 잔액: " << balance << "원" << endl;
	}
	else {
		cout << "유효하지 않은 출금액이거나 잔액이 부족합니다." << endl;
	}
	return 0;
}

int BankAccount::inquiry() {
	return balance;
}

int main() {
	BankAccount a("kitae", 1, 5000); 	// id 1번, 잔액 5000원, 이름이 kitae인 계좌 생성
	cout << "계좌번호: " << a.getNum() << endl;
	cout << "예금주 이름: " << a.getOwner() << endl;
	cout << "현재 잔액: " << a.inquiry() << "원" << endl;
	a.deposit(50000);				// 20000원 저금
	cout << a.getOwner() << "의 잔액은 " << a.inquiry() << endl;
	int money = a.withdraw(20000);	// 20000원 출금. withdraw()는 출금한 실제 금액 리턴
	cout << a.getOwner() << "의 잔액은 " << a.inquiry() << endl;
}