#include "polar.h"

// Вывод параметров в форматируемый поток
void In(polar &num, std::ifstream &in) {
    in >> num.a >> num.b;
}

void InRnd(polar &num) {
    num.a = (double) (rand() % 10000) / 2000;
    num.b = (double) rand() / (double) 100 - (double) rand() / (double) 100; 
}

// Вывод параметров в форматируемый поток
void Out(polar &num, std::ofstream &out) {
    out << "(" << num.a << "; " << num.b << ") ";
}


double RationalRepr(polar &num) {
    return num.b;
}