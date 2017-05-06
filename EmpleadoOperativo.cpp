/*
 *Autor: Veronica Montaño
 *Archivo: EmpleadoOperativo.cpp
 *Descripción: Clase que implementa objeto EmpleadoOperativo
 *Fecha: 04-05-1017
 *Fecha modificación: 05-05-2017
 */
 
#include "EmpleadoOperativo.h"


EmpleadoOperativo::EmpleadoOperativo(string actividadIn, string numSeccionIn, string asoSindicalIn,string nombreIn, int edadIn, double salarioIn) :EmpleadoAsistente(numSeccionIn, asoSindicalIn, nombreIn, edadIn, salarioIn){
	
	this->actividad=actividadIn;
}

EmpleadoOperativo::~EmpleadoOperativo(){
}

string EmpleadoOperativo::getActividad(){
	return actividad;
}


void EmpleadoOperativo::setActividad(string actividadIn){
	this->actividad=actividadIn;
}

