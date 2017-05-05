/*
 * Nombre del archivo: Empleado.h
 * Descripcion: se crea la clase empleado
 * 
 * Autores: Carlos Daniel Marin -1663787;
 * 		    Javier Alexis Orozco - 1663928
 * 		    Daniel Mejia - 1663916
 * 
 * Fecha de creacion: 04 / Mayo / 2017 
 * Ultima fecha de modificacion: 04 / Mayo / 2017
 */
#ifndef EMPLEADO_H
#define EMPLEADO_H


#include <string>

using std::string;


class Empleado{
	
	protected:
	
	string nombre;
	int edad;
	int salario;
	
	public:
	
	Empleado(string nombreIn, int edadIn, int salarioIn);
	
	string getNombre();
	int getEdad();
	int getSalario();
	
	void setNombre(string nombreIn);
	void setEdad(int edadIn);
	void setSalario(int salarioIn);
	
	~Empleado();

};
#endif
