using namespace std;
class Persona
{
private:
    string nombre;
    string apellido;
    int edad;
    double talla;
    double peso;
public:
    Persona(string _nombre, string _apellido, int _edad, double _talla, double _peso)
    {
        nombre = _nombre;
        apellido = _apellido;
        edad = _edad;
        talla = _talla;
        peso = _peso;
    }
    Persona(){
    }
    ~Persona(){
    }

    //Setters
    void setNombre(string _nombre)
    {
        nombre = _nombre;
    }
    void setApellido(string _apellido)
    {
        apellido = _apellido;
    }
    void setEdad(int _edad)
    {
        edad = _edad;
    }
    void setTalla(double _talla)
    {
        talla = _talla;
    }
    void setPeso(double _peso)
    {
        peso = _peso;
    }


    //Getters
    string getNombre()
    {
        return nombre;
    }
    string getApellido()
    {
        return apellido;
    }
    int getEdad()
    {
        return edad;
    }
    double getTalla()
    {
        return talla;
    }
    double getPeso()
    {
        return peso;
    }


    //Métodos
    string mensajeEdad()
    {
        if (edad >= 18)
            return "Es mayor de edad";
        else
            return "Es menor de edad";
    }

};