#ifndef __polar__
#define __polar__

#include <fstream>
#include <cstring>

// полярные координаты
struct polar {
    double a, b; // a -- Угол, b -- Длинна
};

void In(polar &num, std::ifstream &out);

void InRnd(polar &num);

// Вывод параметров в форматируемый поток
void Out(polar &num, std::ofstream &out);

double RationalRepr(polar &num);

#endif