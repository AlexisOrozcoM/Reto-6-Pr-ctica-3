#ifndef EMPLEADOOF_H
#define EMPLEADOOF_H
#include <string>
#include "EmpleadoAsist.h"

using std::string;

class EmpleadoOf{
	
	protected:
		string nombreJefe;
		string descripcionLab;
		
	public:
		EmpleadoOf(string nombreJefeIn, string descripcionLabIn);
		~EmpleadoOf();
		
		string getNombreJefe();
		string getDescripcionLab();



};

#endif
