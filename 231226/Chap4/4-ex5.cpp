#include <iostream>
#include <string>
using namespace std;

int main()
{
	string text;
	srand((unsigned)time(0));

	
	cout << "�Ʒ��� �� ���� �Է��ϼ���.(exit�� �Է��ϸ� �����մϴ�)" << endl;
	while (true) {
		cout << ">>";
		getline(cin, text, '\n');
		if (text == "exit") break;
		if (text == "") continue;
		int size = text.length();
		int index = rand() % size;
		int c = rand() % 26;
		char changeChar = 'a' + c;
		if (text[index] == 'a' + c) changeChar = 'A' + c;
		text[index] = changeChar;
		cout << text << endl;

	}
	
}