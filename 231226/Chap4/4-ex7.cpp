#include <iostream>
#include <string>
using namespace std;

class Circle
{
	int radius = 0;
public:
	void setRadius(int r) { radius = r; };
	double getArea() { return 3.148 * radius * radius; }
};

int main() {
	int radius;

	Circle *pArray = new Circle[3];
	for (int i = 0; i < 3; i++) {
		cout << "��" << i + 1 << "�� ������ >> ";
		cin >> radius;
		pArray[i].setRadius(radius);
	}
	int count=0;
	Circle* p = pArray;
	for (int i = 0; i < 3; i++) {
		if (p->getArea() >= 100)
			count++;
		p++;
	}
	cout << endl << "������ 100���� ū ���� ������ " << count << "�� �Դϴ�." << endl;
	delete[] pArray;
}