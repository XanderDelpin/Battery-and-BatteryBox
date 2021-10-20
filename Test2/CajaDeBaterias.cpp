#include "CajaDeBaterias.h"

const Bateria& CajaDeBaterias::operator[](int indice) const
{
    return this->caja[indice];
}

Bateria& CajaDeBaterias::operator[](int indice)
{
    return this->caja[indice];
}

void CajaDeBaterias::agregarBateria(const Bateria& unaBateria)
{
    Bateria* caja;
    caja = new Bateria[this->cantidad + 1];
    for (int i = 0; i < this->cantidad; i++) {
        caja[i] = (*this)[i];
    }
    caja[this->cantidad] = unaBateria;
    delete[](this->caja);
    this->caja = caja;
    ++(this->cantidad);
}

int CajaDeBaterias::cantidadDeTipos() const
{
    bool contieneA = false;
    bool contieneB = false;
    bool contieneC = false;
    bool contieneD = false;
    int counter = 0;
    for (int i = 0; i < this->cantidad; i++) {
        if ((*this)[i].obtenerTipo() == 'A' && !contieneA) {
            contieneA = true;
            ++counter;
        }
        if ((*this)[i].obtenerTipo() == 'B' && !contieneB) {
            contieneB = true;
            ++counter;
        }
        if ((*this)[i].obtenerTipo() == 'C' && !contieneC) {
            contieneC = true;
            ++counter;
        }
        if ((*this)[i].obtenerTipo() == 'D' && !contieneD) {
            contieneD = true;
            ++counter;
        }
    }
    return counter;
}

CajaDeBaterias::CajaDeBaterias()
{
    this->cantidad = 0;
    this->caja = NULL;
}

CajaDeBaterias::CajaDeBaterias(const CajaDeBaterias& unaCaja)
{
    this->caja = NULL;
    (*this) = unaCaja;
}

CajaDeBaterias::~CajaDeBaterias()
{
    delete[](this->caja);
}

CajaDeBaterias& CajaDeBaterias::operator=(const CajaDeBaterias& unaCaja)
{
    delete[](this->caja);
    if (unaCaja.cantidad > 0) {
        this->caja = new Bateria[unaCaja.cantidad];

        for (int i = 0; i < unaCaja.cantidad; i++) {
            (*this)[i] = unaCaja[i];
        }
    }
    else {
        this->caja = NULL;
    }

    this->cantidad = unaCaja.cantidad;
    return (*this);
}

bool CajaDeBaterias::operator==(const CajaDeBaterias& unaCaja) const
{
    bool temp = false;
    if (this->cantidad == unaCaja.cantidad) {
        for (int i = 0; i < unaCaja.cantidad; i++) {
            if (!((*this)[i] == unaCaja[i])) {
                return temp;
            }
        }
        temp = true;
    }
    return temp;
}

ostream& operator<<(ostream& out, const CajaDeBaterias& unaCaja)
{
    for (int i = 0; i < unaCaja.cantidad; i++) {
        out << "Bateria #" << i + 1 << ": " << unaCaja[i] << endl;
    }
    return out;
}
