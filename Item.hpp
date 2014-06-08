#include <iostream>
#include <vector>
#include <list>
#include <string.h>
#include <cstdio>
#include <stdlib.h>
#include <time.h>
#include <iterator>
#pragma once
/*Clase que controla el item*/
using namespace std;

class item
{
	/*Atributos (privados por defecto) */
	int item_id; //numero que identifica al item.
public:
	/*Metodos*/
	item(){
		item_id=0;
		cout<<"fue creado sin ningun valor con exito"<<endl;
	}
	void Set_value(int id) //Asigna un id especifico.
	{
		item_id=id;
		cout<<"Fue creado con el valor "<< id <<endl;
	}
	/*item(int s) // Constructor con un numero random entre 0 y n
	{	
		srand(time(NULL));
		int n=(rand()%s+1);	
		item_id = n;
	}*/

	int get_value(){return item_id;}//retorna el valor del item

	~item() //destructor
	{}
};
