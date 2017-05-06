/*
 *Autor: Veronica Montaño
 *Archivo: Empleado.cpp
 *Descripción: Clase que implementa objeto Empleado
 *Fecha: 04-05-1017
 *Fecha modificación: 05-05-2017
 */
 
#include "Empleado.h"

Empleado::Empleado(string nombreIn, int edadIn, double salarioIn){
	nombre=nombreIn;
	edad=edadIn;
	salario=salarioIn;
}

Empleado::~Empleado(){
}

string Empleado::getNombre(){
	return nombre;
}

int Empleado::getEdad(){
	return edad;
}

double Empleado::getSalario(){
	return salario;
}

void Empleado::setNombre(string nombreIn){
	nombre=nombreIn;
}

void Empleado::setEdad(int edadIn){
	edad=edadIn;
}

void Empleado::setSalario(double salarioIn){
	salario=salarioIn;
}
