/*
 *Autor: Veronica Montaño
 *Archivo: EmpleadoEjecutivo.cpp
 *Descripción: Clase que implementa objeto EmpleadoEjecutivo
 *Fecha: 04-05-1017
 *Fecha modificación: 05-05-2017
 */
 
#include "EmpleadoEjecutivo.h"


EmpleadoEjecutivo::EmpleadoEjecutivo(int numEmpleadosIn, int numOficinaIn, string nombreIn, int edadIn, double salarioIn) :Empleado(nombreIn, edadIn, salarioIn){
	
	this->numeroEmpleados=numEmpleadosIn;
	this->numeroDeOficina=numOficinaIn;
}

EmpleadoEjecutivo::~EmpleadoEjecutivo(){
}

int EmpleadoEjecutivo::getNumeroEmpleados(){
	return numeroEmpleados;
}

int EmpleadoEjecutivo::getNumeroDeOficina(){
	return numeroDeOficina;
}

void EmpleadoEjecutivo::setNumeroEmpleados(int numEmpleadosIn){
	this->numeroEmpleados=numEmpleadosIn;
}

void EmpleadoEjecutivo::setNumeroDeOficina(int numOficinaIn){
	this->numeroDeOficina=numOficinaIn;
}
