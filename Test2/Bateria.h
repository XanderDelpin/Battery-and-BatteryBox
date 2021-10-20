#pragma once
#include <iostream>
using namespace std;

class Bateria
{

	private:

		char tipo;

	public:

		//constrcutores y destructor

		//Solo 4 tipos de baterias (A, B, C y D)
		//Por defecto es tipo 'A'
		Bateria(char tipo = 'A');
		Bateria(const Bateria& unaBateria);

		~Bateria();

		//operadores

		Bateria& operator=(const Bateria& unaBateria);

		bool operator==(const Bateria& unaBateria) const;

		friend ostream& operator<<(ostream& out, const Bateria& unaBateria);

		//otros servicios

		char obtenerTipo() const;
		void cambiarTipo(char tipo);






};

