#ifndef EXP_H
#define EXP_H

class Exp {
	int base, exp;
public:
	Exp(int a, int b);
	Exp(int c);
	Exp();
	int getValue();
	int getBase();
	int getExp();
	bool equals(Exp b);
};

#endif