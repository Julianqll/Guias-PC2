using namespace std;
class Obrero
{
private:
    int codigo;
    string nombre;
    int horasTrabajadas;
    double tarifaHora;
public:
    Obrero(int _codigo, string _nombre, int _horasTrabajadas, double _tarifaHora)
    {
        codigo = _codigo;
        nombre = _nombre;
        horasTrabajadas = _horasTrabajadas;
        tarifaHora = _tarifaHora;
    }
    Obrero(){
    }
    ~Obrero(){
    }

    //Setters
    void setCodigo(int _codigo)
    {
        codigo = _codigo;
    }
    void setNombre(string _nombre)
    {
        nombre = _nombre;
    }
    void setHorasTrabajadas(int _horasTrabajadas)
    {
        horasTrabajadas = _horasTrabajadas;
    }
    void setTarifaHora(double _tarifaHora)
    {
        tarifaHora = _tarifaHora;
    }

    //Getters
    int getCodigo()
    {
        return codigo;
    }
    string getNombre()
    {
        return nombre;
    }
    int getHorasTrabajadas()
    {
        return horasTrabajadas;
    }
    double getTarifaHora()
    {
        return tarifaHora;
    }

    //Métodos
    double sueldoBruto()
    {
        return horasTrabajadas * tarifaHora;
    }

    double descuentoAFP()
    {
        return 0.10 * sueldoBruto();
    }

    double descuentoEPS()
    {
        return 0.05 - sueldoBruto();


    }
    double sueldoNeto()
    {
        return sueldoBruto() - descuentoAFP() - descuentoEPS();
    }

};