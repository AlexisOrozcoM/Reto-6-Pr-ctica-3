#ifndef EMPLEADOOP_H
#define EMPLEADOOP_H
#include <string>
#include "EmpleadoAsist.h"

using std::string;

class EmpleadoOp{
	
	protected:
		string descripcionAct;
		
	public:
		EmpleadoOp(string descripcionAct);
		~EmpleadoOp();
		
		string getDescripcionAct();



};

#endif
