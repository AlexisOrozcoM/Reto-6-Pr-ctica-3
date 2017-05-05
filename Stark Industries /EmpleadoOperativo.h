/*
 * Nombre del archivo: EmpleadoOperativo.h
 * Descripcion: se crea la clase EmpleadoOperativo
 * 
 * Autores: Carlos Daniel Marin -1663787;
 * 		    Javier Alexis Orozco - 1663928
 * 		    Daniel Mejia - 1663916
 * 
 * Fecha de creacion: 04 / Mayo / 2017 
 * Ultima fecha de modificacion: 04 / Mayo / 2017
 */
#ifndef EMPLEADOOPERATIVO_H
#define EMPLEADOOPERATIVO_H

#include <string>
#include "EmpleadoAsistente.h"

using std::string;


class EmpleadoOperativo: public EmpleadoAsistente{

	private:
	
	string descripcionActividad;
	
	
	public:
	
	EmpleadoOperativo(string nombreIn, int edadIn, int salarioIn, string numeroSeccionTrabajoIn,
						string asociacionSindicalIn,  string descripcionActividadIn);
	
	string getDescripcionActividad();
	
	void setDescripcionActividad(string descripcionActividadIn);
	
	~EmpleadoOperativo();
	
};
#endif
