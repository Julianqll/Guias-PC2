#include<iostream>
#include"trabajador.h"
using namespace std;



void Procesar(Trabajador* trabajador)
{
    *trabajador = Trabajador(123, "Julian", 4, 5.25);
}

void Procesar2(Trabajador* trabajador)
{
    trabajador->setHorasTrabajadas(trabajador->getHorasTrabajadas()+10);
}

void Listado(Trabajador *trabajador)
{

    cout << "Codigo: " << trabajador->getCodigo() << endl;
    cout << "Nombre: " << trabajador->getNombre() << endl;
    cout << "Horas Trabajadas: " << trabajador->getHorasTrabajadas() << endl;
    cout << "Tarifa por hora: " << trabajador->getTarifaHora() << endl;
    cout << "Sueldo bruto: " << trabajador->sueldoBruto() << endl;
    cout << "Descuento: " << trabajador->descuento() << endl;
    cout << "Sueldo neto: " << trabajador->sueldoNeto() << endl;


}

int main()
{
    Trabajador trabajador;
    Procesar(&trabajador);
    Listado(&trabajador);
    Procesar2(&trabajador);
    Listado(&trabajador);
}