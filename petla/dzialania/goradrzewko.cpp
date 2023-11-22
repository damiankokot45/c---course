#include <iostream>

int main() {
    int n = 10; 

    for (int i = 0; i < n; ++i) {
        for (int j = n; j > i + 1; --j) {
            std::cout << " "; // dodaj spacje przed trójkątem
        }
        for (int m = 0; m < 2 * (i + 1) - 1; ++m) {
            std::cout << "*"; // rysuj trójkąt
        }
        std::cout<<std::endl;
    }

    return 0;
}