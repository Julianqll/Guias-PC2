#include <iostream>
#include "Celular.h"
using namespace std;
void procesar()
{
    Celular celu;
    celu.setNum(100);
    celu.setUser("Andres");
    celu.setSegundos_consu(100);
    celu.setPrecio_segu(10.20);

    cout<<celu.getNumero()<<endl;
    cout<<celu.getUsuario()<<endl;
    cout<<celu.getPrecioPorSegundo()<<endl;
    cout<<celu.getSegundosConsumidos()<<endl;
    cout<<endl<<celu.Costo();
    cout<<endl<<celu.Igv();
    cout<<endl<<celu.Total();
}
void listado(Celular celu)
{

}
int main() {
    procesar();


    return 0;
}
