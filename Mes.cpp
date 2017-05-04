/*
 * Nombre del archivo: Mes.cpp
 * Descripcion: Este archivo define la clase Mes
 * 
 * Autores: Carlos Daniel Marin -1663787;
 * 		    Javier Alexis Orozco - 1663928
 * 		    Daniel Mejia - 1663916
 * 
 * Fecha de creacion: 03 / Mayo / 2017 
 * Ultima fecha de modificacion: 03 / Mayo / 2017
 */

#include "Mes.h"


Mes::Mes(int numeroIn, string nombreIn){
	
	numero = numeroIn;
	nombre = nombreIn;
}



//Getters & Setters
	
int Mes::getNumero(){
	
	return numero;
}


string Mes::getNombre(){

	return nombre;
}
	
	
void Mes::setNumero(int numeroIn){
	
	numero = numeroIn;
}

void Mes::setNombre(string nombreIn){
	nombre = nombreIn;
}


// Destructor

Mes::~Mes(){
}
