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
		EmpleadoEje(string nombre, int edad, double salario,
		int numEmpleados, int numOficina);
		~EmpleadoEje();
		
		int getNumEmpleados();
		int getNumOficina();	
	
};

#endif
