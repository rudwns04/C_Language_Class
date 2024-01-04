#include "Exp.h"

Exp::Exp(int a, int b) {
	base = a, exp = b;
}

Exp::Exp(int c) {
	base = c, exp = 1;
}

Exp::Exp() {
	base = 1, exp = 1;
}

int Exp::getValue() {
	int n = 1;
	for (int i = 0; i < exp; ++i)
		n *= base;
	return n;
}

int Exp::getBase() {
	return base;
}

int Exp::getExp() {
	return exp;
}

bool Exp::equals(Exp b) {
	if (getValue() == b.getValue()) return true;
	else return false;
}