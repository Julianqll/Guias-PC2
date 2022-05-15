#include <iostream>
#include"Edificio.h"
using namespace std;
double precio_dolares_depa;
int cantidad_depa,codigo;
string direccion;
Edificio edi;
void Listado()
{
    cout<<"Direccion: ";
    getline(cin,direccion);
    cout<<"Precio del depa: ";cin>>precio_dolares_depa;
    cout<<"Cantidad de departamentos: ";cin>>cantidad_depa;
    cout<<"Codigo del depa: ";cin>>codigo;
    edi= Edificio(codigo,cantidad_depa,precio_dolares_depa,direccion);
    cout<<"Direccion: "<<edi.getDireccion()<<endl;
    cout<<"Precio del depa: "<<edi.getPrecio_dolares()<<endl;
    cout<<"Cantidad de departamentos: "<<edi.getCantidad_departamentos()<<endl;
    cout<<"Codigo del depa: "<<edi.getCodigo()<<endl;
    cout<<"Precio del edificio: "<<edi.preciodeledificio()<<endl;
}
void Procesar()
{
    edi.setPrecio_dolares(precio_dolares_depa-(precio_dolares_depa*0.20));
    cout<<"Datos procesados con el 20% de incremento: "<<endl;
    cout<<"Direccion: "<<edi.getDireccion()<<endl;
    cout<<"Precio del depa: "<<edi.getPrecio_dolares()<<endl;
    cout<<"Cantidad de departamentos: "<<edi.getCantidad_departamentos()<<endl;
    cout<<"Codigo del depa: "<<edi.getCodigo()<<endl;
    cout<<"Precio del edificio: "<<edi.preciodeledificio()<<endl;
}
int main()
{
    Listado();
    Procesar();
    return 0;
}
