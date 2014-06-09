#include "item.hpp"
#pragma once

/*Clase que controla la pregunta*/
class Question
{
	/*Atributos*/
	int level;
protected:
	vector<item> Objetos;

public:
	/*Metodos*/

	//constructores:

	Question(){};

	Question(int n,int s) //Constructor de una clase de n items de valores entre 1 y s
	{
		srand(time(0));
		for(int i=0;i<n;i++)
		{
			item a(s);
			Objetos.push_back(a);
		}
	}

	void Set_level(int l){
		level = l;
	}

	void add_item(int n){ //agrega items a la pregunta
		item i;
		i.Set_value(n);
		Objetos.push_back(i);
	}

	vector<item> get_Object(){return Objetos;}

	vector<int> Show_question_val()
	{
	vector<int> res;
    for(auto x: Objetos)
    	{
    		res.push_back(x.get_value());
    	}
    return res;
	}

	void remove_items(); 
 
	~Question(){}; //destructor

};


/*documenta
	virtual void get_items(item); //1.constructor: se va agregando un item por item (especifico)
	virtual void get_items(); //2.constructor: se crea todas las preguntas de forma random
	virtual void get_items(int nitems); //3. constructor: de acuerdo a la cantidad de items se crean.
	virtual void Remove_items(item); //quitar un item ()
*/
