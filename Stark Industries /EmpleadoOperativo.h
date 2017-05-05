
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
