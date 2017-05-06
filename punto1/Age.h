/*
 * Autores:Alejandro Reyes, Veronica Montaño
 * Archivo:Age.h
 * Descripcion:cabecera del objeto Age
 */

#ifndef AGE_H
#define AGE_H

class Age{
	private:
		int numero;
		int siglo;
		bool bisiesto;
	
	public:
		Age(int numeroIn, int sigloIn, bool bisiestoIn);
		~Age();
		
		int getNumero();
		int getSiglo();
		bool getBisiesto();
		
		void setNumero(int numeroIn);
		void setSiglo(int sigloIn);
		void setBisiesto(bool bisiestoIn);
	
};
#endif
