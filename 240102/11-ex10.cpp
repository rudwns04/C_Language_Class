#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <ctime>
#include <cstdlib>
using namespace std;
istream& prompt(istream& ins) {
	cout << "암호?";
	return ins;
}

int main() {
    string passswords;
	while (true)
	{
		cin >> prompt >> passswords;
		if (passswords == "C++") {
			cout << "login success!!" << endl;
			break;
		}
		else
			cout << "login fail. try again !!!!" << endl;
	}
    return 0;
}