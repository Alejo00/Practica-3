/*
 * Autores:Alejandro Reyes, Veronica Montaño
 * Archivo:Dia.h
 * Descripcion:cabecera del objeto Dia
 */

#ifndef DIA_H
#define DIA_H
#include <string>
using std::string;

class Dia{
	private:
		string nombre;
		int numero;
	
	public:
		Dia(string nombreIn, int numeroIn);
		~Dia();
		
		string getNombre();
		int getNumero();
		
		void setNombre(string nombreIn);
		void setNumero(int numeroIn);
	
};
#endif
