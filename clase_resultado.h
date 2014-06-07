#include <stdio.h>

using namespace std;

class resultado{

	//Atributos
	int tiempo;
	int puntaje;

public:

	//metodos
	reso(int tiempo1, int puntaje1);
	print(int tiempo1, int puntaje1);
	
};

resultado::reso(int tiempo1, int puntaje1){
	tiempo = tiempo1;
	puntaje = puntaje;

}

resultado::print(int tiempo1, int puntaje1){
	tiempo = tiempo1;
	puntaje = puntaje1;

	cout<<"Tu resultado es en tiempo:"<<tiempo<< "Y" <<puntaje;
}
