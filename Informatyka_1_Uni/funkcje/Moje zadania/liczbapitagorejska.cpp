#include<iostream>

int czyPitagorejskie(int a, int b, int c) {
    if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a) {
        return 1; // Jeśli spełniony warunek liczby pitagorejskiej
    } else {
        return 0; // W przeciwnym wypadku
    }
}

int main() {
    // Deklaracja zmiennych do przechowywania trzech liczb całkowitych
    int liczba1, liczba2, liczba3;

    // Wczytanie trzech liczb od użytkownika
    std::cout << "Podaj pierwsza liczbe calkowita: ";
    std::cin >> liczba1;

    std::cout << "Podaj druga liczbe calkowita: ";
    std::cin >> liczba2;

    std::cout << "Podaj trzecia liczbe calkowita: ";
    std::cin >> liczba3;

    // Wywołanie funkcji czyPitagorejskie i wyświetlenie wyniku
    int wynik = czyPitagorejskie(liczba1, liczba2, liczba3);

    if (wynik == 1) {
        std::cout << "Podane liczby sa liczbami pitagorejskimi." << std::endl;
    } else {
        std::cout << "Podane liczby nie sa liczbami pitagorejskimi." << std::endl;
    }

    return 0;
}


