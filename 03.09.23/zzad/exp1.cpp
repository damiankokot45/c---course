#include <iostream>
#include <algorithm>
#include <list>

int main(){
    std::list<int>mojalista;

    mojalista.push_back(12);
    mojalista.push_back(2);
    mojalista.push_back(3);
    mojalista.push_back(10);
    mojalista.push_back(12);

    for (const auto& element : mojalista){
        std::cout<<element<<" ";
    }

    return 0;
}