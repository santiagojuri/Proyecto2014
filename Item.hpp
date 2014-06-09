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
	int item_id; 
public:
	item(){
		item_id=0;
		
	}
	void Set_value(int id) //Asigna un id especifico.
	{
		item_id=id;
	
	}
	item(int s) // Constructor con un numero random entre 0 y n
	{	
		int n=(rand()%s);	
		item_id = n;
	}

	int get_value(){return item_id;}//retorna el valor del item

	~item() //destructor
	{}
};
