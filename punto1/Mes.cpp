/*
 * Autores:Alejandro Reyes, Veronica Montaño
 * Archivo:Mes.cpp
 * Descripcion:Define la clase Mes
 */
 
 #include "Mes.h"
 
Mes::Mes(string nombreIn, int numeroIn){
	nombre=nombreIn;
	numero=numeroIn;
}

Mes::~Mes(){}

string Mes::getNombre(){
	return nombre;
}

int Mes::getNumero(){
	return numero;
}
		
void Mes::setNombre(string nombreIn){
	nombre=nombreIn;
}

void Mes::setNumero(int numeroIn){
	numero=numeroIn;
}
