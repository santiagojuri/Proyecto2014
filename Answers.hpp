#include "item.hpp"
#pragma once

/*Clase que controla la pregunta*/
class Answers
{
	/*Atributos privados por defecto*/
	vector<int> ans;

public:
	/*Metodos*/

	//constructores:

	Answers(){};

	Answers(int i){ans.push_back(i);};

	Answers(int n,int s){ //Constructor de una clase de n items de valores entre 1 y s
		srand(time(0));
		for(int i=0;i<n;i++)
		{
			int a=(rand()%s+1);;
			ans.push_back(a);
		}
	}
	~Answers(){}; //destructor

};
