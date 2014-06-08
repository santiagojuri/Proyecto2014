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
		cout<<"fue creado sin ningun valor con exito"<<endl;
	}
	item(int id) //constructor que asigna id especifico.
	{
		item_id=id;
		cout<<"Fue creado con el valor "<< id <<endl;
	}
	int get_value(){return item_id;}//retorna el valor del item

	~item() //destructor
	{}
};
