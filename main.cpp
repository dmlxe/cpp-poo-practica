#include <iostream>

using namespace std;

class Perro;
class Gato;

class Perro
{
private:
    string nombre, raza, color;
    int edad, peso;
public:
    Perro()
    {
        nombre = " ";
        raza = " ";
        color = " ";
        edad = 0;
        peso = 0;
    }
    Perro(string n, string r, string c, int e, int p)
    {
        nombre = n;
        raza = r;
        color = c;
        edad = e;
        peso = p;
    }
    Perro(string n, string r, string c)
    {
        nombre = n;
        raza = r;
        color = c;
    }
    ~Perro() { /*cout << "adios" << endl;*/ }

    void setNombre(string n)
    {
        nombre=n;
    }
    string getNombre()
    {
        return nombre;
    }
    void setRaza(string r)
    {
        raza=r;
    }
    string getRaza()
    {
        return raza;
    }
    void setColor(string c)
    {
        color=c;
    }
    string getColor()
    {
        return color;
    }
    void setEdad(int e)
    {
        edad=e;
    }
    int getEdad()
    {
        return edad;
    }
    void setPeso(int p)
    {
        peso=p;
    }
    int getPeso()
    {
        return peso;
    }

    void llamar()
    {
        cout << "Ven " << getNombre() << endl;
    }
    void llamar(string accion)
    {
        cout << "Ven " << getNombre() << " " << accion << endl;
    }
    void hacerDelBano()
    {
        this->peso = this->peso - 1;
    }
    void hacerDelBano(int cantidad)
    {
        this->peso = this->peso - cantidad;
    }

    friend void acariciar(Perro);
    friend class Gato;

    friend ostream& operator<<(ostream& os, const Perro perro);
    friend istream& operator>>(istream& is, Perro& perro);
    Perro operator+(Perro p)
    {
        peso = peso + p.getPeso();
        return *this;
    }
    Perro operator-(Perro p)
    {
        peso = peso - p.getPeso();
        return *this;
    }
    Perro operator*(Perro p)
    {
        peso = peso * p.getPeso();
        return *this;
    }
    Perro operator/(Perro p)
    {
        peso = peso / p.getPeso();
        return *this;
    }
    Perro operator=(int n)
    {
        this->peso = n;
        return *this;
    }
    Perro operator+=(Perro p)
    {
        peso += p.getPeso();
        return *this;
    }
    Perro operator-=(Perro p)
    {
        peso -= p.getPeso();
        return *this;
    }
    Perro operator*=(Perro p)
    {
        peso *= p.getPeso();
        return *this;
    }
    Perro operator/=(Perro p)
    {
        peso /= p.getPeso();
        return *this;
    }
    Perro operator++()
    {
        peso = peso + 1;
        return *this;
    }
    Perro operator--()
    {
        peso = peso - 1;
        return *this;
    }
    bool operator<(Perro p)
    {
        if (peso<p.getPeso())
            return true;
        return false;
    }
    bool operator<=(Perro p)
    {
        if (peso<=p.getPeso())
            return true;
        return false;
    }
    bool operator>(Perro p)
    {
        if (peso>p.getPeso())
            return true;
        return false;
    }
    bool operator>=(Perro p)
    {
        if (peso>=p.getPeso())
            return true;
        return false;
    }

    void saludarAmigo(Gato);

    void compartirComida(string, int);
    void intercambiarPelajes(string, string);
    void intercambiarPelajes(Perro);
    void intercambiarPelajes(Gato);
};

class Gato
{
private:
    string nombre, raza, color;
    int edad, peso;
public:
    Gato()
    {
        nombre = " ";
        raza = " ";
        color = " ";
        edad = 0;
        peso = 0;
    }
    Gato(string n, string r, string c, int e, int p)
    {
        nombre = n;
        raza = r;
        color = c;
        edad = e;
        peso = p;
    }
    Gato(string n, string r, string c)
    {
        nombre = n;
        raza = r;
        color = c;
    }
    ~Gato() { /*cout << "adios" << endl;*/ }

    void setNombre(string n)
    {
        nombre=n;
    }
    string getNombre()
    {
        return nombre;
    }
    void setRaza(string r)
    {
        raza=r;
    }
    string getRaza()
    {
        return raza;
    }
    void setColor(string c)
    {
        color=c;
    }
    string getColor()
    {
        return color;
    }
    void setEdad(int e)
    {
        edad=e;
    }
    int getEdad()
    {
        return edad;
    }
    void setPeso(int p)
    {
        peso=p;
    }
    int getPeso()
    {
        return peso;
    }

    void llamar()
    {
        cout << "Ven " << getNombre() << endl;
    }
    void llamar(string accion)
    {
        cout << "Ven " << getNombre() << " " << accion << endl;
    }
    void hacerDelBano()
    {
        this->peso = this->peso - 1;
    }
    void hacerDelBano(int cantidad)
    {
        this->peso = this->peso - cantidad;
    }

    friend void acariciar(Gato);
    friend class Perro;

