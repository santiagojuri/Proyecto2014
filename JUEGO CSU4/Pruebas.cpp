#include "Complement.hpp"


int main(int argc, char *argv[])
{

  cout << "Bienvenidos al juego de CODIGO SECRETO ULTIMATE 4" << endl;
  cout << "Con la colaboracion de COGNITIO" << endl;
  cout << endl << "Se le otorgaran 8 oportunidades para adivinar el codigo" << endl;
  cout << "Tambien se mostraran pistas si tiene un numero correcto o no" << endl;
  cout << "Hora de empezar!, ingrese los primeros 4 numeros uno por uno" << endl;
  Question b(4,10);
  //print(b.get_Object());
  Juego(b.get_Object(),8);
 
}