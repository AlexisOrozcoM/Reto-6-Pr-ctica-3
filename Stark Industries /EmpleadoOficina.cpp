/*
 * Nombre del archivo: EmpleadoOficina.cpp
 * Descripcion: Este archivo define la clase EmpleadoOficina
 * 
 * Autores: Carlos Daniel Marin -1663787;
 * 		    Javier Alexis Orozco - 1663928
 * 		    Daniel Mejia - 1663916
 * 
 * Fecha de creacion: 04 / Mayo / 2017 
 * Ultima fecha de modificacion: 04 / Mayo / 2017
 */


#include "EmpleadoOficina.h"



EmpleadoOficina::EmpleadoOficina(string nombreIn, int edadIn, int salarioIn, string numeroSeccionTrabajoIn, 
									 string asociacionSindicalIn, string nombreJefeIn,
									 string descripcionLaboresIn):EmpleadoAsistente(nombreIn, edadIn, salarioIn,
									 numeroSeccionTrabajo, asociacionSindical){
	
	nombre = nombreIn;
	edad = edadIn;
	salario = salarioIn;
	numeroSeccionTrabajo = numeroSeccionTrabajoIn;
	asociacionSindical = asociacionSindicalIn;
	nombreJefe = nombreJefeIn;
	descripcionLabores = descripcionLaboresIn;
}
	
string EmpleadoOficina::getNombreJefe(){
		
	return nombreJefe;
}
	
string EmpleadoOficina::getDescripcionLabores(){
	
	return descripcionLabores;
}
	
void EmpleadoOficina::setNombreJefe(string nombreJefeIn){
	
	nombreJefe = nombreJefeIn;
}
	
void EmpleadoOficina::setDescripcionLabores(string descripcionLaboresIn){
	
	descripcionLabores = descripcionLaboresIn;
}
	
EmpleadoOficina::~EmpleadoOficina(){

}
