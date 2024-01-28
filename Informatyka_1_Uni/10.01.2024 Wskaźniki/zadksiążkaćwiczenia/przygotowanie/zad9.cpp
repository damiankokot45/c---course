//r,róż) Napisz bezargumentową funkcję, która rezerwuje pamięć
//dla pojedynczej zmiennej typu int i zwraca jako wartość wskaźnik
//do niej

#include <iostream>

int* rezerwacja() {
    // Używamy operatora new do alokacji pamięci dla jednej zmiennej typu int
    return new int;
}

int main() {
    // Wywołanie funkcji rezerwacja
    int* ptr = rezerwacja();

    // Sprawdzenie, czy alokacja pamięci się powiodła
    if (ptr != nullptr) {
        // Przykład użycia zaalokowanej pamięci
        *ptr = 42;
        std::cout << "rezerwacja " << *ptr << std::endl;

        // Zwolnienie zaalokowanej pamięci
        delete ptr;
    } else {
        std::cerr << "Błąd alokacji pamięci." << std::endl;
    }

    return 0;
}