using namespace std;
class Trabajador
{
private:
    int codigo;
    string nombre;
    int horasTrabajadas;
    double tarifaHora;
public:
    Trabajador(int _codigo, string _nombre, int _horasTrabajadas, double _tarifaHora)
    {
        codigo = _codigo;
        nombre = _nombre;
        horasTrabajadas = _horasTrabajadas;
        tarifaHora = _tarifaHora;
    }
    Trabajador(){
    }
    ~Trabajador(){
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

    double descuento()
    {
        return 0.15 * sueldoBruto();
    }

    double sueldoNeto()
    {
        return sueldoBruto() - descuento();
    }

};