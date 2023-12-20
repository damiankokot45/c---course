#include<iostream>

int znajdzMaximum(int a, int b) {
    if (a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main() {
    // Deklaracja zmiennych do przechowywania dwóch liczb całkowitych
    int liczba1, liczba2;

    // Wczytanie dwóch liczb od użytkownika
    std::cout << "Podaj pierwsza liczbe calkowita: ";
    std::cin >> liczba1;

    std::cout << "Podaj druga liczbe calkowita: ";
    std::cin >> liczba2;

    // Wywołanie funkcji znajdzMaximum i wyświetlenie wyniku
    int maksimum = znajdzMaximum(liczba1, liczba2);
    std::cout << "Wieksza z podanych liczb to: " << maksimum << std::endl;

    return 0;
}


