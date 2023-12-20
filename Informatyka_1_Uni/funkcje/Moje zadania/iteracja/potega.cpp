#include<iostream>

// Deklaracja funkcji obliczającej n-tą potęgę liczby rzeczywistej x
double potega(double x, int n);

int main() {
    double x;
    int n;

    // Wczytanie liczby i wykładnika od użytkownika
    std::cout << "Podaj liczbe rzeczywista (x): ";
    std::cin >> x;

    std::cout << "Podaj wykladnik (n, liczba naturalna): ";
    std::cin >> n;

    // Wywołanie funkcji potega i wyświetlenie wyniku
    double wynik = potega(x, n);
    std::cout << x << " do potegi " << n << " wynosi: " << wynik << std::endl;

    return 0;
}

// Definicja funkcji potega
double potega(double x, int n) {
    if (n < 0) {
        // Obsługa przypadku, gdy n jest ujemne
        std::cerr << "Blad: Wykladnik musi byc liczba naturalna." << std::endl;
        return 0.0;
    }

    double wynik = 1.0;

    for (int i = 0; i < n; ++i) {
        wynik *= x;
    }

    return wynik;
}
