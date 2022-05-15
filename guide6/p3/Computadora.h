//
// Created by Andres on 06/05/2022.
//

#ifndef CLASES_OBJETOS3_COMPUTADORA_H
#define CLASES_OBJETOS3_COMPUTADORA_H
#include "iostream"
using namespace std;
class Computadora
{
private:
   int codigo;
   string marca,color;
   double precio_dolares;
public:
    Computadora(int codigo,string marca,
                string color,double precio_dolares)
    {
        this->codigo=codigo;this->marca=marca;
        this->color=color;this->precio_dolares=precio_dolares;
    }
    Computadora()
    {

    }
    ~Computadora()
    {

    }
    //set
    void setCodigo(int );
    void setMarca(string );
    void setColor(string );
    void  setPrecio_dolares(double);
    //get
    int getCodigo();
    string getMarca();
    string getColor();
    double getPrecio_dolares();
    //metodos
    double Soles();
    double Euros();
};
void Computadora::setCodigo(int codigo)
{
    this->codigo=codigo;
}
void Computadora::setMarca(string marca)
{
    this->marca=marca;
}
void Computadora::setColor(string color)
{
    this->color=color;
}
void  Computadora::setPrecio_dolares(double precio_dolares)
{
    this->precio_dolares=precio_dolares;
}
//get
int Computadora::getCodigo()
{
    return codigo;
}
string Computadora::getMarca(){
    return marca;
}
string Computadora::getColor(){
    return color;
}
double Computadora::getPrecio_dolares(){
    return precio_dolares;
}
//metodos
double Computadora::Soles()
{
    return getPrecio_dolares()*2.58;
}
double Computadora::Euros()
{
    //comprobar
    return getPrecio_dolares()/1.25;
}

#endif //CLASES_OBJETOS3_COMPUTADORA_H
