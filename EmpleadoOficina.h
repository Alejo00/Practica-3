/*
 * Archivo de cabecera clase EmpleadoOficina
 */
 
#ifndef EMPLEADOOFICINA_H
#define EMPLEADOOFICINA_H
#include "EmpleadoAsistente.h"
#include <string>
using std::string; 


 /*
  *Definición clase EmpleadoOficina
  */
  
class EmpleadoOficina: public EmpleadoAsistente{

	
	private:
		string nombreJefe;
        string labores;
        
	
	public:
		EmpleadoOficina(string nomJefeIn, string laboresIn, string numSeccionIn, string asoSindicalIn, string nombreIn, int edadIn, double salarioIn);
		~EmpleadoOficina();
		
		string getNombreJefe();
		string getLabores();
		
		
		void setNombreJefe(string nomJefeIn);
		void setLabores(string laboresIn);
	 
};
#endif
