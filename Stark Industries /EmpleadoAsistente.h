
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
