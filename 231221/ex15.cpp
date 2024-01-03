#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;

int main() {

    char sic[100];
    char* symbol;

    int front, rear;

    while (true) {
        cout << "? ";
        cin.getline(sic, 100);
        front = atoi(strtok_s(sic, " "));
        symbol = strtok_s(NULL, " ");
        rear = atoi(strtok_s(NULL, " "));

        if (*symbol == '+') {
            cout << front << " + " << rear << " = " << front + rear << endl;
        }
        else if (*symbol == '-') {
            cout << front << " - " << rear << " = " << front - rear << endl;
        }
        else if (*symbol == '*') {
            cout << front << " * " << rear << " = " << front * rear << endl;
        }
        else if (*symbol == '/') {
            cout << front << " / " << rear << " = " << front / rear << endl;
        }
        else if (*symbol == '%') {
            cout << front << " % " << rear << " = " << front % rear << endl;
        }
    }
    return 0;
}