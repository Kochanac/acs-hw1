#ifndef __fraction__
#define __fraction__

#include <fstream>

// Дробь
struct fraction {
    long int a, b; // a / b
};

void In(fraction &num, std::ifstream &in);

void InRnd(fraction &num);

// Вывод в поток
void Out(fraction &num, std::ofstream &out);

double RationalRepr(fraction &num);

#endif