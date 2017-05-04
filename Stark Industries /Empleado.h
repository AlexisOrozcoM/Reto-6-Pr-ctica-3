#ifndef EMPLEADO_H
#define EMPLEADO_H
#include <string>

using std::string;


class Empleado{
	
	protected:
		string nombre;
		int edad;
		double salario;
		
	public:
		Empleado(string nombre, int edad, double salario);
		~Empleado();
		
		string getNombre();
		int getEdad();
		double getSalario();
		
		/*
		void setNombre(string nombre);
		void setEdad(int edad);
		void setSalario(double salario);
		*/	

};

#endif
