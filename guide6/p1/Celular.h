//
// Created by Andres on 04/05/2022.
//
#include "iostream"

using namespace std;
class Celular{

private:
    int numero;string usuario;
    int segundos_consumidos;double precio_segundo;
public:

    Celular(int num,string user,int segundos_consu,double precio_seg)
    {
        this->numero=num;
        this->usuario=user;
        this->segundos_consumidos=segundos_consu;
        this->precio_segundo=precio_seg;
    }
    Celular()
    {

    }
    ~Celular()
    {

    }
    int setNum(int num)
    {
        this->numero=num;
    }
    string setUser(string user)
    {
        this->usuario=user;
    }
    int setSegundos_consu(int segundos_consu)
    {
        this->segundos_consumidos=segundos_consu;
    }
    double setPrecio_segu(double precio_seg)
    {
        this->precio_segundo=precio_seg;
    }
    int getNumero()
    {
        return numero;
    }
    string getUsuario()
    {
        return usuario;
    }
    int getSegundosConsumidos()
    {
        return segundos_consumidos;
    }
    double getPrecioPorSegundo()
    {
        return precio_segundo;
    }
    double Costo()
    {
        return segundos_consumidos * precio_segundo;
    }

    double Igv()
    {
        return 0.18 * Costo();
    }

    double Total()
    {
        return Costo()-Igv();
    }

};