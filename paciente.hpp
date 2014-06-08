#include <iostream>

#pragma once

/*Clase que trabaja con los datos de la persona o paciente*/

class paciente{

	std::string nombre;
	int codigo;
	int edad;

public:

	/*Metodos*/
	//constructor
	paciente(std::string name,int cd,int age){
		nombre=name;
		codigo=cd;
		edad=age;
	}

	//obtener datos
	std::string get_name(){ return nombre;}
	int get_codigo(){return codigo;}
	int get_edad(){return edad;}
};

 
//PRUEBAAA
 // int main(int argc, char const *argv[])
 // {
 // 	std::string n="laura";
 // 	int j=11447;
 // 	int m=18;
 // 	paciente p(n,j,m);

 // 	std::string name=p.get_name();
 // 	int code=p.get_codigo();
 // 	int ed=p.get_edad();


 // 	std::cout<<"Name: "<<name<<"\n";
 // 	std::cout<<"Codigo: "<<code<<"\n";
 // 	std::cout<<"Edad: "<<ed<<"\n";
 // 	return 0;
 // }
