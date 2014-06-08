#ifndef JUEGO
#define JUEGO
#include <iostream>
#include "jugador.hpp"
#include "question.hpp"
#pragma once

using namespace std;

class juego
{
private:
	int score;
	int time;

	vector<question> quest;
};




#endif
