#include<iostream>
#include<cstring>
using namespace std;

int main() {

    char A = 0;
    int i;
    char name[100];
    char longName[100];

    cout << "5 명의 이름을 ';' 으로 구분하여 입력하세요 \n>>";

    for (i = 1; i < 6; i++) {
        cin.getline(name, 100, ';');
        cout << i << " : " << name << endl;
        if (A < strlen(name)) {
            A = strlen(name);
            strcpy_s(longName, name);
        }
    }
    cout << "가장 긴 이름은 " << longName;

    return 0;
}