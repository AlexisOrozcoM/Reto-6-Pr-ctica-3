#include "EmpleadoAsist.h"

EmpleadoAsist::EmpleadoAsist(string nombre, int edad, double salario, int numSeccionTrab, string asociaSindical):Empleado(nombre, edad, salario){
	
	this->nombre = nombre;
	this->edad = edad;
	this->salario = salario;
	this->numSeccionTrab = numSeccionTrab;
	this->asociaSindical = asociaSindical;
	
	}
	
int EmpleadoAsist::getNumSeccionTrab(){
	
	return numSeccionTrab;
	
	}
	
string EmpleadoAsist::getAsociaSindical(){
	
	return asociaSindical;
	
	}

EmpleadoAsist::~EmpleadoAsist(){
	
	
	}			
