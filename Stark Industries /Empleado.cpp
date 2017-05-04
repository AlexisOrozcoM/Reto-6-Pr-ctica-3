#include "Empleado.h"

Empleado::Empleado(string nombreIn, int edadIn, double salarioIn){
	
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
	
double Empleado::getSalario(){
	
	return salario;
	
	}
	
Empleado::~Empleado(){
	
	}				
