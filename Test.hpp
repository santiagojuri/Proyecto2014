#ifndef JUEGO
#define JUEGO
#include <iostream>
#include "jugador.hpp"
#include "question.hpp"
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
