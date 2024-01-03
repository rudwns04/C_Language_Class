#include <iostream>
#include <cctype>
using namespace std;


int main() {
    int tot = 0; // �� ���ĺ� ���� 
    int alpha[27] = { 0 }; // ������ ���ĺ��� ��Ÿ��
    char text[10000]; // text�� ������ �迭

    cout << "���� �ؽ�Ʈ�� �Է��ϼ���. ������׷��� �׸��ϴ�.\n�ؽ�Ʈ�� ���� ; �Դϴ�. 10000������ �����մϴ�.\n";
    cin.getline(text, 10000, ';'); // �ִ� 10,000���� ���� �ؽ�Ʈ�� ';'������ �Է¹޴´�

    for (int i = 0; i < strlen(text); i++) { // text[0]���� text�� ������
        if (isalpha(text[i])) { // text[i]�� ���ĺ��̸� ��
            if (text[i] < 91) text[i] = tolower(text[i]); // text[i]�� �빮���̸� �ҹ��ڷ� ����
            tot++;
            alpha[text[i] - 97]++; // ������ ���ĺ��� ����� ī��Ʈ
        }
    }

    cout << "�� ���ĺ� �� " << tot << endl << endl;
    for (int i = 0; i < 26; ++i) { // ���ĺ��� �ҹ��� �� ������ 26�� (a~z)
        cout << (char)(i + 'a') << "(" << alpha[i] << ")"; // a���� z���� ��� �� �� (���ĺ��� ����) ���
        cout << "\t:  "; // ������ ����ϱ� ���� �ǰ� ":" ���
        for (int j = 1; j <= alpha[i]; j++) // �� ���ĺ��� ������ŭ "*" ��� 
            cout << "*";
        cout << endl;
    }
}
