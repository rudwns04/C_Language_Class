#include<iostream>
#include<cstring>
using namespace std;

int main() {

    char A = 0;
    int i;
    char name[100];
    char longName[100];

    cout << "5 ���� �̸��� ';' ���� �����Ͽ� �Է��ϼ��� \n>>";

    for (i = 1; i < 6; i++) {
        cin.getline(name, 100, ';');
        cout << i << " : " << name << endl;
        if (A < strlen(name)) {
            A = strlen(name);
            strcpy_s(longName, name);
        }
    }
    cout << "���� �� �̸��� " << longName;

    return 0;
}