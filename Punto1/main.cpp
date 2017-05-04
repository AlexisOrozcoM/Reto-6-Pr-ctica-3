/*
 * Autores:	Carlos Daniel Marin -1663787;
 * 		    Javier Alexis Orozco - 1663928
 * 		    Daniel Mejia - 1663916
 * 
 * Archivo: main.cpp
 * Descripción: Este archivo contiene las definiciones del programa implementado
 * Fecha: 03 de Mayo de 2017
 * Modificación: 03 de Mayo de 2017
 */

#include <iostream>
#include <string>
#include "Fecha.h"

using namespace std;


int main(){
	
	Fecha * fecha1 = new Fecha( 2, 21, true, 6, "Junio", "Jueves", 2);
	Fecha * fecha2 = new Fecha( 3, 20, false, 4, "Abril", "Sabado", 8);
	Fecha * fecha3 = new Fecha( 3, 16, true, 11, "Noviembre", "Viernes", 9);
	
	
	cout << "La fecha 1 corresponde al mes de: " << fecha1->getNombreMes() << endl;
	cout << "La fecha 2 tiene el día: " << fecha2->getNumeroDia() << " del mes " << fecha2->getNombreMes() << endl;
	cout << "La fecha 3 tiene el mes: " << fecha3->getNombreMes() << " y el día asignado es un " << fecha3->getNombreDia() << endl;
	
	cout << endl;
	
	fecha1->setNombreMes("Agosto");
	
	cout << "Ahora la fecha 1 tiene asignado el mes de: " << fecha1->getNombreMes() << endl;
	
	fecha2->setNombreDia("Miercoles");
	fecha2->setNumeroDia(10);
	fecha2->setNombreMes("Julio");
	
	cout << endl;
	
	cout << "Ahora la fecha 2 tiene como mes " << fecha2->getNombreMes() << " dia " << fecha2->getNumeroDia() << " y es un " << fecha2->getNombreDia() << endl;
	
}
