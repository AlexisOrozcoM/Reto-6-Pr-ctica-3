#include "EmpleadoEje.h"


EmpleadoEje::EmpleadoEje(string nombre, int edad, double salario,int numEmpleados, int numOficina):Empleado(nombre, edad, salario){
	
	this->nombre = nombre;
	this->edad = edad;
	this->salario = salario;
	this->numEmpleados = numEmpleados;
	this->numOficina = numOficina;
	
	}
	
int EmpleadoEje::getNumEmpleados(){
	
	return numEmpleados;
	
	}
	
int EmpleadoEje::getNumOficina(){
	
	return numOficina;
	
	}
	
EmpleadoEje::~EmpleadoEje(){
	
	}			
