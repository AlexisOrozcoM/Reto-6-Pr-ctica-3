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
		EmpleadoAsist(string nombre, int edad, double salario,
		int numSeccionTrab, string asociaSindical);
		~EmpleadoAsist();
		
		int getNumSeccionTrab();
		string getAsociaSindical();
			
	
};

#endif
