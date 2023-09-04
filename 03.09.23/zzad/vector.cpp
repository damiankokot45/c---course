#include <iostream>
#include <vector>

int main() {

    std::vector<int>liczby;
    liczby.push_back(1);
    liczby.push_back(2);
    liczby.push_back(33);

    for (int liczba : liczby)
    {
        std::cout<<liczba<<" ";
    }

    return 0;
    
}