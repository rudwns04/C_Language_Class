#include <iostream>
#include <string>
using namespace std;

int main() {
	cout << "���� ���� �� ������ �մϴ�. ����, ����, �� �߿��� �Է��ϼ���.\n";
	string s;
	cout << "�ι̿� >>";
	cin >> s;
	string t;
	cout << "�ٸ��� >>";
	cin >> t;

	if (s == "����" && t == "��")
		cout << "�ι̿��� �̰���ϴ�." << endl;
	if (s == "����" && t == "����")
		cout << "�ι̿��� �̰���ϴ�." << endl;
	if (s == "��" && t == "����")
		cout << "�ι̿��� �̰���ϴ�." << endl;
	if (s == "����" && t == "��")
		cout << "�ٸ����� �̰���ϴ�." << endl;
	if (s == "����" && t == "����")
		cout << "�ٸ����� �̰���ϴ�." << endl;
	if (s == "��" && t == "����")
		cout << "�ٸ����� �̰���ϴ�." << endl;
	if (s == "����" && t == "����")
		cout << "�����ϴ�." << endl;
	if (s == "����" && t == "����")
			cout << "�����ϴ�." << endl;
	if (s == "��" && t == "��")
		cout << "�����ϴ�." << endl;
}