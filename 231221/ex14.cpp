#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char menu[100];
    int num, sum;
    int total=0;

    cout << "���������� 2000��, �Ƹ޸�ī�� 2300��, īǪġ�� 2500���Դϴ�. \n �ֹ� >> ";
    cin >> menu >> num;

    while (true) {
        if (strcmp(menu,"����������")==0)
        {
            sum = 2000 * num;
            cout << sum <<"�� �Դϴ�. ���ְ� �弼��.\n";
            total += sum;
        }
        if (strcmp(menu, "�Ƹ޸�ī��") == 0)
        {
            sum = 2300 * num;
            cout << sum << "�� �Դϴ�. ���ְ� �弼��.\n";
            total += sum;
        }
        if (strcmp(menu, "īǪġ��") == 0)
        {
            sum = 2500 * num;
            cout << sum << "�� �Դϴ�. ���ְ� �弼��.\n";
            total += sum;
        }
        if (total >20000)
        {
            cout << "���� " << total << "���� �Ǹ��Ͽ� ī�並 �ݽ��ϴ�. ���� ����~~~";
            break;
        }
    }
    return 0;
}
