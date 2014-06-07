#include <stdio.h>

using namespace std;

class resultado{

	//Atributos
	int tiempo;
	int puntaje;

public:

	//metodos
	reso(int tiempo1, int puntaje1);
	
	
};

resultado::reso(int tiempo1, int puntaje1){
	tiempo = tiempo1;
	puntaje = puntaje;
	
	cout<<"Tu resultado es en tiempo:"<<tiempo<< "Y" <<puntaje;

}


