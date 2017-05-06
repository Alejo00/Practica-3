/*
 * Autores:Alejandro Reyes, Veronica Montaño
 * Archivo:Mes.h
 * Descripcion:cabecera del objeto Mes
 */

#ifndef MES_H
#define MES_H
#include <string>
using std::string;

class Mes{
	private:
		string nombre;
		int numero;
	
	public:
		Mes(string nombreIn, int numeroIn);
		~Mes();
		
		string getNombre();
		int getNumero();
		
		void setNombre(string nombreIn);
		void setNumero(int numeroIn);
	
};
#endif
