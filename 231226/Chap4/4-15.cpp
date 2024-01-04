#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	cout << "" << endl;
	getline(cin, s, '&');
	cin.ignore();

	string f, r;
	cout << endl << "find : ";
	getline(cin, f, '\n');
	cout << endl << "replace : ";
	getline(cin, r, '\n');

	int startIndex = 0;
	while (true) {
		int fIndex = s.find(f, startIndex);
		if (fIndex == -1) break;
		s.replace(fIndex, f.length(), r);
		startIndex = fIndex + r.length();
	}
	cout << s << endl;
}