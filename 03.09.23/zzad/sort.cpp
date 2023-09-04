#include <iostream>
#include <vector>
#include <algorithm>

int main(){
    std::vector<int>liczby={3,1,4,1,5,9,2,6,5,3,5};

    std::sort(liczby.begin(),liczby.end());
        for (int liczba : liczby) {
            std::cout<<liczba<<" ";
        }

        return 0;
}