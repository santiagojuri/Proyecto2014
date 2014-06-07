/*Clase que controla el item*/
class item
{
	/*Atributos (privados por defecto) */
	int item_id; //numero que identifica al item.
public:
	/*Metodos*/
	//constructor por defecto.
	item(){
	cout<<"fue creado sin ningun valor"<<endl;} 
	item(int id) //constructor que asigna id especifico.
	: item_id{id}
	~item()
	{}
};
