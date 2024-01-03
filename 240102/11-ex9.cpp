#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <ctime>
#include <cstdlib>
using namespace std;

class Phone
{
	string name;
	string telnum;
	string address;
public:
	Phone(string name = "", string telnum = "", string address = "") {
		this->name = name;
		this->telnum = telnum;
		this->address = address;
	}

	friend ostream& operator << (ostream& stream, Phone a);
	friend istream& operator >> (istream& stream, Phone& a);


};

ostream& operator << (ostream& stream, Phone a) {
	stream << '(' << a.name << ',' << a.telnum << ',' << a.address << ')';
	return stream;
}
istream& operator >> (istream& ins, Phone& a) { 
	cout << "이름:";
	ins >> a.name;
	cout << "전화번호:";
	ins >> a.telnum;
	cout << "주소:";
	ins >> a.address;
	return ins;
}
int main() {
	Phone girl, boy;
	cin >> girl >> boy;
	cout << girl << endl << boy << endl;
    return 0;
}