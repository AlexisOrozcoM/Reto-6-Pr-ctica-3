/*
 * Nombre del archivo: EmpleadoOficina.h
 * Descripcion: se crea la clase EmpleadoOficina
 * 
 * Autores: Carlos Daniel Marin -1663787;
 * 		    Javier Alexis Orozco - 1663928
 * 		    Daniel Mejia - 1663916
 * 
 * Fecha de creacion: 04 / Mayo / 2017 
 * Ultima fecha de modificacion: 04 / Mayo / 2017
 */

#ifndef EMPLEADOOFICINA_H
#define EMPLEADOOFICINA_H

#include "EmpleadoAsistente.h"
#include <string>


using std::string;


class EmpleadoOficina: public EmpleadoAsistente{
	
	private:
	
	string nombreJefe;
	string descripcionLabores;
	
	
	public:
	
	EmpleadoOficina(string nombreIn, int edadIn, int salarioIn, string numeroSeccionTrabajoIn, 
					  string asociacionSindicalIn, string nombreJefeIn, string descripcionLaboresIn);
	
	string getNombreJefe();
	string getDescripcionLabores();
	
	void setNombreJefe(string nombreJefeIn);
	void setDescripcionLabores(string descripcionLaboresIn);
	
	~EmpleadoOficina();
	
	
	};
	#endif
