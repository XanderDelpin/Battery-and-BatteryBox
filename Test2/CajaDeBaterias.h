#pragma once
#include <iostream>
#include "Bateria.h"
using namespace std;

class CajaDeBaterias
{

	private:

		Bateria* caja;

		int cantidad;

		const Bateria& operator[](int indice) const;
		Bateria& operator[](int indice);

	public:

		//Constrcutores y Desctructores

		CajaDeBaterias();
		CajaDeBaterias(const CajaDeBaterias& unaCaja);

		~CajaDeBaterias();

		//Operadores

		CajaDeBaterias& operator=(const CajaDeBaterias& unaCaja);

		friend ostream& operator<<(ostream& out, const CajaDeBaterias& unaCaja);

		bool operator==(const CajaDeBaterias& unaCaja) const;

		//Otros Servicios

		void agregarBateria(const Bateria& unaBateria);

		int cantidadDeTipos() const;



};

