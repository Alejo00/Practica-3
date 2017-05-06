/*
 *Autor: Veronica Montaño
 *Archivo: EmpleadoOficina.cpp
 *Descripción: Clase que implementa objeto EmpleadoOficina
 *Fecha: 04-05-1017
 *Fecha modificación: 05-05-2017
 */
 
#include "EmpleadoOficina.h"


EmpleadoOficina::EmpleadoOficina(string nomJefeIn, string laboresIn, string numSeccionIn, string asoSindicalIn,string nombreIn, int edadIn, double salarioIn) :EmpleadoAsistente(numSeccionIn, asoSindicalIn, nombreIn, edadIn, salarioIn){
	
	this->nombreJefe=nomJefeIn;
	this->labores=asoSindicalIn;
}

EmpleadoOficina::~EmpleadoOficina(){
}

string EmpleadoOficina::getNombreJefe(){
	return nombreJefe;
}

string EmpleadoOficina::getLabores(){
	return labores;
}

void EmpleadoOficina::setNombreJefe(string nomJefeIn){
	this->nombreJefe=nomJefeIn;
}

void EmpleadoOficina::setLabores(string laboresIn){
	this->labores=laboresIn;
}
