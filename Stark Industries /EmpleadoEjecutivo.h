
#ifndef EMPLEADOEJECUTIVO_H
#define EMPLEADOEJECUTIVO_H

#include "Empleado.h"
#include <string>

using std::string;



class EmpleadoEjecutivo: public Empleado{

		private:
		
		int numeroEmpleadosACargo;
		int numeroOficina;
		
		public:
		
		EmpleadoEjecutivo(string nombreIn, int edadIn, int salarioIn, int numeroEmpleadosACargoIn, int numeroOficinaIn);
		
		int getNumeroEmpleadosACargo();
		int getNumeroOficina();
		
		void setNumeroEmpleadosACargo(int numeroEmpleadosACargoIn);
		void setNumeroOficina(int numeroOficinaIn);
		
		~EmpleadoEjecutivo();
};
#endif
