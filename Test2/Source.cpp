#include <iostream>
#include "Bateria.h"
#include "CajaDeBaterias.h"
using namespace std;

int main() {


	
	Bateria b1;
	Bateria b2('B');

	CajaDeBaterias c1;

	c1.agregarBateria(b1);
	c1.agregarBateria(b2);
	c1.agregarBateria(Bateria('C'));
	c1.agregarBateria(Bateria('C'));

	CajaDeBaterias c2(c1);

	c2.agregarBateria(b2);


	cout << (c2) << endl;

	system("PAUSE");
	return 0;
}