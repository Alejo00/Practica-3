/*
 * Archivo de cabecera clase Empleado
 */
 
 #ifndef EMPLEADO_H
 #define EMPLEADO_H
#include <string>
using std::string; 
 /*
  *Definición clase Empleado
  */
  
class Empleado{

	//Los datos protegido sólo pueden ser vistos por esta clase y por los que heredan de ella
	protected:
		string nombre;
        int edad;
        double salario;
	
	public:
		Empleado(string nombreIn, int edadIn, double salarioIn);
		~Empleado();
		
		string getNombre();
		int getEdad();
		double getSalario();
		
		void setNombre(string nombreIn);
		void setEdad(int edadIn);
		void setSalario(double salarioIn);
	 
};
#endif
