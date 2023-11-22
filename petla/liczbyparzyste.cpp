//Napisz program wypisujący liczby całkowite parzyste od liczby podanej przez użytkownika aż do 0.

#include <iostream>
using namespace std;
 
int main()
{
    int liczba;
    cout << "Podaj liczba: ";
    cin >> liczba;
 
    do
    {
        if (liczba%2==0)
            cout << liczba << " ";
        liczba--;
    }
    while(liczba>=0);
 
    return 0;
}