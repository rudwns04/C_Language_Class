#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <cstring>
#include <iomanip>
#include <cctype>
using namespace std;
int main() {

    ifstream file;
    file.open("/home/myunggi/.nanorc", ios::in | ios::binary);//�̷��� �ؾ� ����Ʈ�� ��Ÿ��������
    
    ofstream cpfile;
    cpfile.open("nanorc.txt");
    double percents;

    file.seekg(0, ios::end);
    int fileSize = file.tellg();
    int unit = fileSize / 10;
    int count = 0;
    char s[13];
    file.seekg(0, ios::beg);

    cout << "���� ����..." << endl;
    for (int i = 1; i <= 10; i++) {
        file.read(s, unit);
        int readCount = file.gcount();
        cpfile.write(s, readCount);
        count = count + unit;
        cout << "." << unit << "B " << i * 10 << "%" << endl;
    }
    cout << count << "  ����Ϸ�" << endl;
    file.close();
    cpfile.close();
    return 0;
}