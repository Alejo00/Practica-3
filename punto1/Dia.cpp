/*
 * Autores:Alejandro Reyes, Veronica Montaño
 * Archivo:Dia.cpp
 * Descripcion:Define la clase Dia
 */

#include "Dia.h"

Dia::Dia(string nombreIn, int numeroIn){
	nombre=nombreIn;
	numero=numeroIn;
}

Dia::~Dia(){}

string Dia::getNombre(){
	return nombre;
}

int Dia::getNumero(){
	return numero;
}
		
void Dia::setNombre(string nombreIn){
	nombre=nombreIn;
}

void Dia::setNumero(int numeroIn){
	numero=numeroIn;
}
