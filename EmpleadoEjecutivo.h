/*
 * Archivo de cabecera clase EmpleadoEjecutivo
 */
 
#ifndef EMPLEADOEJECUTIVO_H
#define EMPLEADOEJECUTIVO_H
#include "Empleado.h"
#include <string>
using std::string; 


 /*
  *Definición clase EmpleadoEjecutivo
  */
  
class EmpleadoEjecutivo: public Empleado{

	
	private:
		int numeroEmpleados;
        int numeroDeOficina;
        
	
	public:
		EmpleadoEjecutivo(int numEmpleadosIn, int numOficinaIn,string nombreIn, int edadIn, double salarioIn);
		~EmpleadoEjecutivo();
		
		int getNumeroEmpleados();
		int getNumeroDeOficina();
		
		
		void setNumeroEmpleados(int numEmpleadosIn);
		void setNumeroDeOficina(int numOficinaIn);
	 
};
#endif