    friend ostream& operator<<(ostream& os, const Gato gato);
    friend istream& operator>>(istream& is, Gato& gato);
    Gato operator+(Gato g)
    {
        peso = peso + g.getPeso();
        return *this;
    }
    Gato operator-(Gato g)
    {
        peso = peso - g.getPeso();
        return *this;
    }
    Gato operator*(Gato g)
    {
        peso = peso * g.getPeso();
        return *this;
    }
    Gato operator/(Gato g)
    {
        peso = peso / g.getPeso();
        return *this;
    }
    Gato operator=(int n)
    {
        this->peso = n;
        return *this;
    }
    Gato operator+=(Gato g)
    {
        peso += g.getPeso();
        return *this;
    }
    Gato operator-=(Gato g)
    {
        peso -= g.getPeso();
        return *this;
    }
    Gato operator*=(Gato g)
    {
        peso *= g.getPeso();
        return *this;
    }
    Gato operator/=(Gato g)
    {
        peso /= g.getPeso();
        return *this;
    }
    Gato operator++()
    {
        peso = peso + 1;
        return *this;
    }
    Gato operator--()
    {
        peso = peso - 1;
        return *this;
    }
    bool operator<(Gato g)
    {
        if (peso<g.getPeso())
            return true;
        return false;
    }
    bool operator<=(Gato g)
    {
        if (peso<=g.getPeso())
            return true;
        return false;
    }
    bool operator>(Gato g)
    {
        if (peso>g.getPeso())
            return true;
        return false;
    }
    bool operator>=(Gato g)
    {
        if (peso>=g.getPeso())
            return true;
        return false;
    }

    void saludarAmigo(Perro);

    void compartirComida(string, int);
    void intercambiarPelajes(string, string);
    void intercambiarPelajes(Perro);
    void intercambiarPelajes(Gato);
};

ostream& operator<<(ostream& os, const Perro perro)
{
    os << "Nombre: " << perro.nombre << ", Raza: " << perro.raza;
    return os;
}
ostream& operator<<(ostream& os, const Gato gato)
{
    os << "Nombre: " << gato.nombre << ", Raza: " << gato.raza;
    return os;
}
istream& operator>>(istream& is, Perro& perro)
{
    string nuevoNombre;
    cout << "Actualiza el nombre de " << perro.getNombre() << ":";
    is >> nuevoNombre;
    perro.setNombre(nuevoNombre);
    return is;
}
istream& operator>>(istream& is, Gato& gato)
{
    string nuevoNombre;
    cout << "Actualiza el nombre de " << gato.getNombre() << ":";
    is >> nuevoNombre;
    gato.setNombre(nuevoNombre);
    return is;
}

void Perro::compartirComida(string nombre, int peso)
{
    cout << nombre << " esta compartiendo comida conmigo " << this->nombre << endl;
    this->setPeso(peso);
}
void Gato::compartirComida(string nombre, int peso)
{
    cout << nombre << " esta compartiendo comida conmigo " << this->nombre << endl;
    this->setPeso(peso);
}
void Perro::intercambiarPelajes(string raza, string color)
{
    this->setRaza(raza);
    this->setColor(color);
}
void Gato::intercambiarPelajes(string raza, string color)
{
    this->setRaza(raza);
    this->setColor(color);
}
void Gato::intercambiarPelajes(Gato gato)
{
    this->setRaza(gato.getRaza());
    this->setColor(gato.getColor());
}
void Gato::intercambiarPelajes(Perro perro)
{
    this->setRaza(perro.getRaza());
    this->setColor(perro.getColor());
}
void Perro::intercambiarPelajes(Gato gato)
{
    this->setRaza(gato.getRaza());
    this->setColor(gato.getColor());
}
void Perro::intercambiarPelajes(Perro perro)
{
    this->setRaza(perro.getRaza());
    this->setColor(perro.getColor());
}

void Perro::saludarAmigo(Gato gato)
{
    cout << "woof Hola amigo " << gato.nombre << endl;
}
void Gato::saludarAmigo(Perro perro)
{
    cout << "miau Hola amigo " << perro.nombre << endl;
}
void acariciar(Perro perro)
{
    cout << "acariciando a " << perro.nombre << endl;
}
void acariciar(Gato gato)
{
    cout << "acariciando a " << gato.nombre << endl;
}

int main()
{
    Perro p1("pepe","razaA","azul",10,20);
    Perro p2("lupe","razaB","rojo",30,70);
    Gato g1("juan","razaC","verde",15,25);
    Gato g2("nacha","razaD","amarillo",55,65);

    cin >> g2;
    cout << g2.getNombre() << endl;

    cout << g1 << " " << p2 << endl;

    cout << p1.getColor() << endl;
    p1.setColor("rojo");
    cout << p1.getColor() << endl;

    p2.llamar();
    g1.llamar();

    cout << g1.getPeso() << endl;
    g1.hacerDelBano(3);
    cout << g1.getPeso() << endl;

    acariciar(g2);

    cout << p2.getRaza() << endl;
    cout << p2.getColor() << endl;
    cout << g2.getRaza() << endl;
    cout << g2.getColor() << endl;
    p2.intercambiarPelajes(g2.getRaza(), g2.getColor());
    p2.intercambiarPelajes(g2);
    cout << p2.getRaza() << endl;
    cout << p2.getColor() << endl;

    cout << p1 << endl;

    cout << g1.getPeso() << endl;
    ++g1;
    --g1;
    g1 += g1;
    g1 = g2;
    cout << g1.getPeso() << endl;

    if (p1 >= p2)
        cout << p1.getNombre() << " es mas grande que " << p2.getNombre() << endl;
    else
        cout << p2.getNombre() << " es mas grande que " << p1.getNombre() << endl;

    g1.saludarAmigo(p1);

    p1.compartirComida(g2.getNombre(), g2.getPeso());
    cout << p1.getPeso() << endl;
    cout << g2.getPeso() << endl;

    cout << "adios" << endl;
    return 0;
}
