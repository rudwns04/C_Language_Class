#include <iostream>
using namespace std;
#include <string>
class Player {
    string name;
public:
    void setName(string name) { this->name = name; }
    string getName() { return name; }
};
class WordGame {
    Player* p;
    int num;
public:
    WordGame(int num);
    ~WordGame() { delete[] p; }
    void game();
};
WordGame::WordGame(int num) {
    this->num = num;
    p = new Player[num];
}
void WordGame::game() {
    string n;
    for (int i = 0; i < num; ++i) {
        cout << "�������� �̸��� �Է��ϼ���. ��ĭ ����>>";
        cin >> n;
        p[i].setName(n);
    }
    cout << endl;
    cout << "�����ϴ� �ܾ�� �ƹ����Դϴ�" << endl;
    string a = "�ƹ���";
    string b;
    int i = 0;
    for (;;) {
        cout << p[i % num].getName() << ">>";
        cin >> b;
        int j = a.size();
        if (a.at(j - 2) == b.at(0) && a.at(j - 1) == b.at(1)) {
            a = b;
        }
        else {
            cout << p[i % num].getName() << "Ż��!!" << endl;
            break;
        }
        ++i;
    }
}
int main() {
    cout << "���� �ձ� ������ �����մϴ�" << endl;
    cout << "���ӿ� �����ϴ� �ο��� ����Դϱ�?";
    int num;
    cin >> num;
    WordGame wordgame(num);
    wordgame.game();
}