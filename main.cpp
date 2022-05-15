#include<iostream>
#include"obrero.h"
using namespace std;



void Procesar(Obrero* obrero)
{
    *obrero = Obrero(123, "Julian", 4, 5.25);
}

void Procesar2(Obrero* obrero)
{
    obrero->setHorasTrabajadas(obrero->getHorasTrabajadas()+8);
}

void Listado(Obrero *obrero)
{

    cout << "Codigo: " << obrero->getCodigo() << endl;
    cout << "Nombre: " << obrero->getNombre() << endl;
    cout << "Horas Trabajadas: " << obrero->getHorasTrabajadas() << endl;
    cout << "Tarifa por hora: " << obrero->getTarifaHora() << endl;
    cout << "Sueldo bruto: " << obrero->sueldoBruto() << endl;
    cout << "Descuento por AFP: " << obrero->descuentoAFP() << endl;
    cout << "Descuento por EPS: " << obrero->descuentoEPS() << endl;
    cout << "Sueldo neto: " << obrero->sueldoNeto() << endl;


}

int main()
{
    Obrero obrero;
    Procesar(&obrero);
    Listado(&obrero);
    Procesar2(&obrero);
    Listado(&obrero);
}