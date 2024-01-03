#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Shape {
protected:
	virtual void draw() = 0;
public:
	void paint() { draw(); }
};

class Circle : public Shape {
protected:
	virtual void draw() { cout << "Circle" << endl; }
};
class Rect : public Shape {
protected:
	virtual void draw() { cout << "Rectangle" << endl; }
};
class Line : public Shape {
protected:
	virtual void draw() { cout << "Line" << endl; }
};

class UI {
public:
	static int main_memu() {
		int n;
		cout << "삽입:1, 삭제:2, 모두보기:3, 종료:4 >> ";
		cin >> n;
		return n;
	}
	static int one_menu() {
		int n;
		cout << "선:1, 원:2, 사각형:3 >> ";
		cin >> n;
		return n;
	}
	static int two_menu() {
		int n;
		cout << "삭제하고자 하는 도형의 인덱스 >> ";
		cin >> n;
		return n;
	}
};

class GraphicEditor {
	vector<Shape*> v;
	vector<Shape*>::iterator it;

public:
	GraphicEditor() { ; }
	void create(int num) {
		switch (num) {
		case 1:
			v.push_back(new Line());
			break;

		case 2:
			v.push_back(new Circle());
			break;

		case 3:
			v.push_back(new Rect());
			break;
		}
	}
	void indelete(int num) {
		Shape *del;

		if (num < v.size()) {
			it = v.begin();
			for (int i = 0; i< num; i++)
				it++;
			del = *it;
			it = v.erase(it);
			delete del;
		}
		else
			cout << "인덱스를 잘못 입력하셨습니다." << endl;
	}
	void call() {
		bool exit = true;
		cout << "그래픽 에디터입니다." << endl;
		while (exit) {
			switch (UI::main_memu()) {
			case 1:
				create(UI::one_menu());
				break;
			case 2:
				indelete(UI::two_menu());
				break;
			case 3:
				for (int i = 0; i< v.size(); i++) {
					cout << i << ": ";
					v[i]->paint();
				}
				break;
			case 4:
				exit = false;
				break;
			}
		}
	}
};

int main() {
	GraphicEditor* editor = new GraphicEditor;
	editor->call();
	delete editor;
}