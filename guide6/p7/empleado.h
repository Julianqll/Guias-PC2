using namespace std;
class Empleado
{
private:
    int codigo;
    string nombre;
    double sueldo;
    int numeroCelular;
public:
    Empleado(int _codigo, string _nombre, double _sueldo, int _numeroCelular)
    {
        codigo = _codigo;
        nombre = _nombre;
        sueldo = _sueldo;
        numeroCelular = _numeroCelular;
    }
    Empleado(){
    }
    ~Empleado(){
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
    void setSueldo(double _sueldo)
    {
        sueldo = _sueldo;
    }
    void setNumeroCelular(int _numeroCelular)
    {
        numeroCelular = _numeroCelular;
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
    double getSueldo()
    {
        return sueldo;
    }
    double getNumeroCelular()
    {
        return numeroCelular;
    }


    //Métodos
    string mensajeSueldo()
    {
        if (sueldo > 3500)
            return "El sueldo es mayor a 3500";
        else if (sueldo < 3500)
            return "El sueldo es menor a 3500";
        else
            return "El sueldo es igual a 3500";
    }

};