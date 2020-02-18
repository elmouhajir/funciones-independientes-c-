
//Autor : Marcel El Mouhajir Moncunill

#include <iostream>
#include "BibliotecaEcu2Grado.h"
using namespace std;

void pedircoeficientes(double&, double&, double&);

void darresultado(double, double, double, int, double&, double&);
double a, b, c;
double x1, x2;
int numsols;
int count = 0;

int main()
{
	pedircoeficientes(a, b, c);
	numsols = calcularresultado(a, b, c, x1, x2);
	darresultado(a, b, c, numsols, x1, x2);
}
void pedircoeficientes(double& oa, double& ob, double& oc) {

	do {
		cout << "Itroduzca el valor del coeficiente a : ";
		cin >> oa;
	} while (oa == 0);
	cout << "Itroduzca el valor del coeficiente b : ";
	cin >> ob;
	cout << "Itroduzca el valor del coeficiente c : ";
	cin >> oc;
}

void darresultado(double ia, double ib, double ic, int inumsols, double& ox1, double& ox2) {

	cout << endl << "los coeficientes son a:" << ia << " b:" << ib << " c:" << ic << endl;
	cout << "el numero de soluciones es :" << inumsols << endl;
	if (inumsols == 0) {
		cout << "La ecuación no tiene soluciónes reales";
	}
	else if (inumsols == 1) {
		cout << "La equación tiene una solucíon :" << ox1 << endl;
	}
	else {
		cout << "La ecuación tiene dos soluciones : " << ox1 << " y " << ox2 << endl;
	}
}