#include <iostream>
#include <vector>
#include <algorithm>

int main(){

    std::vector<int>liczby={132232,23,34,232356,123,223,2133,3,1,1,1,1292};

    std::sort(liczby.begin(),liczby.end());

    for(int liczba : liczby){

        std::cout<<liczba<<" ";
    }

    return 0;

}