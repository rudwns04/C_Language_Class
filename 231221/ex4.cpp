#include<iostream>
using namespace std;

int main() {
    float a[5], big;
    int i;

    cout << "5 ���� �Ǽ��� �Է��϶�>>";
    for (i = 0; i < 5; i++)   
        cin >> a[i];
    big = a[0]; 

    for (i = 1; i < 5; i++)
        if (big < a[i]) 
            big = a[i];

    cout << "���� ū �� = " << big;

    return 0;
}