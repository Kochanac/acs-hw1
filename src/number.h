#ifndef __number__
#define __number__

#include "polar.h"
#include "fraction.h"
#include "complex.h"

struct number {
    // значения ключей для каждой альтернативы
    enum key {СOMPLEX, FRACTION, POLAR, INVALID};
    key k; // ключ
    // используемые альтернативы
    union { // используем простейшую реализацию
        polar p;
        fraction f;
        complex c;
    };
};

number *In(std::ifstream &in);

number *InRnd();

number *InRnd(int k);

void Out(number &num, std::ofstream &out);

double RationalRepr(number &num);

#endif //__number__