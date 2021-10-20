#include "Bateria.h"

Bateria::Bateria(char tipo)
{
    if (tipo >= 65 && tipo <= 68) {
        this->tipo = tipo;
    }
    else {
        this->tipo = 'A';
    }
}

Bateria::Bateria(const Bateria& unaBateria)
{
    this->tipo = unaBateria.tipo;
}

Bateria::~Bateria()
{

}



Bateria& Bateria::operator=(const Bateria& unaBateria)
{
    this->tipo = unaBateria.tipo;
    return (*this);
}

bool Bateria::operator==(const Bateria& unaBateria) const
{
    return (this->tipo == unaBateria.tipo);
}

char Bateria::obtenerTipo() const
{
    return this->tipo;
}

void Bateria::cambiarTipo(char tipo)
{
    this->tipo = tipo;
}

ostream& operator<<(ostream& out, const Bateria& unaBateria)
{
    out << "El tipo de la bateria es: " << unaBateria.obtenerTipo() << endl;
    return out;
}
