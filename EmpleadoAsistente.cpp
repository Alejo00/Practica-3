/*
 *Autor: Veronica Montaño
 *Archivo: EmpleadoAsistente.cpp
 *Descripción: Clase que implementa objeto EmpleadoAsistente
 *Fecha: 04-05-1017
 *Fecha modificación: 05-05-2017
 */
 
#include "EmpleadoAsistente.h"

EmpleadoAsistente::EmpleadoAsistente(string numSeccionIn, string asoSindicalIn, string nombreIn, int edadIn, double salarioIn):Empleado(nombreIn, edadIn, salarioIn){
	
	this->numeroSeccion=numSeccionIn;
	this->asociacionSindical=asoSindicalIn;
}

EmpleadoAsistente::~EmpleadoAsistente(){
}

string EmpleadoAsistente::getNumeroSeccion(){
	return numeroSeccion;
}

string EmpleadoAsistente::getAsociacionSindical(){
	return asociacionSindical;
}

void EmpleadoAsistente::setNumeroSeccion(string numSeccionIn){
	this->numeroSeccion=numSeccionIn;
}

void EmpleadoAsistente::setAsociacionSindical(string asoSindicalIn){
	this->asociacionSindical=asoSindicalIn;
}
