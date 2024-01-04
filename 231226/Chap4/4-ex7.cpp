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
		cout << "원" << i + 1 << "의 반지름 >> ";
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
	cout << endl << "면적이 100보다 큰 원의 개수는 " << count << "개 입니다." << endl;
	delete[] pArray;
}