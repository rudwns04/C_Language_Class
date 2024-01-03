#include<iostream>
using namespace std;

int main() {
    float a[5], big;
    int i;

    cout << "5 개의 실수를 입력하라>>";
    for (i = 0; i < 5; i++)   
        cin >> a[i];
    big = a[0]; 

    for (i = 1; i < 5; i++)
        if (big < a[i]) 
            big = a[i];

    cout << "제일 큰 수 = " << big;

    return 0;
}