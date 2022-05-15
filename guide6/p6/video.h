using namespace std;
class Video
{
private:
    int codigo;
    string nombre;
    double duracion;
    double precioSoles;
    double tipoCambio;
public:
    Video(int _codigo, string _nombre, double _duracion, double _precioSoles, double _tipoCambio)
    {
        codigo = _codigo;
        nombre = _nombre;
        duracion = _duracion;
        precioSoles = _precioSoles;
        tipoCambio = _tipoCambio;
    }
    Video(){
    }
    ~Video(){
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
    void setDuracion(double _duracion)
    {
        duracion = _duracion;
    }
    void setPrecioSoles(double _precioSoles)
    {
        precioSoles = _precioSoles;
    }
    void setTipoCambio(double _tipoCambio)
    {
        tipoCambio = _tipoCambio;
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
    double getDuracion()
    {
        return duracion;
    }
    double getPrecioSoles()
    {
        return precioSoles;
    }
    double getTipoCambio()
    {
        return tipoCambio;
    }

    //Métodos
    double precioDolares()
    {
        return precioSoles * tipoCambio;
    }

};