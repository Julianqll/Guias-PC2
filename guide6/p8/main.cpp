#include<iostream>
#include"persona.h"
using namespace std;



void Procesar(Persona* persona)
{
    *persona = Persona("Julian", "Quispe", 19, 1.72, 76.5);
}

void Procesar2(Persona* persona)
{
    persona->setEdad(persona->getEdad()-5);
}

void Listado(Persona *persona)
{

    cout << "Nombre: " << persona->getNombre() << endl;
    cout << "Apellido: " << persona->getApellido() << endl;
    cout << "Edad: " << persona->getEdad() << endl;
    cout << "Talla: " << persona->getTalla() << endl;
    cout << "Peso: " << persona->getPeso() << endl;
    cout << "Mensaje: " << persona->mensajeEdad() << endl;


}

int main()
{
    Persona persona;
    Procesar(&persona);
    Listado(&persona);
    Procesar2(&persona);
    Listado(&persona);
}