//
// Created by Andres on 05/05/2022.
//

#ifndef CLASES_OBJETOS_PELOTA_H
#define CLASES_OBJETOS_PELOTA_H
#include "iostream"
using namespace std;
class Pelota{

private:
    string marca;
    double peso_gramos,presion_libras,diametro_centimetros,precio;

public:
        Pelota(string marca,double peso_gramos,double presion_libras,
               double diametro_centimetros,double precio)
        {
            this->marca=marca;
            this->peso_gramos=peso_gramos;
            this->presion_libras=presion_libras;
            this->diametro_centimetros=diametro_centimetros;
            this->precio=precio;
        }
        Pelota()
        {

        }
        ~Pelota()//Destructor
        {

        }
        //set
        void setMarca(string );void setPeso_gramos(double);
        void setPresion_libras(double );void setDiametro_centimetros(double);
        void setPrecio(double);
        //get
        string getMarca();double getPeso_gramos();
        double getPresion_libras();double getDiametro_centimetros();
        double getPrecio();
        //
        double radio();double volumen();
        double descuento();double Importe_pagar();
};
//set
void Pelota::setMarca(string marca)
{
    this->marca=marca;
}
void Pelota::setPeso_gramos(double Peso_gramos)
{
    this->peso_gramos=Peso_gramos;
}
void Pelota::setPresion_libras(double Presion_libras)
{
    this->presion_libras=Presion_libras;
}
void Pelota::setDiametro_centimetros(double diametro_centimetros)
{
    this->diametro_centimetros=diametro_centimetros;
}
void Pelota::setPrecio(double precio)
{
    this->precio=precio;
}
//get
string Pelota::getMarca()
{
    return marca;
}
double Pelota::getPeso_gramos()
{
    return peso_gramos;
}
double Pelota::getPresion_libras()
{
    return presion_libras;
}
double Pelota::getDiametro_centimetros()
{
    return diametro_centimetros;
}
double Pelota::getPrecio()
{
    return precio;
}
//metoso de operacion
double Pelota::radio()
{
    return getDiametro_centimetros()/2;
}
double Pelota::volumen()
{
    return 3.1416*radio()*radio();
}
double Pelota::descuento()
{
    return 0.10* getPrecio();
}
double Pelota::Importe_pagar()
{
    return getPrecio()-descuento();
}

#endif //CLASES_OBJETOS_PELOTA_H
