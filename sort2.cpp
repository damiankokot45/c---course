#include <iostream>
#include <vector>
#include <algorithm>

int main(){
    std::vector<int>liczby={21,32,33,46,85,26,327,8221,931};

    std::sort(liczby.begin(),liczby.end());
    for (int liczba : liczby){
        std::cout<<liczba<<std::endl;
    }

    return 0;
}