/*
 * Cabecera objeto Fecha 
 */

#ifndef FECHA_H
#define FECHA_H

#include "Dia.h"
#include "Mes.h"
#include "Age.h"


/*
 * A continuación se define la clase Fecha
 */

class Fecha{
	
	private:
	
	Age * objAge;
	Mes * objMes;
	Dia * objDia;
	
	
	public:
	
	Fecha(int numeroA, int sigloA, bool biciestoA, int numeroM, string nombreM, string nombreD, int numeroD);
	
	
	//Age
	
	int getNumeroAge();
	int getSigloAge();
	bool getBiciestoAge();
	
	void setNumeroAge(int numeroIn);
	void setSigloAge(int sigloIn);
	void setBiciestoAge(bool biciestoIn);
	
	
	//Mes
	
	int getNumeroMes();
	string getNombreMes();
	
	void setNumeroMes(int numeroIn);
	void setNombreMes(string nombreIn);
	
	
	//Dia
	
	string getNombreDia();
	int getNumeroDia();
	
	void setNombreDia(string nombreIn);
	void setNumeroDia(int numeroIn);
	
	
	~Fecha();
};
#endif	
