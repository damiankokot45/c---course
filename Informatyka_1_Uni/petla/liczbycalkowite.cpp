//Napisz program wyświetlający liczby całkowite z przedziału <0,y> (wartość y podaje użytkownik)

#include <iostream>
 
int main()
{
    int y;
    std::cout << "Podaj y: ";
    std::cin >> y;
 
    for(int i=0;i<=y;i++)
        std::cout << i << " ";
 
    return 0;
}