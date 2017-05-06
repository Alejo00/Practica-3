/*
 *Autor: Carlos Andres Delgado
 *Archivo: main.cpp
 *Descripción: Archivo principal del programa
 *Fecha: 02-Octubre-2016
 *Fecha modificación: 04 de Octubre de 2016 
 */
#include <iostream>
#include <string>
#include "Empleado.h"
#include "EmpleadoEjecutivo.h"
#include "EmpleadoAsistente.h"
#include "EmpleadoOficina.h"
#include "EmpleadoOperativo.h"

using namespace std;

int main(int argc, char * argv[]){
	
	EmpleadoEjecutivo * objEmpleadoJuan= new EmpleadoEjecutivo(100, 302, "Juan", 30, 1000000);
	EmpleadoEjecutivo * objEmpleadoPedro=new EmpleadoEjecutivo(200, 102, "Pedro", 60, 1500000);
	EmpleadoOficina * objEmpleadoAlberta=new EmpleadoOficina("Pedro", "realizar la contabilidad de su sección", "2A", "SintraStark", "Alberta", 40, 10000); 
	EmpleadoOperativo * objEmpleadoCarlos=new EmpleadoOperativo("Realizar el aseo a la sección 4F", "4F", "SintraStark", "Carlos", 20, 50000);
	
	
	cout << objEmpleadoJuan->getNombre()<< ", con "<< objEmpleadoJuan->getEdad()<< " años, gana "<< objEmpleadoJuan->getSalario()<<". Es un empleado ejecutivo con "<< objEmpleadoPedro->getNumeroEmpleados()<< " empleados a su cargo  y  está en la oficina "<< objEmpleadoJuan->getNumeroDeOficina()<<endl;
	
	cout << objEmpleadoPedro->getNombre()<< ", con "<< objEmpleadoPedro->getEdad()<< " años, gana "<< objEmpleadoPedro->getSalario()<<". Es un empleado ejecutivo con "<< objEmpleadoJuan->getNumeroEmpleados()<< " empleados a su cargo  y  está en la oficina "<< objEmpleadoPedro->getNumeroDeOficina()<<endl;
	
	cout<< objEmpleadoAlberta->getNombre()<< "es una empleada asistente, de " << objEmpleadoAlberta->getEdad()<< " años, gana "<<objEmpleadoAlberta->getSalario()<<", trabaja en la sección "<< objEmpleadoAlberta->getNumeroSeccion()<< " y pertenece a la asociación "<< objEmpleadoAlberta->getAsociacionSindical()<<". Es una empleada de oficina cuyo jefe es "<< objEmpleadoAlberta->getNombreJefe()<< " y se ocupa de "<< objEmpleadoAlberta->getLabores()<<endl;
	
	cout<< objEmpleadoCarlos->getNombre()<< ", es un empleado, de "<< objEmpleadoCarlos->getEdad()<< " años, tiene un salario de "<<objEmpleadoCarlos->getSalario()<<", trabaja en la sección "<< objEmpleadoCarlos->getNumeroSeccion()<< " y pertenece a la asociación "<<objEmpleadoCarlos->getAsociacionSindical()<< ". Es un empleado operativo, cuya actividad es "<< objEmpleadoCarlos->getActividad()<<endl;
	
	
}
