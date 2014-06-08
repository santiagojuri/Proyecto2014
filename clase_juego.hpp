#ifndef JUEGO
#define JUEGO
#include "clase_jugador.h"
#include "class_question.h"
#pragma once

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
