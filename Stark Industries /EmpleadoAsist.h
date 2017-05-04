#ifndef EMPLEADOASIST_H
#define EMPLEADOASIST_H
#include <string>
#include "Empleado.h"

using std::string;

class EmpleadoAsist: public Empleado{

	protected:
		int numSeccionTrab;
		string asociaSindical;
		
	public:
		EmpleadoAsist(string nombreIn, int edadIn, double salarioIn,
		int numSeccionTrabIn, string asociaSindicalIn);
		~EmpleadoAsist();
		
		int getNumSeccionTrab();
		string getAsociaSindical();
			
	
};

#endif
