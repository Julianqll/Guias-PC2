#include <iostream>
using namespace std;
string producto;
float precio,importe_pagar,importeP1,importeP2,importeP3;
int cantidad,cantidadP1,cantidadP2,cantidadP3, venta_total;
int P1,P2,P3;
string getProducto(){
    cout<<"Ingrese codigo del producto: ";
    cin>>producto;
    return producto;
}
int getcantidad(){
    cout<<"Ingrese la cantidad: ";
    cin>>cantidad;
    return cantidad;

}
float calcularimpoteapagar(){

    if(producto == "p1")
    {
        return 15 * cantidad;
    }
    else if(producto == "p2")
    {
        return 17.5 * cantidad;
    }
    else if(producto =="p3")
    {
        return 20 * cantidad;
    }
    else
    {
        cout<<"Ingresar solamente:p1 - p2 - p3!!!";
    }
}
void imprimirResultados(){

    cout<<"Importe de la compra:"<<importe_pagar<<endl;

}
void final(){


    cout<<"Items P1:"<<P1<<endl;
    cout<<"Items P2:"<<P2<<endl;
    cout<<"Items P3:"<<P3<<endl;
    cout<<"Cantidad total de productos P1:"<<cantidadP1<<endl;
    cout<<"Cantidad total de productos P2:"<<cantidadP2<<endl;
    cout<<"Cantidad total de productos P3:"<<cantidadP3<<endl;
    cout<<"Importe Total de productos P1:"<<importeP1<<endl;
    cout<<"Importe Total de productos P2:"<<importeP2<<endl;
    cout<<"Importe Total de productos P3:"<<importeP3<<endl;

}
void efectuarIncrementos()
{
    if(producto == "p1")
    {
        cantidadP1+=cantidad;
        importeP1+=importe_pagar;
        P1++;
    }
    else if(producto == "p2")
    {
        cantidadP2+=cantidad;
        importeP2+=importe_pagar;
        P2++;
    }
    else if(producto =="p3")
    {
        cantidadP3+=cantidad;
        importeP3=importe_pagar;
        P3++;
    }
    else
    {
        cout<<"Ingresar solamente:p1 - p2 - p3!!!";
    }
}

int main(){
    string producto,respuesta;
    int cantidad;
    float precio;
    bool bandera=false;

    do{
        producto= getProducto();
        cantidad= getcantidad();
        cout<<"LOS DATOS INGRESADOS SON"<<endl;
        cout<<producto<<endl;
        cout<<cantidad<<endl;
        importe_pagar=calcularimpoteapagar();
        efectuarIncrementos();
        imprimirResultados();
        cout<<"***"<<endl;
        cout<<"Deseas ingresar otro producto(SI):";
        cin>>respuesta;




        if(respuesta == "si")
        {
            bandera = true;
        }
        else
        {
            bandera = false;
        }
    }
    while(bandera == true);

    final();
    venta_total=importeP1+importeP2+importeP3;
    cout<<"La venta final:"<< venta_total<<endl;
}