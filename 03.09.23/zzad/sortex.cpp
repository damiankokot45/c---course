#include <iostream>
#include <vector>
#include <algorithm>

bool porównaj(int a, int b){
    return a>b;
}

int main(){
    int l1=5;
    int l2=2;
    std::vector<int>liczby={11,22,33,44,11,22};

    std::sort(liczby.begin(),liczby.end());
        for (int liczba : liczby){
            std::cout<<liczba<<" ";
        }
    std::cout<<std::endl;
    for (int i = 0; i < 2; i++)
    {
        std::cout<<porównaj(l1,l2);
    }
    

        return 0;


}