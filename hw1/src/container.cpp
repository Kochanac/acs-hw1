//------------------------------------------------------------------------------
// container.cpp - содержит функции обработки контейнера
//------------------------------------------------------------------------------

#include "container.h"

//------------------------------------------------------------------------------
// Инициализация контейнера
void Init(container &c) {
    c.len = 0;
}

//------------------------------------------------------------------------------
// Очистка контейнера от элементов (освобождение памяти)
void Clear(container &c) {
    for (int i = 0; i < c.len; ++i) {
        delete c.cont[i];
    }
    c.len = 0;
}

void In(container &c, std::ifstream &ifst) {
    while (!ifst.eof()) {
        c.cont[c.len] = In(ifst);
        ++c.len;
    }
}

void InRnd(container &c, int size) {
    while (c.len < size) {
        c.cont[c.len] = InRnd();
        ++c.len;
    }
}

//------------------------------------------------------------------------------
// Вывод содержимого контейнера в указанный поток
void Out(container &c, std::ofstream &ofst) {
    ofst << "Container contains " << c.len << " elements.\n";
    for (int i = 0; i < c.len; ++i) {
        ofst << i << ": ";
        Out(*(c.cont[i]), ofst);
    }
}

void heapify(container &c, int n, int i)
{
    int largest = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;
 
    if (l < n && RationalRepr(*c.cont[l]) > RationalRepr(*c.cont[largest]))
        largest = l;
 
    if (r < n && RationalRepr(*c.cont[r]) > RationalRepr(*c.cont[largest]))
        largest = r;
 
    if (largest != i) {
        std::swap(c.cont[i], c.cont[largest]);
 
        heapify(c, n, largest);
    }
}

// Heap sort
void Sort(container &c)
{
    for (int i = c.len / 2 - 1; i >= 0; i--)
        heapify(c, c.len, i);
 
    for (int i = c.len - 1; i > 0; i--) {
        std::swap(c.cont[0], c.cont[i]);
 
        heapify(c, i, 0);
    }
}
