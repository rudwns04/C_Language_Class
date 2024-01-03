#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <cstdlib>
using namespace std;
class Word {
    string english;
    string korean;
public:
    Word(string eng, string kor) {
        this->english = eng;
        this->korean = kor;
    }
    string getEng() { return english; }
    string getKor() { return korean; }
};
int main() {
    string example[4] = { "" };
    bool sw = false;
    srand((unsigned)time(0));
    cout << "���� ���� �׽�Ʈ�� �����մϴ�. 1~4 �� �ٸ� �Է½� �����մϴ�." << endl;
    vector<Word> v;
    v.push_back(Word("human", "�ΰ�"));
    v.push_back(Word("baby", "�Ʊ�"));
    v.push_back(Word("society", "��ȸ"));
    v.push_back(Word("photo", "����"));
    v.push_back(Word("painting", "�׸�"));
    v.push_back(Word("love", "���"));
    v.push_back(Word("emotion", "����"));
    v.push_back(Word("dall", "����"));
    v.push_back(Word("animal", "����"));
    v.push_back(Word("bear", "��"));
    v.push_back(Word("trade", "�ŷ�"));
    int n;
    while (true) {
        int index = rand() % v.size();
        cout << v[index].getEng() << "?" << endl;
        int exIndex = rand() % 4; // 4���߿� �ϳ��� ���� �ֱ�
        example[exIndex] = v[index].getKor();
        for (int i = 0; i < 4; ++i) {
            if (i != exIndex) { // ������ �����ϰ� ���� ĭ�� ���� �߰�
                sw = true;
                while (sw) { // ���⿡ �ߺ��� ���� �ϱ�
                    n = rand() % v.size();
                    if (example[0] != v[n].getKor() &&
                        example[1] != v[n].getKor() &&
                        example[2] != v[n].getKor() &&
                        example[3] != v[n].getKor())
                    {
                        example[i] = v[n].getKor();
                        sw = false;
                    }
                }
            }
        }
        for (int i = 0; i < 4; ++i)
            cout << "(" << i + 1 << ") " << example[i] << ' ';
        cout << ":>";
        int answer;
        cin >> answer;
        if (answer >= 1 && answer <= 4) {
            if (exIndex == answer - 1)
                cout << "Excellent !!" << endl;
            else
                cout << "No. !!" << endl;
        }
        else
            break;
    }
    for (int i = 0; i < 4; ++i) // �ʱ�ȭ�� �����ָ� �ߺ����� Ȯ���� �� ������ ����
        example[i] = "";
}