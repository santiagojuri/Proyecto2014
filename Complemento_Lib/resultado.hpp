#include <iostream>
#include "paciente.hpp"
#pragma once

using namespace std;

class resultado{

    /*Atributos*/
	int tiempo;
	int puntaje;
public:

	/*Metodos*/
	//constructor

	resultado(int t, int p){
		tiempo =t;
		puntaje = p;         
	}

	int get_tiempo(){return tiempo;}
	int get_puntaje(){return puntaje;}
};


//PRUEBA
// int main(int argc, char const *argv[])

// {
// 	int tiempo=12;
// 	int puntaje=980;
// 	resultado r(tiempo,puntaje);

// 	int t=r.get_tiempo();
// 	int p=r.get_puntaje();

// 	cout<<"Tiempo:"<< t<<endl;
// 	cout<<"Puntaje:"<< p<<endl;

// }
