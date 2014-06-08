#include <iostream>
#pragma once

/*Clase que trabaja con los datos de la persona o paciente*/
class paciente{
	std::string name;
	int codigo;
	int edad;

public:
	paciente(std::string name,int cd,int age){
		nombre=name;
		codigo=cd;
		edad=age;
	}

};
