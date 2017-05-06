/*
 * Autores:Alejandro Reyes, Veronica Montaño
 * Archivo:Fecha.cpp
 * Descripcion:Define la clase Fecha
 */
 
 #include "Fecha.h"
 
Fecha::Fecha(string nombreD, int numeroD, string nombreM, int numeroM, int numeroA, int sigloA, bool bisiestoA){
	objDia=new Dia (nombreD, numeroD);
	objMes=new Mes (nombreM, numeroM);
	objAge=new Age (numeroA, sigloA, bisiestoA);
}

Fecha::~Fecha(){
	delete objDia;
	delete objMes;
	delete objAge;
}
//Dia
string Fecha::getNombreD(){
	return objDia->getNombre();
}

int Fecha::getNumeroD(){
	return objDia->getNumero();
}
		
void Fecha::setNombreD(string nombreIn){
	objDia->setNombre(nombreIn);
}

void Fecha::setNumeroD(int numeroIn){
	objDia->setNumero(numeroIn);
}

//Mes
string Fecha::getNombreM(){
	return objMes->getNombre();
}

int Fecha::getNumeroM(){
	return objMes->getNumero();
}
		
void Fecha::setNombreM(string nombreIn){
	objMes->setNombre(nombreIn);
}

void Fecha::setNumeroM(int numeroIn){
	objMes->setNumero(numeroIn);
}

//Age
int Fecha::getNumeroA(){
	return objAge->getNumero();
}

int Fecha::getSigloA(){
	return objAge->getSiglo();
}

bool Fecha::getBisiestoA(){
	return objAge->getBisiesto();
}
		
void Fecha::setNumeroA(int numeroIn){
	objAge->setNumero(numeroIn);
}

void Fecha::setSigloA(int sigloIn){
	objAge->setSiglo(sigloIn);
}

void Fecha::setBisiestoA(bool bisiestoIn){
	objAge->setBisiesto(bisiestoIn);
}
