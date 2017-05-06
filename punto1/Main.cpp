/*
 * Autores:Alejandro Reyes, Veronica Montaño
 * Archivo:Fecha.cpp
 * Descripcion:Define la clase Fecha
 */
 
#include <iostream>
#include <string>
#include "Fecha.h"
 
using namespace std;
 
int main(){
	Fecha * Fecha1=new Fecha("martes", 5, "junio", 4, 2011, 21, false);
	Fecha * Fecha2=new Fecha("viernes", 5, "mayo", 5, 2017, 21, false);
	Fecha * Fecha3=new Fecha("lunes", 9, "febrero", 2, 1996, 20, true);
	
	cout<<"el mes de la primera fecha es"<<" "<<Fecha1->getNombreM()<<endl;
	cout<<"el numero del dia de la segunda fecha es"<<" "<<Fecha2->getNumeroD()<<endl;
	cout<<"el dia de la tercera fecha es"<<" "<<Fecha3->getNombreD()<<endl;
	
	Fecha2->setNumeroD(11);
	Fecha3->setNombreD("sabado");
	
	cout<<"el numero del dia de la segunda fecha es"<<" "<<Fecha2->getNumeroD()<<endl;
	cout<<"el dia de la tercera fecha es"<<" "<<Fecha3->getNombreD()<<endl;

}
 
