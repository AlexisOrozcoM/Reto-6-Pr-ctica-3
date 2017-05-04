/*
 * Cabecera objeto Age
 */

#ifndef AGE_H
#define AGE_H

/*
 * Se define la clase Age
 */

class Age{
	
	private:
	
	int numero;
	int siglo;
	bool biciesto;
	
	
	public:
	
	Age (int numeroIn, int sigloIn, bool biciestoIn);
	
	int getNumero();
	int getSiglo();
	bool getBiciesto();
	
	void setNumero(int numeroIn);
	void setSiglo(int sigloIn);
	void setBiciesto(bool biciestoIn);
	
	~Age();
	
	
};
#endif
