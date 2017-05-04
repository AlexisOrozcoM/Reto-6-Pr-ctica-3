/*
 * Cabecera objeto Mes
 */


#ifndef MES_H
#define MES_H

#include <string>
using std::string;


/*
 * Se define la clase Mes
 */



class Mes{
	
	private:
	
	int numero;
	string nombre;
	
	public:
	
	Mes(int numeroIn, string nombreIn);
	
	int getNumero();
	string getNombre();
	
	void setNumero(int numeroIn);
	void setNombre(string nombreIn);
	
	
	~Mes();
	
};
#endif
