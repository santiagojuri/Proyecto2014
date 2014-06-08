#include <iostream>
#include "clase_paciente/persona"

using namespace std;

class resultado{

	//Atributos
	int tiempo;
	int puntaje;
	clase_paciente&pac;

public:

	//metodos
	reso(int tiempo1, int puntaje1);
	
	
};

resultado::reso(int tiempo1, int puntaje1){
	tiempo = tiempo1;
	puntaje = puntaje1;
	
	cout<<"Tu resultado es en tiempo:"<<tiempo<< "Y" <<puntaje;

}


