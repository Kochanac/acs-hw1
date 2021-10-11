#include "complex.h"

void In(complex &num, std::ifstream &in) {
    in >> num.a >> num.b;
}

void InRnd(complex &num) {
    num.a = rand() % 1000;
    num.b = rand() % 1000 + 1; 
}

void Out(complex &t, std::ofstream &out) {
    out << t.a << (t.b >= 0 ? " + " : " - ") << abs(t.b) << "i ";
}

double RationalRepr(complex &t) {
    return std::sqrt(t.a * t.a + t.b * t.b);
}

