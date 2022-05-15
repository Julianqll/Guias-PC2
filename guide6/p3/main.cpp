#include <iostream>
#include "Computadora.h"
using namespace std;
Computadora compu;
int codigo;string marca,color;double precio_dolares;
void procesar()
{
    cout<<"Dame el codigo: ";cin>>codigo;
    cout<<"Ingrese la marca: ";cin>>marca;
    cout<<"Ingrese el color: ";cin>>color;
    cout<<"Ingrese el precio dolares: ";cin>>precio_dolares;
    compu=Computadora(codigo,marca,color,precio_dolares);
}
void listado(Computadora compu)
{
    cout<<"El codigo es: "<<compu.getCodigo()<<endl;
    cout<<"La marca es: "<<compu.getMarca()<<endl;
    cout<<"El color es: "<<compu.getColor()<<endl;
    cout<<"El precio en dolares es: "<<compu.getPrecio_dolares()<<endl;
    cout<<"El precio en soles es: "<<compu.Soles()<<endl;
    cout<<"El precio en euros es: "<<compu.Euros()<<endl<<endl;
    compu.setPrecio_dolares(compu.getPrecio_dolares()-(compu.getPrecio_dolares()*0.10));
    cout<<"El codigo es: "<<compu.getCodigo()<<endl;
    cout<<"La marca es: "<<compu.getMarca()<<endl;
    cout<<"El color es: "<<compu.getColor()<<endl;
    cout<<"El precio en dolares es: "<<compu.getPrecio_dolares()<<endl;
    cout<<"El precio en soles es: "<<compu.Soles()<<endl;
    cout<<"El precio en euros es: "<<compu.Euros()<<endl<<endl;
}
int main()
{
    procesar();
    listado(compu);
    return 0;
}
