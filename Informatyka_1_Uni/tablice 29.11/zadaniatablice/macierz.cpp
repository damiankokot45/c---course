#include <iostream>

int main() {
    int m = 4;
    int n = 3;

    int macierzA[n][m] = {
        {56, 12, 34, 15},
        {91, 89, 13, 17},
        {67, 47, 28, 16}
    };

    int macierzB[n][m] = {
        {53, 46, 89, 2},
        {12, 57, 58, 7},
        {49, 36, 58, 14}
    };

    int macierzWynik[n][m];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            macierzWynik[i][j] = macierzA[i][j] + macierzB[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            std::cout << macierzWynik[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
