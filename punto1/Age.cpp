/*
 * Autores:Alejandro Reyes, Veronica Montaño
 * Archivo:Age.cpp
 * Descripcion:Define la clase Age
 */
 
 #include "Age.h"
 
Age::Age(int numeroIn, int sigloIn, bool bisiestoIn){
	numero=numeroIn;
	siglo=sigloIn;
	bisiesto=bisiestoIn;
}
Age::~Age(){}
		
int Age::getNumero(){
	return numero;
}

int Age::getSiglo(){
	return siglo;
}

bool Age::getBisiesto(){
	return bisiesto;
}
		
void Age::setNumero(int numeroIn){
	numero=numeroIn;
}

void Age::setSiglo(int sigloIn){
	siglo=sigloIn;
}

void Age::setBisiesto(bool bisiestoIn){
	bisiesto=bisiestoIn;
}
