//Autor : Marcel El Mouhajir Moncunill
//Este archivo contiene la implementacion de la biblioteca.
#include <math.h>
#include "BibliotecaEcu2Grado.h"

int calcularresultado(double ia, double ib, double ic,double&ox1, double& ox2) {
	double d;
	d = ib * ib - 4 * ia * ic;
	int numsolsres;
	if (d < 0) {
		numsolsres = 0;
	}
	else if (d == 0) {
		numsolsres = 1;
		ox1 = (-ib) / (2 * ia);
	}
	else {
		numsolsres = 2;
		ox1 = (-ib + sqrt(d)) / (2 * ia);
		ox2 = (-ib - sqrt(d)) / (2 * ia);
	}
	return numsolsres;
}
