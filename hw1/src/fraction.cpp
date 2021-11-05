#include "fraction.h"

void In(fraction &num, std::ifstream &in) {
    in >> num.a >> num.b;
}

void InRnd(fraction &num) {
    num.a = rand() % 1000;
    num.b = rand() % 1000 + 1; 
}

// Вывод в поток
void Out(fraction &num, std::ofstream &out) {
    out << num.a << " / " << num.b << " ";
}

double RationalRepr(fraction &num) {
    return (double) num.a / (double) num.b;
}
