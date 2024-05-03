#include <iostream>
#include <string>
#ifndef GAME_H
#define GAME_H
#include "player.h" // is this necessary?
#include "oponent.h"

class Game{

	private:

	int playerTotal;
	int oponentTotal;;
	
	public:

Game (int PlayerTotal, int OponentTotal):playerTotal(PlayerTotal), oponentTotal (OponentTotal) {}
	

	string winLose(int PlayerTotalDice, int OponentTotalDice);

};

#endif
