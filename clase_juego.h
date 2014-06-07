#fndef JUEGO
#efine JUEGO
#nclude "clase_jugador.h"
#nclude "class_question.h"

using namespace std;

class clase_juego
{
private:
	int score;
	int time;

	class_question& question;

	vector<question> quest;
};




#endif
