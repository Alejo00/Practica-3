/*
 * Archivo de cabecera clase EmpleadoAsistente
 */
 
#ifndef EMPLEADOASISTENTE_H
#define EMPLEADOASISTENTE_H
#include "Empleado.h"
#include <string>
using std::string; 


 /*
  *Definición clase EmpleadoAsistente
  */
  
class EmpleadoAsistente:public Empleado{

	//Los datos protegido sólo pueden ser vistos por esta clase y por los que heredan de ella
	protected:
		string numeroSeccion;
        string asociacionSindical;
        
	
	public:
		EmpleadoAsistente(string numSeccionIn, string asoSindicalIn,string nombreIn, int edadIn, double salarioIn);
		~EmpleadoAsistente();
		
		string getNumeroSeccion();
		string getAsociacionSindical();
		
		
		void setNumeroSeccion(string numSeccionIn);
		void setAsociacionSindical(string asoSindicalIn);
	 
};
#endif
