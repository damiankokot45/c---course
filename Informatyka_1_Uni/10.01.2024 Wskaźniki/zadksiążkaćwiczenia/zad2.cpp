#include <iostream>

int main(){
    
    int tab[]{1,2,3,4,5,6,7,8,9,10};

    int uli=0;

    //std::cout<<"Podaj liczbe: ";
    //std::cin>>uli;

    for (int i = 0; i < 10; i++)
    {
        int* wsk_tab=&tab[i];
        //std::cout<<*wsk_tab<<std::endl;
        for (int j = 10; j > 0; j--)
        {
            std::cout<<tab[*wsk_tab]<<std::endl;
        }
        
    }
    
}