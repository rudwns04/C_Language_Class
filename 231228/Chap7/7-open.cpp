#include <iostream>
#include <string>
using namespace std;

class Histogram {
	string his;
public:
	Histogram(string s) { his = s; }
	Histogram& operator << (string s) {
		this->his += s;
		return *this;
	}
	Histogram& operator << (char s) {
		this->his += s;
		return *this;
	}
	void operator !() {
		int i, count = 0;
		int anum[26];
		for (i = 0; i < 26; i++) anum[i] = 0;

		cout << his << endl << endl;

		for (i = 0; i < his.size(); i++) {
			if (isalpha(his.at(i)))
			{
				int c = tolower(his.at(i));
				anum[c - 97]++;
				count++;
			}
		}
		cout << "ÃÑ ¾ËÆÄºª ¼ö " << count << endl;
		for (i = 0; i < 26; i++) {
			cout << (char)(i + 97) << ":";
			for (int k = 0; k < anum[i]; k++) cout << "*";
			cout << endl;
		}
	}
};

int main() {
	Histogram song("Wise men say, \nonly fools rush in But I can't help, \n");
	song << "falling" << " in love with you." << "- by ";
	song << 'k' << 'i' << 't';
	!song;
}