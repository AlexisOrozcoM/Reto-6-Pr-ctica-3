/*
 * Nombre del archivo: EmpleadoEjecutivo.h
 * Descripcion: se crea la clase EmpleadoEjecutivo
 * 
 * Autores: Carlos Daniel Marin -1663787;
 * 		    Javier Alexis Orozco - 1663928
 * 		    Daniel Mejia - 1663916
 * 
 * Fecha de creacion: 04 / Mayo / 2017 
 * Ultima fecha de modificacion: 04 / Mayo / 2017
 */
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
