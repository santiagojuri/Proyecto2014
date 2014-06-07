/*Clase que controla el item*/
class item
{
	/*Atributos (privados por defecto) */
	int item_id; //numero que identifica al item.
public:
	/*Metodos*/
	item() //constructor por defecto.
	item(int id) //constructor que asigna id especifico.
	: item_id{id}
	~item()
	{}
};
