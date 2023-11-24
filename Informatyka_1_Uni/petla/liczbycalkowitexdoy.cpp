//Napisz program wyświetlający liczby całkowite z przedziału <x,y> (wartości x i y podaje użytkownik)

#include <iostream>
 
int main()
{
    int x,y;
    std::cout << "Podaj x: ";
    std::cin >> x;
    std::cout << "Podaj y: ";
    std::cin >> y;
 
    for(int i=x;i<=y;i++)
        std::cout << i << " ";
 
    return 0;
}