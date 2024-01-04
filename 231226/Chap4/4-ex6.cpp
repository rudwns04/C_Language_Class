#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	cout << "아래에 한 줄을 입력하세요.(exit를 입력하면 종료합니다)" << endl;
	for (;;)
	{
		cout << ">>";
		getline(cin, str);
		for (int i = str.size() - 1; i >= 0; --i)
		{
			cout << str[i];
		}
		cout << endl;
	}
}