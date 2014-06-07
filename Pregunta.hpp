#include "item.hpp"

/*Clase que controla la pregunta*/
class Question
{
	/*Atributos*/
private:
	std::std::vector<item> Objetos;
	int level;

public:
	/*Metodos*/

	//constructores:
	Question(int l){
		level=l;
	}

	add_item(item i){ //agrega items a la pregunta
		Objetos.push_back(i);
	}


	void remove_items(item);

	~Question(); //destructor

};
