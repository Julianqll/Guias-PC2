#include<iostream>
#include"empleado.h"
using namespace std;



void Procesar(Empleado* empleado)
{
    *empleado = Empleado(123, "Julian", 3500, 953291972);
}

void Procesar2(Empleado* empleado)
{
    empleado->setSueldo(empleado->getSueldo()+2000);
}

void Listado(Empleado *empleado)
{

    cout << "Codigo: " << empleado->getCodigo() << endl;
    cout << "Nombre: " << empleado->getNombre() << endl;
    cout << "Sueldo: " << empleado->getSueldo() << endl;
    cout << "Numero de celular: " << empleado->getNumeroCelular() << endl;
    cout << "Mensaje: " << empleado->mensajeSueldo() << endl;


}

int main()
{
    Empleado empleado;
    Procesar(&empleado);
    Listado(&empleado);
    Procesar2(&empleado);
    Listado(&empleado);
}