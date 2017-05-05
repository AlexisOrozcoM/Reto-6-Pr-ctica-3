/*
 * Nombre del archivo: EmpleadoAsistente.h
 * Descripcion: se crea la clase EmpleadoAsistente
 * 
 * Autores: Carlos Daniel Marin -1663787;
 * 		    Javier Alexis Orozco - 1663928
 * 		    Daniel Mejia - 1663916
 * 
 * Fecha de creacion: 04 / Mayo / 2017 
 * Ultima fecha de modificacion: 04 / Mayo / 2017
 */
#ifndef EMPLEADOASISTENTE_H
#define EMPLEADOASISTENTE_H


#include "Empleado.h"
#include <string>

using std::string;


class EmpleadoAsistente: public Empleado{
	
	protected:
	
	string numeroSeccionTrabajo;
	string asociacionSindical;
	
	
	public:
	
	EmpleadoAsistente(string nombreIn, int edadIn, int salarioIn, string numeroSeccionTrabajoIn, string asociacionSindicalIn);
	
	string getNumeroSeccionTrabajo();
	string getAsociacionSindical();
	
	void setNumeroSeccionTrabajo(string numeroSeccionTrabajoIn);
	void setAsociacionSindical(string asociacionSindicalIn);
	
	~EmpleadoAsistente();
	
	
};
#endif
