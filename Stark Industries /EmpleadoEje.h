#ifndef EMPLEADOEJE_H
#define EMPLEADOEJE_H
#include "Empleado.h"
#include <string>

using std::string;

class EmpleadoEje: public Empleado{

	protected:
		int numEmpleados;
		int numOficina;
		
	public:	
		EmpleadoEje(string nombreIn, int edadIn, double salarioIn,
		int numEmpleadosIn, int numOficinaIn);
		~EmpleadoEje();
		
		int getNumEmpleados();
		int getNumOficina();	
	
};

#endif
