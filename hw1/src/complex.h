#ifndef __complex__
#define __complex__

#include <fstream>
#include <cstring>
#include <cmath>

// комплексное число
struct complex {
    long int a, b; // a + b*i
};

void In(complex &num, std::ifstream &in);

void InRnd(complex &num);

// Вывод параметров в форматируемый поток
void Out(complex &t, std::ofstream &out);

double RationalRepr(complex &t);

#endif