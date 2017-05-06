/*
 * Autores:Alejandro Reyes, Veronica Montaño
 * Archivo:Fecha.h
 * Descripcion:cabecera del objeto Fecha
 */

#ifndef FECHA_H
#define FECHA_H

#include "Dia.h"
#include "Mes.h"
#include "Age.h"

class Fecha{
	private:
		Dia * objDia;
		Mes * objMes;
		Age * objAge;
	
	public:
		Fecha(string nombreD, int numeroD, string nombreM, int numeroM, int numeroA, int sigloA, bool bisiestoA);
		~Fecha();
		
		//Dia
		string getNombreD();
		int getNumeroD();
		
		void setNombreD(string nombreIn);
		void setNumeroD(int numeroIn);
		
		//Mes
		string getNombreM();
		int getNumeroM();
		
		void setNombreM(string nombreIn);
		void setNumeroM(int numeroIn);
		
		//Age
		int getNumeroA();
		int getSigloA();
		bool getBisiestoA();
		
		void setNumeroA(int numeroIn);
		void setSigloA(int sigloIn);
		void setBisiestoA(bool bisiestoIn);
	
};
#endif
