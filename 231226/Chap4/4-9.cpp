#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle();
	Circle(int r);
	~Circle();
	void setRadius(int r) { radius = r; }
	double getArea() { return 3.14 * radius * radius; }
};

Circle::Circle() {
	radius = 1;
	cout << "������ ���� radius = " << radius << endl;
}

Circle::Circle(int r) {
	radius = r;
	cout << "������ ���� radius = " << radius << endl;
}

Circle::~Circle() {
	cout << "�Ҹ��� ���� radius = " << radius << endl;
}

int main() {
	Circle* pArrary = new Circle[3];
	pArrary[0].setRadius(10);
	pArrary[1].setRadius(20);
	pArrary[2].setRadius(30);

	for (int i = 0; i < 3; i++) {
		cout << pArrary[i].getArea() << endl;
	}
	Circle* p = pArrary;
	for (int i = 0; i < 3; i++) {
		cout << p->getArea() << endl;
		p++;
	}
	delete[] pArrary;
}