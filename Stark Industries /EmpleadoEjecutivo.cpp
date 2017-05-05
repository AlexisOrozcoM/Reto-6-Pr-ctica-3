/*
 * Nombre del archivo: EmpleadoEjecutivo.cpp
 * Descripcion: Este archivo define la clase EmpleadoEjecutivo
 * 
 * Autores: Carlos Daniel Marin -1663787;
 * 		    Javier Alexis Orozco - 1663928
 * 		    Daniel Mejia - 1663916
 * 
 * Fecha de creacion: 04 / Mayo / 2017 
 * Ultima fecha de modificacion: 04 / Mayo / 2017
 */

#include "EmpleadoEjecutivo.h"


EmpleadoEjecutivo::EmpleadoEjecutivo(string nombreIn, int edadIn, int salarioIn, int numeroEmpleadosACargoIn,
										 int numeroOficinaIn): Empleado(nombreIn, edadIn, salarioIn){
	
	nombre = nombreIn;
	edad = edadIn;
	salario = salarioIn;
	numeroEmpleadosACargo = numeroEmpleadosACargoIn;
	numeroOficina = numeroOficinaIn;
}
		
		
int EmpleadoEjecutivo::getNumeroEmpleadosACargo(){
	
	return numeroEmpleadosACargo;
}
		
		
int EmpleadoEjecutivo::getNumeroOficina(){
	
	return numeroOficina;
}
		
		
		
void EmpleadoEjecutivo::setNumeroEmpleadosACargo(int numeroEmpleadosACargoIn){
	
	numeroEmpleadosACargo = numeroEmpleadosACargoIn;
}
		
		
void EmpleadoEjecutivo::setNumeroOficina(int numeroOficinaIn){
	
	numeroOficina = numeroOficinaIn;
}

		
		
EmpleadoEjecutivo::~EmpleadoEjecutivo(){
	
}
