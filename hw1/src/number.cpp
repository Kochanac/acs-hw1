#include "number.h"

number *In(std::ifstream &in){
	number *num;
	int k;
	in >> k;
	num = new number;
	switch(k) {
		case 1:
			num -> k = number::СOMPLEX;
			In(num -> c, in);
			break;
		case 2:
			num -> k = number::FRACTION;
			In(num -> f, in);
			break;
		case 3:
			num -> k = number::POLAR;
			In(num -> p, in);
			break;
		default:
			num -> k = number::INVALID;
			int a;
			in >> a >> a;
	}
	return num;
}

number *InRnd() {
	int k = rand() % 3 + 1;
	number *num = InRnd(k);
	return num;
}

number *InRnd(int k) {
	number *num;
	num = new number;
	switch(k) {
		case 0:
			num->k = number::СOMPLEX;
			InRnd(num->c);
			break;
		case 1:
			num->k = number::FRACTION;
			InRnd(num->f);
			break;
		case 2:
			num->k = number::POLAR;
			InRnd(num->p);
			break;
		default:
			num = new number;
			num->k = number::INVALID;
	}
	return num;
}



void Out(number &num, std::ofstream &out) {
	switch (num.k) {
		case number::СOMPLEX:
			Out(num.c, out);
			break;
		case number::FRACTION:
			Out(num.f, out);
			break;
		case number::POLAR:
			Out(num.p, out);
			break;
	}
}

double RationalRepr(number &num) {
	switch (num.k) {
		case number::СOMPLEX:
			return RationalRepr(num.c);

		case number::FRACTION:
			return RationalRepr(num.f);

		case number::POLAR:
			return RationalRepr(num.p);

		default:
			return 0.0;
	}
}
