#include <iostream>

int main(){

    int liczby[]={4,5,2,3,1,8,6,7,9,10};
    int iloscliczb=10;

    std::cout<<"Przed posortowaniem"<<std::endl;
    for (int i = 0; i < iloscliczb; i++)
    {
        std::cout<<liczby[i]<<" ";
    }

    std::cout<<" "<<std::endl;
    

    for (int i = 0; i < iloscliczb-1; i++)
    {
        for (int j = 0; j < iloscliczb-1; j++)
        {
            if (liczby[j]>liczby[j+1])
            {
                int pierwszaliczba=liczby[j];
                liczby[j]=liczby[j+1];
                liczby[j+1]=pierwszaliczba;
            }
            
        }
    
    }

    std::cout<<"Po posortowaniu: "<<std::endl;
    for (int n = 0; n < iloscliczb; n++)
    {
        std::cout<<liczby[n]<<" ";
    } 
}