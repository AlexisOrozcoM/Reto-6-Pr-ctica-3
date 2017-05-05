/*
 * Nombre del archivo: Empleado.cpp
 * Descripcion: Este archivo define la clase Empleado
 * 
 * Autores: Carlos Daniel Marin -1663787;
 * 		    Javier Alexis Orozco - 1663928
 * 		    Daniel Mejia - 1663916
 * 
 * Fecha de creacion: 04 / Mayo / 2017 
 * Ultima fecha de modificacion: 04 / Mayo / 2017
 */


#include "Empleado.h"


Empleado::Empleado(string nombreIn, int edadIn, int salarioIn){
	
	nombre = nombreIn;
	edad = edadIn;
	salario = salarioIn;
}
	
	
string Empleado::getNombre(){
	
	return nombre;
}

int Empleado::getEdad(){
	
	return edad;
}
	
int Empleado::getSalario(){
	
	return salario;
}
	
	
void Empleado::setNombre(string nombreIn){
	
	nombre = nombreIn;
}
	
void Empleado::setEdad(int edadIn){
	
	edad = edadIn;
}
	
void Empleado::setSalario(int salarioIn){
	
	salario = salarioIn;
}
	
Empleado::~Empleado(){
		
}
