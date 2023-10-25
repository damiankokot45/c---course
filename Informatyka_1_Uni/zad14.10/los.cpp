#include <iostream>
#include <ctime>  // Do inicjalizacji generatora pseudolosowego
#include <cstdlib>  // Do funkcji rand()

int main() {
    // Inicjalizacja generatora pseudolosowego
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    // Generowanie i wypisanie losowej liczby z przedziału [0, 10]
    int losowaLiczba = std::rand() % 11; // % 11 daje liczbę z zakresu [0, 10]
    std::cout << "Wylosowana liczba: " << losowaLiczba << std::endl;

    return 0;
}