/*
 * Nombre del archivo: Age.cpp
 * Descripcion: Este archivo define la clase Age
 * 
 * Autores: Carlos Daniel Marin -1663787;
 * 		    Javier Alexis Orozco - 1663928
 * 		    Daniel Mejia - 1663916
 * 
 * Fecha de creacion: 03 / Mayo / 2017 
 * Ultima fecha de modificacion: 03 / Mayo / 2017
 */

#include "Age.h"


Age::Age(int numeroIn, int sigloIn, bool biciestoIn){
	
	numero = numeroIn;
	siglo = sigloIn;
	biciesto = biciestoIn;
}


//Getters & Setters
	
int Age::getNumero(){
	
	return numero;
}


int Age::getSiglo(){
	
	return siglo;
}
	
	
bool Age::getBiciesto(){
	
	return biciesto;
}

	

void Age::setNumero(int numeroIn){
	
	numero = numeroIn;
}


void Age::setSiglo(int sigloIn){
	
	siglo = sigloIn;
}


void Age::setBiciesto(bool biciestoIn){

		biciesto = biciestoIn;
}
	

// Destructor

Age::~Age(){

}
