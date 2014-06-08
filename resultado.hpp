#include <iostream>
#include "paciente.hpp"
#pragma once


using namespace std;

class resultado{

    //Atributos
	int tiempo;
	int puntaje;


public:

	//metodos
	int reso(int tiempo1, int puntaje1){
		
     
     		int tiempo = tiempo1;
     		int puntaje = puntaje1;
    		cout<<"Tu resultado es en tiempo:"<<tiempo<< "Y" <<puntaje;          
	}


};

