#include "item.cc"

/*Clase para hacer una pregunta*/
class Question
{
	/*Atributos privados o publicos?? */
	std::vector<item> Objetos;
	int level;

	/*Metodos*/
public: 
	/*Constructores*/
	virtual void get_items(item); //1.constructor: se va agregando un item por item (especifico)
	virtual void get_items(); //2.constructor: se crea todas las preguntas de forma random
	virtual void get_items(int nitems); //3. constructor: de acuerdo a la cantidad de items se crean.
	virtual void Remove_items(item); //quitar un item ()
};


