#include <iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> arreglo;
    float promedio=0;
    int contador_mayorpromedio=0,contador_igualpromedio=0,contador_menorpromedio=0,elemento;
    for(int i=0;i<10;i++)
    {
        cout<<"Digite el elemento: ";cin>>elemento;
        arreglo.push_back(elemento);
        promedio+=elemento;
    }
    promedio/=arreglo.size();
    for(int item:arreglo)
    {
        if(promedio>item)
        {
            contador_mayorpromedio++;
        }
        else if(promedio==item)
        {
            contador_igualpromedio++;
        }
        else
        {
            contador_menorpromedio++;
        }
    }
    cout<<endl<<" Mayores al promedio: "<<contador_mayorpromedio;
    cout<<endl<<" Iguales al promedio: "<<contador_igualpromedio;
    cout<<endl<<" Menores al promedio: "<<contador_menorpromedio;
    return 0;
}
