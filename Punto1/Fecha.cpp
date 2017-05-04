/*
 * Nombre del archivo: Fecha.cpp
 * Descripcion: Este archivo define la clase Fecha
 * 
 * Autores: Carlos Daniel Marin -1663787;
 * 		    Javier Alexis Orozco - 1663928
 * 		    Daniel Mejia - 1663916
 * 
 * Fecha de creacion: 03 / Mayo / 2017 
 * Ultima fecha de modificacion: 03 / Mayo / 2017
 */

#include "Fecha.h"


Fecha::Fecha(int numeroA, int sigloA, bool biciestoA, int numeroM, string nombreM, string nombreD, int numeroD){
	
	//Se crean los objetos
	
	
	objAge = new Age(numeroA, sigloA, biciestoA);
	objMes = new Mes(numeroM, nombreM);
	objDia = new Dia(nombreD, numeroD);

}



//Getters & Setters Age

int Fecha::getNumeroAge(){
	
	return objAge->getNumero();
}


int Fecha::getSigloAge(){
	
	return objAge->getSiglo();
}


bool Fecha::getBiciestoAge(){
	
	return objAge->getBiciesto();
}



void Fecha::setNumeroAge(int numeroIn){
	
	objAge->setNumero(numeroIn);
}

void Fecha::setSigloAge(int sigloIn){
	
	objAge->setSiglo(sigloIn);
}

void Fecha::setBiciestoAge(bool biciestoIn){
	
	objAge->setBiciesto(biciestoIn);
}



//Getters & Setters Mes

int Fecha::getNumeroMes(){
	
	return objMes->getNumero();
}


string Fecha::getNombreMes(){
	
	return objMes->getNombre();
}


void Fecha::setNumeroMes(int numeroIn){
	
	objMes->setNumero(numeroIn);
}

void Fecha::setNombreMes(string nombreIn){
	
	objMes->setNombre(nombreIn);
}



//Getters & Setters Dia

string Fecha::getNombreDia(){
	
	return objDia->getNombre();
}

int Fecha::getNumeroDia(){
	
	return objDia->getNumero();
}

void Fecha::setNombreDia(string nombreIn){
	
	objDia->setNombre(nombreIn);
}

void Fecha::setNumeroDia(int numeroIn){
	
	objDia->setNumero(numeroIn);
}



//Destructor

Fecha::~Fecha(){
	
	delete objAge;
	delete objMes;
	delete objDia;
}
