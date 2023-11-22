#include <iostream>

int main() {
    int n = 5; // liczba wierszy (zmień według potrzeb)

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < i; ++j) {
            std::cout << " "; // dodaj spacje przed trójkątem
        }
        for (int k = 0; k < 2 * (n - i) - 1; ++k) {
            std::cout << "*"; // rysuj trójkąt
        }
        std::cout << std::endl;
    }

    return 0;
}