/*
 * Cabecera objeto Dia
 */

#ifndef DIA_H
#define DIA_H

#include <string>

using std::string;

/*
 * Se define la clase Dia
 */

class Dia{
	
	private:
	
	string nombre;
	int numero;
	
	
	public:
	
	Dia(string nombreIn, int numeroIn);
	
	string getNombre();
	int getNumero();
	
	void setNombre(string nombreIn);
	void setNumero(int numeroIn);
	
	~Dia();
	
};
#endif	
