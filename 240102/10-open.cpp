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
    cout << "영어 어휘 테스트를 시작합니다. 1~4 외 다른 입력시 종료합니다." << endl;
    vector<Word> v;
    v.push_back(Word("human", "인간"));
    v.push_back(Word("baby", "아기"));
    v.push_back(Word("society", "사회"));
    v.push_back(Word("photo", "사진"));
    v.push_back(Word("painting", "그림"));
    v.push_back(Word("love", "사랑"));
    v.push_back(Word("emotion", "감정"));
    v.push_back(Word("dall", "인형"));
    v.push_back(Word("animal", "동물"));
    v.push_back(Word("bear", "곰"));
    v.push_back(Word("trade", "거래"));
    int n;
    while (true) {
        int index = rand() % v.size();
        cout << v[index].getEng() << "?" << endl;
        int exIndex = rand() % 4; // 4개중에 하나에 정답 넣기
        example[exIndex] = v[index].getKor();
        for (int i = 0; i < 4; ++i) {
            if (i != exIndex) { // 정답을 제외하고 남은 칸에 보기 추가
                sw = true;
                while (sw) { // 보기에 중복이 없게 하기
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
    for (int i = 0; i < 4; ++i) // 초기화를 안해주면 중복인지 확인할 때 문제가 생김
        example[i] = "";
}