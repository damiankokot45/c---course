#include <iostream>

int main() {
    const int rozmiar_tablicy = 50;  // Maksymalna liczba nieparzysta w zakresie 0-100 to 99, dlatego tablica ma rozmiar 50.

    int tablica[rozmiar_tablicy];
    int indeks = 0;

    std::cout << "Liczby nieparzyste od 0 do 100:" << std::endl;

    for (int i = 1; i <= 100; i += 2) {
        std::cout << i << " ";
        tablica[indeks] = i;
        indeks++;
    }

    // Wyświetlanie zawartości tablicy
    std::cout << "\n\nZawartosc tablicy:" << std::endl;
    for (int i = 0; i < rozmiar_tablicy; ++i) {
        std::cout << tablica[i] << " ";
    }

    return 0;
}
