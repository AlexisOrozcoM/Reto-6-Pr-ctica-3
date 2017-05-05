/*
 * Autores:	Carlos Daniel Marin -1663787;
 * 		    Javier Alexis Orozco - 1663928
 * 		    Daniel Mejia - 1663916
 * 
 * Archivo: main.cpp
 * Descripción: Este archivo contiene las definiciones del programa implementado
 * Fecha: 04 de Mayo de 2017
 * Modificación: 04 de Mayo de 2017
 */


#include <iostream>
#include "EmpleadoEjecutivo.h"
#include "EmpleadoOficina.h"
#include "EmpleadoOperativo.h"

using namespace std;

int main(){
	
	EmpleadoEjecutivo * objEmpleadoEjecutivo1 = new EmpleadoEjecutivo( "Juan", 30, 1000000, 100, 302);
	
	cout << objEmpleadoEjecutivo1->getNombre() << " con " << objEmpleadoEjecutivo1->getEdad() << " años, gana " << objEmpleadoEjecutivo1->getSalario() << ". Es un empleado ejecutivo con " << objEmpleadoEjecutivo1->getNumeroEmpleadosACargo() << " empleados a cargo y está en la oficina " << objEmpleadoEjecutivo1->getNumeroOficina() << endl;
	
	
	EmpleadoEjecutivo * objEmpleadoEjecutivo2 = new EmpleadoEjecutivo( "Pedro", 60, 1500000, 200, 102);
	
	cout << endl;
	cout << objEmpleadoEjecutivo2->getNombre() << " con " << objEmpleadoEjecutivo2->getEdad() << " años, gana " << objEmpleadoEjecutivo2->getSalario() << ". Es un empleado ejecutivo con " << objEmpleadoEjecutivo2->getNumeroEmpleadosACargo() << " empleados a cargo y está en la oficina " << objEmpleadoEjecutivo2->getNumeroOficina() << endl;
	
	
	EmpleadoOficina * objEmpleadoOficina1 = new EmpleadoOficina( "Alberta", 40, 10000, "2A", "SintraStark", "Pedro", "realizar la contabilidad de su sección");
	
	cout << endl;
	cout << objEmpleadoOficina1->getNombre() << " es una empleada asistente, de " << objEmpleadoOficina1->getEdad() << " años, gana " << objEmpleadoOficina1->getSalario() << ", trabaja en la sección " << objEmpleadoOficina1->getNumeroSeccionTrabajo() << " y pertenece a la asociación " << objEmpleadoOficina1->getAsociacionSindical() << " . Es una empleada de oficina cuyo jefe es " << objEmpleadoOficina1->getNombreJefe() << " y se ocupa de " << objEmpleadoOficina1->getDescripcionLabores() << endl;
	
	
	EmpleadoOperativo * objEmpleadoOperativo1 = new EmpleadoOperativo( "Carlos", 20, 50000, "4F", "SintraStark", "realizar el aseo a la sección 4F");
	
	cout << endl;
	cout << objEmpleadoOperativo1->getNombre() << " es un empleado de " << objEmpleadoOperativo1->getEdad() << " años, tiene un salario de " << objEmpleadoOperativo1->getSalario() << ", trabaja en la sección " << objEmpleadoOperativo1->getNumeroSeccionTrabajo() << " y pertenece a la asociación " << objEmpleadoOperativo1->getAsociacionSindical() << ". Es un empleado operativo, cuya actividad es " << objEmpleadoOperativo1->getDescripcionActividad() << endl;
	
	
	
}
