#include <iostream>
using namespace std;

double donacionSoles = 0, donacionDolares = 0, donacionMarcos = 0;
int donantesSoles = 0, donantesDolares= 0, donantesMarcos = 0;

string getMoneda()
{
    string tipoMoneda;
    cout << "Digite el tipo de moneda: ";
    cin >> tipoMoneda;
    return tipoMoneda;
}

double getDonacion()
{
    double donacion;
    cout << "Digite el importe de la donación: ";
    cin >> donacion;
    return donacion;
}

void efectuarIncrementos(string tipoMoneda, double  donacion)
{
    if (tipoMoneda == "Soles" || tipoMoneda == "SOLES")
    {
        donacionSoles+=donacion;
        donantesSoles++;

    }
    else if (tipoMoneda == "Dolares" || tipoMoneda == "DOLARES")
    {
        donacionDolares+=donacion;
        donantesDolares++;
    }
    else if (tipoMoneda == "Marcos" || tipoMoneda == "MARCOS")
    {
        donacionMarcos+=donacion;
        donantesMarcos++;
    }
}

void mostrarResultados(string tipoMoneda, double donacion)
{
    cout << "La donacion se hizo en: "<<tipoMoneda << endl;
    cout << "El importe de la donación fue: "<< donacion << endl;

    cout << "IMPORTES DE DONACIONES" << endl;
    cout << "El importe total acumulado en Soles es: " <<donacionSoles << endl;
    cout << "El importe total acumulado en Dolares es: "<< donacionDolares << endl;
    cout << "El importe total acumulado en Marcos es: "<< donacionMarcos << endl;

    cout << "DONADORES" << endl;
    cout << "La cantidad total de donantes en Soles es: "<<donantesSoles << endl;
    cout << "La cantidad total de donantes en Dolares es: "<< donantesDolares << endl;
    cout << "La cantidad total de donantes en Marcos es: "<<donantesMarcos << endl;

}

int main()
{
    string tipoMoneda;
    double donacion;
    string rpta;
    do
    {
        tipoMoneda = getMoneda();
        donacion = getDonacion();
        efectuarIncrementos(tipoMoneda, donacion);
        cout << "¿Desea volver a realizar una donación? " << endl;
        cin >> rpta;
    }
    while(rpta == "SI" || rpta == "si");
    mostrarResultados(tipoMoneda, donacion);
    return 0;
}
