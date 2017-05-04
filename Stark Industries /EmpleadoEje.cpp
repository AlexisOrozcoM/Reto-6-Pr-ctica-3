#include "EmpleadoEje.h"


EmpleadoEje::EmpleadoEje(string nombreIn, int edadIn, double salarioIn,int numEmpleadosIn, int numOficinaIn):Empleado(string nombreIn, int edadIn, double salarioIn){
	
	nombre = nombreIn;
	edad = edadIn;
	salario = salarioIn;
	numEmpleados = numEmpleadosIn;
	numOficina = numOficinaIn;
	
	}
	
int EmpleadoEje::getNumEmpleados(){
	
	return numEmpleados;
	
	}
	
int EmpleadoEje::getNumOficina(){
	
	return numOficina;
	
	}
	
EmpleadoEje::~EmpleadoEje(){
	
	}			
