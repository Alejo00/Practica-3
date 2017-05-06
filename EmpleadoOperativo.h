/*
 * Archivo de cabecera clase EmpleadoOficina
 */
 
#ifndef EMPLEADOOPERATIVO_H
#define EMPLEADOOPERATIVO_H
#include "EmpleadoAsistente.h"
#include <string>
using std::string; 


 /*
  *Definición clase EmpleadoOperativo
  */
  
class EmpleadoOperativo: public EmpleadoAsistente{

	
	private:
		string actividad;
        
	
	public:
		EmpleadoOperativo(string actividadIn, string numSeccionIn, string asoSindicalIn, string nombreIn, int edadIn, double salarioIn);
		~EmpleadoOperativo();
		
		string getActividad();
		
		
		void setActividad(string actividadIn);
	
};
#endif
