//
// Created by Andres on 15/05/2022.
//
#ifndef CLASES_OBJETOS4_EDIFICIO_H
#define CLASES_OBJETOS4_EDIFICIO_H
#include "iostream"
using namespace std;
class Edificio{

private:
    int codigo,cantidad_departamentos;
    double precio_dolares_depa;
    string direccion;
public:
    Edificio(int codigo,int cantidad_departamentos,
             double precio_dolares_depa,string direccion)
    {
        this->codigo=codigo;this->cantidad_departamentos=cantidad_departamentos;
        this->precio_dolares_depa=precio_dolares_depa;this->direccion=direccion;
    }
    Edificio(){}
    ~Edificio(){}

    void setCodigo(int);void setCantidad_departamentos(int);
    void setPrecio_dolares(double );void setDireccion(string);

    int getCodigo();int getCantidad_departamentos();
    double getPrecio_dolares();string getDireccion();
    double preciodeledificio();
};
void Edificio::setCodigo(int codigo)
{
    this->codigo;
}
void Edificio::setCantidad_departamentos(int cantidad_departamentos)
{
    this->cantidad_departamentos=cantidad_departamentos;
}
void Edificio::setPrecio_dolares(double precio_dolares_depa)
{
    this->precio_dolares_depa=precio_dolares_depa;
}
void Edificio::setDireccion(string direccion)
{
    this->direccion=direccion;
}
int Edificio::getCodigo()
{
    return codigo;
}
int Edificio::getCantidad_departamentos()
{
    return cantidad_departamentos;
}
double Edificio::getPrecio_dolares()
{
    return precio_dolares_depa;
}
string Edificio::getDireccion()
{
    return direccion;
}
double Edificio::preciodeledificio()
{
    return getPrecio_dolares()*getCantidad_departamentos();
}
#endif //CLASES_OBJETOS4_EDIFICIO_H
