/*
 * Nombre del archivo: Mes.cpp
 * Descripcion: Este archivo define la clase Dia
 * 
 * Autores: Carlos Daniel Marin -1663787;
 * 		    Javier Alexis Orozco - 1663928
 * 		    Daniel Mejia - 1663916
 * 
 * Fecha de creacion: 03 / Mayo / 2017 
 * Ultima fecha de modificacion: 03 / Mayo / 2017
 */

#include "Dia.h"

Dia::Dia(string nombreIn, int numeroIn){
	
	nombre = nombreIn;
	numero = numeroIn;
}
	


//Getters & Setters

string Dia::getNombre(){
		
		return nombre;
}
	
int	 Dia::getNumero(){
	
	return numero;
}
	
void Dia::setNombre(string nombreIn){
	
	nombre = nombreIn;
}

void Dia::setNumero(int numeroIn){
	
	numero = numeroIn;
}
	

//Destructor
	
Dia::~Dia(){
}
