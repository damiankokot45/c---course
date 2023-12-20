#include<iostream>

int SUMA(int a, int b) {
    return a + b;
}

int main() {
    // Deklaracja zmiennych do przechowywania dwóch liczb całkowitych
    int liczba1, liczba2;

    // Wczytanie dwóch liczb od użytkownika
    std::cout << "Podaj pierwsza liczbe calkowita: ";
    std::cin >> liczba1;

    std::cout << "Podaj druga liczbe calkowita: ";
    std::cin >> liczba2;

    // Wywołanie funkcji SUMA i wyświetlenie wyniku
    int suma = SUMA(liczba1, liczba2);
    std::cout << "Suma podanych liczb: " << suma << std::endl;

    return 0;
}
