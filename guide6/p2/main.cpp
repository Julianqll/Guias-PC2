#include <iostream>
#include "../../../../Downloads/Pelota.h"

using namespace std;
Pelota pelota1;
string marca;double peso_gramos;double presion_libras;
double diametro_centimetros;double precio;
void Procesar()
{
    cout<<"Ingrese la marca: ";cin>>marca;
    cout<<"Ingrese el peso en gramos: ";cin>>peso_gramos;
    cout<<"Ingrese la presion en libras: ";cin>>presion_libras;
    cout<<"Ingrese el diametro en centimetros: ";cin>>diametro_centimetros;
    cout<<"Ingrese el precio: ";cin>>precio;
    pelota1= Pelota(marca,peso_gramos,presion_libras,diametro_centimetros,precio);
}
void Listado(Pelota pelota)
{
    cout<<" Marca: "<<pelota.getMarca()<<endl;
    cout<<" Peso en gramos: "<<pelota.getPeso_gramos()<<endl;
    cout<<" Presion en libras: "<<pelota.getPresion_libras()<<endl;
    cout<<" Diametro en centimetros: "<<pelota.getDiametro_centimetros()<<endl;
    cout<<"Precio: "<<pelota.getPrecio()<<endl;
    cout<<"Radio: "<<pelota.radio()<<endl;
    cout<<"Volumen: "<<pelota.volumen()<<endl;
    cout<<"Descuento: "<<pelota.descuento()<<endl;
    cout<<"Importe a pagar: "<<pelota.Importe_pagar()<<endl;
    pelota.setDiametro_centimetros(diametro_centimetros-1);
    pelota.setPrecio(precio-(precio*0.02));
    cout<<endl<<" Marca: "<<pelota.getMarca()<<endl;
    cout<<" Peso en gramos: "<<pelota.getPeso_gramos()<<endl;
    cout<<" Presion en libras: "<<pelota.getPresion_libras()<<endl;
    cout<<" Diametro en centimetros: "<<pelota.getDiametro_centimetros()<<endl;
    cout<<"Precio: "<<pelota.getPrecio()<<endl;
    cout<<"Radio: "<<pelota.radio()<<endl;
    cout<<"Volumen: "<<pelota.volumen()<<endl;
    cout<<"Descuento: "<<pelota.descuento()<<endl;
    cout<<"Importe a pagar: "<<pelota.Importe_pagar()<<endl;
}
int main()
{
    Procesar();
    Listado(pelota1);
    return 0;
}
