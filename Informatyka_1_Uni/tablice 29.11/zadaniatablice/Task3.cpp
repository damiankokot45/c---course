#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
 
int main() {
     
    srand(time(NULL));
    int tab[15];
     
    for (int i=0;i<=14;i++)
    {
        tab[i] = rand()%21;
        cout << tab[i] << ' ';
    }
     
    return 0;
}