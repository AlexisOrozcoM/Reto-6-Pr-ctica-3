/*
 * Nombre del archivo: EmpleadoAsistente.cpp
 * Descripcion: Este archivo define la clase EmpleadoAsistente
 * 
 * Autores: Carlos Daniel Marin -1663787;
 * 		    Javier Alexis Orozco - 1663928
 * 		    Daniel Mejia - 1663916
 * 
 * Fecha de creacion: 04 / Mayo / 2017 
 * Ultima fecha de modificacion: 04 / Mayo / 2017
 */

#include "EmpleadoAsistente.h"


EmpleadoAsistente::EmpleadoAsistente(string nombreIn, int edadIn, int salarioIn, string numeroSeccionTrabajoIn, 
										 string asociacionSindicalIn): Empleado(nombreIn, edadIn, salarioIn){
	
	nombre = nombreIn;
	edad = edadIn;
	salario = salarioIn;
	numeroSeccionTrabajo = numeroSeccionTrabajoIn;
	asociacionSindical = asociacionSindicalIn;
}
	
	
string EmpleadoAsistente::getNumeroSeccionTrabajo(){
	
	return numeroSeccionTrabajo;
}
	
string EmpleadoAsistente::getAsociacionSindical(){
	
	return asociacionSindical;
}
	
	
void EmpleadoAsistente::setNumeroSeccionTrabajo(string numeroSeccionTrabajoIn){
	
	numeroSeccionTrabajo = numeroSeccionTrabajoIn;
}


void EmpleadoAsistente::setAsociacionSindical(string asociacionSindicalIn){
	
	asociacionSindical = asociacionSindicalIn;
}
	
EmpleadoAsistente::~EmpleadoAsistente(){
		
}
