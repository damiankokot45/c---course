//(r,!) Napisz funkcję, która dostaje dwa argumenty: wskaźnik na stałą
//typu int i wskaźnik na zmienną typu int, i przepisuje zawartość
//stałej wskazywanej przez pierwszy argument do zmiennej wskazywanej
//przez drugi argument.

#include <iostream>

void zamien(int const* a, int* b) {
    *b = *a;
}

int main() {
    int x = 5;
    int y;

    std::cout << "Przed zamianą: x = " << x << ", y niezainicjowane" << std::endl;

    // Wywołanie funkcji zamien, przekazując wskaźnik do stałej x i wskaźnik do zmiennej y
    zamien(&x, &y);

    std::cout << "Po zamianie: x = " << x << ", y = " << y << std::endl;

    return 0;
}