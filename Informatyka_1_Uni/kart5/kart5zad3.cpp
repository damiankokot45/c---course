#include <iostream>

int funkcja(int n, int m) {
    int** tablica=new int*[n];
    for (int i = 0; i < n; ++i) {
        tablica[i]=new int[m];
    }

    
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j <m; ++j){
            tablica[i][j]=0;
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            std::cout << tablica[i][j] << " ";
        }
        std::cout << std::endl;
    }

    std::cout<<"wskaznik: "<<tablica<<std::endl;

    for (int i = 0; i < n; ++i) {
        delete[] tablica[i];
    }
    delete[] tablica;

    return 0;
}



int main() {
  int n=10;
  int m=10;

  funkcja(n,m);
}

