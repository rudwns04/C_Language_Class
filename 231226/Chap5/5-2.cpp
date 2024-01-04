#include <iostream>
#include <string>
using namespace std;

class Circle
{
	int radius;
public:
	Circle() { radius = 1; }
	Circle(int radius) { this->radius = radius;}
	void setRadius(int r) { this->radius = radius; };
	double getArea() { return 3.148 * radius * radius; }
};

Circle getCircle() {
	Circle tmp(30);
	return tmp;
}

int main() {
	Circle c;
	cout << c.getArea() << endl;

	c = getCircle();
	cout << c.getArea() << endl;
}