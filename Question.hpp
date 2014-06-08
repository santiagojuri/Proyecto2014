#include "item.hpp"
#pragma once

/*Clase que controla la pregunta*/
class Question
{
	/*Atributos privados por defecto*/
	vector<item> Objetos;
	int level;

public:
	/*Metodos*/

	//constructores:

	Question(){};

	Question(){int n}

	Set_level(int l){
		level=l;
	}

	void add_item(item i){ //agrega items a la pregunta
		Objetos.push_back(i);
	}

	void Show_question()
	{
	cout << "{";
    for(auto x: Objetos)
    	{
    		cout << x.get_value() << "  ";
    	}
    cout << "}";
    cout << "\n";
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
