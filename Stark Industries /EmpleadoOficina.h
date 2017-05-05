
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
