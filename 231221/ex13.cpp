#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int menu, num;
    cout << "***** �¸��忡 ���� ���� ȯ���մϴ�. ***** \n";
    while (true) {
        cout << "«��:1, ¥��:2, ������:3, ����:4>>  ";
        cin >> menu;
        if (menu == 4) {
            cout << "���� ������ �������ϴ�.";
            break;
        }
        if (menu > 4) {
            cout << "�ٽ� �ֹ��ϼ���!!\n";
            continue;
        }

        cout << "���κ�?";
        cin >> num;

        if (menu == 1)
            cout << "«�� " << num << "�κ� ���Խ��ϴ�\n";
        else if (menu == 2)
            cout << "¥�� " << num << "�κ� ���Խ��ϴ�\n";
        else if (menu == 3)
            cout << "������ " << num << "�κ� ���Խ��ϴ�\n";
    }

    return 0;
}
