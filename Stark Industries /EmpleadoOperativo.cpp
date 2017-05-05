/*
 * Nombre del archivo: EmpleadoOperativo.cpp
 * Descripcion: Este archivo define la clase EmpleadoOperativo
 * 
 * Autores: Carlos Daniel Marin -1663787;
 * 		    Javier Alexis Orozco - 1663928
 * 		    Daniel Mejia - 1663916
 * 
 * Fecha de creacion: 04 / Mayo / 2017 
 * Ultima fecha de modificacion: 04 / Mayo / 2017
 */


#include "EmpleadoOperativo.h"


EmpleadoOperativo::EmpleadoOperativo(string nombreIn, int edadIn, int salarioIn, string numeroSeccionTrabajoIn,
										 string asociacionSindicalIn, string descripcionActividadIn): EmpleadoAsistente(nombreIn, edadIn, salarioIn,
																									  numeroSeccionTrabajo, asociacionSindical){
	nombre = nombreIn;
	edad = edadIn;
	salario = salarioIn;
	numeroSeccionTrabajo = numeroSeccionTrabajoIn;
	asociacionSindical = asociacionSindicalIn;
	descripcionActividad = descripcionActividadIn;
}
	
string EmpleadoOperativo::getDescripcionActividad(){
	
	return descripcionActividad;
}
	
void EmpleadoOperativo::setDescripcionActividad(string descripcionActividadIn){
	
	descripcionActividad = descripcionActividadIn;
}
	
EmpleadoOperativo::~EmpleadoOperativo(){
		
}
