#include "Complement2.hpp"

int main(int argc, char const *argv[])
{
	cout<<"Bienvenido al juego de memoria (Parejas)"<<endl;
	int x;
	cout<<"¿Alto del tablero?: ";
	cin>> x;
	int valor=x*x;
	question_matriz m(valor,x);
	Juego(m, valor, x);

}