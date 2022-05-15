#include<iostream>
#include"video.h"
using namespace std;



void Procesar(Video* video)
{
    *video = Video(123, "Video1", 4, 20, 3.54);
}

void Procesar2(Video* video)
{
    video->setPrecioSoles(video->getPrecioSoles()+5.50);
}

void Listado(Video *video)
{

    cout << "Codigo: " << video->getCodigo() << endl;
    cout << "Nombre: " << video->getNombre() << endl;
    cout << "Duración: " << video->getDuracion() << endl;
    cout << "Precio en Soles: " << video->getPrecioSoles() << endl;
    cout << "Tipo de cambio: " << video->getTipoCambio() << endl;
    cout << "Precio en Dolares: " << video->precioDolares() << endl;


}

int main()
{
    Video video;
    Procesar(&video);
    Listado(&video);
    Procesar2(&video);
    Listado(&video);
}