#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int menu, num;
    cout << "***** 승리장에 오신 것을 환영합니다. ***** \n";
    while (true) {
        cout << "짬뽕:1, 짜장:2, 군만두:3, 종료:4>>  ";
        cin >> menu;
        if (menu == 4) {
            cout << "오늘 영업은 끝났습니다.";
            break;
        }
        if (menu > 4) {
            cout << "다시 주문하세요!!\n";
            continue;
        }

        cout << "몇인분?";
        cin >> num;

        if (menu == 1)
            cout << "짬뽕 " << num << "인분 나왔습니다\n";
        else if (menu == 2)
            cout << "짜장 " << num << "인분 나왔습니다\n";
        else if (menu == 3)
            cout << "군만두 " << num << "인분 나왔습니다\n";
    }

    return 0;
}
