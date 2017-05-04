#include "Empleado.h"

Empleado::Empleado(string nombre, int edad, double salario){
	
	this->nombre = nombre;
	this->edad = edad;
	this->salario = salario;
	
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
