/*Clase que controla el item*/
using namespace std;
#include <iostream>
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
		cout<<"Fue creado con el valor de"<< id <<endl;
	}
	~item() //destructor
	{}
};
