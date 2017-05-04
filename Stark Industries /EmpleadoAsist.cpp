#include "EmpleadoAsist.h"

EmpleadoAsist::EmpleadoAsist(string nombreIn, int edadIn, double salarioIn, int numSeccionTrabIn, string asociaSindicalIn):Empleado(string nombreIn, int edadIn, double salarioIn){
	
	nombre = nombreIn;
	edad = edadIn;
	salario = salarioIn;
	numSeccionTrab = numSeccionTrabIn;
	asociaSindical = asociaSindicalIn;
	
	}
	
int EmpleadoAsist::getNumSeccionTrab(){
	
	return numSeccionTrab;
	
	}
	
string EmpleadoAsist::getAsociaSindical(){
	
	return asociaSindical;
	
	}

EmpleadoAsist::~EmpleadoAsist(){
	
	
	}			
